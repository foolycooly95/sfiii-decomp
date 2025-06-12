#include "sf33rd/Source/Game/bg120.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

void BG120() {
    bgw_ptr = &bg_w.bgw[1];
    bg1202();
    bgw_ptr = bg_w.bgw;
    bg1201();
    bgw_ptr = &bg_w.bgw[2];
    bg_fam0C00();
    bgw_ptr = &bg_w.bgw[6];
    bg_fam0C00();
    bgw_ptr = &bg_w.bgw[5];
    bg_fam0C00();
    zoom_ud_check();
    bg_pos_hosei2();
    Bg_Family_Set();
}

void bg1201() {
    void (* bg1201_jmp[2])() = { bg1201_init00, bg_move_common };
    bg1201_jmp[bgw_ptr->r_no_0]();
}

void bg1201_init00() {
    bgw_ptr->r_no_0++;
    bgw_ptr->old_pos_x = bgw_ptr->xy[0].disp.pos = bgw_ptr->pos_x_work = 0x200;
    bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
    bgw_ptr->zuubun = 0;
}

void bg1202() {
    void (* bg1202_jmp[2])() = { bg1202_init00, bg_base_move_common };
    bg1202_jmp[bgw_ptr->r_no_0]();
}

void bg1202_init00() {
    bgw_ptr->r_no_0++;
    bgw_ptr->old_pos_x = bgw_ptr->xy[0].disp.pos = bgw_ptr->pos_x_work = 0x200;
    bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
    bgw_ptr->zuubun = 0;
    effect_05_init();
    effect_06_init();
    effect_55_init();
    effect_12_init(2);
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg120", bg_fam0C00);
