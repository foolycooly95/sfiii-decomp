#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effL4", effect_L4_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/effL4", effect_L4_init);
#else
s32 effect_L4_init() {
    not_implemented(__func__);
}
#endif

const s16 effl4_data_tbl[24] = { 0x008f, 0x0060, 0x0049, 0x0009, 0x00df, 0x0078, 0x0049, 0x000a,
                                 0x012f, 0x0068, 0x0049, 0x000b, 0x016f, 0x0070, 0x0049, 0x000c,
                                 0x018f, 0x0090, 0x0049, 0x000d, 0x01e7, 0x0078, 0x0049, 0x000e };
