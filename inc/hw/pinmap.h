//*****************************************************************************
//
// pinmap.h - Mapping of peripherals to pins for all parts.
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

#ifndef __PIN_MAP_H__
#define __PIN_MAP_H__

#if defined(PART_LM3S101)
# include <hw/pinmap/lm3s101.h>
#elif defined(PART_LM3S102)
# include <hw/pinmap/lm3s102.h>
#elif defined(PART_LM3S300)
# include <hw/pinmap/lm3s300.h>
#elif defined(PART_LM3S301)
# include <hw/pinmap/lm3s301.h>
#elif defined(PART_LM3S308)
# include <hw/pinmap/lm3s308.h>
#elif defined(PART_LM3S310)
# include <hw/pinmap/lm3s310.h>
#elif defined(PART_LM3S315)
# include <hw/pinmap/lm3s315.h>
#elif defined(PART_LM3S316)
# include <hw/pinmap/lm3s316.h>
#elif defined(PART_LM3S317)
# include <hw/pinmap/lm3s317.h>
#elif defined(PART_LM3S328)
# include <hw/pinmap/lm3s328.h>
#elif defined(PART_LM3S600)
# include <hw/pinmap/lm3s600.h>
#elif defined(PART_LM3S601)
# include <hw/pinmap/lm3s601.h>
#elif defined(PART_LM3S608)
# include <hw/pinmap/lm3s608.h>
#elif defined(PART_LM3S610)
# include <hw/pinmap/lm3s610.h>
#elif defined(PART_LM3S611)
# include <hw/pinmap/lm3s611.h>
#elif defined(PART_LM3S612)
# include <hw/pinmap/lm3s612.h>
#elif defined(PART_LM3S613)
# include <hw/pinmap/lm3s613.h>
#elif defined(PART_LM3S615)
# include <hw/pinmap/lm3s615.h>
#elif defined(PART_LM3S617)
# include <hw/pinmap/lm3s617.h>
#elif defined(PART_LM3S618)
# include <hw/pinmap/lm3s618.h>
#elif defined(PART_LM3S628)
# include <hw/pinmap/lm3s628.h>
#elif defined(PART_LM3S800)
# include <hw/pinmap/lm3s800.h>
#elif defined(PART_LM3S801)
# include <hw/pinmap/lm3s801.h>
#elif defined(PART_LM3S808)
# include <hw/pinmap/lm3s808.h>
#elif defined(PART_LM3S811)
# include <hw/pinmap/lm3s811.h>
#elif defined(PART_LM3S812)
# include <hw/pinmap/lm3s812.h>
#elif defined(PART_LM3S815)
# include <hw/pinmap/lm3s815.h>
#elif defined(PART_LM3S817)
# include <hw/pinmap/lm3s817.h>
#elif defined(PART_LM3S818)
# include <hw/pinmap/lm3s818.h>
#elif defined(PART_LM3S828)
# include <hw/pinmap/lm3s828.h>
#elif defined(PART_LM3S1110)
# include <hw/pinmap/lm3s1110.h>
#elif defined(PART_LM3S1133)
# include <hw/pinmap/lm3s1133.h>
#elif defined(PART_LM3S1138)
# include <hw/pinmap/lm3s1138.h>
#elif defined(PART_LM3S1150)
# include <hw/pinmap/lm3s1150.h>
#elif defined(PART_LM3S1162)
# include <hw/pinmap/lm3s1162.h>
#elif defined(PART_LM3S1165)
# include <hw/pinmap/lm3s1165.h>
#elif defined(PART_LM3S1332)
# include <hw/pinmap/lm3s1332.h>
#elif defined(PART_LM3S1435)
# include <hw/pinmap/lm3s1435.h>
#elif defined(PART_LM3S1439)
# include <hw/pinmap/lm3s1439.h>
#elif defined(PART_LM3S1512)
# include <hw/pinmap/lm3s1512.h>
#elif defined(PART_LM3S1538)
# include <hw/pinmap/lm3s1538.h>
#elif defined(PART_LM3S1601)
# include <hw/pinmap/lm3s1601.h>
#elif defined(PART_LM3S1607)
# include <hw/pinmap/lm3s1607.h>
#elif defined(PART_LM3S1608)
# include <hw/pinmap/lm3s1608.h>
#elif defined(PART_LM3S1620)
# include <hw/pinmap/lm3s1620.h>
#elif defined(PART_LM3S1621)
# include <hw/pinmap/lm3s1621.h>
#elif defined(PART_LM3S1625)
# include <hw/pinmap/lm3s1625.h>
#elif defined(PART_LM3S1626)
# include <hw/pinmap/lm3s1626.h>
#elif defined(PART_LM3S1627)
# include <hw/pinmap/lm3s1627.h>
#elif defined(PART_LM3S1635)
# include <hw/pinmap/lm3s1635.h>
#elif defined(PART_LM3S1637)
# include <hw/pinmap/lm3s1637.h>
#elif defined(PART_LM3S1651)
# include <hw/pinmap/lm3s1651.h>
#elif defined(PART_LM3S1751)
# include <hw/pinmap/lm3s1751.h>
#elif defined(PART_LM3S1776)
# include <hw/pinmap/lm3s1776.h>
#elif defined(PART_LM3S1811)
# include <hw/pinmap/lm3s1811.h>
#elif defined(PART_LM3S1816)
# include <hw/pinmap/lm3s1816.h>
#elif defined(PART_LM3S1850)
# include <hw/pinmap/lm3s1850.h>
#elif defined(PART_LM3S1911)
# include <hw/pinmap/lm3s1911.h>
#elif defined(PART_LM3S1918)
# include <hw/pinmap/lm3s1918.h>
#elif defined(PART_LM3S1937)
# include <hw/pinmap/lm3s1937.h>
#elif defined(PART_LM3S1958)
# include <hw/pinmap/lm3s1958.h>
#elif defined(PART_LM3S1960)
# include <hw/pinmap/lm3s1960.h>
#elif defined(PART_LM3S1968)
# include <hw/pinmap/lm3s1968.h>
#elif defined(PART_LM3S1B21)
# include <hw/pinmap/lm3s1b21.h>
#elif defined(PART_LM3S1C21)
# include <hw/pinmap/lm3s1c21.h>
#elif defined(PART_LM3S1C26)
# include <hw/pinmap/lm3s1c26.h>
#elif defined(PART_LM3S1C58)
# include <hw/pinmap/lm3s1c58.h>
#elif defined(PART_LM3S1D21)
# include <hw/pinmap/lm3s1d21.h>
#elif defined(PART_LM3S1D26)
# include <hw/pinmap/lm3s1d26.h>
#elif defined(PART_LM3S1F11)
# include <hw/pinmap/lm3s1f11.h>
#elif defined(PART_LM3S1F16)
# include <hw/pinmap/lm3s1f16.h>
#elif defined(PART_LM3S1G21)
# include <hw/pinmap/lm3s1g21.h>
#elif defined(PART_LM3S1G58)
# include <hw/pinmap/lm3s1g58.h>
#elif defined(PART_LM3S1H11)
# include <hw/pinmap/lm3s1h11.h>
#elif defined(PART_LM3S1H16)
# include <hw/pinmap/lm3s1h16.h>
#elif defined(PART_LM3S1J11)
# include <hw/pinmap/lm3s1j11.h>
#elif defined(PART_LM3S1J16)
# include <hw/pinmap/lm3s1j16.h>
#elif defined(PART_LM3S1N11)
# include <hw/pinmap/lm3s1n11.h>
#elif defined(PART_LM3S1N16)
# include <hw/pinmap/lm3s1n16.h>
#elif defined(PART_LM3S1P51)
# include <hw/pinmap/lm3s1p51.h>
#elif defined(PART_LM3S1R21)
# include <hw/pinmap/lm3s1r21.h>
#elif defined(PART_LM3S1R26)
# include <hw/pinmap/lm3s1r26.h>
#elif defined(PART_LM3S1W16)
# include <hw/pinmap/lm3s1w16.h>
#elif defined(PART_LM3S1Z16)
# include <hw/pinmap/lm3s1z16.h>
#elif defined(PART_LM3S2016)
# include <hw/pinmap/lm3s2016.h>
#elif defined(PART_LM3S2110)
# include <hw/pinmap/lm3s2110.h>
#elif defined(PART_LM3S2139)
# include <hw/pinmap/lm3s2139.h>
#elif defined(PART_LM3S2276)
# include <hw/pinmap/lm3s2276.h>
#elif defined(PART_LM3S2410)
# include <hw/pinmap/lm3s2410.h>
#elif defined(PART_LM3S2412)
# include <hw/pinmap/lm3s2412.h>
#elif defined(PART_LM3S2432)
# include <hw/pinmap/lm3s2432.h>
#elif defined(PART_LM3S2533)
# include <hw/pinmap/lm3s2533.h>
#elif defined(PART_LM3S2601)
# include <hw/pinmap/lm3s2601.h>
#elif defined(PART_LM3S2608)
# include <hw/pinmap/lm3s2608.h>
#elif defined(PART_LM3S2616)
# include <hw/pinmap/lm3s2616.h>
#elif defined(PART_LM3S2620)
# include <hw/pinmap/lm3s2620.h>
#elif defined(PART_LM3S2637)
# include <hw/pinmap/lm3s2637.h>
#elif defined(PART_LM3S2651)
# include <hw/pinmap/lm3s2651.h>
#elif defined(PART_LM3S2671)
# include <hw/pinmap/lm3s2671.h>
#elif defined(PART_LM3S2678)
# include <hw/pinmap/lm3s2678.h>
#elif defined(PART_LM3S2730)
# include <hw/pinmap/lm3s2730.h>
#elif defined(PART_LM3S2739)
# include <hw/pinmap/lm3s2739.h>
#elif defined(PART_LM3S2776)
# include <hw/pinmap/lm3s2776.h>
#elif defined(PART_LM3S2793)
# include <hw/pinmap/lm3s2793.h>
#elif defined(PART_LM3S2911)
# include <hw/pinmap/lm3s2911.h>
#elif defined(PART_LM3S2918)
# include <hw/pinmap/lm3s2918.h>
#elif defined(PART_LM3S2939)
# include <hw/pinmap/lm3s2939.h>
#elif defined(PART_LM3S2948)
# include <hw/pinmap/lm3s2948.h>
#elif defined(PART_LM3S2950)
# include <hw/pinmap/lm3s2950.h>
#elif defined(PART_LM3S2965)
# include <hw/pinmap/lm3s2965.h>
#elif defined(PART_LM3S2B93)
# include <hw/pinmap/lm3s2b93.h>
#elif defined(PART_LM3S2D93)
# include <hw/pinmap/lm3s2d93.h>
#elif defined(PART_LM3S2U93)
# include <hw/pinmap/lm3s2u93.h>
#elif defined(PART_LM3S3634)
# include <hw/pinmap/lm3s3634.h>
#elif defined(PART_LM3S3651)
# include <hw/pinmap/lm3s3651.h>
#elif defined(PART_LM3S3654)
# include <hw/pinmap/lm3s3654.h>
#elif defined(PART_LM3S3739)
# include <hw/pinmap/lm3s3739.h>
#elif defined(PART_LM3S3748)
# include <hw/pinmap/lm3s3748.h>
#elif defined(PART_LM3S3749)
# include <hw/pinmap/lm3s3749.h>
#elif defined(PART_LM3S3826)
# include <hw/pinmap/lm3s3826.h>
#elif defined(PART_LM3S3J26)
# include <hw/pinmap/lm3s3j26.h>
#elif defined(PART_LM3S3N26)
# include <hw/pinmap/lm3s3n26.h>
#elif defined(PART_LM3S3W26)
# include <hw/pinmap/lm3s3w26.h>
#elif defined(PART_LM3S3Z26)
# include <hw/pinmap/lm3s3z26.h>
#elif defined(PART_LM3S5632)
# include <hw/pinmap/lm3s5632.h>
#elif defined(PART_LM3S5651)
# include <hw/pinmap/lm3s5651.h>
#elif defined(PART_LM3S5652)
# include <hw/pinmap/lm3s5652.h>
#elif defined(PART_LM3S5656)
# include <hw/pinmap/lm3s5656.h>
#elif defined(PART_LM3S5662)
# include <hw/pinmap/lm3s5662.h>
#elif defined(PART_LM3S5732)
# include <hw/pinmap/lm3s5732.h>
#elif defined(PART_LM3S5737)
# include <hw/pinmap/lm3s5737.h>
#elif defined(PART_LM3S5739)
# include <hw/pinmap/lm3s5739.h>
#elif defined(PART_LM3S5747)
# include <hw/pinmap/lm3s5747.h>
#elif defined(PART_LM3S5749)
# include <hw/pinmap/lm3s5749.h>
#elif defined(PART_LM3S5752)
# include <hw/pinmap/lm3s5752.h>
#elif defined(PART_LM3S5762)
# include <hw/pinmap/lm3s5762.h>
#elif defined(PART_LM3S5791)
# include <hw/pinmap/lm3s5791.h>
#elif defined(PART_LM3S5951)
# include <hw/pinmap/lm3s5951.h>
#elif defined(PART_LM3S5956)
# include <hw/pinmap/lm3s5956.h>
#elif defined(PART_LM3S5B91)
# include <hw/pinmap/lm3s5b91.h>
#elif defined(PART_LM3S5C31)
# include <hw/pinmap/lm3s5c31.h>
#elif defined(PART_LM3S5C36)
# include <hw/pinmap/lm3s5c36.h>
#elif defined(PART_LM3S5C51)
# include <hw/pinmap/lm3s5c51.h>
#elif defined(PART_LM3S5C56)
# include <hw/pinmap/lm3s5c56.h>
#elif defined(PART_LM3S5D51)
# include <hw/pinmap/lm3s5d51.h>
#elif defined(PART_LM3S5D56)
# include <hw/pinmap/lm3s5d56.h>
#elif defined(PART_LM3S5D91)
# include <hw/pinmap/lm3s5d91.h>
#elif defined(PART_LM3S5G31)
# include <hw/pinmap/lm3s5g31.h>
#elif defined(PART_LM3S5G36)
# include <hw/pinmap/lm3s5g36.h>
#elif defined(PART_LM3S5G51)
# include <hw/pinmap/lm3s5g51.h>
#elif defined(PART_LM3S5G56)
# include <hw/pinmap/lm3s5g56.h>
#elif defined(PART_LM3S5K31)
# include <hw/pinmap/lm3s5k31.h>
#elif defined(PART_LM3S5K36)
# include <hw/pinmap/lm3s5k36.h>
#elif defined(PART_LM3S5P31)
# include <hw/pinmap/lm3s5p31.h>
#elif defined(PART_LM3S5P36)
# include <hw/pinmap/lm3s5p36.h>
#elif defined(PART_LM3S5P3B)
# include <hw/pinmap/lm3s5p3b.h>
#elif defined(PART_LM3S5P51)
# include <hw/pinmap/lm3s5p51.h>
#elif defined(PART_LM3S5P56)
# include <hw/pinmap/lm3s5p56.h>
#elif defined(PART_LM3S5R31)
# include <hw/pinmap/lm3s5r31.h>
#elif defined(PART_LM3S5R36)
# include <hw/pinmap/lm3s5r36.h>
#elif defined(PART_LM3S5T36)
# include <hw/pinmap/lm3s5t36.h>
#elif defined(PART_LM3S5U91)
# include <hw/pinmap/lm3s5u91.h>
#elif defined(PART_LM3S5Y36)
# include <hw/pinmap/lm3s5y36.h>
#elif defined(PART_LM3S6100)
# include <hw/pinmap/lm3s6100.h>
#elif defined(PART_LM3S6110)
# include <hw/pinmap/lm3s6110.h>
#elif defined(PART_LM3S6420)
# include <hw/pinmap/lm3s6420.h>
#elif defined(PART_LM3S6422)
# include <hw/pinmap/lm3s6422.h>
#elif defined(PART_LM3S6432)
# include <hw/pinmap/lm3s6432.h>
#elif defined(PART_LM3S6537)
# include <hw/pinmap/lm3s6537.h>
#elif defined(PART_LM3S6610)
# include <hw/pinmap/lm3s6610.h>
#elif defined(PART_LM3S6611)
# include <hw/pinmap/lm3s6611.h>
#elif defined(PART_LM3S6618)
# include <hw/pinmap/lm3s6618.h>
#elif defined(PART_LM3S6633)
# include <hw/pinmap/lm3s6633.h>
#elif defined(PART_LM3S6637)
# include <hw/pinmap/lm3s6637.h>
#elif defined(PART_LM3S6730)
# include <hw/pinmap/lm3s6730.h>
#elif defined(PART_LM3S6753)
# include <hw/pinmap/lm3s6753.h>
#elif defined(PART_LM3S6816)
# include <hw/pinmap/lm3s6816.h>
#elif defined(PART_LM3S6911)
# include <hw/pinmap/lm3s6911.h>
#elif defined(PART_LM3S6916)
# include <hw/pinmap/lm3s6916.h>
#elif defined(PART_LM3S6918)
# include <hw/pinmap/lm3s6918.h>
#elif defined(PART_LM3S6938)
# include <hw/pinmap/lm3s6938.h>
#elif defined(PART_LM3S6950)
# include <hw/pinmap/lm3s6950.h>
#elif defined(PART_LM3S6952)
# include <hw/pinmap/lm3s6952.h>
#elif defined(PART_LM3S6965)
# include <hw/pinmap/lm3s6965.h>
#elif defined(PART_LM3S6C11)
# include <hw/pinmap/lm3s6c11.h>
#elif defined(PART_LM3S6C65)
# include <hw/pinmap/lm3s6c65.h>
#elif defined(PART_LM3S6G11)
# include <hw/pinmap/lm3s6g11.h>
#elif defined(PART_LM3S6G65)
# include <hw/pinmap/lm3s6g65.h>
#elif defined(PART_LM3S8530)
# include <hw/pinmap/lm3s8530.h>
#elif defined(PART_LM3S8538)
# include <hw/pinmap/lm3s8538.h>
#elif defined(PART_LM3S8630)
# include <hw/pinmap/lm3s8630.h>
#elif defined(PART_LM3S8730)
# include <hw/pinmap/lm3s8730.h>
#elif defined(PART_LM3S8733)
# include <hw/pinmap/lm3s8733.h>
#elif defined(PART_LM3S8738)
# include <hw/pinmap/lm3s8738.h>
#elif defined(PART_LM3S8930)
# include <hw/pinmap/lm3s8930.h>
#elif defined(PART_LM3S8933)
# include <hw/pinmap/lm3s8933.h>
#elif defined(PART_LM3S8938)
# include <hw/pinmap/lm3s8938.h>
#elif defined(PART_LM3S8962)
# include <hw/pinmap/lm3s8962.h>
#elif defined(PART_LM3S8970)
# include <hw/pinmap/lm3s8970.h>
#elif defined(PART_LM3S8971)
# include <hw/pinmap/lm3s8971.h>
#elif defined(PART_LM3S8C62)
# include <hw/pinmap/lm3s8c62.h>
#elif defined(PART_LM3S8G62)
# include <hw/pinmap/lm3s8g62.h>
#elif defined(PART_LM3S9781)
# include <hw/pinmap/lm3s9781.h>
#elif defined(PART_LM3S9790)
# include <hw/pinmap/lm3s9790.h>
#elif defined(PART_LM3S9792)
# include <hw/pinmap/lm3s9792.h>
#elif defined(PART_LM3S9971)
# include <hw/pinmap/lm3s9971.h>
#elif defined(PART_LM3S9997)
# include <hw/pinmap/lm3s9997.h>
#elif defined(PART_LM3S9B81)
# include <hw/pinmap/lm3s9b81.h>
#elif defined(PART_LM3S9B90)
# include <hw/pinmap/lm3s9b90.h>
#elif defined(PART_LM3S9B92)
# include <hw/pinmap/lm3s9b92.h>
#elif defined(PART_LM3S9B95)
# include <hw/pinmap/lm3s9b95.h>
#elif defined(PART_LM3S9B96)
# include <hw/pinmap/lm3s9b96.h>
#elif defined(PART_LM3S9BN2)
# include <hw/pinmap/lm3s9bn2.h>
#elif defined(PART_LM3S9BN5)
# include <hw/pinmap/lm3s9bn5.h>
#elif defined(PART_LM3S9BN6)
# include <hw/pinmap/lm3s9bn6.h>
#elif defined(PART_LM3S9C97)
# include <hw/pinmap/lm3s9c97.h>
#elif defined(PART_LM3S9CN5)
# include <hw/pinmap/lm3s9cn5.h>
#elif defined(PART_LM3S9D81)
# include <hw/pinmap/lm3s9d81.h>
#elif defined(PART_LM3S9D90)
# include <hw/pinmap/lm3s9d90.h>
#elif defined(PART_LM3S9D92)
# include <hw/pinmap/lm3s9d92.h>
#elif defined(PART_LM3S9D95)
# include <hw/pinmap/lm3s9d95.h>
#elif defined(PART_LM3S9D96)
# include <hw/pinmap/lm3s9d96.h>
#elif defined(PART_LM3S9DN5)
# include <hw/pinmap/lm3s9dn5.h>
#elif defined(PART_LM3S9DN6)
# include <hw/pinmap/lm3s9dn6.h>
#elif defined(PART_LM3S9G97)
# include <hw/pinmap/lm3s9g97.h>
#elif defined(PART_LM3S9GN5)
# include <hw/pinmap/lm3s9gn5.h>
#elif defined(PART_LM3S9L71)
# include <hw/pinmap/lm3s9l71.h>
#elif defined(PART_LM3S9L97)
# include <hw/pinmap/lm3s9l97.h>
#elif defined(PART_LM3S9U81)
# include <hw/pinmap/lm3s9u81.h>
#elif defined(PART_LM3S9U90)
# include <hw/pinmap/lm3s9u90.h>
#elif defined(PART_LM3S9U92)
# include <hw/pinmap/lm3s9u92.h>
#elif defined(PART_LM3S9U95)
# include <hw/pinmap/lm3s9u95.h>
#elif defined(PART_LM3S9U96)
# include <hw/pinmap/lm3s9u96.h>
#elif defined(PART_LM4F110B2QR)
# include <hw/pinmap/lm4f110b2qr.h>
#elif defined(PART_LM4F110C4QR)
# include <hw/pinmap/lm4f110c4qr.h>
#elif defined(PART_LM4F110E5QR)
# include <hw/pinmap/lm4f110e5qr.h>
#elif defined(PART_LM4F110H5QR)
# include <hw/pinmap/lm4f110h5qr.h>
#elif defined(PART_LM4F111B2QR)
# include <hw/pinmap/lm4f111b2qr.h>
#elif defined(PART_LM4F111C4QR)
# include <hw/pinmap/lm4f111c4qr.h>
#elif defined(PART_LM4F111E5QR)
# include <hw/pinmap/lm4f111e5qr.h>
#elif defined(PART_LM4F111H5QR)
# include <hw/pinmap/lm4f111h5qr.h>
#elif defined(PART_LM4F112C4QC)
# include <hw/pinmap/lm4f112c4qc.h>
#elif defined(PART_LM4F112E5QC)
# include <hw/pinmap/lm4f112e5qc.h>
#elif defined(PART_LM4F112H5QC)
# include <hw/pinmap/lm4f112h5qc.h>
#elif defined(PART_LM4F112H5QD)
# include <hw/pinmap/lm4f112h5qd.h>
#elif defined(PART_LM4F120B2QR)
# include <hw/pinmap/lm4f120b2qr.h>
#elif defined(PART_LM4F120C4QR)
# include <hw/pinmap/lm4f120c4qr.h>
#elif defined(PART_LM4F120E5QR)
# include <hw/pinmap/lm4f120e5qr.h>
#elif defined(PART_LM4F120H5QR)
# include <hw/pinmap/lm4f120h5qr.h>
#elif defined(PART_LM4F121B2QR)
# include <hw/pinmap/lm4f121b2qr.h>
#elif defined(PART_LM4F121C4QR)
# include <hw/pinmap/lm4f121c4qr.h>
#elif defined(PART_LM4F121E5QR)
# include <hw/pinmap/lm4f121e5qr.h>
#elif defined(PART_LM4F121H5QR)
# include <hw/pinmap/lm4f121h5qr.h>
#elif defined(PART_LM4F122C4QC)
# include <hw/pinmap/lm4f122c4qc.h>
#elif defined(PART_LM4F122E5QC)
# include <hw/pinmap/lm4f122e5qc.h>
#elif defined(PART_LM4F122H5QC)
# include <hw/pinmap/lm4f122h5qc.h>
#elif defined(PART_LM4F122H5QD)
# include <hw/pinmap/lm4f122h5qd.h>
#elif defined(PART_LM4F130C4QR)
# include <hw/pinmap/lm4f130c4qr.h>
#elif defined(PART_LM4F130E5QR)
# include <hw/pinmap/lm4f130e5qr.h>
#elif defined(PART_LM4F130H5QR)
# include <hw/pinmap/lm4f130h5qr.h>
#elif defined(PART_LM4F131C4QR)
# include <hw/pinmap/lm4f131c4qr.h>
#elif defined(PART_LM4F131E5QR)
# include <hw/pinmap/lm4f131e5qr.h>
#elif defined(PART_LM4F131H5QR)
# include <hw/pinmap/lm4f131h5qr.h>
#elif defined(PART_LM4F132C4QC)
# include <hw/pinmap/lm4f132c4qc.h>
#elif defined(PART_LM4F132E5QC)
# include <hw/pinmap/lm4f132e5qc.h>
#elif defined(PART_LM4F132H5QC)
# include <hw/pinmap/lm4f132h5qc.h>
#elif defined(PART_LM4F132H5QD)
# include <hw/pinmap/lm4f132h5qd.h>
#elif defined(PART_LM4F210B2QR)
# include <hw/pinmap/lm4f210b2qr.h>
#elif defined(PART_LM4F210C4QR)
# include <hw/pinmap/lm4f210c4qr.h>
#elif defined(PART_LM4F210E5QR)
# include <hw/pinmap/lm4f210e5qr.h>
#elif defined(PART_LM4F210H5QR)
# include <hw/pinmap/lm4f210h5qr.h>
#elif defined(PART_LM4F211B2QR)
# include <hw/pinmap/lm4f211b2qr.h>
#elif defined(PART_LM4F211C4QR)
# include <hw/pinmap/lm4f211c4qr.h>
#elif defined(PART_LM4F211E5QR)
# include <hw/pinmap/lm4f211e5qr.h>
#elif defined(PART_LM4F211H5QR)
# include <hw/pinmap/lm4f211h5qr.h>
#elif defined(PART_LM4F212C4QC)
# include <hw/pinmap/lm4f212c4qc.h>
#elif defined(PART_LM4F212E5QC)
# include <hw/pinmap/lm4f212e5qc.h>
#elif defined(PART_LM4F212H5BB)
# include <hw/pinmap/lm4f212h5bb.h>
#elif defined(PART_LM4F212H5QC)
# include <hw/pinmap/lm4f212h5qc.h>
#elif defined(PART_LM4F212H5QD)
# include <hw/pinmap/lm4f212h5qd.h>
#elif defined(PART_LM4F230E5QR)
# include <hw/pinmap/lm4f230e5qr.h>
#elif defined(PART_LM4F230H5QR)
# include <hw/pinmap/lm4f230h5qr.h>
#elif defined(PART_LM4F231E5QR)
# include <hw/pinmap/lm4f231e5qr.h>
#elif defined(PART_LM4F231H5QR)
# include <hw/pinmap/lm4f231h5qr.h>
#elif defined(PART_LM4F232E5QC)
# include <hw/pinmap/lm4f232e5qc.h>
#elif defined(PART_LM4F232H5BB)
# include <hw/pinmap/lm4f232h5bb.h>
#elif defined(PART_LM4F232H5QC)
# include <hw/pinmap/lm4f232h5qc.h>
#elif defined(PART_LM4F232H5QD)
# include <hw/pinmap/lm4f232h5qd.h>
#elif defined(PART_LM4FS1AH5BB)
# include <hw/pinmap/lm4fs1ah5bb.h>
#elif defined(PART_LM4FS1GE5BB)
# include <hw/pinmap/lm4fs1ge5bb.h>
#elif defined(PART_LM4FS1GH5BB)
# include <hw/pinmap/lm4fs1gh5bb.h>
#elif defined(PART_LM4FS99H5BB)
# include <hw/pinmap/lm4fs99h5bb.h>
#elif defined(PART_LM4FSXAH5BB)
# include <hw/pinmap/lm4fsxah5bb.h>
#elif defined(PART_LM4FSXLH5BB)
# include <hw/pinmap/lm4fsxlh5bb.h>
#else
# error No part defined!
#endif

#endif // __PIN_MAP_H__
