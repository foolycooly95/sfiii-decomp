#include "sf33rd/Source/Game/EFF21.h"
#include "common.h"
#include "sf33rd/Source/Game/eff05.h"

const s16 *eff21_data_adrs[1] = { eff21_data_tbl_00 };

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF21", effect_21_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF21", effect_21_init);
#else
s32 effect_21_init(s16 sync_index) {
    not_implemented(__func__);
}
#endif

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF21", eff21_num);

const s16 eff21_num[1] = { 3 };

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF21", eff21_sp_tbl);

const s32 eff21_sp_tbl[1][2] = { 0x00200000, 0x00200000 };

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF21", eff21_data_tbl_00);

const s16 eff21_data_tbl_00[27] = {
    0x0001, 0x0002, 0x212c, 0x0280, 0x0000, 0x000a, 0x0011, 0x0000, 0x0000, 0x0000, 0x0002, 0x212c,
    0x00c0, 0x0000, 0x000a, 0x0012, 0x0000, 0x0000, 0x0001, 0x0002, 0x212c, 0x02e0, 0x0000, 0x000a,
    0x0013, 0x0000, 0x0000
};
