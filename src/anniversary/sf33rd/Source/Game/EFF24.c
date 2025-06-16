#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", effect_24_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", eff24_quake_sub);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", dog24_data_set);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", eff24_sp_data_set);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", effect_24_init);
#else
s32 effect_24_init() {
    not_implemented(__func__);
}
#endif

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", eff24_data_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", eff24_quake_index_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", eff24_quake_speed_y_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", eff24_quake_speed_x_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF24", dog24_x_data);
