//*****************************************************************************
//
// lm3s1512.h - Mapping of peripherals to pins for LM3S1512
//
// Copyright (c) 2007-2012 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
//   Redistribution and use in source and binary forms, with or without
//   modification, are permitted provided that the following conditions
//   are met:
// 
//   Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the  
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// This is part of revision 9453 of the Stellaris Peripheral Driver Library.
//
//*****************************************************************************

#ifndef _PINMAP_LM3S1512
#define _PINMAP_LM3S1512

#define C0O_PERIPH              SYSCTL_PERIPH_GPIOF
#define C0O_PORT                GPIO_PORTF_BASE
#define C0O_PIN                 GPIO_PIN_4

#define C0_MINUS_PERIPH         SYSCTL_PERIPH_GPIOB
#define C0_MINUS_PORT           GPIO_PORTB_BASE
#define C0_MINUS_PIN            GPIO_PIN_4

#define C0_PLUS_PERIPH          SYSCTL_PERIPH_GPIOB
#define C0_PLUS_PORT            GPIO_PORTB_BASE
#define C0_PLUS_PIN             GPIO_PIN_6

#define C1O_PERIPH              SYSCTL_PERIPH_GPIOF
#define C1O_PORT                GPIO_PORTF_BASE
#define C1O_PIN                 GPIO_PIN_5

#define C1_MINUS_PERIPH         SYSCTL_PERIPH_GPIOB
#define C1_MINUS_PORT           GPIO_PORTB_BASE
#define C1_MINUS_PIN            GPIO_PIN_5

#define C1_PLUS_PERIPH          SYSCTL_PERIPH_GPIOC
#define C1_PLUS_PORT            GPIO_PORTC_BASE
#define C1_PLUS_PIN             GPIO_PIN_5

#define C2O_PERIPH              SYSCTL_PERIPH_GPIOF
#define C2O_PORT                GPIO_PORTF_BASE
#define C2O_PIN                 GPIO_PIN_6

#define C2_MINUS_PERIPH         SYSCTL_PERIPH_GPIOC
#define C2_MINUS_PORT           GPIO_PORTC_BASE
#define C2_MINUS_PIN            GPIO_PIN_7

#define C2_PLUS_PERIPH          SYSCTL_PERIPH_GPIOC
#define C2_PLUS_PORT            GPIO_PORTC_BASE
#define C2_PLUS_PIN             GPIO_PIN_6

#define CCP0_PERIPH             SYSCTL_PERIPH_GPIOB
#define CCP0_PORT               GPIO_PORTB_BASE
#define CCP0_PIN                GPIO_PIN_0

#define CCP1_PERIPH             SYSCTL_PERIPH_GPIOD
#define CCP1_PORT               GPIO_PORTD_BASE
#define CCP1_PIN                GPIO_PIN_7

#define CCP2_PERIPH             SYSCTL_PERIPH_GPIOB
#define CCP2_PORT               GPIO_PORTB_BASE
#define CCP2_PIN                GPIO_PIN_1

#define CCP3_PERIPH             SYSCTL_PERIPH_GPIOD
#define CCP3_PORT               GPIO_PORTD_BASE
#define CCP3_PIN                GPIO_PIN_4

#define CCP4_PERIPH             SYSCTL_PERIPH_GPIOD
#define CCP4_PORT               GPIO_PORTD_BASE
#define CCP4_PIN                GPIO_PIN_5

#define CCP5_PERIPH             SYSCTL_PERIPH_GPIOC
#define CCP5_PORT               GPIO_PORTC_BASE
#define CCP5_PIN                GPIO_PIN_4

#define CCP6_PERIPH             SYSCTL_PERIPH_GPIOH
#define CCP6_PORT               GPIO_PORTH_BASE
#define CCP6_PIN                GPIO_PIN_0

#define CCP7_PERIPH             SYSCTL_PERIPH_GPIOH
#define CCP7_PORT               GPIO_PORTH_BASE
#define CCP7_PIN                GPIO_PIN_1

#define I2C0SCL_PERIPH          SYSCTL_PERIPH_GPIOB
#define I2C0SCL_PORT            GPIO_PORTB_BASE
#define I2C0SCL_PIN             GPIO_PIN_2

#define I2C0SDA_PERIPH          SYSCTL_PERIPH_GPIOB
#define I2C0SDA_PORT            GPIO_PORTB_BASE
#define I2C0SDA_PIN             GPIO_PIN_3

#define I2C1SCL_PERIPH          SYSCTL_PERIPH_GPIOA
#define I2C1SCL_PORT            GPIO_PORTA_BASE
#define I2C1SCL_PIN             GPIO_PIN_6

#define I2C1SDA_PERIPH          SYSCTL_PERIPH_GPIOA
#define I2C1SDA_PORT            GPIO_PORTA_BASE
#define I2C1SDA_PIN             GPIO_PIN_7

#define IDX0_PERIPH             SYSCTL_PERIPH_GPIOD
#define IDX0_PORT               GPIO_PORTD_BASE
#define IDX0_PIN                GPIO_PIN_0

