#include "sf33rd/Source/Game/bg120.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg120", BG120);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg120", bg1201);

void bg1201() {
  void (* bg1201_jmp[2])() = { bg1201_init00, bg_move_common };
  bg1201_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg120", bg1201_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg120", bg1202);

void bg1202() {
  void (* bg1202_jmp[2])() = { bg1202_init00, bg_base_move_common };
  bg1202_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg120", bg1202_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg120", bg_fam0C00);
