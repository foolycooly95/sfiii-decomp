#ifndef EFF44_H
#define EFF44_H

#include "structs.h"
#include "types.h"

extern const s16 scr_obj_num44[10];   // size: 0x14, address: 0x50A3A0
extern const s16 eff44_data_tbl0[16]; // size: 0x20, address: 0x50A3C0
extern const s16 eff44_data_tbl1[8];  // size: 0x10, address: 0x50A3E0
extern const s16 eff44_data_tbl2[16]; // size: 0x20, address: 0x50A3F0
extern const s16 eff44_data_tbl3[56]; // size: 0x70, address: 0x50A410
extern const s16 eff44_data_tbl4[8];  // size: 0x10, address: 0x50A480
extern const s16 eff44_data_tbl5[24]; // size: 0x30, address: 0x50A490
extern const s16 eff44_data_tbl6[24]; // size: 0x30, address: 0x50A4C0
extern const s16 eff44_data_tbl7[40]; // size: 0x50, address: 0x50A4F0
extern const s16 eff44_data_tbl8[32]; // size: 0x40, address: 0x50A540
extern const s16 eff44_data_tbl9[16]; // size: 0x20, address: 0x50A580
extern const s16 *scr_obj_data44[10]; // size: 0x28, address: 0x572E70

s32 effect_44_init(s16 type);

#endif
