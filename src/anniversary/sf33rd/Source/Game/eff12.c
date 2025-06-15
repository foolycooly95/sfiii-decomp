#include "sf33rd/Source/Game/eff12.h"
#include "common.h"
#include "sf33rd/Source/Game/eff05.h"

const s16 *scr_obj_data12[6] = {
    eff12_data_tbl0, eff12_data_tbl1, eff12_data_tbl2, eff12_data_tbl3, eff12_data_tbl4, eff12_data_tbl5
};

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff12", effect_12_move);

#if defined(TARGET_PS2)
INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff12", effect_12_init);
#else
s32 effect_12_init(s16 type) {
    not_implemented(__func__);
}
#endif

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff12", scr_obj_num12);

const s16 scr_obj_num12[6] = {
    0x0001, 0x0001, 0x0002, 0x0003, 0x0003, 0x0002
};

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff12", eff12_data_tbl0);

const s16 eff12_data_tbl0[8] = {
    0x0000, 0x0001, 0x012c, 0x0200, 0x0080, 0x0056, 0x0008, 0x0000
};

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff12", eff12_data_tbl1);

const s16 eff12_data_tbl1[8] = {
    0x0000, 0x0002, 0x212c, 0x01ff, 0x0038, 0x0050, 0x0002, 0x0000
};

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff12", eff12_data_tbl2);

const s16 eff12_data_tbl2[16] = {
    0x0000, 0x0002, 0x212c, 0x022f, 0x0040, 0x0048, 0x0002, 0x0000, 0x0000, 0x0002, 0x212c, 0x01cf,
    0x0070, 0x0048, 0x0004, 0x0000
};

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff12", eff12_data_tbl3);

const s16 eff12_data_tbl3[24] = {
    0x0000, 0x0001, 0x012c, 0x01f0, 0x0040, 0x0056, 0x0002, 0x0000, 0x0000, 0x0002, 0x212c, 0x025f,
    0x0060, 0x0053, 0x0008, 0x0000, 0x0000, 0x0002, 0x212c, 0x025f, 0x0060, 0x0053, 0x001a, 0x0000
};

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff12", eff12_data_tbl4);

const s16 eff12_data_tbl4[24] = {
    0x0000, 0x0002, 0x012c, 0x01ff, 0x0000, 0x000b, 0x0005, 0x0000, 0x0000, 0x0002, 0x212c, 0x0230,
    0x00a8, 0x004f, 0x0009, 0x0000, 0x0000, 0x0002, 0x012c, 0x0200, 0x0000, 0x004c, 0x000a, 0x0000
};

// INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/eff12", eff12_data_tbl5);

const s16 eff12_data_tbl5[16] = {
    0x0000, 0x0002, 0x212c, 0x023f, 0x0050, 0x004a, 0x0014, 0x0000, 0x0000, 0x0002, 0x212c, 0x01d0,
    0x0040, 0x0048, 0x0013, 0x0000
};
