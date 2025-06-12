#include "sf33rd/Source/Game/bg150.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/ta_sub.h"
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

void bg1502_sync_common() {
    switch (bgw_ptr->r_no_0) {
    case 0:
        bgw_ptr->r_no_0++;
        bgw_ptr->fam_no = 2;
        bgw_ptr->old_pos_x = bgw_ptr->xy[0].disp.pos = bgw_ptr->pos_x_work = 0x200;
        bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
        bgw_ptr->zuubun = 0;
        bgw_ptr->y_limit = bgw_ptr->y_limit2 = 0xF0;
        bgw_ptr->pos_y_work = 0;
        bgw_ptr->xy[1].disp.pos = 0;
        bgw_ptr->speed_x = 0xF000;
        bgw_ptr->speed_y = 0xF000;
        sync_fam_set3(bgw_ptr->fam_no);
        break;

    case 1:
        bg_x_move_check();
        bg_y_move_check();
        sync_fam_set3(bgw_ptr->fam_no);
        break;
    }
}
