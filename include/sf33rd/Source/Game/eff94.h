#ifndef EFF94_H
#define EFF94_H

#include "types.h"
#include "structs.h"

extern const s16 eff94_data_tbl[5][10]; // size: 0x64, address: 0x50C0D0
extern const s16 eff94_2000_tbl[8]; // size: 0x10, address: 0x50C140
extern const s8 eff94_2000_1_tbl[16]; // size: 0x10, address: 0x50C150
extern const s16 eff94_3000_tbl[4][3]; // size: 0x18, address: 0x50C160

void eff94_0000();
void eff94_1000();
void eff94_2000();
void eff94_2000_0();
void eff94_2000_1();
void eff94_2000_2();
void eff94_2000_3();
void eff94_2000_4();
void eff94_3000();
void eff94_3000_0();
void eff94_3000_4();
void eff94_4000();
s32 effect_94_init(u8 type94);

#endif
