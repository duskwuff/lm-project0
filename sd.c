#include <stdio.h>
#include <stdint.h>

#include <romlib.h>
#include <hw/memmap.h>
#include <hw/pinmap.h>

#include <driverlib/sysctl.h>
#include <driverlib/gpio.h>
#include <driverlib/ssi.h>

#include "crc.h"

#define SD_PERIPH_GPIO  SYSCTL_PERIPH_GPIOD
#define SD_PERIPH_SSI   SYSCTL_PERIPH_SSI3
#define SD_BASE_GPIO    GPIO_PORTD_BASE
#define SD_BASE_SSI     SSI3_BASE

#define SD_PIN_CLK      GPIO_PIN_0
#define SD_PIN_CS       GPIO_PIN_1
#define SD_PIN_RX       GPIO_PIN_2
#define SD_PIN_TX       GPIO_PIN_3

#define SD_CFG_CLK      GPIO_PD0_SSI3CLK
#define SD_CFG_CS       GPIO_PD1_SSI3FSS
#define SD_CFG_RX       GPIO_PD2_SSI3RX
#define SD_CFG_TX       GPIO_PD3_SSI3TX

enum {
    SD_CMD_GO_IDLE_STATE            = 0,
    SD_CMD_SEND_OP_COND             = 1,
    SD_CMD_SWITCH_FUNC              = 6,
    SD_CMD_SEND_IF_COND             = 8,
    SD_CMD_SEND_CSD                 = 9,
    SD_CMD_SEND_CID                 = 10,
    SD_CMD_STOP_TRANSMISSION        = 12,
    SD_CMD_SEND_STATUS              = 13,
    SD_CMD_SET_BLOCKLEN             = 16,
    SD_CMD_READ_SINGLE_BLOCK        = 17,
    SD_CMD_READ_MULTIPLE_BLOCK      = 18,
    SD_CMD_WRITE_BLOCK              = 24,
    SD_CMD_WRITE_MULTIPLE_BLOCK     = 25,
    SD_CMD_PROGRAM_CSD              = 27,
    SD_CMD_SET_WRITE_PROT           = 28,
    SD_CMD_CLR_WRITE_PROT           = 29,
    SD_CMD_SEND_WRITE_PROT          = 30,
    SD_CMD_ERASE_WR_BLK_START_ADDR  = 32,
    SD_CMD_ERASE_WR_BLK_END_ADDR    = 33,
    SD_CMD_ERASE                    = 38,
    SD_CMD_LOCK_UNLOCK              = 42,
    SD_CMD_APP_CMD                  = 55,
    SD_CMD_GEN_CMD                  = 56,
    SD_CMD_READ_OCR                 = 58,
    SD_CMD_CRC_ON_OFF               = 59,
};

enum {
    SD_ACMD_SD_STATUS               = 13,
    SD_ACMD_SEND_NUM_WR_BLOCKS      = 22,
    SD_ACMD_SET_WR_BLK_ERASE_COUNT  = 23,
    SD_ACMD_SD_SEND_OP_COND         = 41,
    SD_ACMD_SET_CLR_CARD_DETECT     = 42,
    SD_ACMD_SEND_SCR                = 51,
};

enum {
    // These names are somewhat made-up (by me)
    SD_OCR_VOLTAGE_1V8              = 1UL << 7,
    SD_OCR_VOLTAGE_1V8_CAPABLE      = 1UL << 24,
    SD_OCR_HIGH_CAPACITY            = 1UL << 30,
    SD_OCR_READY                    = 1UL << 31,
};

uint8_t sdbuf[512];


static uint8_t SPIxfer(int send)
{
    uint32_t result;
    SSIDataPut(SD_BASE_SSI, send);
    SSIDataGet(SD_BASE_SSI, &result);
    return result;
}

static uint16_t SPIread16(void)
{
    uint16_t r = 0;
    r |= SPIxfer(0xff) << 8;
    r |= SPIxfer(0xff) << 0;
    return r;
}

static uint32_t SPIread32(void)
{
    uint32_t r = 0;
    r |= SPIxfer(0xff) << 24;
    r |= SPIxfer(0xff) << 16;
    r |= SPIxfer(0xff) << 8;
    r |= SPIxfer(0xff) << 0;
    return r;
}

uint16_t SPIreaddata(int len)
{
    int result;
    int tries = 1000;
    do {
        result = SPIxfer(0xff);
        if (tries-- <= 0) return -1;
    } while (result != 0xfe);

    uint16_t crc = 0;
    for (int i = 0; i < len; i++) {
        uint8_t dat = sdbuf[i] = SPIxfer(0xff);
        crc16_update(crc, dat);
    }

    uint16_t recv_crc = SPIread16();

    printf("Calculated CRC %04x, received CRC %04x\n", crc, recv_crc);
    return crc != recv_crc;
}

