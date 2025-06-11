#include "sf33rd/Source/Game/bg070.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", BG070);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", bg0701);

void bg0701() {
  void (* bg0701_jmp[2])() = { bg0701_init00, bg0701_move00 };
  bg0701_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", bg0701_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", bg0701_move00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", bg0702);

void bg0702() {
  void (* bg0702_jmp[2])() = { bg0702_init00, bg_base_move_common };
  bg0702_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", bg0702_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", bg0703);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", bg0704);

void bg0704() {
  void (* bg0704_jmp[2])() = { bg0704_init00, bg0704_move00 };
  bg0704_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", bg0704_init00);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg070", bg0704_move00);
