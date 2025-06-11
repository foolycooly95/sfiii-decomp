#include "sf33rd/Source/Game/bg100.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg100", BG100);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg100", bg1000);

void bg1000() {
  void (* bg1000_jmp[2])() = { bg1000_init00, bg_move_common };
  bg1000_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg100", bg1000_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg100", bg1001);

void bg1001() {
  void (* bg1001_jmp[2])() = { bg1001_init00, bg_base_move_common };
  bg1001_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg100", bg1001_init00);
