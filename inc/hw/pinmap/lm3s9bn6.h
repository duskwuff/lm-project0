//*****************************************************************************
//
// lm3s9bn6.h - Mapping of peripherals to pins for LM3S9BN6
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

#ifndef _PINMAP_LM3S9BN6
#define _PINMAP_LM3S9BN6

#define GPIO_PA0_U0RX           0x00000001
#define GPIO_PA0_I2C1SCL        0x00000008
#define GPIO_PA0_U1RX           0x00000009

#define GPIO_PA1_U0TX           0x00000401
#define GPIO_PA1_I2C1SDA        0x00000408
#define GPIO_PA1_U1TX           0x00000409

#define GPIO_PA2_SSI0CLK        0x00000801
#define GPIO_PA2_TXD2           0x00000803
#define GPIO_PA2_PWM4           0x00000804
#define GPIO_PA2_I2S0RXSD       0x00000809

#define GPIO_PA3_SSI0FSS        0x00000C01
#define GPIO_PA3_TXD1           0x00000C03
#define GPIO_PA3_PWM5           0x00000C04
#define GPIO_PA3_I2S0RXMCLK     0x00000C09

#define GPIO_PA4_SSI0RX         0x00001001
#define GPIO_PA4_TXD0           0x00001003
#define GPIO_PA4_PWM6           0x00001004
#define GPIO_PA4_CAN0RX         0x00001005
#define GPIO_PA4_I2S0TXSCK      0x00001009

#define GPIO_PA5_SSI0TX         0x00001401
#define GPIO_PA5_RXDV           0x00001403
#define GPIO_PA5_PWM7           0x00001404
#define GPIO_PA5_CAN0TX         0x00001405
#define GPIO_PA5_I2S0TXWS       0x00001409

#define GPIO_PA6_I2C1SCL        0x00001801
#define GPIO_PA6_CCP1           0x00001802
#define GPIO_PA6_RXCK           0x00001803
#define GPIO_PA6_PWM0           0x00001804
#define GPIO_PA6_PWM4           0x00001805
#define GPIO_PA6_CAN0RX         0x00001806
#define GPIO_PA6_USB0EPEN       0x00001808
#define GPIO_PA6_U1CTS          0x00001809

#define GPIO_PA7_I2C1SDA        0x00001C01
#define GPIO_PA7_CCP4           0x00001C02
#define GPIO_PA7_RXER           0x00001C03
#define GPIO_PA7_PWM1           0x00001C04
#define GPIO_PA7_PWM5           0x00001C05
#define GPIO_PA7_CAN0TX         0x00001C06
#define GPIO_PA7_CCP3           0x00001C07
#define GPIO_PA7_USB0PFLT       0x00001C08
#define GPIO_PA7_U1DCD          0x00001C09

#define GPIO_PB0_CCP0           0x00010001
#define GPIO_PB0_PWM2           0x00010002
#define GPIO_PB0_U1RX           0x00010005

#define GPIO_PB1_CCP2           0x00010401
#define GPIO_PB1_PWM3           0x00010402
#define GPIO_PB1_CCP1           0x00010404
#define GPIO_PB1_U1TX           0x00010405

#define GPIO_PB2_I2C0SCL        0x00010801
#define GPIO_PB2_IDX0           0x00010802
#define GPIO_PB2_CCP3           0x00010804
#define GPIO_PB2_CCP0           0x00010805
#define GPIO_PB2_USB0EPEN       0x00010808

#define GPIO_PB3_I2C0SDA        0x00010C01
#define GPIO_PB3_FAULT0         0x00010C02
#define GPIO_PB3_FAULT3         0x00010C04
#define GPIO_PB3_USB0PFLT       0x00010C08

#define GPIO_PB4_U2RX           0x00011004
#define GPIO_PB4_CAN0RX         0x00011005
#define GPIO_PB4_IDX0           0x00011006
#define GPIO_PB4_U1RX           0x00011007
#define GPIO_PB4_EPI0S23        0x00011008

#define GPIO_PB5_C0O            0x00011401
#define GPIO_PB5_CCP5           0x00011402
#define GPIO_PB5_CCP6           0x00011403
#define GPIO_PB5_CCP0           0x00011404
#define GPIO_PB5_CAN0TX         0x00011405
#define GPIO_PB5_CCP2           0x00011406
#define GPIO_PB5_U1TX           0x00011407
#define GPIO_PB5_EPI0S22        0x00011408

