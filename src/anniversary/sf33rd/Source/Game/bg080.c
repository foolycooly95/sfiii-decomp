#include "sf33rd/Source/Game/bg080.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", BG080);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", bg0801);

void bg0801() {
  void (* bg0801_jmp[2])() = { bg0801_init00, bg_move_common };
  bg0801_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", bg0801_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", bg0802);

void bg0802() {
  void (* bg0802_jmp[2])() = { bg0802_init00, bg_base_move_common };
  bg0802_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", bg0802_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", bg080_sync_common);

void bg080_sync_common(void) {
  void (* bg080_sync_jmp[2])() = { bg080_sync_init, bg080_sync_move };
  bg080_sync_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", bg080_sync_init);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg080", bg080_sync_move);
