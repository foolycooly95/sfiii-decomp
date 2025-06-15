#include "sf33rd/Source/Game/EFF25.h"
#include "common.h"
#include "sf33rd/Source/Game/eff05.h"

const s16 *scr_obj_data25[1] = { eff25_data_0000 };
void (* const eff25_jp_tbl[10])(WORK_Other *ewk) = {
    eff25_00, eff25_00, eff25_02, eff25_02, eff25_04,
    eff25_04, eff25_06, eff25_06, eff25_08, eff25_08
};

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", effect_25_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", eff25_00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", eff25_02);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", eff25_04);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", eff25_06);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", eff25_08);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", eff25_char_set);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", piece_set);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", effect_25_init);
#else
s32 effect_25_init(s8 num) {
    not_implemented(__func__);
}
#endif

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF25", eff25_data_0000);

const s16 eff25_data_0000[16] = { 0x0000, 0x0002, 0x012c, 0x00a0, 0x0020, 0x0047, 0x0006, 0x0000, 0x0000, 0x0000, 0x0006, 0x0006, 0x0042, 0x0009, 0x0000, 0xffff };
