#ifndef BG_SUB_H
#define BG_SUB_H

#include "structs.h"
#include "types.h"

void bg_chase_move();
void bg_base_x_move_check();
void bg_base_y_move_check();
void bg_x_move_check();
void bg_y_move_check();
void zoom_ud_check();
void suzi_offset_set(WORK_Other *ewk);
void suzi_sync_pos_set(WORK_Other *ewk);
void Bg_Family_Set();
void Bg_Family_Set_appoint(s32 num_of_bg);
void Bg_Family_Set_2();
void Bg_Family_Set_2_appoint(s32 num_of_bg);
void bg_pos_hosei_sub2(s16 bg_no);
void bg_pos_hosei_sub3(s16 bg_no);
void bg_pos_hosei2();
void bg_work_clear();
void compel_bg_init_position();
void bg_base_move_common();
void bg_move_common();
void bg_etc_write(s16 type);

#endif // BG_SUB_H
