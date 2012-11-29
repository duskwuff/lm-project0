//*****************************************************************************
//
// lm3s6c11.h - Mapping of peripherals to pins for LM3S6C11
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

#ifndef _PINMAP_LM3S6C11
#define _PINMAP_LM3S6C11

#define GPIO_PA0_U0RX           0x00000001
#define GPIO_PA0_I2C1SCL        0x00000008
#define GPIO_PA0_U1RX           0x00000009

#define GPIO_PA1_U0TX           0x00000401
#define GPIO_PA1_I2C1SDA        0x00000408
#define GPIO_PA1_U1TX           0x00000409

#define GPIO_PA2_SSI0CLK        0x00000801

#define GPIO_PA3_SSI0FSS        0x00000C01

#define GPIO_PA4_SSI0RX         0x00001001

#define GPIO_PA5_SSI0TX         0x00001401

#define GPIO_PA6_I2C1SCL        0x00001801
#define GPIO_PA6_CCP1           0x00001802

#define GPIO_PA7_I2C1SDA        0x00001C01
#define GPIO_PA7_CCP4           0x00001C02
#define GPIO_PA7_CCP3           0x00001C07

#define GPIO_PB0_CCP0           0x00010001
#define GPIO_PB0_U1RX           0x00010005

#define GPIO_PB1_CCP2           0x00010401
#define GPIO_PB1_CCP1           0x00010404
#define GPIO_PB1_U1TX           0x00010405

#define GPIO_PB2_I2C0SCL        0x00010801
#define GPIO_PB2_CCP3           0x00010804
#define GPIO_PB2_CCP0           0x00010805

#define GPIO_PB3_I2C0SDA        0x00010C01

#define GPIO_PB4_U2RX           0x00011004
#define GPIO_PB4_U1RX           0x00011007

#define GPIO_PB5_C0O            0x00011401
#define GPIO_PB5_CCP5           0x00011402
#define GPIO_PB5_CCP6           0x00011403
#define GPIO_PB5_CCP0           0x00011404
#define GPIO_PB5_CCP2           0x00011406
#define GPIO_PB5_U1TX           0x00011407

#define GPIO_PB6_CCP1           0x00011801
#define GPIO_PB6_CCP7           0x00011802
#define GPIO_PB6_C0O            0x00011803
#define GPIO_PB6_CCP5           0x00011806

#define GPIO_PB7_NMI            0x00011C04

#define GPIO_PC0_TCK            0x00020003
#define GPIO_PC0_SWCLK          0x00020003

#define GPIO_PC1_TMS            0x00020403
#define GPIO_PC1_SWDIO          0x00020403

#define GPIO_PC2_TDI            0x00020803

#define GPIO_PC3_SWO            0x00020C03
#define GPIO_PC3_TDO            0x00020C03

#define GPIO_PC4_CCP5           0x00021001
#define GPIO_PC4_CCP2           0x00021005
#define GPIO_PC4_CCP4           0x00021006
#define GPIO_PC4_CCP1           0x00021009

#define GPIO_PC5_CCP1           0x00021401
#define GPIO_PC5_C1O            0x00021402
#define GPIO_PC5_C0O            0x00021403
#define GPIO_PC5_CCP3           0x00021405

#define GPIO_PC6_CCP3           0x00021801
#define GPIO_PC6_U1RX           0x00021805
#define GPIO_PC6_CCP0           0x00021806

#define GPIO_PC7_CCP4           0x00021C01
#define GPIO_PC7_CCP0           0x00021C04
#define GPIO_PC7_U1TX           0x00021C05
#define GPIO_PC7_C1O            0x00021C07

#define GPIO_PD0_U2RX           0x00030004
#define GPIO_PD0_U1RX           0x00030005
#define GPIO_PD0_CCP6           0x00030006

#define GPIO_PD1_U2TX           0x00030404
#define GPIO_PD1_U1TX           0x00030405
#define GPIO_PD1_CCP7           0x00030406
#define GPIO_PD1_CCP2           0x0003040A

#define GPIO_PD2_U1RX           0x00030801
#define GPIO_PD2_CCP6           0x00030802
#define GPIO_PD2_CCP5           0x00030804

#define GPIO_PD3_U1TX           0x00030C01
#define GPIO_PD3_CCP7           0x00030C02
#define GPIO_PD3_CCP0           0x00030C04

#define GPIO_PD4_CCP0           0x00031001
#define GPIO_PD4_CCP3           0x00031002

#define GPIO_PD5_CCP2           0x00031401
#define GPIO_PD5_CCP4           0x00031402
#define GPIO_PD5_U2RX           0x00031409

#define GPIO_PD6_U2TX           0x00031809

#define GPIO_PD7_C0O            0x00031C02
#define GPIO_PD7_CCP1           0x00031C03

#define GPIO_PE0_SSI1CLK        0x00040002
#define GPIO_PE0_CCP3           0x00040003

#define GPIO_PE1_SSI1FSS        0x00040402
#define GPIO_PE1_CCP2           0x00040404
#define GPIO_PE1_CCP6           0x00040405

#define GPIO_PE2_CCP4           0x00040801
#define GPIO_PE2_SSI1RX         0x00040802
#define GPIO_PE2_CCP2           0x00040805

#define GPIO_PE3_CCP1           0x00040C01
#define GPIO_PE3_SSI1TX         0x00040C02
#define GPIO_PE3_CCP7           0x00040C05

#define GPIO_PE4_CCP3           0x00041001
#define GPIO_PE4_U2TX           0x00041005
#define GPIO_PE4_CCP2           0x00041006

#define GPIO_PE5_CCP5           0x00041401

#define GPIO_PE6_C1O            0x00041802

#define GPIO_PF0_U1DSR          0x00050009

#define GPIO_PF1_CCP3           0x0005040A

#define GPIO_PF2_LED1           0x00050801
#define GPIO_PF2_SSI1CLK        0x00050809

#define GPIO_PF3_LED0           0x00050C01
#define GPIO_PF3_SSI1FSS        0x00050C09

#define GPIO_PG0_U2RX           0x00060001
#define GPIO_PG0_I2C1SCL        0x00060003

#define GPIO_PG1_U2TX           0x00060401
#define GPIO_PG1_I2C1SDA        0x00060403

#endif // _PINMAP_LM3S6C11
