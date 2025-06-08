#include "sf33rd/Source/Game/appear.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/SE.h"
#include "sf33rd/Source/Game/WORK_SYS.h"
#include "sf33rd/Source/Game/workuser.h"

s8 Appear_car_stop[] = {0, 0};
s8 Appear_hv[] = {0, 0};
s8 Appear_free[] = {0, 0};
s8 Appear_flag[] = {0, 0};
s16 app_counter[] = {0, 0};
s16 appear_work[] = {0, 0};
s16 Appear_end;

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", appear_work_clear);

void appear_work_clear(void) {
    Appear_end = 0;
    Appear_flag[0] = 0;
    Appear_flag[1] = 0;
    Appear_free[0] = 0;
    Appear_free[1] = 0;
    bg_stop = 0;
    bg_app_stop = 0;
}

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", home_visitor_check);

s32 home_visitor_check(PLW* wk) {
    s8 hv_type;
    s16 pl_num;

    hv_type = 0;

    if (wk->wu.id) {
        pl_num = plw[0].player_number;
    } else {
        pl_num = plw[1].player_number;
    }

    if (Play_Type) {
        if (Champion == wk->wu.id && wk->player_number == pl_num && pl_num != 8) {
            hv_type = 1;
        }
    } else if (wk->wu.operator && wk->player_number == pl_num && pl_num != 8) {
        hv_type = 1;
    }

    return hv_type;
}

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", appear_data_set);

void appear_data_set(PLW* wk, APPEAR_DATA* dtbl) {
    if (wk->wu.id) {
        wk->wu.xyz[0].disp.pos = bg_w.bgw[1].pos_x_work - dtbl->hx;
        wk->wu.xyz[1].disp.pos = dtbl->hy;
        wk->wu.rl_flag = (s8)((dtbl->rl + 1) & 1);
        wk->wu.routine_no[4] = dtbl->rno;
        Appear_flag[0] = dtbl->ixod;
        wk->wu.char_index = dtbl->char_index;
    } else {
        wk->wu.xyz[0].disp.pos = bg_w.bgw[1].pos_x_work + dtbl->hx;
        wk->wu.xyz[1].disp.pos = dtbl->hy;
        wk->wu.rl_flag = dtbl->rl;
        wk->wu.routine_no[4] = dtbl->rno;
        Appear_flag[1] = dtbl->ixod;
        wk->wu.char_index = dtbl->char_index;
    }
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", appear_data_init_set);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", appear_player);

void appear_player(PLW* wk) {
    void (*appear_jmp_tbl[42])() = {
        appear_player,
        Appear_00000,
        Appear_01000,
        Appear_03000,
        Appear_04000,
        Appear_05000,
        Appear_06000,
        Appear_07000,
        Appear_08000,
        Appear_09000,
        Appear_10000,
        Appear_11000,
        Appear_12000,
        Appear_13000,
        Appear_14000,
        Appear_15000,
        Appear_16000,
        Appear_17000,
        Appear_18000,
        Appear_19000,
        Appear_20000,
        Appear_21000,
        Appear_22000,
        Appear_23000,
        Appear_24000,
        Appear_25000,
        Appear_26000,
        Appear_28000,
        Appear_29000,
        animal_decide,
        don_appear_check,
        Appear_30000,
        Appear_31000,
        Appear_32000,
        Appear_33000,
        Appear_34000,
        Appear_36000,
        Appear_37000,
        Appear_38000,
        Appear_39000,
        Appear_41000,
        gouki_appear
    };
    appear_jmp_tbl[(short)wk->wu.routine_no[4]](wk);
}

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_00000);

void Appear_00000(PLW* wk) {
    Appear_end++;
    wk->wu.routine_no[2] = 1;
    wk->wu.routine_no[3] = 0;
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_01000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_03000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_04000);

