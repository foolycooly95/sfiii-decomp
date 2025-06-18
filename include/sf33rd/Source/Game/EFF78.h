#ifndef EFF78_H
#define EFF78_H

#include "types.h"

extern const s16 eff78_data_tbl[4];   // size: 0x8, address: 0x50BFB8
extern const s16 crow_char_tbl[3][3]; // size: 0x12, address: 0x50BFC0

s32 effect_78_init();

#endif