#define GPIO_PB6_CCP1           0x00011801
#define GPIO_PB6_CCP7           0x00011802
#define GPIO_PB6_C0O            0x00011803
#define GPIO_PB6_FAULT1         0x00011804
#define GPIO_PB6_IDX0           0x00011805
#define GPIO_PB6_CCP5           0x00011806
#define GPIO_PB6_I2S0TXSCK      0x00011809

#define GPIO_PB7_NMI            0x00011C04
#define GPIO_PB7_RXD1           0x00011C07

#define GPIO_PC0_TCK            0x00020003
#define GPIO_PC0_SWCLK          0x00020003

#define GPIO_PC1_TMS            0x00020403
#define GPIO_PC1_SWDIO          0x00020403

#define GPIO_PC2_TDI            0x00020803

#define GPIO_PC3_SWO            0x00020C03
#define GPIO_PC3_TDO            0x00020C03

#define GPIO_PC4_CCP5           0x00021001
#define GPIO_PC4_PHA0           0x00021002
#define GPIO_PC4_TXD3           0x00021003
#define GPIO_PC4_PWM6           0x00021004
#define GPIO_PC4_CCP2           0x00021005
#define GPIO_PC4_CCP4           0x00021006
#define GPIO_PC4_EPI0S2         0x00021008
#define GPIO_PC4_CCP1           0x00021009

#define GPIO_PC5_CCP1           0x00021401
#define GPIO_PC5_C1O            0x00021402
#define GPIO_PC5_C0O            0x00021403
#define GPIO_PC5_FAULT2         0x00021404
#define GPIO_PC5_CCP3           0x00021405
#define GPIO_PC5_USB0EPEN       0x00021406
#define GPIO_PC5_EPI0S3         0x00021408

#define GPIO_PC6_CCP3           0x00021801
#define GPIO_PC6_PHB0           0x00021802
#define GPIO_PC6_C2O            0x00021803
#define GPIO_PC6_PWM7           0x00021804
#define GPIO_PC6_U1RX           0x00021805
#define GPIO_PC6_CCP0           0x00021806
#define GPIO_PC6_USB0PFLT       0x00021807
#define GPIO_PC6_EPI0S4         0x00021808

#define GPIO_PC7_CCP4           0x00021C01
#define GPIO_PC7_PHB0           0x00021C02
#define GPIO_PC7_CCP0           0x00021C04
#define GPIO_PC7_U1TX           0x00021C05
#define GPIO_PC7_USB0PFLT       0x00021C06
#define GPIO_PC7_C1O            0x00021C07
#define GPIO_PC7_EPI0S5         0x00021C08

#define GPIO_PD0_PWM0           0x00030001
#define GPIO_PD0_CAN0RX         0x00030002
#define GPIO_PD0_IDX0           0x00030003
#define GPIO_PD0_U2RX           0x00030004
#define GPIO_PD0_U1RX           0x00030005
#define GPIO_PD0_CCP6           0x00030006
#define GPIO_PD0_RXDV           0x00030007
#define GPIO_PD0_I2S0RXSCK      0x00030008
#define GPIO_PD0_U1CTS          0x00030009

#define GPIO_PD1_PWM1           0x00030401
#define GPIO_PD1_CAN0TX         0x00030402
#define GPIO_PD1_PHA0           0x00030403
#define GPIO_PD1_U2TX           0x00030404
#define GPIO_PD1_U1TX           0x00030405
#define GPIO_PD1_CCP7           0x00030406
#define GPIO_PD1_TXER           0x00030407
#define GPIO_PD1_I2S0RXWS       0x00030408
#define GPIO_PD1_U1DCD          0x00030409
#define GPIO_PD1_CCP2           0x0003040A
#define GPIO_PD1_PHB1           0x0003040B

#define GPIO_PD2_U1RX           0x00030801
#define GPIO_PD2_CCP6           0x00030802
#define GPIO_PD2_PWM2           0x00030803
#define GPIO_PD2_CCP5           0x00030804
#define GPIO_PD2_EPI0S20        0x00030808

