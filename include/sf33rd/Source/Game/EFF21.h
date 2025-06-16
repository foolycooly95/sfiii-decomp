#ifndef EFF21_H
#define EFF21_H

#include "types.h"

extern const s16 eff21_num[1]; // size: 0x2, address: 0x5093D0
extern const s32 eff21_sp_tbl[1][2]; // size: 0x8, address: 0x5093D8
extern const s16 eff21_data_tbl_00[27]; // size: 0x36, address: 0x5093E0
extern const s16 * eff21_data_adrs[1]; // size: 0x4, address: 0x572DB8

s32 effect_21_init(s16 sync_index);

#endif
