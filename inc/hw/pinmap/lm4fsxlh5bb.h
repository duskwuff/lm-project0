//*****************************************************************************
//
// lm4fsxlh5bb.h - Mapping of peripherals to pins for LM4FSXLH5BB
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

#ifndef _PINMAP_LM4FSXLH5BB
#define _PINMAP_LM4FSXLH5BB

#define GPIO_PA0_U0RX           0x00000001

#define GPIO_PA1_U0TX           0x00000401

#define GPIO_PA2_SSI0CLK        0x00000802

#define GPIO_PA3_SSI0FSS        0x00000C02

#define GPIO_PA4_SSI0RX         0x00001002

#define GPIO_PA5_SSI0TX         0x00001402

#define GPIO_PA6_I2C1SCL        0x00001803

#define GPIO_PA7_I2C1SDA        0x00001C03

#define GPIO_PB0_U1RX           0x00010001
#define GPIO_PB0_T2CCP0         0x00010007

#define GPIO_PB1_U1TX           0x00010401
#define GPIO_PB1_T2CCP1         0x00010407

#define GPIO_PB2_I2C0SCL        0x00010803
#define GPIO_PB2_T3CCP0         0x00010807

#define GPIO_PB3_I2C0SDA        0x00010C03
#define GPIO_PB3_T3CCP1         0x00010C07

#define GPIO_PB4_T1CCP0         0x00011007

#define GPIO_PB5_T1CCP1         0x00011407

#define GPIO_PB6_I2C5SCL        0x00011803
#define GPIO_PB6_T0CCP0         0x00011807

#define GPIO_PB7_I2C5SDA        0x00011C03
#define GPIO_PB7_T0CCP1         0x00011C07

#define GPIO_PC0_TCK            0x00020001
#define GPIO_PC0_SWCLK          0x00020001
#define GPIO_PC0_T4CCP0         0x00020007

#define GPIO_PC1_TMS            0x00020401
#define GPIO_PC1_SWDIO          0x00020401
#define GPIO_PC1_T4CCP1         0x00020407

#define GPIO_PC2_TDI            0x00020801
#define GPIO_PC2_T5CCP0         0x00020807

#define GPIO_PC3_SWO            0x00020C01
#define GPIO_PC3_TDO            0x00020C01
#define GPIO_PC3_T5CCP1         0x00020C07

#define GPIO_PC4_U1RX           0x00021002
#define GPIO_PC4_WT0CCP0        0x00021007

#define GPIO_PC5_U1TX           0x00021402
#define GPIO_PC5_WT0CCP1        0x00021407

#define GPIO_PC6_WT1CCP0        0x00021807

#define GPIO_PC7_WT1CCP1        0x00021C07

#define GPIO_PD0_SSI1CLK        0x00030002
#define GPIO_PD0_I2C3SCL        0x00030003
#define GPIO_PD0_WT2CCP0        0x00030007

#define GPIO_PD1_SSI1FSS        0x00030402
#define GPIO_PD1_I2C3SDA        0x00030403
#define GPIO_PD1_WT2CCP1        0x00030407

#define GPIO_PD2_SSI1RX         0x00030802
#define GPIO_PD2_WT3CCP0        0x00030807

#define GPIO_PD3_SSI1TX         0x00030C02
#define GPIO_PD3_WT3CCP1        0x00030C07

#define GPIO_PD4_WT4CCP0        0x00031007

#define GPIO_PD5_WT4CCP1        0x00031407

#define GPIO_PD6_WT5CCP0        0x00031807

#define GPIO_PD7_WT5CCP1        0x00031C07
#define GPIO_PD7_NMI            0x00031C08

#define GPIO_PE4_I2C2SCL        0x00041003

#define GPIO_PE5_I2C2SDA        0x00041403

#define GPIO_PF0_SSI1RX         0x00050002
#define GPIO_PF0_T0CCP0         0x00050007
#define GPIO_PF0_NMI            0x00050008
#define GPIO_PF0_TRD2           0x0005000E