#define GPIO_PD3_U1TX           0x00030C01
#define GPIO_PD3_CCP7           0x00030C02
#define GPIO_PD3_PWM3           0x00030C03
#define GPIO_PD3_CCP0           0x00030C04
#define GPIO_PD3_EPI0S21        0x00030C08

#define GPIO_PD4_CCP0           0x00031001
#define GPIO_PD4_CCP3           0x00031002
#define GPIO_PD4_TXD3           0x00031004
#define GPIO_PD4_I2S0RXSD       0x00031008
#define GPIO_PD4_U1RI           0x00031009
#define GPIO_PD4_EPI0S19        0x0003100A

#define GPIO_PD5_CCP2           0x00031401
#define GPIO_PD5_CCP4           0x00031402
#define GPIO_PD5_TXD2           0x00031404
#define GPIO_PD5_I2S0RXMCLK     0x00031408
#define GPIO_PD5_U2RX           0x00031409
#define GPIO_PD5_EPI0S28        0x0003140A

#define GPIO_PD6_FAULT0         0x00031801
#define GPIO_PD6_TXD1           0x00031804
#define GPIO_PD6_I2S0TXSCK      0x00031808
#define GPIO_PD6_U2TX           0x00031809
#define GPIO_PD6_EPI0S29        0x0003180A

#define GPIO_PD7_IDX0           0x00031C01
#define GPIO_PD7_C0O            0x00031C02
#define GPIO_PD7_CCP1           0x00031C03
#define GPIO_PD7_TXD0           0x00031C04
#define GPIO_PD7_I2S0TXWS       0x00031C08
#define GPIO_PD7_U1DTR          0x00031C09
#define GPIO_PD7_EPI0S30        0x00031C0A

#define GPIO_PE0_PWM4           0x00040001
#define GPIO_PE0_SSI1CLK        0x00040002
#define GPIO_PE0_CCP3           0x00040003
#define GPIO_PE0_EPI0S8         0x00040008
#define GPIO_PE0_USB0PFLT       0x00040009

#define GPIO_PE1_PWM5           0x00040401
#define GPIO_PE1_SSI1FSS        0x00040402
#define GPIO_PE1_FAULT0         0x00040403
#define GPIO_PE1_CCP2           0x00040404
#define GPIO_PE1_CCP6           0x00040405
#define GPIO_PE1_EPI0S9         0x00040408

#define GPIO_PE2_CCP4           0x00040801
#define GPIO_PE2_SSI1RX         0x00040802
#define GPIO_PE2_PHB1           0x00040803
#define GPIO_PE2_PHA0           0x00040804
#define GPIO_PE2_CCP2           0x00040805
#define GPIO_PE2_EPI0S24        0x00040808

#define GPIO_PE3_CCP1           0x00040C01
#define GPIO_PE3_SSI1TX         0x00040C02
#define GPIO_PE3_PHA1           0x00040C03
#define GPIO_PE3_PHB0           0x00040C04
#define GPIO_PE3_CCP7           0x00040C05
#define GPIO_PE3_EPI0S25        0x00040C08

#define GPIO_PE4_CCP3           0x00041001
#define GPIO_PE4_FAULT0         0x00041004
#define GPIO_PE4_U2TX           0x00041005
#define GPIO_PE4_CCP2           0x00041006
#define GPIO_PE4_RXD0           0x00041007
#define GPIO_PE4_I2S0TXWS       0x00041009

#define GPIO_PE5_CCP5           0x00041401
#define GPIO_PE5_I2S0TXSD       0x00041409

#define GPIO_PE6_PWM4           0x00041801
#define GPIO_PE6_C1O            0x00041802
#define GPIO_PE6_U1CTS          0x00041809

#define GPIO_PE7_PWM5           0x00041C01
#define GPIO_PE7_C2O            0x00041C02
#define GPIO_PE7_U1DCD          0x00041C09

#define GPIO_PF0_CAN1RX         0x00050001
#define GPIO_PF0_PHB0           0x00050002
#define GPIO_PF0_PWM0           0x00050003
#define GPIO_PF0_RXCK           0x00050004
#define GPIO_PF0_I2S0TXSD       0x00050008
#define GPIO_PF0_U1DSR          0x00050009

