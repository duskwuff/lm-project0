#ifndef _CRC_H
#define _CRC_H

#include <stdint.h>

extern uint8_t  crc7_syndrome_table[256];
extern uint16_t crc16_syndrome_table[256];

uint8_t  crc7_update(uint8_t *crc, uint8_t val);
uint16_t crc16_update(uint16_t *crc, uint8_t val);

#endif
