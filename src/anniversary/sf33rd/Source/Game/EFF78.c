#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", effect_78_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", crow_fuss_check);

const s16 eff78_data_tbl[4] = {
    0x01a0, 0x0047, 0x0390, 0x0040
};

const s16 crow_char_tbl[3][3] = {
    { 0x0008, 0x0000, 0x0040 }, { 0x0012, 0xfff0, 0x0040 }, { 0x000d, 0x0010, 0x0040 }
};

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", crow_fuss_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", effect_78_init);
#else
s32 effect_78_init() {
    not_implemented(__func__);
}
#endif
