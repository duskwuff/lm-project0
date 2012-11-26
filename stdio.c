#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdint.h>

#include <romlib.h>
#include <hw/memmap.h>
#include <hw/pinmap.h>

#include <driverlib/sysctl.h>
#include <driverlib/gpio.h>
#include <driverlib/uart.h>

#define FIELD_LEFT_JUSTIFY      (1UL << 0)
#define FIELD_ALWAYS_SIGNED     (1UL << 1)
#define FIELD_ZEROFILL          (1UL << 2)
#define FIELD_LOWERCASE         (1UL << 3)
#define FIELD_SIGNED            (1UL << 4)
#define FIELD_16BIT             (1UL << 5)

#define STDIO_PERIPH_GPIO   SYSCTL_PERIPH_GPIOA
#define STDIO_PERIPH_UART   SYSCTL_PERIPH_UART0
#define STDIO_BASE_GPIO     GPIO_PORTA_BASE
#define STDIO_BASE_UART     UART0_BASE

#define STDIO_PIN_RX        GPIO_PIN_0
#define STDIO_PIN_TX        GPIO_PIN_1

#define STDIO_CFG_RX        GPIO_PA0_U0RX
#define STDIO_CFG_TX        GPIO_PA1_U0TX

#define raw_putchar(ch) UARTCharPut(STDIO_BASE_UART, ch)

void stdio_init(void)
{
    SysCtlPeripheralEnable(STDIO_PERIPH_GPIO);
    SysCtlPeripheralEnable(STDIO_PERIPH_UART);
    GPIOPinConfigure(STDIO_CFG_RX);
    GPIOPinConfigure(STDIO_CFG_TX);
    GPIOPinTypeUART(STDIO_BASE_GPIO, STDIO_PIN_RX | STDIO_PIN_TX);
    UARTConfigSetExpClk(
            STDIO_BASE_UART,
            SysCtlClockGet(),
            115200,
            UART_CONFIG_WLEN_8 | UART_CONFIG_STOP_ONE | UART_CONFIG_PAR_NONE
            );
}

int putchar(int ch)
{
    stdio_init();
    raw_putchar(ch);
    return ch;
}

static int output_string(const char *str)
{
    int n = 0;
    char ch;
    while ((ch = str[n++]) != 0)
        raw_putchar(ch);
    return n;
}

int puts(const char *str)
{
    stdio_init();
    output_string(str);
    raw_putchar('\n');
    return 1;
}

static const char digits[] = "0123456789ABCDEF";

static void write_int(unsigned int i, int base, int flags, int width)
{
    char buf[16];
    int bp = sizeof(buf);
    buf[--bp] = 0;

    int was_negative = 0;
    if (flags & FIELD_SIGNED) {
        int si = i; // Nasty, but it works!
        if (si < 0) {
            i = -si;
            was_negative = 1;
        }
    }

    if (flags & FIELD_16BIT)
        i &= 0xffff;

    if (i == 0) {
        buf[--bp] = '0';
    } else {
        while (i > 0) {
            int digit = i % base;
            i /= base;
            char ch = digits[digit];
            if (flags & FIELD_LOWERCASE) ch |= 0x20;
            buf[--bp] = ch;
        }
    }

    int len = sizeof(buf) - bp - 1;
    int needs_sign = was_negative || (flags & FIELD_ALWAYS_SIGNED);
    if (needs_sign) len++;

    if (!(flags & (FIELD_LEFT_JUSTIFY | FIELD_ZEROFILL))) {
        while (len < width) {
            raw_putchar(' ');
            len++;
        }
    }

    if(needs_sign)
        raw_putchar(was_negative ? '-' : '+');

    if (flags & FIELD_ZEROFILL)
        while (len < width) {
            raw_putchar('0');
            len++;
        }

    output_string(&buf[bp]);

    while (len < width) {
        raw_putchar(' ');
        len++;
    }
}

static void write_string(const char *s, int flags, int width)
{
    if (flags & FIELD_LEFT_JUSTIFY)
        output_string(s);

    size_t len = strlen(s);
    while (len < width) {
        raw_putchar(' ');
        len++;
    }

    if (!(flags & FIELD_LEFT_JUSTIFY))
        output_string(s);
}

int printf(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);

    stdio_init();

    char ch;
    while ((ch = *fmt++) != 0) {
        if (ch != '%') {
            raw_putchar(ch);
            continue;
        }

        int flags = 0;
        int width = 0;
        char cbuf[2] = {0};

        while ((ch = *fmt++) != 0) {
            switch(ch) {

                case '-':
                    flags |= FIELD_LEFT_JUSTIFY;
                    continue;
                case '+':
                    flags |= FIELD_ALWAYS_SIGNED;
                    continue;

                case '0':
                    if (width == 0) {
                        flags |= FIELD_ZEROFILL;
                        continue;
                    }
                case '1' ... '9':
                    width = 10 * width + ch - '0';
                    continue;
                case '*':
                    width = va_arg(ap, int);
                    continue;

                case 'h':
                    flags |= FIELD_16BIT;
                    continue;

                case 'z':
                case 'l':
                case 't':
                    // All no-ops here (no support for 64-bit %lld)
                    continue;

                case 'c':
                    cbuf[0] = va_arg(ap, int);
                    write_string(cbuf, flags, width);
                    break;

                case 'd':
                    write_int(va_arg(ap, int), 10, flags | FIELD_SIGNED, width);
                    break;

                case 'u':
                    write_int(va_arg(ap, int), 10, flags, width);
                    break;

                case 'o':
                    write_int(va_arg(ap, int), 8, flags, width);
                    break;

                case 'x':
                    flags |= FIELD_LOWERCASE;
                case 'X':
                    write_int(va_arg(ap, int), 16, flags, width);
                    break;

                case 'p':
                    output_string("0x");
                    write_int(va_arg(ap, int), 16, FIELD_ZEROFILL | FIELD_LOWERCASE, 8);
                    break;

                case 's':
                    write_string(va_arg(ap, const char *), flags, width);
                    break;

                default:
                    raw_putchar('%');
                case '%':
                    raw_putchar(ch);
                    break;

            }
            break;
        }
    }

    va_end(ap);
    return 1; // FIXME
}

