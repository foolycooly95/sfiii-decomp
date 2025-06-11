#include "sf33rd/Source/Game/bg040.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg040", BG040);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg040", bg0401);

void bg0401() {
  void (* bg0401_jmp[3])() = { bg0401_init00, bg0401_init01, bg_move_common };
  bg0401_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg040", bg0401_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg040", bg0401_init01);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg040", bg0402);

void bg0402() {
  void (* bg0402_jmp[3])() = { bg0402_init00, bg0402_init01, bg_base_move_common };
  bg0402_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg040", bg0402_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg040", bg0402_init01);
