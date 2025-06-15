#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", effect_78_move);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", crow_fuss_check);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", eff78_data_tbl);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", crow_char_tbl);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", crow_fuss_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/EFF78", effect_78_init);
#else
s32 effect_78_init() {
    not_implemented(__func__);
}
#endif
