#ifndef EFF19_H
#define EFF19_H

#include "types.h"
#include "structs.h"

extern const s16 eff19_data_tbl[14]; // size: 0x1C, address: 0x509370
extern const s8 eff19_wait_tbl[16]; // size: 0x10, address: 0x509390
extern const s8 effect_19_s_tbl[16]; // size: 0x10, address: 0x5093A0
extern const s8 effect_19_m_tbl[16]; // size: 0x10, address: 0x5093B0
extern const s8 effect_19_l_tbl[16]; // size: 0x10, address: 0x5093C0

void effect_19_move(WORK_Other* ewk);
void eff19_quake_sub(WORK_Other *ewk);
s32 effect_19_init();

#endif
