#include "sf33rd/Source/Game/EFFJ8.h"
#include "common.h"
#include "sf33rd/Source/Game/eff05.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", effect_J8_move);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move);

void dragonfly_move(WORK_Other* ewk) {
    void (* const dragonfly_move_jp1[8])(WORK_Other *) = {
        dragonfly_move_0000, dragonfly_move_0001, dragonfly_move_0001, dragonfly_move_0001,
        dragonfly_move_0004, dragonfly_move_0005, dragonfly_move_0005, dragonfly_move_0005
    };
    dragonfly_move_jp1[ewk->wu.routine_no[1]](ewk);
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_0);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_1);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_2);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_3);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_4);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_0);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_1);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_2);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_3);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_4);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move_0000);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", effj8_timer_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", effj8_y_tbl);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move_0001);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move_0004);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move_0005);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_stop_timer);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_line_set);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move_next);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", effect_J8_init);
#else
s32 effect_J8_init() {
    not_implemented(__func__);
}
#endif

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", effj8_sp_tbl);
