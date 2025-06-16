#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", effect_11_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", eff11_quake_sub);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", eff11_data_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", eff11_quake_index_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", eff11_quake_speed_y_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", eff11_quake_speed_y_tbl2);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", eff11_quake_speed_x_tbl);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", quake_level_middle);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", quake_level_large);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF11", effect_11_init);
#else
s32 effect_11_init() {
    not_implemented(__func__);
}
#endif
