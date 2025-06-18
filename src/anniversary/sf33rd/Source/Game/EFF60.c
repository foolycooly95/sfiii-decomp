#include "sf33rd/Source/Game/EFF60.h"
#include "common.h"
#include "sf33rd/Source/Game/eff05.h"

const s16 *flash_obj_data61[3] = { flash_0000, flash_0001, flash_0002 };

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF60", effect_60_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF60", effect_60_init);
#else
s32 effect_60_init(s16 type) {
    not_implemented(__func__);
}
#endif

const s16 flash_0000[10] = { 0x0000, 0x0002, 0x012c, 0x01af, 0x0050, 0x0052, 0x0001, 0x0000, 0x0000, 0x0003 };

const s16 flash_0001[10] = { 0x0000, 0x0002, 0x012c, 0x01ff, 0x00b8, 0x0052, 0x0002, 0x0000, 0x0000, 0x0003 };

const s16 flash_0002[10] = { 0x0000, 0x0002, 0x012c, 0x01af, 0x0040, 0x0053, 0x0002, 0x0000, 0x0000, 0x0002 };
