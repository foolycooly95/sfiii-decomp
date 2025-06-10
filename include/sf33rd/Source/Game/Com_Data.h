#ifndef COM_DATA_H
#define COM_DATA_H

#include "types.h"

extern const s16 Com_Vital_Unit_Data[20][4][12]; // size: 0x780, address: 0x46BCF0
extern const s16 Area_Unit_Data[20][3]; // size: 0x78, address: 0x4FC5B0
extern const s16 Shell_Area_Unit_Data[20][3]; // size: 0x78, address: 0x4FC630

extern const s8 Combo_Speed_Unit_Data[20][20][32]; // size: 0x3200, address: 0x4FC6B0
extern const s8 Reflection_Speed_Unit_Data[20][20][32]; // size: 0x3200, address: 0x4FF8B0
extern const u8 Wait_Time_Data[4][8]; // size: 0x20, address: 0x502AB0
extern const u8 LOOK_POSITION_Data[8][32]; // size: 0x100, address: 0x502AD0
extern const u8 Exit_Throw_Data[20][18]; // size: 0x168, address: 0x502BD0
extern const u8 Flip_Data[20][8]; // size: 0xA0, address: 0x502D40
extern const u8 Shell_Renzoku_Flip_Data[20][8]; // size: 0xA0, address: 0x502DE0
extern const s8 Flip_Attack_Data[20][8]; // size: 0xA0, address: 0x502E80
extern const s8 Guard_Data[20][11][16]; // size: 0xDC0, address: 0x502F20
extern const s8 Shell_Guard_Data[20][10]; // size: 0xC8, address: 0x503CE0
extern const u8 Rapid_Exit_Data[8][8]; // size: 0x40, address: 0x503DB0
extern const u8 Faint_Rapid_Data[8][8]; // size: 0x40, address: 0x503DF0
extern const u8 Rapid_Hit_Data[4][8]; // size: 0x20, address: 0x503E30
extern const s8 Rapid_SA_Data[8][8]; // size: 0x40, address: 0x503E50
extern const u8 Standing_Time_Data[20][4][8]; // size: 0x280, address: 0x503E90
extern const u8 Squat_Time_Data[8][8]; // size: 0x40, address: 0x504110
extern const u8 VS_Catch_Data[8]; // size: 0x8, address: 0x504150
extern const u8 Denjin_Data[4][16]; // size: 0x40, address: 0x504160
extern const s16 Correct_Cont_Time_Data[2][16]; // size: 0x40, address: 0x5041A0
extern const u8 VS_Diagonal_Shell_Data[8]; // size: 0x8, address: 0x5041E0
extern const s16 Dash_Distance_Data[20][2]; // size: 0x50, address: 0x5041F0
extern const s16 Arts_Super_Name_Data[20][3]; // size: 0x78, address: 0x504240
extern const s8 Float_Attack_Data[4][16]; // size: 0x40, address: 0x5042C0
extern const s8 PL_Damage_Data[50]; // size: 0x32, address: 0x504300
extern const s8 PL_Blow_Off_Data[27]; // size: 0x1B, address: 0x504340
extern const s16 Hit_Range_Data[34]; // size: 0x44, address: 0x504360
extern const s8 PL_Body_Width_Data[20]; // size: 0x14, address: 0x5043B0
extern const u8 Shell_Change_Data_For_Reaction[331]; // size: 0x14B, address: 0x5043D0
extern const u8 Shell_Dodge_Data[4][20]; // size: 0x50, address: 0x504520
extern const u8 Dash_Time_Data[20][2]; // size: 0x28, address: 0x504570
extern const u8 Com_Rnd_Select_Data[6][16]; // size: 0x60, address: 0x5045A0
extern const s16 Back_Jump_Data[20]; // size: 0x28, address: 0x504600
extern const u16 Power_Lv_Data[4]; // size: 0x8, address: 0x504628
extern const u8 Middle_Class_Boss_Data[20]; // size: 0x14, address: 0x504630
extern const u8 Boss_Speech_Data[20][2]; // size: 0x28, address: 0x504650

#endif