#define PHA0_PERIPH             SYSCTL_PERIPH_GPIOD
#define PHA0_PORT               GPIO_PORTD_BASE
#define PHA0_PIN                GPIO_PIN_1

#define PHB0_PERIPH             SYSCTL_PERIPH_GPIOF
#define PHB0_PORT               GPIO_PORTF_BASE
#define PHB0_PIN                GPIO_PIN_0

#define SSI0CLK_PERIPH          SYSCTL_PERIPH_GPIOA
#define SSI0CLK_PORT            GPIO_PORTA_BASE
#define SSI0CLK_PIN             GPIO_PIN_2

#define SSI0FSS_PERIPH          SYSCTL_PERIPH_GPIOA
#define SSI0FSS_PORT            GPIO_PORTA_BASE
#define SSI0FSS_PIN             GPIO_PIN_3

#define SSI0RX_PERIPH           SYSCTL_PERIPH_GPIOA
#define SSI0RX_PORT             GPIO_PORTA_BASE
#define SSI0RX_PIN              GPIO_PIN_4

#define SSI0TX_PERIPH           SYSCTL_PERIPH_GPIOA
#define SSI0TX_PORT             GPIO_PORTA_BASE
#define SSI0TX_PIN              GPIO_PIN_5

#define SSI1CLK_PERIPH          SYSCTL_PERIPH_GPIOE
#define SSI1CLK_PORT            GPIO_PORTE_BASE
#define SSI1CLK_PIN             GPIO_PIN_0

#define SSI1FSS_PERIPH          SYSCTL_PERIPH_GPIOE
#define SSI1FSS_PORT            GPIO_PORTE_BASE
#define SSI1FSS_PIN             GPIO_PIN_1

#define SSI1RX_PERIPH           SYSCTL_PERIPH_GPIOE
#define SSI1RX_PORT             GPIO_PORTE_BASE
#define SSI1RX_PIN              GPIO_PIN_2

#define SSI1TX_PERIPH           SYSCTL_PERIPH_GPIOE
#define SSI1TX_PORT             GPIO_PORTE_BASE
#define SSI1TX_PIN              GPIO_PIN_3

#define SWCLK_PERIPH            SYSCTL_PERIPH_GPIOC
#define SWCLK_PORT              GPIO_PORTC_BASE
#define SWCLK_PIN               GPIO_PIN_0

#define SWDIO_PERIPH            SYSCTL_PERIPH_GPIOC
#define SWDIO_PORT              GPIO_PORTC_BASE
#define SWDIO_PIN               GPIO_PIN_1

#define SWO_PERIPH              SYSCTL_PERIPH_GPIOC
#define SWO_PORT                GPIO_PORTC_BASE
#define SWO_PIN                 GPIO_PIN_3

#define TCK_PERIPH              SYSCTL_PERIPH_GPIOC
#define TCK_PORT                GPIO_PORTC_BASE
#define TCK_PIN                 GPIO_PIN_0

#define TDI_PERIPH              SYSCTL_PERIPH_GPIOC
#define TDI_PORT                GPIO_PORTC_BASE
#define TDI_PIN                 GPIO_PIN_2

#define TDO_PERIPH              SYSCTL_PERIPH_GPIOC
#define TDO_PORT                GPIO_PORTC_BASE
#define TDO_PIN                 GPIO_PIN_3

#define TMS_PERIPH              SYSCTL_PERIPH_GPIOC
#define TMS_PORT                GPIO_PORTC_BASE
#define TMS_PIN                 GPIO_PIN_1

#define TRST_PERIPH             SYSCTL_PERIPH_GPIOB
#define TRST_PORT               GPIO_PORTB_BASE
#define TRST_PIN                GPIO_PIN_7

#define U0RX_PERIPH             SYSCTL_PERIPH_GPIOA
#define U0RX_PORT               GPIO_PORTA_BASE
#define U0RX_PIN                GPIO_PIN_0

#define U0TX_PERIPH             SYSCTL_PERIPH_GPIOA
#define U0TX_PORT               GPIO_PORTA_BASE
#define U0TX_PIN                GPIO_PIN_1

#define U1RX_PERIPH             SYSCTL_PERIPH_GPIOD
#define U1RX_PORT               GPIO_PORTD_BASE
#define U1RX_PIN                GPIO_PIN_2

#define U1TX_PERIPH             SYSCTL_PERIPH_GPIOD
#define U1TX_PORT               GPIO_PORTD_BASE
#define U1TX_PIN                GPIO_PIN_3

#define U2RX_PERIPH             SYSCTL_PERIPH_GPIOG
#define U2RX_PORT               GPIO_PORTG_BASE
#define U2RX_PIN                GPIO_PIN_0

#define U2TX_PERIPH             SYSCTL_PERIPH_GPIOG
#define U2TX_PORT               GPIO_PORTG_BASE
#define U2TX_PIN                GPIO_PIN_1

#endif // _PINMAP_LM3S1512