#define GPIO_PF1_SSI1TX         0x00050402
#define GPIO_PF1_T0CCP1         0x00050407
#define GPIO_PF1_TRD1           0x0005040E

#define GPIO_PF2_T1CCP0         0x00050807
#define GPIO_PF2_SSI1CLK        0x00050802
#define GPIO_PF2_TRD0           0x0005080E

#define GPIO_PF3_T1CCP1         0x00050C07
#define GPIO_PF3_SSI1FSS        0x00050C02
#define GPIO_PF3_TRCLK          0x00050C0E

#define GPIO_PF4_T2CCP0         0x00051007
#define GPIO_PF4_TRD3           0x0005100E

#define GPIO_PF5_T2CCP1         0x00051407

#define GPIO_PF6_I2C2SCL        0x00051803
#define GPIO_PF6_T3CCP0         0x00051807

#define GPIO_PF7_I2C2SDA        0x00051C03
#define GPIO_PF7_T3CCP1         0x00051C07

#define GPIO_PG0_I2C3SCL        0x00060003
#define GPIO_PG0_T4CCP0         0x00060007

#define GPIO_PG1_I2C3SDA        0x00060403
#define GPIO_PG1_T4CCP1         0x00060407

#define GPIO_PG2_I2C4SCL        0x00060803
#define GPIO_PG2_T5CCP0         0x00060807

#define GPIO_PG3_I2C4SDA        0x00060C03
#define GPIO_PG3_T5CCP1         0x00060C07

#define GPIO_PG4_I2C1SCL        0x00061003
#define GPIO_PG4_WT0CCP0        0x00061007

#define GPIO_PG5_I2C1SDA        0x00061403
#define GPIO_PG5_WT0CCP1        0x00061407

#define GPIO_PG6_I2C5SCL        0x00061803
#define GPIO_PG6_WT1CCP0        0x00061807

#define GPIO_PG7_I2C5SDA        0x00061C03
#define GPIO_PG7_WT1CCP1        0x00061C07

#define GPIO_PH0_WT2CCP0        0x00070007

#define GPIO_PH1_WT2CCP1        0x00070407

#define GPIO_PH2_FAN0PWM5       0x00070801
#define GPIO_PH2_WT5CCP0        0x00070807

#define GPIO_PH3_FAN0TACH5      0x00070C01
#define GPIO_PH3_WT5CCP1        0x00070C07

#define GPIO_PH4_WT3CCP0        0x00071007

#define GPIO_PH5_WT3CCP1        0x00071407

#define GPIO_PH6_WT4CCP0        0x00071807

#define GPIO_PH7_WT4CCP1        0x00071C07

#define GPIO_PJ0_T1CCP0         0x00080007

#define GPIO_PJ1_T1CCP1         0x00080407

#define GPIO_PJ2_T2CCP0         0x00080807

#define GPIO_PJ3_T2CCP1         0x00080C07

#define GPIO_PJ4_T3CCP0         0x00081007

#define GPIO_PJ5_T3CCP1         0x00081407

#define GPIO_PJ6_PECI0TX        0x00081801

#define GPIO_PK4_RTCCLK         0x00091007

#define GPIO_PK6_FAN0PWM1       0x00091801
#define GPIO_PK6_WT1CCP0        0x00091807

#define GPIO_PK7_FAN0TACH1      0x00091C01
#define GPIO_PK7_WT1CCP1        0x00091C07

#define GPIO_PL0_T0CCP0         0x000A0007
#define GPIO_PL0_WT0CCP0        0x000A0008
#define GPIO_PL0_LPC0AD3        0x000A000F

#define GPIO_PL1_T0CCP1         0x000A0407
#define GPIO_PL1_WT0CCP1        0x000A0408
#define GPIO_PL1_LPC0AD2        0x000A040F

#define GPIO_PL2_T1CCP0         0x000A0807
#define GPIO_PL2_WT1CCP0        0x000A0808
#define GPIO_PL2_LPC0AD1        0x000A080F

