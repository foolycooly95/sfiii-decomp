#ifndef EFF22_H
#define EFF22_H

#include "types.h"
#include "structs.h"

extern const s16 snow_pos_tbl[12][2]; // size: 0x30, address: 0x509420
extern const s32 snow_sp[4][12][4]; // size: 0x300, address: 0x509450

s32 effect_22_init();

#endif
