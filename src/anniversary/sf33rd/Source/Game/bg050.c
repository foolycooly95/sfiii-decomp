#include "sf33rd/Source/Game/bg050.h"
#include "common.h"
#include "sf33rd/Source/Game/bg.h"
#include "sf33rd/Source/Game/bg_data.h"
#include "sf33rd/Source/Game/bg_sub.h"
#include "sf33rd/Source/Game/PLCNT.h"
#include "sf33rd/Source/Game/WORK_SYS.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg050", BG050);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg050", bg0501);

void bg0501() {
  void (* bg0501_jmp[2])() = { bg0501_init00, bg_move_common };
  bg0501_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg050", bg0501_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg050", bg0502);

void bg0502() {
  void (* bg0502_jmp[2])() = { bg0502_init00, bg_base_move_common };
  bg0502_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg050", bg0502_init00);

// INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg050", bg050_sync_common);

void bg050_sync_common(void) {
  void (* bg050_sync_jmp[2])() = { bg050_sync_init, bg050_sync_move };
  bg050_sync_jmp[bgw_ptr->r_no_0]();
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg050", bg050_sync_init);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/bg050", bg050_sync_move);