// void Appear_04000(PLW* wk) {
//     switch (wk->wu.routine_no[3]) {
//     case 0:
//         wk->wu.routine_no[3]++;
//         bg_app_stop = 1;
//         wk->wu.disp_flag = 1;
//         set_char_move_init(&wk->wu, 9, 0x10);
//         return;

//     case 1:
//         char_move(&wk->wu);
//         if (wk->wu.cg_type == 9) {
//             wk->wu.routine_no[3]++;
//             app_counter[wk->wu.id] = 0x1C;
//             if (wk->wu.id) {
//                 cal_all_speed_data(&wk->wu, app_counter[wk->wu.id], bg_w.bgw[1].pos_x_work + 0x58, 0, 0, 1);
//                 return;
//             }
//             cal_all_speed_data(&wk->wu, app_counter[wk->wu.id], bg_w.bgw[1].pos_x_work - 0x58, 0, 0, 1);
//             return;
//         }
//         break;


//     case 2:
//         char_move(&wk->wu);
//         (*&app_counter[wk->wu.id])--;
//         if (*&app_counter[wk->wu.id] <= 0) {
//             wk->wu.routine_no[3]++;
//             set_char_move_init(&wk->wu, 9, 0x11);
//             if (wk->wu.id) {
//                 wk->wu.xyz[0].disp.pos = bg_w.bgw[1].pos_x_work + 0x58;
//             } else {
//                 wk->wu.xyz[0].disp.pos = bg_w.bgw[1].pos_x_work - 0x58;
//             }
//             wk->wu.xyz[0].disp.low = 0;
//             wk->wu.xyz[1].cal = 0;
//             return;
//         }
//         add_x_sub(&wk->wu);
//         add_y_sub(&wk->wu);
//         return;

//     case 3:
//         char_move(&wk->wu);
//         if ((wk->wu.cg_type) == 0xFF) {
//             wk->wu.routine_no[2] = 1;
//             wk->wu.routine_no[3] = 0;
//             Appear_end++;
//         }
//         break;
//     }
// }

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_05000);

// void Appear_05000(WORK* wk) {
//     switch (wk->routine_no[3]) {
//     case 0:
//         wk->routine_no[3]++;
//         wk->disp_flag = 1;
//         set_char_move_init(wk, 9, 0x17);
//         bg_app_stop = 1;
//         appear_work[wk->id] = 0x1C;
//         return;

//     case 1:
//         (*&appear_work[wk->id])--;

//         if (*&appear_work[wk->id] < 0) {
//             wk->routine_no[3]++;
//             *&appear_work[wk->id] = 0x1B;

//             if (wk->id) {
//                 cal_all_speed_data(wk, *&appear_work[wk->id], bg_w.bgw[1].pos_x_work + 0x60, 0, 2, 0);
//                 return;
//             }
//             cal_all_speed_data(wk, *&appear_work[wk->id], bg_w.bgw[1].pos_x_work - 0x60, 0, 2, 0);
//         }
//         break;

//     case 2:
//         char_move(wk);
//         (*&appear_work[wk->id])--;

//         if (*&appear_work[wk->id] <= 0) {
//             wk->routine_no[3]++;
//             set_char_move_init2(wk, 9, 0x17, 9, 0);

//             if (wk->id) {
//                 wk->xyz[0].disp.pos = bg_w.bgw[1].pos_x_work + 0x58;
//                 return;
//             }
//             wk->xyz[0].disp.pos = bg_w.bgw[1].pos_x_work - 0x58;
//             return;
//         }
//         add_x_sub(wk);
//         return;

//     case 3:
//         char_move(wk);
//         if ((wk->cg_type) == 9) {
//             wk->routine_no[3]++;
//             wk->rl_flag ^= 1; // Toggle flag
//             return;
//         }
//         break;

//     case 4:
//         char_move(wk);
//         if ((wk->cg_type) == 0xFF) {
//             wk->routine_no[2] = 1;
//             wk->routine_no[3] = 0;
//             Appear_end++;
//         }
//         break;
//     }
// }

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_06000);

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", appear_data);

