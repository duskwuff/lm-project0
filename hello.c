#include <stdio.h>
#include <stdint.h>

#include <ti/hw_types.h>
#include <ti/hw_memmap.h>

#include <driverlib/sysctl.h>
#include <driverlib/gpio.h>
#include <driverlib/rom.h>
#include <driverlib/uart.h>

typedef int bool;

#include "romlib.h"

int main(void)
{
    SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    UARTConfigSetExpClk(
            UART0_BASE,
            SysCtlClockGet(),
            115200,
            UART_CONFIG_WLEN_8 | UART_CONFIG_STOP_ONE | UART_CONFIG_PAR_NONE
            );

    puts("Hello world!");
    printf("There are %ld bytes SRAM on this device.\r\n",
            SysCtlSRAMSizeGet());
    return 0;
}

