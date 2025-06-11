#include "sf33rd/Source/Game/bg160.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg160", BG160);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg160", bg1601);

void bg1601() {
  void (* bg1601_jmp[2])() = { bg1601_init00, bg_move_common };
  bg1601_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg160", bg1601_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg160", bg1602);

void bg1602() {
  void (* bg1602_jmp[2])() = { bg1602_init00, bg_base_move_common };
  bg1602_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg160", bg1602_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg160", bg1602_sync_common);
