#ifndef BG_SUB_H
#define BG_SUB_H

#include "structs.h"
#include "types.h"

void suzi_sync_pos_set(WORK_Other *ewk);
void Bg_Family_Set_appoint(s32 num_of_bg);
void bg_pos_hosei_sub2(s16 bg_no);
void bg_work_clear();
void compel_bg_init_position();
void bg_etc_write(s16 type);

#endif // BG_SUB_H
