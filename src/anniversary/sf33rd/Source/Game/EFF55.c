#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF55", effect_55_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF55", effect_55_init);
#else
s32 effect_55_init() {
    not_implemented(__func__);
}
#endif
