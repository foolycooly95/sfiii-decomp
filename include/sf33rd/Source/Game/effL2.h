#ifndef EFFL2_H
#define EFFL2_H

#include "structs.h"
#include "types.h"

extern const s8 effl2_dir_tbl[2][16]; // size: 0x20, address: 0x51B3F0

void effl2_dir_check(WORK_Other *ewk);
s32 effect_L2_init();

#endif