#define GPIO_PL3_T1CCP1         0x000A0C07
#define GPIO_PL3_WT1CCP1        0x000A0C08
#define GPIO_PL3_LPC0AD0        0x000A0C0F

#define GPIO_PL4_T2CCP0         0x000A1007
#define GPIO_PL4_WT2CCP0        0x000A1008
#define GPIO_PL4_LPC0FRAME_N    0x000A100F

#define GPIO_PL5_T2CCP1         0x000A1407
#define GPIO_PL5_WT2CCP1        0x000A1408
#define GPIO_PL5_LPC0RESET_N    0x000A140F

#define GPIO_PL6_T3CCP0         0x000A1807
#define GPIO_PL6_WT3CCP0        0x000A1808

#define GPIO_PL7_T3CCP1         0x000A1C07
#define GPIO_PL7_WT3CCP1        0x000A1C08

#define GPIO_PM0_T4CCP0         0x000B0007
#define GPIO_PM0_WT4CCP0        0x000B0008
#define GPIO_PM0_LPC0PD_N       0x000B000F

#define GPIO_PM1_T4CCP1         0x000B0407
#define GPIO_PM1_WT4CCP1        0x000B0408
#define GPIO_PM1_LPC0SCI_N      0x000B040F

#define GPIO_PM2_T5CCP0         0x000B0807
#define GPIO_PM2_WT5CCP0        0x000B0808
#define GPIO_PM2_LPC0CLKRUN_N   0x000B080F

#define GPIO_PM3_T5CCP1         0x000B0C07
#define GPIO_PM3_WT5CCP1        0x000B0C08

#define GPIO_PM4_LPC0SERIRQ     0x000B100F

#define GPIO_PM5_LPC0CLK        0x000B140F

#define GPIO_PM6_FAN0PWM0       0x000B1801
#define GPIO_PM6_WT0CCP0        0x000B1807

#define GPIO_PM7_FAN0TACH0      0x000B1C01
#define GPIO_PM7_WT0CCP1        0x000B1C07

#define GPIO_PN2_FAN0PWM2       0x000C0801
#define GPIO_PN2_WT2CCP0        0x000C0807

#define GPIO_PN3_FAN0TACH2      0x000C0C01
#define GPIO_PN3_WT2CCP1        0x000C0C07

#define GPIO_PN4_FAN0PWM3       0x000C1001
#define GPIO_PN4_WT3CCP0        0x000C1007

#define GPIO_PN5_FAN0TACH3      0x000C1401
#define GPIO_PN5_WT3CCP1        0x000C1407

#define GPIO_PN6_FAN0PWM4       0x000C1801
#define GPIO_PN6_WT4CCP0        0x000C1807

#define GPIO_PN7_FAN0TACH4      0x000C1C01
#define GPIO_PN7_WT4CCP1        0x000C1C07

#define GPIO_PP0_T4CCP0         0x000D0007

#define GPIO_PP1_T4CCP1         0x000D0407

#define GPIO_PP2_T5CCP0         0x000D0807

#define GPIO_PP3_T5CCP1         0x000D0C07

#define GPIO_PP4_WT0CCP0        0x000D1007

#define GPIO_PP5_WT0CCP1        0x000D1407

#define GPIO_PP6_WT1CCP0        0x000D1807

#define GPIO_PP7_WT1CCP1        0x000D1C07

#define GPIO_PQ0_WT2CCP0        0x000E0007

#define GPIO_PQ1_WT2CCP1        0x000E0407

#define GPIO_PQ2_WT3CCP0        0x000E0807

#define GPIO_PQ3_WT3CCP1        0x000E0C07

#define GPIO_PQ4_WT4CCP0        0x000E1007

#define GPIO_PQ5_WT4CCP1        0x000E1407

#define GPIO_PQ6_WT5CCP0        0x000E1807

#define GPIO_PQ7_WT5CCP1        0x000E1C07

#endif // _PINMAP_LM4FSXLH5BB
