#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effL2", effect_L2_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effL2", effl2_dir_check);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effL2", effect_L2_init);
#else
s32 effect_L2_init() {
    not_implemented(__func__);
}
#endif

const s8 effl2_dir_tbl[2][16] = { { 0, 0, 0, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4 },
                                  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3 } };
