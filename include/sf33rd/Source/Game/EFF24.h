#ifndef EFF24_H
#define EFF24_H

#include "types.h"
#include "structs.h"

extern const s16 eff24_data_tbl[56]; // size: 0x70, address: 0x509830
extern const s16 eff24_quake_index_tbl[111]; // size: 0xDE, address: 0x5098A0
extern const s32 eff24_quake_speed_y_tbl[4][8]; // size: 0x80, address: 0x509980
extern const s32 eff24_quake_speed_x_tbl[4][8]; // size: 0x80, address: 0x509A00
extern const s16 dog24_x_data[8]; // size: 0x10, address: 0x509A80

void effect_24_move(WORK_Other* ewk);
void eff24_quake_sub(WORK_Other* ewk);
void dog24_data_set(WORK_Other* ewk);
void eff24_sp_data_set(WORK_Other* ewk);
s32 effect_24_init();

#endif
