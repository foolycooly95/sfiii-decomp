#include "sf33rd/Source/Game/bg190.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg190", BG190);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg190", bg1901);

void bg1901() {
  void (* bg1901_jmp[2])() = { bg1901_init00, bg_move_common };
  bg1901_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg190", bg1901_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg190", bg1902);

void bg1902() {
  void (* bg1902_jmp[2])() = { bg1902_init00, bg_base_move_common };
  bg1902_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg190", bg1902_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg190", sync_bg14_common);
