#include "sf33rd/Source/Game/EFF85.h"
#include "common.h"
#include "sf33rd/Source/Game/SLOWF.h"
#include "sf33rd/Source/Game/ta_sub.h"
#include "sf33rd/Source/Game/workuser.h"

void effect_85_move(WORK_Other *ewk) {
    void (* const eff85_jp_tbl[3])(WORK_Other *) = { eff85_0000, eff85_0100, eff85_0200 };
    eff85_jp_tbl[ewk->wu.routine_no[0]](ewk);
};

void eff85_0000(WORK_Other* ewk) {
    ewk->wu.routine_no[0]++;
    ewk->wu.routine_no[1] = 0;
    ewk->wu.routine_no[2] = 0;
    ewk->wu.rl_flag = 0;
    ewk->wu.old_rno[0] = 0;
}

void eff85_0100(WORK_Other* ewk) {
    void (* const eff85_move_tbl[9])(WORK_Other *) = {
        eff85_1000, eff85_common, eff85_3000, eff85_common, eff85_5000,
        eff85_common, eff85_7000, eff85_8000, eff85_9000
    };
    if (!EXE_flag && !Game_pause && !EXE_obroll) {
        eff85_move_tbl[ewk->wu.routine_no[1]](ewk);
    }
    disp_pos_trans_entry(ewk);
}

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_1000);
#else
void eff85_1000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_common);
#else
void eff85_common(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_3000);
#else
void eff85_3000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_5000);
#else
void eff85_5000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_7000);
#else
void eff85_7000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_8000);
#else
void eff85_8000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_9000);
#else
void eff85_9000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", swallow_sprize_check);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", eff85_0200);
#else
void eff85_0200(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF85", effect_85_init);
#else
s32 effect_85_init() {
    not_implemented(__func__);
}
#endif

const s16 eff85_char_index_tbl[9] = {
    0x0000, 0x001e, 0x0000, 0x0020, 0x001d, 0x0021, 0x0000, 0x0000, 0x0000
};
