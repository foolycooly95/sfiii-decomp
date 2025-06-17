#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF71", effect_71_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF71", effect_71_init);
#else
s32 effect_71_init() {
    not_implemented(__func__);
}
#endif

const s16 eff71_time_tbl[8] = {
    2, 8, 12, 9, 4, 6, 50, 3
};
