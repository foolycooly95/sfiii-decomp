#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF53", effect_53_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF53", effect_53_init);
#else
s32 effect_53_init() {
    not_implemented(__func__);
}
#endif

const s16 eff53_vanish_time[8] = {
    0x01e0, 0x0258, 0x0384, 0x05a0, 0x01e0, 0x0438, 0x05dc, 0x0258
};
