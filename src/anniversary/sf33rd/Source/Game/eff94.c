#include "sf33rd/Source/Game/eff94.h"
#include "common.h"
#include "sf33rd/Source/Game/eff05.h"
#include "sf33rd/Source/Game/SLOWF.h"
#include "sf33rd/Source/Game/workuser.h"

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", effect_94_move);

void effect_94_move(WORK_Other* ewk) {
    void (* const eff94_move_jp[5])(WORK_Other *) = {
        eff94_0000, eff94_1000, eff94_2000, eff94_3000, eff94_4000,
    };

    switch (ewk->wu.routine_no[0]) {
    case 0:
        ewk->wu.routine_no[0]++;
        ewk->wu.disp_flag = 1;
        set_char_move_init(&ewk->wu, 0, ewk->wu.routine_no[8]);
        break;

    case 1:
        if (!EXE_flag && !Game_pause && !EXE_obroll) {
            eff94_move_jp[ewk->wu.routine_no[1]](ewk);
        }
        if (ewk->wu.old_rno[1]) {
            disp_pos_trans_entry_r(ewk);
            return;
        }
        disp_pos_trans_entry(ewk);
        break;

    default:
        all_cgps_put_back(ewk);
        push_effect_work(ewk);
        break;
    }
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_0000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_1000);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000);

void eff94_2000(WORK_Other* ewk) {
    void (* const eff94_2000_jp[5])(WORK_Other *) = {
        eff94_2000_0, eff94_2000_1, eff94_2000_2, eff94_2000_3, eff94_2000_4
    };
    eff94_2000_jp[ewk->wu.routine_no[2]](ewk);
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_0);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_1);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_2);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_3);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_4);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_3000);

void eff94_3000(WORK_Other* ewk) {
    void (* const eff94_2000_jp[4])(WORK_Other *) = {
        eff94_3000_0, eff94_2000_1, eff94_2000_2, eff94_3000_4
    };
    eff94_2000_jp[ewk->wu.routine_no[2]](ewk);
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_3000_0);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_3000_4);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_4000);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", effect_94_init);
#else
s32 effect_94_init(u8 type94) {
    not_implemented(__func__);
}
#endif

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_data_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_1_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_3000_tbl);
