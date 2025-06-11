#include "sf33rd/Source/Game/bg140.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg140", BG140);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg140", bg1401);

void bg1401() {
  void (* bg1401_jmp[2])() = { bg1401_init00, bg_base_move_common };
  bg1401_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg140", bg1401_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg140", bg1400);

void bg1400() {
  void (* bg140_jmp[2])() = { bg1400_init00, bg_move_common };
  bg140_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg140", bg1400_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg140", bg1402);
