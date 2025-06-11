#include "sf33rd/Source/Game/bg130.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg130", BG130);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg130", bg1301);

void bg1301() {
  void (* bg1301_jmp[2])() = { bg1301_init00, bg_base_move_common };
  bg1301_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg130", bg1301_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg130", bg1300);

void bg1300() {
  void (* bg1300_jmp[2])() = { bg1300_init00, bg_move_common };
  bg1300_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg130", bg1300_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg130", bg1302);
