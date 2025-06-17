#include "sf33rd/Source/Game/EFFJ8.h"
#include "common.h"
#include "sf33rd/Source/Game/eff05.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", effect_J8_move);

void dragonfly_move(WORK_Other* ewk) {
    void (* const dragonfly_move_jp1[8])(WORK_Other *) = {
        dragonfly_move_0000, dragonfly_move_0001, dragonfly_r_move, dragonfly_l_move,
        dragonfly_move_0004, dragonfly_move_0005, dragonfly_l_move, dragonfly_r_move
    };
    dragonfly_move_jp1[ewk->wu.routine_no[1]](ewk);
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_0);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_1);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_2);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_3);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move_4);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_l_move);
#else
void dragonfly_l_move(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_0);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_1);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_2);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_3);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move_4);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_r_move);
#else
void dragonfly_r_move(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move_0000);
#else
void dragonfly_move_0000(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

const s16 effj8_timer_tbl[8] = {
    0x003c, 0x0078, 0x00b4, 0x005a, 0x0096, 0x001e, 0x00dc, 0x00a0
};

const s16 effj8_y_tbl[8] = {
    0x0080, 0x0050, 0x0060, 0x00a0, 0x00b0, 0x0070, 0x0090, 0x00a8
};

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move_0001);
#else
void dragonfly_move_0001(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move_0004);
#else
void dragonfly_move_0004(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFJ8", dragonfly_move_0005);
#else
void dragonfly_move_0005(WORK_Other *ewk) {
    not_implemented(__func__);
}
#endif

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

const s32 effj8_sp_tbl[8][4] = {
    { 0x00060000, 0xffffc000, 0x00004000, 0x00000000 },
    { 0x00060000, 0xffffb800, 0xffffc000, 0x00000000 },
    { 0x00060000, 0xfffff000, 0x00004000, 0x00000000 },
    { 0x00060000, 0xffffe000, 0xffffc000, 0x00000000 },
    { 0x00080000, 0xffff6000, 0x00004000, 0x00000000 },
    { 0x00080000, 0xffffe000, 0xffffc000, 0x00000000 },
    { 0x00080000, 0xffffa000, 0x00004000, 0x00000000 },
    { 0x00080000, 0xffffc000, 0xffffc000, 0x00000000 }
};
