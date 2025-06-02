#ifndef COM_SUB_H
#define COM_SUB_H

#include "structs.h"
#include "types.h"

void End_Pattern(PLW *wk);
void Lever_Off(PLW *wk);
void Pierce_On(PLW *wk);
void Search_Back_Term(PLW *wk, s16 Move_Value, s16 Next_Action, s16 Next_Menu);
void Approach_Walk(PLW *wk, s16 Target_Pos, s16 Option);
void Walk(PLW *wk, u16 Lever, s16 Time, u8 unused);
void Normal_Attack(PLW *wk, s16 Reaction, u16 Lever_Data);
void Adjust_Attack(PLW *wk, s16 Reaction, u16 Lever_Data);
void Lever_Attack(PLW *wk, s16 Reaction, u16 Lever, u16 Lever_Data);
void Check_SA(PLW *wk, s16 Next_Action, s16 Next_Menu);
void Com_Random_Select(PLW *wk, s16 Next_Action, s16 Menu_00, s16 Menu_01, s16 Menu_02, s16 Menu_03, s16 Rnd_Type);
void Wait(PLW *wk, s16 Time);
void Look(PLW *wk, s16 Time);
void Jump(PLW *wk, s16 Time);
void Jump_Attack_Term(PLW *wk, s16 Range_X, s16 Range_Y, s16 Reaction, u16 Lever_Data, s16 Jump_Dir, s16 Range_JX, s16 Range_JY, s16 J_Lever_Data);
void Hi_Jump_Attack_Term(PLW *wk, s16 Range_X, s16 Range_Y, s16 Reaction, u16 Lever_Data, s16 Jump_Dir, s16 Range_JX, s16 Range_JY, u16 J_Lever_Data);
void Command_Attack(PLW *wk, s16 Reaction, u16 Tech_Number, s16 Power_Level, s16 Ex_Shot);
void J_Command_Attack(PLW *wk, s16 Reaction, u16 Tech_Number, s16 Power_Level, s16 Ex_Shot);
void ETC_Term(PLW *wk, s16 Exit_No, u32 Next_Action, u16 Next_Menu);

#endif
