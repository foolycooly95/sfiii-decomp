#include "sf33rd/Source/Game/bg080.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

void BG080() {
    bgw_ptr = &bg_w.bgw[1];
    bg0802();
    bgw_ptr = bg_w.bgw;
    bg0801();
    bgw_ptr = &bg_w.bgw[2];
    bg080_sync_common();
    bgw_ptr = &bg_w.bgw[5];
    bg080_sync_common();
    bgw_ptr = &bg_w.bgw[6];
    bg080_sync_common();
    zoom_ud_check();
    bg_pos_hosei2();
    Bg_Family_Set();
}

void bg0801() {
    void (* bg0801_jmp[2])() = { bg0801_init00, bg_move_common };
    bg0801_jmp[bgw_ptr->r_no_0]();
}

void bg0801_init00() {
    bgw_ptr->r_no_0++;
    bgw_ptr->old_pos_x = bgw_ptr->xy[0].disp.pos = bgw_ptr->pos_x_work = 0x200;
    bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
    bgw_ptr->zuubun = 0;
}

void bg0802() {
    void (* bg0802_jmp[2])() = { bg0802_init00, bg_base_move_common };
    bg0802_jmp[bgw_ptr->r_no_0]();
}

void bg0802_init00() {
    bgw_ptr->r_no_0++;
    bgw_ptr->old_pos_x = bgw_ptr->xy[0].disp.pos = bgw_ptr->pos_x_work = 0x200;
    bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
    bgw_ptr->zuubun = 0;
    effect_05_init();
    effect_06_init();
    effect_44_init(0);
    effect_21_init(0);
}

void bg080_sync_common() {
    void (* bg080_sync_jmp[2])() = { bg080_sync_init, bg080_sync_move };
    bg080_sync_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", bg080_sync_init);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", bg080_sync_move);
