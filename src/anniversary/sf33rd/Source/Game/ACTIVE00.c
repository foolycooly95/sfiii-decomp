#include "sf33rd/Source/Game/Com_Sub.h"
#include "sf33rd/Source/Game/workuser.h"
#include "common.h"

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Computer00);

void Pattern00_0000(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Lever_Off(wk);
        return;

    case 1:
        Look(wk, 0);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0001(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 0xB, 0x10);
        return;

    case 1:
        Normal_Attack(wk, 8, 0x10);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0002(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Command_Attack(wk, 8, 0x1E, 8, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0003(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Adjust_Attack(wk, 9, 0x10);
        return;

    case 1:
        Normal_Attack(wk, 8, 0x20);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0004(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Command_Attack(wk, 8, 0x1F, 0xA, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0005(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Approach_Walk(wk, 0x3B, 2);
        return;

    case 1:
        Lever_Attack(wk, 8, 0, 0x110);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0006(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Wait(wk, 0);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0007(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 8, 0x400);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0008(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 0xB, 0x100);
        return;

    case 1:
        Normal_Attack(wk, 8, 0x400);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0009(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Search_Back_Term(wk, 0x60, 2, 0x10);
        return;

    case 1:
        Jump(wk, 1);
        return;

    case 2:
        Look(wk, 0);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0010(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 8, 0x402);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0011(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 9, 0x102);
        return;

    case 1:
        Normal_Attack(wk, 8, 0x202);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0012(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 8, 0x40);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0013(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 8, 0x200);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0014(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Jump_Attack_Term(wk, -1, -0x7FC0, 8, 0x40, 2, -0x7F90, 8,0x20);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0015(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Walk(wk, 0, 0x30, 0);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0016(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Search_Back_Term(wk, 0x50, 2, 0);
        return;

    case 1:
        Walk(wk, 1, 0x30, 0);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0017(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Command_Attack(wk, 8, 0x1E, 8, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0018(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        J_Command_Attack(wk, 8, 0x1D, 0xA, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0019(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        ETC_Term(wk, 0, 6, 0x99);
        return;

    case 1:
        Command_Attack(wk, 8, 0x1C, 0xA, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0020(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Jump_Attack_Term(wk, -1, -0x7FB0, 8, 0x10, 0, 8, 8, 8);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0021(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Jump_Attack_Term(wk, -1, -0x7FC0, 8, 0x400, 0, -0x7F90, 8, 0x200);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0022(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Pierce_On(wk);
        return;

    case 1:
        Search_Back_Term(wk, 0x60, 2, 0x12);
        return;

    case 2:
        Command_Attack(wk, 8, 1, 0xB, -1);
        return;

    case 3:
        J_Command_Attack(wk, 8, 0x1D, 0xA, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0023(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Approach_Walk(wk, 0x83, 2);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0024(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Walk(wk, 0, 0x60, 0);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0025(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Search_Back_Term(wk, 0x70, 2, 0);
        return;

    case 1:
        Walk(wk, 1, 0x60, 0);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0026(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Command_Attack(wk, 8, 0, 0xB, -1);
        return;

    case 1:
        Look(wk, 0);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0027(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Jump_Attack_Term(wk, -1, -0x7FB0, 0xB, 0x20, 0, -0x7F90, 8, 0x20);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0028(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Approach_Walk(wk, 0xC3, 2);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0029(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Adjust_Attack(wk, 0xC, 0x100);
        return;

    case 1:
        Adjust_Attack(wk, 0xC, 0x100);
        return;

    case 2:
        Adjust_Attack(wk, 8, 0x200);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0030(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Adjust_Attack(wk, 0xC, 0x10);
        return;

    case 1:
        Adjust_Attack(wk, 0xC, 0x20);
        return;

    case 2:
        Adjust_Attack(wk, 8, 0x40);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0031(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 9, 0x20);
        return;

    case 1:
        Command_Attack(wk, 8, 0x1E, 8, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0032(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Adjust_Attack(wk, 0xB, 0x10);
        return;

    case 1:
        Lever_Attack(wk, 8, 1, 0x20);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0033(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Adjust_Attack(wk, 9, 0x10);
        return;

    case 1:
        Normal_Attack(wk, 8, 0x110);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0034(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Adjust_Attack(wk, 9, 0x100);
        return;

    case 1:
        ETC_Term(wk, 0, 6, 0x99);
        return;

    case 2:
        Command_Attack(wk, 8, 0x1C, 8, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0035(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 8, 0x20);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0036(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 8, 0x42);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0037(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 9, 0x40);
        return;

    case 1:
        Lever_Attack(wk, 8, 1, 0x20);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0038(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Adjust_Attack(wk, 0xB, 0x20);
        return;

    case 1:
        Normal_Attack(wk, 0xA, 0x202);
        return;

    case 2:
        Command_Attack(wk, 8, 0x1C, 0xA, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0039(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Normal_Attack(wk, 9, 0x200);
        return;

    case 1:
        Command_Attack(wk, 8, 0x1E, 8, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

void Pattern00_0040(PLW* wk) {
    switch (CP_Index[wk->wu.id][0]) {
    case 0:
        Command_Attack(wk, 8, 0x1E, 8, -1);
        return;

    case 1:
        Command_Attack(wk, 8, 0x1E, 8, -1);
        return;

    default:
        End_Pattern(wk);
        return;
    }
}

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0041);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0042);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0043);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0044);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0045);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0046);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0047);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0048);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0049);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0050);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0051);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0052);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0053);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0054);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0055);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0056);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0057);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0058);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0059);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0060);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0061);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0062);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0063);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0064);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0065);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0066);

INCLUDE_ASM("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_0067);

INCLUDE_RODATA("asm/anniversary/nonmatchings/sf33rd/Source/Game/ACTIVE00", Pattern00_Tbl);
