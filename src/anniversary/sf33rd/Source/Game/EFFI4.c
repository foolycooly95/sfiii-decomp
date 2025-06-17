#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFI4", effect_I4_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFI4", effect_i4_hit_sub);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFI4", effi4_down_to_up);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFI4", effi4_up_to_down);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFFI4", effect_I4_init);
#else
s32 effect_I4_init() {
    not_implemented(__func__);
}
#endif
