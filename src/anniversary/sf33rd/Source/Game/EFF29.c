#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF29", effect_29_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF29", effect_29_init);
#else
s32 effect_29_init() {
    not_implemented(__func__);
}
#endif

const s16 eff29_vanish_time[8] = {
    0x01e0, 0x0258, 0x012c, 0x00f0, 0x00c8, 0x0154, 0x01f4, 0x0168
};
