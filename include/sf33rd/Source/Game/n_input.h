#ifndef N_INPUT_H
#define N_INPUT_H

#include "structs.h"
#include "types.h"

extern RANK_NAME_W rank_name_w[2]; // size: 0x8, address: 0x5792E8
extern s16 Name_00[2];             // size: 0x4, address: 0x579374
extern NAME_WK name_wk[2];         // size: 0x64, address: 0x579390

s16 Name_Input(s16 pl_id);

#endif
