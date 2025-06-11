#include "sf33rd/Source/Game/bg150.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg150", BG150);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg150", bg1501);

void bg1501() {
  void (* bg1501_jmp[2])() = { bg1501_init00, bg_move_common };
  bg1501_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg150", bg1501_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg150", bg1502);

void bg1502() {
  void (* bg1502_jmp[2])() = { bg1502_init00, bg_base_move_common };
  bg1502_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg150", bg1502_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg150", bg1502_sync_common);
