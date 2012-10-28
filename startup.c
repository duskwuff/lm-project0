#include "inc/hw_nvic.h"
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "inc/hw_sysctl.h"
#include "inc/hw_gpio.h"

extern int main(void);

extern const struct {
    struct {
        void * base;
        unsigned int len;
    } bss, data;
    void *data_reloc;
} __load_info;

__attribute__ (( weak, noreturn ))
void __abort(void)
{
    for (;;) ;
}

void _start(void)
{
    int i;
    unsigned int *src, *dst;

    // Copy .data from flash to RAM
    for (
            i = 0, dst = __load_info.data.base, src = __load_info.data_reloc;
            i < __load_info.data.len;
            i += sizeof(unsigned long)
        ) *dst++ = *src++;

    // Zero BSS
    for (
            i = 0, dst = __load_info.bss.base;
            i < __load_info.bss.len;
            i += sizeof(unsigned long)
        ) *dst++ = 0;

    main();
    __abort();
}

#define WEAK_ALIAS(f, n) void f(void) __attribute__(( weak, alias(#n) ))
#define WEAK_ABORT(f) WEAK_ALIAS(f, __abort)

WEAK_ALIAS(_vec_reset, _start);
WEAK_ABORT(_vec_fault_nmi);
WEAK_ABORT(_vec_fault_hard);
WEAK_ABORT(_vec_fault_mpu);
WEAK_ABORT(_vec_fault_bus);
WEAK_ABORT(_vec_fault_usage);
WEAK_ABORT(_vec_fault_svcall);
WEAK_ABORT(_vec_fault_debug);
WEAK_ABORT(_vec_fault_pendsv);
WEAK_ABORT(_vec_fault_systick);
WEAK_ABORT(_vec_int_gpioa);
WEAK_ABORT(_vec_int_gpiob);
WEAK_ABORT(_vec_int_gpioc);
WEAK_ABORT(_vec_int_gpiod);
WEAK_ABORT(_vec_int_gpioe);
WEAK_ABORT(_vec_int_uart0);
WEAK_ABORT(_vec_int_uart1);
WEAK_ABORT(_vec_int_ssi0);
WEAK_ABORT(_vec_int_i2c0);
WEAK_ABORT(_vec_int_pwm0_fault);
WEAK_ABORT(_vec_int_pwm0_0);
WEAK_ABORT(_vec_int_pwm0_1);
WEAK_ABORT(_vec_int_pwm0_2);
WEAK_ABORT(_vec_int_qei0);
WEAK_ABORT(_vec_int_adc0ss0);
WEAK_ABORT(_vec_int_adc0ss1);
WEAK_ABORT(_vec_int_adc0ss2);
WEAK_ABORT(_vec_int_adc0ss3);
WEAK_ABORT(_vec_int_watchdog);
WEAK_ABORT(_vec_int_timer0a);
WEAK_ABORT(_vec_int_timer0b);
WEAK_ABORT(_vec_int_timer1a);
WEAK_ABORT(_vec_int_timer1b);
WEAK_ABORT(_vec_int_timer2a);
WEAK_ABORT(_vec_int_timer2b);
WEAK_ABORT(_vec_int_comp0);
WEAK_ABORT(_vec_int_comp1);
WEAK_ABORT(_vec_int_comp2);
WEAK_ABORT(_vec_int_sysctl);
WEAK_ABORT(_vec_int_flash);
WEAK_ABORT(_vec_int_gpiof);
WEAK_ABORT(_vec_int_gpiog);
WEAK_ABORT(_vec_int_gpioh);
WEAK_ABORT(_vec_int_uart2);
WEAK_ABORT(_vec_int_ssi1);
WEAK_ABORT(_vec_int_timer3a);
WEAK_ABORT(_vec_int_timer3b);
WEAK_ABORT(_vec_int_i2c1);
WEAK_ABORT(_vec_int_qei1);
WEAK_ABORT(_vec_int_can0);
WEAK_ABORT(_vec_int_can1);
WEAK_ABORT(_vec_int_can2);
WEAK_ABORT(_vec_int_eth);
WEAK_ABORT(_vec_int_hibernate);
WEAK_ABORT(_vec_int_usb0);
WEAK_ABORT(_vec_int_pwm0_3);
WEAK_ABORT(_vec_int_udma);
WEAK_ABORT(_vec_int_udmaerr);
WEAK_ABORT(_vec_int_adc1ss0);
WEAK_ABORT(_vec_int_adc1ss1);
WEAK_ABORT(_vec_int_adc1ss2);
WEAK_ABORT(_vec_int_adc1ss3);
WEAK_ABORT(_vec_int_i2s0);
WEAK_ABORT(_vec_int_epi0);
WEAK_ABORT(_vec_int_gpioj);
WEAK_ABORT(_vec_int_gpiok);
WEAK_ABORT(_vec_int_gpiol);
WEAK_ABORT(_vec_int_ssi2);
WEAK_ABORT(_vec_int_ssi3);
WEAK_ABORT(_vec_int_uart3);
WEAK_ABORT(_vec_int_uart4);
WEAK_ABORT(_vec_int_uart5);
WEAK_ABORT(_vec_int_uart6);
WEAK_ABORT(_vec_int_uart7);
WEAK_ABORT(_vec_int_i2c2);
WEAK_ABORT(_vec_int_i2c3);
WEAK_ABORT(_vec_int_timer4a);
WEAK_ABORT(_vec_int_timer4b);
WEAK_ABORT(_vec_int_timer5a);
WEAK_ABORT(_vec_int_timer5b);
WEAK_ABORT(_vec_int_wtimer0a);
WEAK_ABORT(_vec_int_wtimer0b);
WEAK_ABORT(_vec_int_wtimer1a);
WEAK_ABORT(_vec_int_wtimer1b);
WEAK_ABORT(_vec_int_wtimer2a);
WEAK_ABORT(_vec_int_wtimer2b);
WEAK_ABORT(_vec_int_wtimer3a);
WEAK_ABORT(_vec_int_wtimer3b);
WEAK_ABORT(_vec_int_wtimer4a);
WEAK_ABORT(_vec_int_wtimer4b);
WEAK_ABORT(_vec_int_wtimer5a);
WEAK_ABORT(_vec_int_wtimer5b);
WEAK_ABORT(_vec_int_sysexc);
WEAK_ABORT(_vec_int_peci0);
WEAK_ABORT(_vec_int_lpc0);
WEAK_ABORT(_vec_int_i2c4);
WEAK_ABORT(_vec_int_i2c5);
WEAK_ABORT(_vec_int_gpiom);
WEAK_ABORT(_vec_int_gpion);
WEAK_ABORT(_vec_int_fan0);
WEAK_ABORT(_vec_int_gpiop0);
WEAK_ABORT(_vec_int_gpiop1);
WEAK_ABORT(_vec_int_gpiop2);
WEAK_ABORT(_vec_int_gpiop3);
WEAK_ABORT(_vec_int_gpiop4);
WEAK_ABORT(_vec_int_gpiop5);
WEAK_ABORT(_vec_int_gpiop6);
WEAK_ABORT(_vec_int_gpiop7);
WEAK_ABORT(_vec_int_gpioq0);
WEAK_ABORT(_vec_int_gpioq1);
WEAK_ABORT(_vec_int_gpioq2);
WEAK_ABORT(_vec_int_gpioq3);
WEAK_ABORT(_vec_int_gpioq4);
WEAK_ABORT(_vec_int_gpioq5);
WEAK_ABORT(_vec_int_gpioq6);
WEAK_ABORT(_vec_int_gpioq7);
WEAK_ABORT(_vec_int_pwm1_0);
WEAK_ABORT(_vec_int_pwm1_1);
WEAK_ABORT(_vec_int_pwm1_2);
WEAK_ABORT(_vec_int_pwm1_3);
WEAK_ABORT(_vec_int_pwm1_fault);
