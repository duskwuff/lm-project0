//*****************************************************************************
//
// hibernate.h - API definition for the Hibernation module.
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

#ifndef __HIBERNATE_H__
#define __HIBERNATE_H__

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
// Macros needed for selecting the clock source for HibernateClockSelect()
//
//*****************************************************************************
#define HIBERNATE_CLOCK_SEL_RAW    0x00000004
#define HIBERNATE_CLOCK_SEL_DIV128 0x00000000

//*****************************************************************************
//
// Macros need to configure wake events for HibernateWakeSet()
//
//*****************************************************************************
#define HIBERNATE_WAKE_PIN        0x00000010
#define HIBERNATE_WAKE_RTC        0x00000008
#define HIBERNATE_WAKE_LOW_BAT    0x00000200

//*****************************************************************************
//
// Macros needed to configure low battery detect for HibernateLowBatSet()
//
//*****************************************************************************
#define HIBERNATE_LOW_BAT_DETECT  0x00000020
#define HIBERNATE_LOW_BAT_ABORT   0x000000A0
#define HIBERNATE_LOW_BAT_1_9V    0x00000000
#define HIBERNATE_LOW_BAT_2_1V    0x00002000
#define HIBERNATE_LOW_BAT_2_3V    0x00004000
#define HIBERNATE_LOW_BAT_2_5V    0x00006000

//*****************************************************************************
//
// Macros defining interrupt source bits for the interrupt functions.
//
//*****************************************************************************
#define HIBERNATE_INT_WR_COMPLETE 0x00000010
#define HIBERNATE_INT_PIN_WAKE    0x00000008
#define HIBERNATE_INT_LOW_BAT     0x00000004
#define HIBERNATE_INT_RTC_MATCH_0 0x00000001
#define HIBERNATE_INT_RTC_MATCH_1 0x00000002

//*****************************************************************************
//
// Macros defining oscillator configuration options for the
// HibernateClockConfig() function.
//
//*****************************************************************************
#define HIBERNATE_OSC_LOWDRIVE  0x00040000
#define HIBERNATE_OSC_HIGHDRIVE 0x00060000
#define HIBERNATE_OSC_DISABLE   0x00010000

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif  // __HIBERNATE_H__
