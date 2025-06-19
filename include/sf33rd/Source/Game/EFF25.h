#ifndef EFF25_H
#define EFF25_H

#include "structs.h"
#include "types.h"

extern const s16 eff25_data_0000[16]; // size: 0x20, address: 0x509A90
extern const s16 *scr_obj_data25[1];  // size: 0x4, address: 0x572DBC

void effect_25_move(WORK_Other *ewk);
void eff25_char_set(WORK_Other *ewk);
void piece_set(WORK_Other *ewk);
void eff25_00(WORK_Other *ewk);
void eff25_02(WORK_Other *ewk);
void eff25_04(WORK_Other *ewk);
void eff25_06(WORK_Other *ewk);
void eff25_08(WORK_Other *ewk);
s32 effect_25_init(s8 num);

#endif
