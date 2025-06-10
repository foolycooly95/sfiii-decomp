#include "common.h"
#include "sf33rd/Source/Game/bg_data.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg000", BG000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg000", bg0001);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg000", bg0001_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg000", bg0000);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg000", bg0000_init00);

void bg0000_init00(void) {
    bgw_ptr->r_no_0++;
    bgw_ptr->old_pos_x = bgw_ptr->xy[0].disp.pos = bgw_ptr->pos_x_work = 0x1D0;
    bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
    bgw_ptr->zuubun = 0;

    if (Gill_Appear_Flag) {
        bgw_ptr->r_no_0 = 2;
        bg_app = 0;
        return;
    }

    bg_app = 1;

    if (plw->player_number == 0) {
        bgw_ptr->u_line = 0;
        bgw_ptr->xy[0].cal += bgw_ptr->speed_x * 0xE0;
        bgw_ptr->old_pos_x = bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
        return;
    }

    bgw_ptr->u_line = 1;
    bgw_ptr->xy[0].cal -= bgw_ptr->speed_x * 0xC0;
    bgw_ptr->old_pos_x = bgw_ptr->hos_xy[0].cal = bgw_ptr->wxy[0].cal = bgw_ptr->xy[0].cal;
}

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg000", bg0000_demo);

void bg0000_demo(void) {
    switch (bgw_ptr->r_no_1) {
    case 0:
        bgw_ptr->r_no_1 += 1;
        bgw_ptr->free = 0x1E;
        break;

    case 1:
        bgw_ptr->free -= 1;

        if (bgw_ptr->free <= 0) {
            bgw_ptr->r_no_1 += 1;
        }

        break;

    case 2:
        if (bgw_ptr->u_line) {
            bgw_ptr->wxy[0].cal += bgw_ptr->speed_x;
            if (bgw_ptr->wxy[0].disp.pos > 0x1D0) {
                bgw_ptr->r_no_1 += 1;
                bgw_ptr->wxy[0].disp.pos = 0x1D0;
                bgw_ptr->wxy[0].disp.low = 0;
                bgw_ptr->xy[0].cal = bgw_ptr->wxy[0].cal;
                bgw_ptr->old_pos_x = 0x1D0;
                return;
            }
        } else {
            bgw_ptr->wxy[0].cal -= bgw_ptr->speed_x;
            if (bgw_ptr->wxy[0].disp.pos < 0x1D0) {
                bgw_ptr->r_no_1 += 1;
                bgw_ptr->wxy[0].disp.pos = 0x1D0;
                bgw_ptr->wxy[0].disp.low = 0;
                bgw_ptr->xy[0].cal = bgw_ptr->wxy[0].cal;
                bgw_ptr->old_pos_x = 0x1D0;
                return;
            }
        }
        break;

    case 3:
        bg_app = 0;
        bgw_ptr->r_no_0 = 2;
        break;
    }
}