#define GPIO_PF1_CAN1TX         0x00050401
#define GPIO_PF1_IDX1           0x00050402
#define GPIO_PF1_PWM1           0x00050403
#define GPIO_PF1_RXER           0x00050404
#define GPIO_PF1_I2S0TXMCLK     0x00050408
#define GPIO_PF1_U1RTS          0x00050409
#define GPIO_PF1_CCP3           0x0005040A

#define GPIO_PF2_PWM4           0x00050802
#define GPIO_PF2_PHYINT         0x00050803
#define GPIO_PF2_PWM2           0x00050804
#define GPIO_PF2_SSI1CLK        0x00050809

#define GPIO_PF3_PWM5           0x00050C02
#define GPIO_PF3_MDC            0x00050C03
#define GPIO_PF3_PWM3           0x00050C04
#define GPIO_PF3_SSI1FSS        0x00050C09

#define GPIO_PF4_CCP0           0x00051001
#define GPIO_PF4_C0O            0x00051002
#define GPIO_PF4_MDIO           0x00051003
#define GPIO_PF4_FAULT0         0x00051004
#define GPIO_PF4_EPI0S12        0x00051008
#define GPIO_PF4_SSI1RX         0x00051009

#define GPIO_PF5_CCP2           0x00051401
#define GPIO_PF5_C1O            0x00051402
#define GPIO_PF5_RXD3           0x00051403
#define GPIO_PF5_EPI0S15        0x00051408
#define GPIO_PF5_SSI1TX         0x00051409

#define GPIO_PF6_CCP1           0x00051801
#define GPIO_PF6_C2O            0x00051802
#define GPIO_PF6_RXD2           0x00051803
#define GPIO_PF6_PHA0           0x00051804
#define GPIO_PF6_I2S0TXMCLK     0x00051809
#define GPIO_PF6_U1RTS          0x0005180A

#define GPIO_PF7_CCP4           0x00051C01
#define GPIO_PF7_RXD1           0x00051C03
#define GPIO_PF7_PHB0           0x00051C04
#define GPIO_PF7_EPI0S12        0x00051C08
#define GPIO_PF7_FAULT1         0x00051C09

#define GPIO_PG0_U2RX           0x00060001
#define GPIO_PG0_PWM0           0x00060002
#define GPIO_PG0_I2C1SCL        0x00060003
#define GPIO_PG0_PWM4           0x00060004
#define GPIO_PG0_USB0EPEN       0x00060007
#define GPIO_PG0_EPI0S13        0x00060008

#define GPIO_PG1_U2TX           0x00060401
#define GPIO_PG1_PWM1           0x00060402
#define GPIO_PG1_I2C1SDA        0x00060403
#define GPIO_PG1_PWM5           0x00060404
#define GPIO_PG1_EPI0S14        0x00060408

#define GPIO_PG2_PWM0           0x00060801
#define GPIO_PG2_COL            0x00060803
#define GPIO_PG2_FAULT0         0x00060804
#define GPIO_PG2_IDX1           0x00060808
#define GPIO_PG2_I2S0RXSD       0x00060809

#define GPIO_PG3_PWM1           0x00060C01
#define GPIO_PG3_CRS            0x00060C03
#define GPIO_PG3_FAULT2         0x00060C04
#define GPIO_PG3_FAULT0         0x00060C08
#define GPIO_PG3_I2S0RXMCLK     0x00060C09

#define GPIO_PG4_CCP3           0x00061001
#define GPIO_PG4_RXD0           0x00061003
#define GPIO_PG4_FAULT1         0x00061004
#define GPIO_PG4_EPI0S15        0x00061008
#define GPIO_PG4_PWM6           0x00061009
#define GPIO_PG4_U1RI           0x0006100A

#define GPIO_PG5_CCP5           0x00061401
#define GPIO_PG5_TXEN           0x00061403
#define GPIO_PG5_IDX0           0x00061404
#define GPIO_PG5_FAULT1         0x00061405
#define GPIO_PG5_PWM7           0x00061408
#define GPIO_PG5_I2S0RXSCK      0x00061409
#define GPIO_PG5_U1DTR          0x0006140A

