#include "sf33rd/Source/Game/bonus_bg.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", Bonus_bg);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", bns01);

void bns01() {
  void (* bns01_jmp[2])() = { bns01_init00, bns01_move };
  bns01_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", bns01_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", bns01_move);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", bns02);

void bns02() {
  void (* bns02_jmp[2])() = { bns02_init00, bns02_move };
  bns02_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", bns02_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", bns02_move);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", bns03);

void bns03() {
  void (* bns03_jmp[2])() = { bns03_init00, bns03_move };
  bns03_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", bns03_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bonus_bg", bns03_move);