const APPEAR_DATA appear_data[] = {
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x0000, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x0100, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x0200, 0x0000 },
    { 0x84FF, 0x0000, 0x84FF, 0x00, 0x01, 0x0300, 0x0C00 },
    { 0x00FF, 0x9000, 0x00FF, 0x00, 0x01, 0x0400, 0x0000 },
    { 0x2001, 0x0000, 0x2001, 0x01, 0x00, 0x0500, 0x0000 },
    { 0x08FF, 0x0000, 0x08FF, 0x00, 0x01, 0x0600, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x0700, 0x0000 },
    { 0xC2FF, 0x0000, 0xC2FF, 0x00, 0x01, 0x0800, 0x0000 },
    { 0xA8FF, 0xC800, 0xA8FF, 0x00, 0x01, 0x0900, 0x1000 },
    { 0x28FF, 0x0000, 0x20FF, 0x00, 0x01, 0x0A00, 0x1000 },
    { 0x9AFF, 0x0000, 0x9AFF, 0x00, 0x01, 0x0100, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x0B00, 0x0000 },
    { 0xEFFF, 0x0000, 0xEFFF, 0x00, 0x01, 0x0100, 0x0000 },
    { 0xA8FF, 0x8001, 0xA8FF, 0x00, 0x01, 0x0D00, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x0E00, 0x0000 },
    { 0x80FF, 0x0000, 0x80FF, 0x00, 0x01, 0x0F00, 0x0000 },
    { 0xF0FE, 0x0000, 0xD0FE, 0x00, 0x01, 0x0C00, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x1000, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x1100, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x1500, 0x0000 },
    { 0xD0FF, 0x0000, 0xD0FF, 0x00, 0x01, 0x1200, 0x0000 },
    { 0x88FF, 0x0000, 0x88FF, 0x00, 0x01, 0x0100, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x0300, 0x1700 },
    { 0x0001, 0x0000, 0x0001, 0x00, 0x01, 0x1400, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x1600, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x1700, 0x0000 },
    { 0xA0FF, 0x0000, 0xA0FF, 0x00, 0x01, 0x1800, 0x0000 },
    { 0xA0FF, 0x0000, 0xA0FF, 0x00, 0x01, 0x1900, 0x0000 },
    { 0xA800, 0x5000, 0xA800, 0x00, 0x00, 0x1A00, 0x0000 },
    { 0xF800, 0x0000, 0xF800, 0x00, 0x00, 0x1B00, 0x0000 },
    { 0x90FF, 0x0000, 0x90FF, 0x00, 0x01, 0x1C00, 0x0000 },
    { 0x91FF, 0x0000, 0x91FF, 0x00, 0x01, 0x0100, 0x0000 },
    { 0xD0FF, 0x0000, 0xD0FF, 0x00, 0x01, 0x0300, 0x1200 },
    { 0xA0FF, 0x0000, 0xA0FF, 0x00, 0x01, 0x0300, 0x1700 },
    { 0xCBFF, 0x0000, 0xCBFF, 0x00, 0x01, 0x0300, 0x1500 },
    { 0xCBFF, 0x0000, 0xCBFF, 0x00, 0x01, 0x0300, 0x1600 },
    { 0xB8FF, 0x0000, 0xB8FF, 0x00, 0x01, 0x2600, 0x1400 },
    { 0xACFF, 0x0000, 0xACFF, 0x00, 0x01, 0x0300, 0x1600 },
    { 0xACFF, 0x0000, 0xACFF, 0x00, 0x01, 0x0300, 0x1600 },
    { 0x00FF, 0x0000, 0x00FF, 0x00, 0x01, 0x1D00, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x1E00, 0x0000 },
    { 0xC0FF, 0x0000, 0xC0FF, 0x00, 0x01, 0x1F00, 0x0000 },
    { 0xFEFE, 0x0000, 0xFEFE, 0x00, 0x01, 0x2000, 0x0000 },
    { 0x00FF, 0x0000, 0x00FF, 0x00, 0x01, 0x2100, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x2200, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x2300, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x0300, 0x1000 },
    { 0xE8FF, 0x0000, 0xE8FF, 0x00, 0x01, 0x2400, 0x0000 },
    { 0xE8FF, 0x0000, 0xE8FF, 0x00, 0x01, 0x2500, 0x0000 },
    { 0x40FE, 0x0000, 0x40FE, 0x00, 0x01, 0x2700, 0x0000 },
    { 0xB8FF, 0x0000, 0xB8FF, 0x00, 0x01, 0x0300, 0x1100 },
    { 0x08FF, 0x0000, 0x08FF, 0x00, 0x01, 0x2800, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x2900, 0x0000 },
    { 0xA8FF, 0x0000, 0xA8FF, 0x00, 0x01, 0x0300, 0x1100 },
};

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_07000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_08000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", sean_appear_check);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_09000);