#define GPIO_PG6_PHA1           0x00061801
#define GPIO_PG6_TXCK           0x00061803
#define GPIO_PG6_PWM6           0x00061804
#define GPIO_PG6_FAULT1         0x00061808
#define GPIO_PG6_I2S0RXWS       0x00061809
#define GPIO_PG6_U1RI           0x0006180A

#define GPIO_PG7_PHB1           0x00061C01
#define GPIO_PG7_TXER           0x00061C03
#define GPIO_PG7_PWM7           0x00061C04
#define GPIO_PG7_CCP5           0x00061C08
#define GPIO_PG7_EPI0S31        0x00061C09

#define GPIO_PH0_CCP6           0x00070001
#define GPIO_PH0_PWM2           0x00070002
#define GPIO_PH0_EPI0S6         0x00070008
#define GPIO_PH0_PWM4           0x00070009

#define GPIO_PH1_CCP7           0x00070401
#define GPIO_PH1_PWM3           0x00070402
#define GPIO_PH1_EPI0S7         0x00070408
#define GPIO_PH1_PWM5           0x00070409

#define GPIO_PH2_IDX1           0x00070801
#define GPIO_PH2_C1O            0x00070802
#define GPIO_PH2_FAULT3         0x00070804
#define GPIO_PH2_EPI0S1         0x00070808
#define GPIO_PH2_TXD3           0x00070809

#define GPIO_PH3_PHB0           0x00070C01
#define GPIO_PH3_FAULT0         0x00070C02
#define GPIO_PH3_USB0EPEN       0x00070C04
#define GPIO_PH3_EPI0S0         0x00070C08
#define GPIO_PH3_TXD2           0x00070C09

#define GPIO_PH4_USB0PFLT       0x00071004
#define GPIO_PH4_EPI0S10        0x00071008
#define GPIO_PH4_TXD1           0x00071009
#define GPIO_PH4_SSI1CLK        0x0007100B

#define GPIO_PH5_EPI0S11        0x00071408
#define GPIO_PH5_TXD0           0x00071409
#define GPIO_PH5_FAULT2         0x0007140A
#define GPIO_PH5_SSI1FSS        0x0007140B

#define GPIO_PH6_EPI0S26        0x00071808
#define GPIO_PH6_RXDV           0x00071809
#define GPIO_PH6_PWM4           0x0007180A
#define GPIO_PH6_SSI1RX         0x0007180B

#define GPIO_PH7_RXCK           0x00071C03
#define GPIO_PH7_EPI0S27        0x00071C08
#define GPIO_PH7_PWM5           0x00071C0A
#define GPIO_PH7_SSI1TX         0x00071C0B

#define GPIO_PJ0_RXER           0x00080003
#define GPIO_PJ0_EPI0S16        0x00080008
#define GPIO_PJ0_PWM0           0x0008000A
#define GPIO_PJ0_I2C1SCL        0x0008000B

#define GPIO_PJ1_EPI0S17        0x00080408
#define GPIO_PJ1_USB0PFLT       0x00080409
#define GPIO_PJ1_PWM1           0x0008040A
#define GPIO_PJ1_I2C1SDA        0x0008040B

#define GPIO_PJ2_EPI0S18        0x00080808
#define GPIO_PJ2_CCP0           0x00080809
#define GPIO_PJ2_FAULT0         0x0008080A

#define GPIO_PJ3_EPI0S19        0x00080C08
#define GPIO_PJ3_U1CTS          0x00080C09
#define GPIO_PJ3_CCP6           0x00080C0A

#define GPIO_PJ4_EPI0S28        0x00081008
#define GPIO_PJ4_U1DCD          0x00081009
#define GPIO_PJ4_CCP4           0x0008100A

#define GPIO_PJ5_EPI0S29        0x00081408
#define GPIO_PJ5_U1DSR          0x00081409
#define GPIO_PJ5_CCP2           0x0008140A

#define GPIO_PJ6_EPI0S30        0x00081808
#define GPIO_PJ6_U1RTS          0x00081809
#define GPIO_PJ6_CCP1           0x0008180A

#define GPIO_PJ7_U1DTR          0x00081C09
#define GPIO_PJ7_CCP0           0x00081C0A

#endif // _PINMAP_LM3S9BN6
