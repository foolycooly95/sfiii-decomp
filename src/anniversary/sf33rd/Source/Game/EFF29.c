#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF29", effect_29_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF29", effect_29_init);
#else
s32 effect_29_init() {
    not_implemented(__func__);
}
#endif


INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF29", eff29_vanish_time);