// void Appear_09000(PLW* wk) {
//     switch (wk->wu.routine_no[3]) {
//     case 0:
//         wk->wu.routine_no[3]++;
//         wk->wu.disp_flag = 1;
//         set_char_move_init(&wk->wu, 9, 0x10);
//         bg_app_stop = 1;
//         return;

//     case 1:
//         char_move(&wk->wu);
//         if (wk->wu.cg_type == 0xFF) {
//             wk->wu.routine_no[3]++;
//             Appear_free[wk->wu.id] = 1;
//             app_counter[wk->wu.id] = 0x20;
//             return;
//         }
//         break;

//     case 2:
//         (*(&app_counter[wk->wu.id]))--;
//         if (*(&app_counter[wk->wu.id]) < 0) {
//             wk->wu.routine_no[3]++;
//             set_char_move_init(&wk->wu, 9, 0x11);
//             wk->wu.mvxy.a[1].sp = -0xB0000;
//             wk->wu.mvxy.d[1].sp = -0x6000;
//             return;
//         }
//         break;

//     case 3:
//         char_move(&wk->wu);
//         add_y_sub(&wk->wu);
//         if (wk->wu.xyz[1].disp.pos <= 0) {
//             wk->wu.routine_no[3]++;
//             wk->wu.xyz[1].cal = 0;
//             set_char_move_init(&wk->wu, 9, 0x12);
//             Appear_end++;
//             return;
//         }
//         break;

//     case 4:
//         char_move(&wk->wu);
//         if (wk->wu.cg_type == 0xFF) {
//             wk->wu.routine_no[2] = 1;
//             wk->wu.routine_no[3] = 0;
//         }
//         break;
//     }
// }

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_10000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_11000);

// void Appear_11000(PLW* wk) {
//     switch (wk->wu.routine_no[3]) {
//     case 0:
//         wk->wu.routine_no[3]++;
//         bg_app_stop = 1;
//         *&app_counter[wk->wu.id] = 0x50;
//         set_char_move_init(&wk->wu, 0, 0);
//         break;

//     case 1:
//         char_move(&wk->wu);
//         (*&app_counter[wk->wu.id])--;
//         if (*&app_counter[wk->wu.id] < 0) {
//             wk->wu.routine_no[2] = 1;
//             wk->wu.routine_no[3] = 1;
//             Appear_end++;
//             if (Demo_Flag != 0) {
//                 SsRequestPan(0x2A9, 0x40, 0x40, 0, 2);
//             }
//         }
//     }
// }

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_12000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_13000);

// void Appear_13000(PLW* wk) {
//     switch (wk->wu.routine_no[3]) {
//     case 0:
//         wk->wu.routine_no[3] += 1;
//         wk->wu.disp_flag = 1;
//         bg_app_stop = 1;
//         set_char_move_init2(&wk->wu, 9, 0x3D, 4, 0);
//         wk->wu.mvxy.a[1].sp = 0x78000;
//         wk->wu.mvxy.d[1].sp = -0x3000;
//         wk->wu.kage_flag = 0;
//         return;

