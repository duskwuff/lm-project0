//*****************************************************************************
//
// lm4f132h5qc.h - Mapping of peripherals to pins for LM4F132H5QC
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

#ifndef _PINMAP_LM4F132H5QC
#define _PINMAP_LM4F132H5QC

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

#define GPIO_PB4_SSI2CLK        0x00011002
#define GPIO_PB4_CAN0RX         0x00011008
#define GPIO_PB4_T1CCP0         0x00011007

#define GPIO_PB5_SSI2FSS        0x00011402
#define GPIO_PB5_CAN0TX         0x00011408
#define GPIO_PB5_T1CCP1         0x00011407

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

#define GPIO_PC4_U4RX           0x00021001
#define GPIO_PC4_U1RX           0x00021002
#define GPIO_PC4_WT0CCP0        0x00021007
#define GPIO_PC4_U1RTS          0x00021008

#define GPIO_PC5_U4TX           0x00021401
#define GPIO_PC5_U1TX           0x00021402
#define GPIO_PC5_WT0CCP1        0x00021407
#define GPIO_PC5_U1CTS          0x00021408

#define GPIO_PC6_U3RX           0x00021801
#define GPIO_PC6_WT1CCP0        0x00021807
#define GPIO_PC6_USB0EPEN       0x00021808

#define GPIO_PC7_U3TX           0x00021C01
#define GPIO_PC7_USB0PFLT       0x00021C08
#define GPIO_PC7_WT1CCP1        0x00021C07

#define GPIO_PD0_SSI3CLK        0x00030001
#define GPIO_PD0_SSI1CLK        0x00030002
#define GPIO_PD0_I2C3SCL        0x00030003
#define GPIO_PD0_WT2CCP0        0x00030007

#define GPIO_PD1_SSI3FSS        0x00030401
#define GPIO_PD1_SSI1FSS        0x00030402
#define GPIO_PD1_I2C3SDA        0x00030403
#define GPIO_PD1_WT2CCP1        0x00030407

#define GPIO_PD2_SSI3RX         0x00030801
#define GPIO_PD2_SSI1RX         0x00030802
#define GPIO_PD2_WT3CCP0        0x00030807
#define GPIO_PD2_USB0EPEN       0x00030808

#define GPIO_PD3_SSI3TX         0x00030C01
#define GPIO_PD3_SSI1TX         0x00030C02
#define GPIO_PD3_WT3CCP1        0x00030C07
#define GPIO_PD3_USB0PFLT       0x00030C08

#define GPIO_PD4_U6RX           0x00031001
#define GPIO_PD4_WT4CCP0        0x00031007

#define GPIO_PD5_U6TX           0x00031401
#define GPIO_PD5_WT4CCP1        0x00031407

#define GPIO_PD6_U2RX           0x00031801
#define GPIO_PD6_WT5CCP0        0x00031807

#define GPIO_PD7_U2TX           0x00031C01
#define GPIO_PD7_WT5CCP1        0x00031C07
#define GPIO_PD7_NMI            0x00031C08

#define GPIO_PE0_U7RX           0x00040001

#define GPIO_PE1_U7TX           0x00040401

#define GPIO_PE4_U5RX           0x00041001
#define GPIO_PE4_I2C2SCL        0x00041003
#define GPIO_PE4_CAN0RX         0x00041008

#define GPIO_PE5_U5TX           0x00041401
#define GPIO_PE5_I2C2SDA        0x00041403
#define GPIO_PE5_CAN0TX         0x00041408

#define GPIO_PE7_U1RI           0x00041C01

#define GPIO_PF0_U1RTS          0x00050001
#define GPIO_PF0_SSI1RX         0x00050002
#define GPIO_PF0_CAN0RX         0x00050003
#define GPIO_PF0_T0CCP0         0x00050007
#define GPIO_PF0_NMI            0x00050008
#define GPIO_PF0_C0O            0x00050009
#define GPIO_PF0_TRD2           0x0005000E

#define GPIO_PF1_U1CTS          0x00050401
#define GPIO_PF1_SSI1TX         0x00050402
#define GPIO_PF1_T0CCP1         0x00050407
#define GPIO_PF1_C1O            0x00050409
#define GPIO_PF1_TRD1           0x0005040E

