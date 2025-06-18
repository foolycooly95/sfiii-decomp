#include "sf33rd/Source/Game/eff94.h"
#include "common.h"
#include "sf33rd/Source/Game/CHARSET.h"
#include "sf33rd/Source/Game/EFFECT.h"
#include "sf33rd/Source/Game/SLOWF.h"
#include "sf33rd/Source/Game/aboutspr.h"
#include "sf33rd/Source/Game/eff05.h"
#include "sf33rd/Source/Game/ta_sub.h"
#include "sf33rd/Source/Game/workuser.h"

void effect_94_move(WORK_Other *ewk) {
#if defined(TARGET_PS2)
    void set_char_move_init(WORK * wk, s16 koc, s32 index);
#endif
    void (*const eff94_move_jp[5])(WORK_Other *) = {
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
        all_cgps_put_back(&ewk->wu);
        push_effect_work(&ewk->wu);
        break;
    }
}

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_0000);
#else
void eff94_0000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_1000);
#else
void eff94_1000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

void eff94_2000(WORK_Other *ewk) {
    void (*const eff94_2000_jp[5])(
        WORK_Other *) = { eff94_2000_0, eff94_2000_1, eff94_2000_2, eff94_2000_3, eff94_2000_4 };
    eff94_2000_jp[ewk->wu.routine_no[2]](ewk);
}

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_0);
#else
void eff94_2000_0(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_1);
#else
void eff94_2000_1(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_2);
#else
void eff94_2000_2(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_3);
#else
void eff94_2000_3(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_2000_4);
#else
void eff94_2000_4(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

void eff94_3000(WORK_Other *ewk) {
    void (*const eff94_2000_jp[4])(WORK_Other *) = { eff94_3000_0, eff94_2000_2, eff94_2000_3, eff94_3000_4 };
    eff94_2000_jp[ewk->wu.routine_no[2]](ewk);
}

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_3000_0);
#else
void eff94_3000_0(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_3000_4);
#else
void eff94_3000_4(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", eff94_4000);
#else
void eff94_4000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff94", effect_94_init);
#else
s32 effect_94_init(u8 type94) {
    not_implemented(__func__);
}
#endif

const s16 eff94_data_tbl[5][10] = {
    { 0x0002, 0x212c, 0x0188, 0x0040, 0x000c, 0x0016, 0x0034, 0x0000, 0x0000, 0x0001 },
    { 0x0002, 0x212c, 0x0198, 0x004b, 0x000b, 0x0017, 0x0035, 0x0000, 0x0001, 0x0001 },
    { 0x0002, 0x212c, 0x0280, 0x0010, 0x000a, 0x0009, 0x000a, 0x0000, 0x0004, 0x0001 },
    { 0x0002, 0x212c, 0x0160, 0x0110, 0x000a, 0x0002, 0x0002, 0x0000, 0x0002, 0x0001 },
    { 0x0002, 0x212c, 0x0160, 0x0110, 0x000a, 0x0002, 0x0002, 0x0000, 0x0003, 0x0000 }
};

const s16 eff94_2000_tbl[8] = { 0x0120, 0x0150, 0x0140, 0x0120, 0x0148, 0x0128, 0x0158, 0x0130 };

const s8 eff94_2000_1_tbl[16] = { 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1 };

const s16 eff94_3000_tbl[4][3] = {
    { 0x0148, 0x0130, 0x0000 }, { 0x0120, 0x00f0, 0x0001 }, { 0x0118, 0x0140, 0x0000 }, { 0x0160, 0x0108, 0x0001 }
};
