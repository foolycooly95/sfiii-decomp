#ifndef EFF60_H
#define EFF60_H

#include "types.h"

extern const s16 flash_0000[10];       // size: 0x14, address: 0x50B3D0
extern const s16 flash_0001[10];       // size: 0x14, address: 0x50B3F0
extern const s16 flash_0002[10];       // size: 0x14, address: 0x50B410
extern const s16 *flash_obj_data61[3]; // size: 0xC, address: 0x572F08

s32 effect_60_init(s16 type);

#endif
