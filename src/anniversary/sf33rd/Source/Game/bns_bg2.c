#include "sf33rd/Source/Game/bns_bg2.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", Bonus_bg2);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", bns11);

void bns11() {
  void (* bns11_jmp[2])() = { bns11_init00, bns11_move };
  bns11_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", bns11_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", bns11_move);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", bns12);

void bns12() {
  void (* bns12_jmp[2])() = { bns12_init00, bns12_move };
  bns12_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", bns12_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", bns12_move);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", bns13);

void bns13() {
  void (* bns13_jmp[2])() = { bns13_init00, bns13_move };
  bns13_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", bns13_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bns_bg2", bns13_move);
