#include "sf33rd/Source/Game/bg030.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg030", BG030);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg030", bg0300);

void bg0300() {
  void (* bg0300_jmp[2])() = { bg0300_init00, bg_move_common };
  bg0300_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg030", bg0300_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg030", bg0301);

void bg0301() {
  void (* bg0301_jmp[2])() = { bg0301_init00, bg_base_move_common };
  bg0301_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg030", bg0301_init00);
