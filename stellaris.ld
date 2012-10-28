MEMORY
{
    ROM (rx)  : ORIGIN = 0x00000000, LENGTH = 256K
    RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 32K
}

SECTIONS
{

    .vectors : AT(0) {
        LONG(ORIGIN(RAM) + LENGTH(RAM)) /* initial SP */
        /* Exception / interrupt handlers */
        LONG(1|_vec_reset)          /* 1 - reset */
        LONG(1|_vec_fault_nmi)      /* 2 - NMI fault */
        LONG(1|_vec_fault_hard)     /* 3 - Hard fault */
        LONG(1|_vec_fault_mpu)      /* 4 - MPU fault */
        LONG(1|_vec_fault_bus)      /* 5 - Bus fault */
        LONG(1|_vec_fault_usage)    /* 6 - Usage fault */
        LONG(0)                     /* 7 - reserved */
        LONG(0)                     /* 8 - reserved */
        LONG(0)                     /* 9 - reserved */
        LONG(0)                     /* 10 - reserved */
        LONG(1|_vec_fault_svcall)   /* 11 - SVCall */
        LONG(1|_vec_fault_debug)    /* 12 - Debug monitor */
        LONG(0)                     /* 13 - reserved */
        LONG(1|_vec_fault_pendsv)   /* 14 - PendSV */
        LONG(1|_vec_fault_systick)  /* 15 - System Tick */
        LONG(1|_vec_int_gpioa)      /* 16 - GPIO Port A */
        LONG(1|_vec_int_gpiob)      /* 17 - GPIO Port B */
        LONG(1|_vec_int_gpioc)      /* 18 - GPIO Port C */
        LONG(1|_vec_int_gpiod)      /* 19 - GPIO Port D */
        LONG(1|_vec_int_gpioe)      /* 20 - GPIO Port E */
        LONG(1|_vec_int_uart0)      /* 21 - UART0 Rx and Tx */
        LONG(1|_vec_int_uart1)      /* 22 - UART1 Rx and Tx */
        LONG(1|_vec_int_ssi0)       /* 23 - SSI0 Rx and Tx */
        LONG(1|_vec_int_i2c0)       /* 24 - I2C0 Master and Slave */
        LONG(1|_vec_int_pwm0_fault) /* 25 - PWM0 Fault */
        LONG(1|_vec_int_pwm0_0)     /* 26 - PWM0 Generator 0 */
        LONG(1|_vec_int_pwm0_1)     /* 27 - PWM0 Generator 1 */
        LONG(1|_vec_int_pwm0_2)     /* 28 - PWM0 Generator 2 */
        LONG(1|_vec_int_qei0)       /* 29 - Quadrature Encoder 0 */
        LONG(1|_vec_int_adc0ss0)    /* 30 - ADC0 Sequence 0 */
        LONG(1|_vec_int_adc0ss1)    /* 31 - ADC0 Sequence 1 */
        LONG(1|_vec_int_adc0ss2)    /* 32 - ADC0 Sequence 2 */
        LONG(1|_vec_int_adc0ss3)    /* 33 - ADC0 Sequence 3 */
        LONG(1|_vec_int_watchdog)   /* 34 - Watchdog timer */
        LONG(1|_vec_int_timer0a)    /* 35 - Timer 0 subtimer A */
        LONG(1|_vec_int_timer0b)    /* 36 - Timer 0 subtimer B */
        LONG(1|_vec_int_timer1a)    /* 37 - Timer 1 subtimer A */
        LONG(1|_vec_int_timer1b)    /* 38 - Timer 1 subtimer B */
        LONG(1|_vec_int_timer2a)    /* 39 - Timer 2 subtimer A */
        LONG(1|_vec_int_timer2b)    /* 40 - Timer 2 subtimer B */
        LONG(1|_vec_int_comp0)      /* 41 - Analog Comparator 0 */
        LONG(1|_vec_int_comp1)      /* 42 - Analog Comparator 1 */
        LONG(1|_vec_int_comp2)      /* 43 - Analog Comparator 2 */
        LONG(1|_vec_int_sysctl)     /* 44 - System Control (PLL, OSC, BO) */
        LONG(1|_vec_int_flash)      /* 45 - FLASH Control */
        LONG(1|_vec_int_gpiof)      /* 46 - GPIO Port F */
        LONG(1|_vec_int_gpiog)      /* 47 - GPIO Port G */
        LONG(1|_vec_int_gpioh)      /* 48 - GPIO Port H */
        LONG(1|_vec_int_uart2)      /* 49 - UART2 Rx and Tx */
        LONG(1|_vec_int_ssi1)       /* 50 - SSI1 Rx and Tx */
        LONG(1|_vec_int_timer3a)    /* 51 - Timer 3 subtimer A */
        LONG(1|_vec_int_timer3b)    /* 52 - Timer 3 subtimer B */
        LONG(1|_vec_int_i2c1)       /* 53 - I2C1 Master and Slave */
        LONG(1|_vec_int_qei1)       /* 54 - Quadrature Encoder 1 */
        LONG(1|_vec_int_can0)       /* 55 - CAN0 */
        LONG(1|_vec_int_can1)       /* 56 - CAN1 */
        LONG(1|_vec_int_can2)       /* 57 - CAN2 */
        LONG(1|_vec_int_eth)        /* 58 - Ethernet */
        LONG(1|_vec_int_hibernate)  /* 59 - Hibernation module */
        LONG(1|_vec_int_usb0)       /* 60 - USB 0 Controller */
        LONG(1|_vec_int_pwm0_3)     /* 61 - PWM0 Generator 3 */
        LONG(1|_vec_int_udma)       /* 62 - uDMA controller */
        LONG(1|_vec_int_udmaerr)    /* 63 - uDMA Error */
        LONG(1|_vec_int_adc1ss0)    /* 64 - ADC1 Sequence 0 */
        LONG(1|_vec_int_adc1ss1)    /* 65 - ADC1 Sequence 1 */
        LONG(1|_vec_int_adc1ss2)    /* 66 - ADC1 Sequence 2 */
        LONG(1|_vec_int_adc1ss3)    /* 67 - ADC1 Sequence 3 */
        LONG(1|_vec_int_i2s0)       /* 68 - I2S0 */
        LONG(1|_vec_int_epi0)       /* 69 - EPI0 */
        LONG(1|_vec_int_gpioj)      /* 70 - GPIO Port J */
        LONG(1|_vec_int_gpiok)      /* 71 - GPIO Port K */
        LONG(1|_vec_int_gpiol)      /* 72 - GPIO Port L */
        LONG(1|_vec_int_ssi2)       /* 73 - SSI2 */
        LONG(1|_vec_int_ssi3)       /* 74 - SSI3 */
        LONG(1|_vec_int_uart3)      /* 75 - UART3 */
        LONG(1|_vec_int_uart4)      /* 76 - UART4 */
        LONG(1|_vec_int_uart5)      /* 77 - UART5 */
        LONG(1|_vec_int_uart6)      /* 78 - UART6 */
        LONG(1|_vec_int_uart7)      /* 79 - UART7 */
        LONG(0)                     /* 80 - reserved */
        LONG(0)                     /* 81 - reserved */
        LONG(0)                     /* 82 - reserved */
        LONG(0)                     /* 83 - reserved */
        LONG(1|_vec_int_i2c2)       /* 84 - I2C2 */
        LONG(1|_vec_int_i2c3)       /* 85 - I2C3 */
        LONG(1|_vec_int_timer4a)    /* 86 - Timer 4A */
        LONG(1|_vec_int_timer4b)    /* 87 - Timer 4B */
        LONG(0)                     /* 88 - reserved */
        LONG(0)                     /* 89 - reserved */
        LONG(0)                     /* 90 - reserved */
        LONG(0)                     /* 91 - reserved */
        LONG(0)                     /* 92 - reserved */
        LONG(0)                     /* 93 - reserved */
        LONG(0)                     /* 94 - reserved */
        LONG(0)                     /* 95 - reserved */
        LONG(0)                     /* 96 - reserved */
        LONG(0)                     /* 97 - reserved */
        LONG(0)                     /* 98 - reserved */
        LONG(0)                     /* 99 - reserved */
        LONG(0)                     /* 100 - reserved */
        LONG(0)                     /* 101 - reserved */
        LONG(0)                     /* 102 - reserved */
        LONG(0)                     /* 103 - reserved */
        LONG(0)                     /* 104 - reserved */
        LONG(0)                     /* 105 - reserved */
        LONG(0)                     /* 106 - reserved */
        LONG(0)                     /* 107 - reserved */
        LONG(1|_vec_int_timer5a)    /* 108 - Timer 5A */
        LONG(1|_vec_int_timer5b)    /* 109 - Timer 5B */
        LONG(1|_vec_int_wtimer0a)   /* 110 - Wide Timer 0A */
        LONG(1|_vec_int_wtimer0b)   /* 111 - Wide Timer 0B */
        LONG(1|_vec_int_wtimer1a)   /* 112 - Wide Timer 1A */
        LONG(1|_vec_int_wtimer1b)   /* 113 - Wide Timer 1B */
        LONG(1|_vec_int_wtimer2a)   /* 114 - Wide Timer 2A */
        LONG(1|_vec_int_wtimer2b)   /* 115 - Wide Timer 2B */
        LONG(1|_vec_int_wtimer3a)   /* 116 - Wide Timer 3A */
        LONG(1|_vec_int_wtimer3b)   /* 117 - Wide Timer 3B */
        LONG(1|_vec_int_wtimer4a)   /* 118 - Wide Timer 4A */
        LONG(1|_vec_int_wtimer4b)   /* 119 - Wide Timer 4B */
        LONG(1|_vec_int_wtimer5a)   /* 120 - Wide Timer 5A */
        LONG(1|_vec_int_wtimer5b)   /* 121 - Wide Timer 5B */
        LONG(1|_vec_int_sysexc)     /* 122 - System Exception (imprecise) */
        LONG(1|_vec_int_peci0)      /* 123 - PECI 0 */
        LONG(1|_vec_int_lpc0)       /* 124 - LPC 0 */
        LONG(1|_vec_int_i2c4)       /* 125 - I2C4 */
        LONG(1|_vec_int_i2c5)       /* 126 - I2C5 */
        LONG(1|_vec_int_gpiom)      /* 127 - GPIO Port M */
        LONG(1|_vec_int_gpion)      /* 128 - GPIO Port N */
        LONG(0)                     /* 129 - reserved */
        LONG(1|_vec_int_fan0)       /* 130 - FAN 0 */
        LONG(0)                     /* 131 - reserved */
        LONG(1|_vec_int_gpiop0)     /* 132 - GPIO Port P (Summary or P0) */
        LONG(1|_vec_int_gpiop1)     /* 133 - GPIO Port P1 */
        LONG(1|_vec_int_gpiop2)     /* 134 - GPIO Port P2 */
        LONG(1|_vec_int_gpiop3)     /* 135 - GPIO Port P3 */
        LONG(1|_vec_int_gpiop4)     /* 136 - GPIO Port P4 */
        LONG(1|_vec_int_gpiop5)     /* 137 - GPIO Port P5 */
        LONG(1|_vec_int_gpiop6)     /* 138 - GPIO Port P6 */
        LONG(1|_vec_int_gpiop7)     /* 139 - GPIO Port P7 */
        LONG(1|_vec_int_gpioq0)     /* 140 - GPIO Port Q (Summary or Q0) */
        LONG(1|_vec_int_gpioq1)     /* 141 - GPIO Port Q1 */
        LONG(1|_vec_int_gpioq2)     /* 142 - GPIO Port Q2 */
        LONG(1|_vec_int_gpioq3)     /* 143 - GPIO Port Q3 */
        LONG(1|_vec_int_gpioq4)     /* 144 - GPIO Port Q4 */
        LONG(1|_vec_int_gpioq5)     /* 145 - GPIO Port Q5 */
        LONG(1|_vec_int_gpioq6)     /* 146 - GPIO Port Q6 */
        LONG(1|_vec_int_gpioq7)     /* 147 - GPIO Port Q7 */
        LONG(0)                     /* 148 - reserved */
        LONG(0)                     /* 149 - reserved */
        LONG(1|_vec_int_pwm1_0)     /* 150 - PWM1 Generator 0 */
        LONG(1|_vec_int_pwm1_1)     /* 151 - PWM1 Generator 1 */
        LONG(1|_vec_int_pwm1_2)     /* 152 - PWM1 Generator 2 */
        LONG(1|_vec_int_pwm1_3)     /* 153 - PWM1 Generator 3 */
        LONG(1|_vec_int_pwm1_fault) /* 154 - PWM1 Fault */
        . = 155 * 4; /* Sanity check */
    } >ROM

    .load : {
        /* This matches up with a structure in startup.c */
        LONG(ADDR(.bss))
        LONG(SIZEOF(.bss))
        LONG(ADDR(.data))
        LONG(SIZEOF(.data))
        LONG(LOADADDR(.data))
    } >ROM

    .text : {
        *(.text*)
    } >ROM

    .rodata : {
        *(.rodata*)
    } >ROM

    .data : {
        *(.data*)
    } >RAM AT>ROM

    .bss : {
        *(.bss*)
        *(COMMON)
    } >RAM

    __load_info = ADDR(.load);

}
