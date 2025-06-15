#include "sf33rd/Source/Game/EFF85.h"
#include "common.h"
#include "sf33rd/Source/Game/SLOWF.h"
#include "sf33rd/Source/Game/workuser.h"

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", effect_85_move);

void effect_85_move(WORK_Other *ewk) {
     void (* const eff85_jp_tbl[3])(WORK_Other *) = { eff85_0000, eff85_0100, eff85_0200 };
    eff85_jp_tbl[ewk->wu.routine_no[0]](ewk);
};

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_0000);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_0100);

void eff85_0100(WORK_Other* ewk) {
    void (* const eff85_move_tbl[9])(WORK_Other *) = {
        eff85_1000, eff85_1000, eff85_3000, eff85_3000, eff85_5000,
        eff85_5000, eff85_7000, eff85_8000, eff85_9000
    };
    if (!EXE_flag && !Game_pause && !EXE_obroll) {
        eff85_move_tbl[ewk->wu.routine_no[1]](ewk);
    }
    disp_pos_trans_entry(ewk);
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_1000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_common);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_3000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_5000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_7000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_8000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_9000);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", swallow_sprize_check);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_0200);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", effect_85_init);
#else
s32 effect_85_init() {
    not_implemented(__func__);
}
#endif

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_char_index_tbl);
