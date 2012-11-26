//*****************************************************************************
//
// ethernet.h - Defines and Macros for the ethernet module.
//
// Copyright (c) 2006-2012 Texas Instruments Incorporated.  All rights reserved.
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

#ifndef __ETHERNET_H__
#define __ETHERNET_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
// Values that can be passed to EthernetConfigSet as the ulConfig value, and
// returned from EthernetConfigGet.
//
//*****************************************************************************
#define ETH_CFG_TS_TSEN         0x010000    // Enable Timestamp (CCP)
#define ETH_CFG_RX_BADCRCDIS    0x000800    // Disable RX BAD CRC Packets
#define ETH_CFG_RX_PRMSEN       0x000400    // Enable RX Promiscuous
#define ETH_CFG_RX_AMULEN       0x000200    // Enable RX Multicast
#define ETH_CFG_TX_DPLXEN       0x000010    // Enable TX Duplex Mode
#define ETH_CFG_TX_CRCEN        0x000004    // Enable TX CRC Generation
#define ETH_CFG_TX_PADEN        0x000002    // Enable TX Padding

//*****************************************************************************
//
// Values that can be passed to EthernetIntEnable, EthernetIntDisable, and
// EthernetIntClear as the ulIntFlags parameter, and returned from
// EthernetIntStatus.
//
//*****************************************************************************
#define ETH_INT_PHY             0x040       // PHY Event/Interrupt
#define ETH_INT_MDIO            0x020       // Management Transaction
#define ETH_INT_RXER            0x010       // RX Error
#define ETH_INT_RXOF            0x008       // RX FIFO Overrun
#define ETH_INT_TX              0x004       // TX Complete
#define ETH_INT_TXER            0x002       // TX Error
#define ETH_INT_RX              0x001       // RX Complete

//*****************************************************************************
//
// Helper Macros for Ethernet Processing
//
//*****************************************************************************
//
// htonl/ntohl - big endian/little endian byte swapping macros for
// 32-bit (long) values
//
//*****************************************************************************
#ifndef htonl
    #define htonl(a)                    \
        ((((a) >> 24) & 0x000000ff) |   \
         (((a) >>  8) & 0x0000ff00) |   \
         (((a) <<  8) & 0x00ff0000) |   \
         (((a) << 24) & 0xff000000))
#endif

#ifndef ntohl
    #define ntohl(a)    htonl((a))
#endif

//*****************************************************************************
//
// htons/ntohs - big endian/little endian byte swapping macros for
// 16-bit (short) values
//
//*****************************************************************************
#ifndef htons
    #define htons(a)                \
        ((((a) >> 8) & 0x00ff) |    \
         (((a) << 8) & 0xff00))
#endif

#ifndef ntohs
    #define ntohs(a)    htons((a))
#endif

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif //  __ETHERNET_H__