//     case 1:
//         // Do nothing

//     case 2:
//         char_move(&wk->wu);
//         add_y_sub(&wk->wu);
//         if (wk->wu.xyz[1].disp.pos < 0) {
//             wk->wu.routine_no[3] += 1;
//             set_char_move_init(&wk->wu, 9, 0x3E);
//             wk->wu.xyz[1].cal = 0;
//             Appear_end += 1;
//             return;
//         }
//         break;

//     case 3:
//         char_move(&wk->wu);
//         if (wk->wu.cg_type == 0xFF) {
//             wk->wu.routine_no[2] = 1;
//             wk->wu.routine_no[3] = 0;
//         }
//         break;
//     }
// }

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_14000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_15000);

// void Appear_15000(PLW* wk) {
//     switch (wk->wu.routine_no[3]) {
//     case 0:
//         wk->wu.routine_no[3] += 1;
//         bg_app_stop = 1;
//         wk->wu.disp_flag = 1;
//         set_char_move_init(&wk->wu, 9, 8);
//         effect_97_init(&wk->wu);
//         return;

//     case 1:
//         char_move(&wk->wu);
//         switch (wk->wu.cg_type) {
//         case 0x2:
//             wk->wu.cg_type = 0;
//             Sound_SE(0x10A);
//             return;

//         case 0x3:
//             wk->wu.cg_type = 0;
//             Sound_SE(0x10B);
//             return;

//         case 0xFF:
//             wk->wu.routine_no[2] = 1;
//             wk->wu.routine_no[3] = 0;
//             Appear_end += 1;
//             break;
//         }
//     }
// }

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_16000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", gill_appear_check);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_17000);

// void Appear_17000(PLW* wk) {
//     switch (wk->wu.routine_no[3]) {
//     case 0:
//         wk->wu.routine_no[3]++;
//         wk->wu.disp_flag = 1;

//         if (Gill_Appear_Flag) {
//             appear_data_set(&wk->wu, appear_data);
//             Appear_00000(wk);
//             return;
//         }

//         set_char_move_init(&wk->wu, 9, 0);
//         bg_app_stop = 1;
//         gSeqStatus[0] = 0;
//         SsRequest(0x3C);
//         set_char_move_init(&wk->wu, 9, 8);
//         return;

//     case 1:
//         if (!bg_app) {
//             wk->wu.routine_no[3] += 1;
//         }
//         break;

//     case 2:
//         char_move(&wk->wu);

//         if (wk->wu.cg_type == 2) {
//             wk->wu.routine_no[3]++;
//             wk->gill_ccch_go = 1;
//             return;
//         }

//         break;

//     case 3:
//         char_move(&wk->wu);

//         if (wk->wu.cg_type == 3) {
//             wk->wu.cg_type = 0;
//             SsBgmFadeOut(0xAA);
//         }

//         if (wk->wu.cg_type == 0xFF) {
//             wk->wu.routine_no[2] = 1;
//             wk->wu.routine_no[3] = 0;
//             Appear_end++;
//             Standby_BGM(0x2E);
//         }

//         break;
//     }
// }

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_18000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_19000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_20000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_21000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_22000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_23000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_24000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_25000);

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", smoke_check);

const s16 smoke_check[] = {0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0};

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_26000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_28000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_29000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", animal_decide);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", don_appear_check);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_30000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_31000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_32000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_33000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_34000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_36000);

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", animal_decide_tbl);

const u8 animal_decide_tbl[] = {0, 1, 2, 3, 4, 5, 0, 2, 0, 1, 2, 3, 4, 5, 0, 0};

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_37000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_38000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_39000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", Appear_41000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/appear", gouki_appear);
