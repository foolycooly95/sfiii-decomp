#include "sf33rd/Source/Game/bg020.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg020", BG020);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg020", bg0201);

void bg0201() {
  void (* bg0201_jmp[2])() = { bg0201_init00, bg_move_common };
  bg0201_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg020", bg0201_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg020", bg0202);

void bg0202() {
  void (* bg0202_jmp[2])() = { bg0202_init00, bg_base_move_common };
  bg0202_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg020", bg0202_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg020", bg020_sync_common);

void bg020_sync_common(void) {
  void (* bg020_sync_jmp[2])() = { bg020_sync_init, bg020_sync_move };
  bg020_sync_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg020", bg020_sync_init);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg020", bg020_sync_move);