static int doCardCmd(uint8_t cmd, uint32_t arg)
{
    int result;
    int tries = 1000;

    do {
        result = SPIxfer(0xff);
        if (tries-- <= 0) return -1;
    } while(result != 0xff);

    uint8_t crc = 0;

    SPIxfer(crc7_update(&crc, cmd | 0x40));
    SPIxfer(crc7_update(&crc, arg >> 24));
    SPIxfer(crc7_update(&crc, arg >> 16));
    SPIxfer(crc7_update(&crc, arg >> 8));
    SPIxfer(crc7_update(&crc, arg));
    SPIxfer(crc | 1);

    do {
        result = SPIxfer(0xff);
        if (tries-- <= 0) return -1;
    } while (result & 0x80);

    return result;
}

static int doCardAcmd(uint8_t cmd, uint32_t arg)
{
    int result = doCardCmd(SD_CMD_APP_CMD, 0);
    if (result < 0) return result;
    return doCardCmd(cmd, arg);
}

void sd_init(void)
{
    SysCtlPeripheralEnable(SD_PERIPH_GPIO);
    SysCtlPeripheralEnable(SD_PERIPH_SSI);

    GPIOPinConfigure(SD_CFG_CLK);
    GPIOPinConfigure(SD_CFG_CS);
    GPIOPinConfigure(SD_CFG_RX);
    GPIOPinConfigure(SD_CFG_TX);

    GPIOPinTypeSSI(SD_BASE_GPIO, SD_PIN_CLK | SD_PIN_RX | SD_PIN_TX);
    GPIOPinTypeGPIOOutput(SD_BASE_GPIO, SD_PIN_CS);

    GPIOPadConfigSet(
            SD_BASE_GPIO,
            SD_PIN_RX,
            GPIO_STRENGTH_4MA,
            GPIO_PIN_TYPE_STD_WPU);
    GPIOPadConfigSet(
            SD_BASE_GPIO,
            SD_PIN_TX | SD_PIN_CLK | SD_PIN_CS,
            GPIO_STRENGTH_4MA,
            GPIO_PIN_TYPE_STD);
}

static void sd_card_setspeed(int speed)
{
    SSIDisable(SD_BASE_SSI);

    SSIConfigSetExpClk(
            SD_BASE_SSI, SysCtlClockGet(),
            SSI_FRF_MOTO_MODE_0, SSI_MODE_MASTER,
            speed, 8
            );

    SSIEnable(SD_BASE_SSI);
}

void sd_card_init(void)
{
    int result;

    sd_card_setspeed(400000);

    // Power-on card - send 74+ (80) clocks to initialize card
    GPIOPinWrite(GPIO_PORTD_BASE, SD_PIN_CS, SD_PIN_CS);
    for (int i = 0; i < 10; i++)
        SPIxfer(0xff);
    SysCtlDelay(200);
    GPIOPinWrite(GPIO_PORTD_BASE, SD_PIN_CS, 0);
    SysCtlDelay(200);

    result = doCardCmd(SD_CMD_GO_IDLE_STATE, 0);
    printf("GO_IDLE_STATE -> %02x\n", result);
    if (result == -1) return;

    result = doCardCmd(SD_CMD_SEND_IF_COND, 0x1A5);
    printf("SEND_IF_COND(1A5) = %02x\n", result);
    if (result == -1) return;

    uint32_t recv_cond = SPIread32();
    printf("Condition: %02x%08x\n", result, recv_cond);
    if ((recv_cond & 0x1A5) != 0x1A5) return;

    printf("Waiting for card init");
    int init_tries = 1500; // I've frequently seen 800
    do {
        putchar('.');
        result = doCardAcmd(SD_ACMD_SD_SEND_OP_COND, 1UL << 30);
        if (init_tries-- <= 0) {
            printf(" card is not initializing.\n");
            return;
        }
    } while (result == 0x01);
    if (result != 0x00) {
        printf("Error: %02x\n", result);
        return;
    } else
        printf(" OK\n");

    result = doCardCmd(SD_CMD_READ_OCR, 0);
    uint32_t card_ocr = SPIread32();
    printf("OCR = %08x\n", card_ocr);

    /*
    int init_tries = 2500; // I've frequently seen ~800!
    printf("Waiting for card init.");
    do {
        printf(".");
        result = doCardCmd(1, 0);
        if (init_tries-- <= 0) {
            printf(" card is not initializing.\n");
            return;
        }
    } while (result == 0x01);

    if (result != 0x00) {
        printf("Error: %02x\n", result);
        return;
    } else
        printf(" OK\n");

    result = doCardCmd(16, 512);
    printf("CMD16(512) => %x\n", result);

    result = doCardCmd(17, 0);
    printf("CMD17(0) => %x\n", result);
    if (result == 0) {
        uint16_t crc;
        if (SPIreaddata(512) == 0) {
            for (int i = 0; i < 512; i++) {
                printf("%02x%c", sdbuf[i], (i & 15) == 15 ? '\n' : ' ');
            }
        }
    }
    */
}

