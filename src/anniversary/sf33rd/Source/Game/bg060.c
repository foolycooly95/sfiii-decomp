#include "sf33rd/Source/Game/bg060.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg060", BG060);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg060", bg0601);

void bg0601() {
  void (* bg0601_jmp[2])() = { bg0601_init00, bg_move_common };
  bg0601_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg060", bg0601_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg060", bg0602);

void bg0602() {
  void (* bg0602_jmp[2])() = { bg0602_init00, bg_base_move_common };
  bg0602_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg060", bg0602_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg060", bg0603);
