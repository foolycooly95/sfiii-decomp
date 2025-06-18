#ifndef EFF06_H
#define EFF06_H

#include "types.h"

extern const s16 scr_obj_num6[22];    // size: 0x2C, address: 0x506920
extern const s16 st0000_data_tbl[8];  // size: 0x10, address: 0x506950
extern const s16 st0100_data_tbl[48]; // size: 0x60, address: 0x506960
extern const s16 st0B00_data_tbl[32]; // size: 0x40, address: 0x5069C0
extern const s16 st0200_data_tbl[32]; // size: 0x40, address: 0x506A00
extern const s16 st0A00_data_tbl[48]; // size: 0x60, address: 0x506A40
extern const s16 st0400_data_tbl[24]; // size: 0x30, address: 0x506AA0
extern const s16 st0500_data_tbl[56]; // size: 0x70, address: 0x506AD0
extern const s16 st1300_data_tbl[56]; // size: 0x70, address: 0x506B40
extern const s16 st0700_data_tbl[16]; // size: 0x20, address: 0x506BB0
extern const s16 st0800_data_tbl[88]; // size: 0xB0, address: 0x506BD0
extern const s16 st0900_data_tbl[24]; // size: 0x30, address: 0x506C80
extern const s16 st0c00_data_tbl[24]; // size: 0x30, address: 0x506CB0
extern const s16 st0e00_data_tbl[8];  // size: 0x10, address: 0x506CE0
extern const s16 st1000_data_tbl[16]; // size: 0x20, address: 0x506CF0
extern const s16 st1100_data_tbl[32]; // size: 0x40, address: 0x506D10
extern const s16 st1400_data_tbl[8];  // size: 0x10, address: 0x506D50
extern const s16 *scr_obj_data6[22];  // size: 0x58, address: 0x572CD0

s32 effect_06_init();

#endif
