#ifndef EFF11_H
#define EFF11_H

#include "types.h"
#include "structs.h"

extern const s16 eff11_data_tbl[24]; // size: 0x30, address: 0x5072E0
extern const s16 eff11_quake_index_tbl[111]; // size: 0xDE, address: 0x507310
extern const s32 eff11_quake_speed_y_tbl[2][8]; // size: 0x40, address: 0x5073F0
extern const s32 eff11_quake_speed_y_tbl2[2][4]; // size: 0x20, address: 0x507430
extern const s32 eff11_quake_speed_x_tbl[2][8]; // size: 0x40, address: 0x507450

void effect_11_move(WORK_Other* ewk);
void eff11_quake_sub(WORK_Other *ewk);
void quake_level_middle(WORK_Other* ewk);
void quake_level_large(WORK_Other* ewk);
s32 effect_11_init();

#endif
