#ifndef EFF12_H
#define EFF12_H

#include "types.h"

extern const s16 scr_obj_num12[6]; // size: 0xC, address: 0x5074E0
extern const s16 eff12_data_tbl0[8]; // size: 0x10, address: 0x5074F0
extern const s16 eff12_data_tbl1[8]; // size: 0x10, address: 0x507500
extern const s16 eff12_data_tbl2[16]; // size: 0x20, address: 0x507510
extern const s16 eff12_data_tbl3[24]; // size: 0x30, address: 0x507530
extern const s16 eff12_data_tbl4[24]; // size: 0x30, address: 0x507560
extern const s16 eff12_data_tbl5[16]; // size: 0x20, address: 0x507590
extern const s16 * scr_obj_data12[6]; // size: 0x18, address: 0x572DA0

s32 effect_12_init(s16 type);

#endif