#define GPIO_PF2_U1DCD          0x00050801
#define GPIO_PF2_T1CCP0         0x00050807
#define GPIO_PF2_SSI1CLK        0x00050802
#define GPIO_PF2_C2O            0x00050809
#define GPIO_PF2_TRD0           0x0005080E

#define GPIO_PF3_U1DSR          0x00050C01
#define GPIO_PF3_CAN0TX         0x00050C03
#define GPIO_PF3_T1CCP1         0x00050C07
#define GPIO_PF3_SSI1FSS        0x00050C02
#define GPIO_PF3_TRCLK          0x00050C0E

#define GPIO_PF4_U1DTR          0x00051001
#define GPIO_PF4_T2CCP0         0x00051007
#define GPIO_PF4_USB0EPEN       0x00051008
#define GPIO_PF4_TRD3           0x0005100E

#define GPIO_PF5_T2CCP1         0x00051407
#define GPIO_PF5_USB0PFLT       0x00051408

#define GPIO_PF6_I2C2SCL        0x00051803
#define GPIO_PF6_T3CCP0         0x00051807

#define GPIO_PF7_I2C2SDA        0x00051C03
#define GPIO_PF7_T3CCP1         0x00051C07

#define GPIO_PG0_I2C3SCL        0x00060003
#define GPIO_PG0_T4CCP0         0x00060007
#define GPIO_PG0_LPC0PD_N       0x0006000F

#define GPIO_PG1_I2C3SDA        0x00060403
#define GPIO_PG1_T4CCP1         0x00060407
#define GPIO_PG1_LPC0SCI_N      0x0006040F

#define GPIO_PG2_I2C4SCL        0x00060803
#define GPIO_PG2_T5CCP0         0x00060807
#define GPIO_PG2_LPC0CLKRUN_N   0x0006080F

#define GPIO_PG3_I2C4SDA        0x00060C03
#define GPIO_PG3_T5CCP1         0x00060C07

#define GPIO_PG4_U2RX           0x00061001
#define GPIO_PG4_I2C1SCL        0x00061003
#define GPIO_PG4_WT0CCP0        0x00061007
#define GPIO_PG4_USB0EPEN       0x00061008

#define GPIO_PG5_U2TX           0x00061401
#define GPIO_PG5_I2C1SDA        0x00061403
#define GPIO_PG5_WT0CCP1        0x00061407
#define GPIO_PG5_USB0PFLT       0x00061408

#define GPIO_PG6_I2C5SCL        0x00061803
#define GPIO_PG6_WT1CCP0        0x00061807

#define GPIO_PG7_I2C5SDA        0x00061C03
#define GPIO_PG7_WT1CCP1        0x00061C07

#define GPIO_PH0_SSI3CLK        0x00070002
#define GPIO_PH0_WT2CCP0        0x00070007

#define GPIO_PH1_SSI3FSS        0x00070402
#define GPIO_PH1_WT2CCP1        0x00070407

#define GPIO_PH2_SSI3RX         0x00070802
#define GPIO_PH2_WT5CCP0        0x00070807

#define GPIO_PH3_SSI3TX         0x00070C02
#define GPIO_PH3_WT5CCP1        0x00070C07

#define GPIO_PH4_SSI2CLK        0x00071002
#define GPIO_PH4_WT3CCP0        0x00071007

#define GPIO_PH5_SSI2FSS        0x00071402
#define GPIO_PH5_WT3CCP1        0x00071407

#define GPIO_PH6_SSI2RX         0x00071802
#define GPIO_PH6_WT4CCP0        0x00071807

#define GPIO_PH7_SSI2TX         0x00071C02
#define GPIO_PH7_WT4CCP1        0x00071C07

#define GPIO_PJ0_U4RX           0x00080001
#define GPIO_PJ0_T1CCP0         0x00080007

#define GPIO_PJ1_U4TX           0x00080401
#define GPIO_PJ1_T1CCP1         0x00080407

#define GPIO_PJ2_U5RX           0x00080801
#define GPIO_PJ2_T2CCP0         0x00080807

#define GPIO_PK0_SSI3CLK        0x00090002

#define GPIO_PK1_SSI3FSS        0x00090402

#define GPIO_PK2_SSI3RX         0x00090802

#define GPIO_PK3_SSI3TX         0x00090C02

#endif // _PINMAP_LM4F132H5QC
