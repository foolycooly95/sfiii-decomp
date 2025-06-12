#include "sf33rd/Source/Game/bg150.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

void BG150() {
    bgw_ptr = &bg_w.bgw[1];
    bg1502();
    bgw_ptr = bg_w.bgw;
    bg1501();
    bgw_ptr = &bg_w.bgw[2];
    bg1502_sync_common();
    zoom_ud_check();
    bg_pos_hosei2();
    Bg_Family_Set();
}

void bg1501() {
    void (* bg1501_jmp[2])() = { bg1501_init00, bg_move_common };
    bg1501_jmp[bgw_ptr->r_no_0]();
}

void bg1501_init00() {
    bgw_ptr->r_no_0++;
    bgw_ptr->old_pos_x = bgw_ptr->xy[0].disp.pos = bgw_ptr->pos_x_work = 0x200;
    bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
    bgw_ptr->zuubun = 0;
}

void bg1502() {
    void (* bg1502_jmp[2])() = { bg1502_init00, bg_base_move_common };
    bg1502_jmp[bgw_ptr->r_no_0]();
}

void bg1502_init00() {
    bgw_ptr->r_no_0++;
    bgw_ptr->old_pos_x = bgw_ptr->xy[0].disp.pos = bgw_ptr->pos_x_work = 0x200;
    bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
    bgw_ptr->zuubun = 0;
    effect_05_init();
    effect_12_init(5);
    effect_06_init();
    effect_44_init(8);
    effect_25_init(0);
    effect_94_init(0);
    effect_94_init(1);
    effect_I4_init();
    effect_85_init();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg150", bg1502_sync_common);
