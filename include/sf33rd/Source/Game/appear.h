#ifndef APPEAR_H
#define APPEAR_H

#include "structs.h"
#include "types.h"

typedef struct /* @anon10 */ {
    // total size: 0xC
    s16 hx; // offset 0x0, size 0x2
    s16 hy; // offset 0x2, size 0x2
    s16 whx; // offset 0x4, size 0x2
    s8 ixod; // offset 0x6, size 0x1
    s8 rl; // offset 0x7, size 0x1
    s16 rno; // offset 0x8, size 0x2
    s16 char_index; // offset 0xA, size 0x2
} APPEAR_DATA; // size: 0x294, address: 0x4E5500

extern const APPEAR_DATA appear_data[55]; // size: 0x294, address: 0x4E5500
extern const s16 smoke_check[22]; // size: 0x2C, address: 0x4E57C0
extern const u8 animal_decide_tbl[16]; // size: 0x10, address: 0x4E5850

extern s8 Appear_car_stop[2]; // size: 0x2, address: 0x578A80
extern s8 Appear_hv[2]; // size: 0x2, address: 0x578A84
extern s8 Appear_free[2]; // size: 0x2, address: 0x578A88
extern s8 Appear_flag[2]; // size: 0x2, address: 0x578A8C
extern s16 app_counter[2]; // size: 0x4, address: 0x578A90
extern s16 appear_work[2]; // size: 0x4, address: 0x578A94
extern s16 Appear_end; // size: 0x2, address: 0x578A98


void appear_work_clear();
s32 home_visitor_check();
void appear_data_set();
void appear_data_init_set();
void appear_player();
void Appear_00000();
void Appear_01000();
void Appear_03000();
void Appear_04000();
void Appear_05000();
void Appear_06000();
void Appear_07000();
void Appear_08000();
s32 sean_appear_check();
void Appear_09000();
void Appear_10000();
void Appear_11000();
void Appear_12000();
void Appear_13000();
void Appear_14000();
void Appear_15000();
void Appear_16000();
s16 gill_appear_check();
void Appear_17000();
void Appear_18000();
void Appear_19000();
void Appear_20000();
void Appear_21000();
void Appear_22000();
void Appear_23000();
void Appear_24000();
void Appear_25000();
void Appear_26000();
void Appear_28000();
void Appear_29000();
void animal_decide();
void don_appear_check();
void Appear_30000();
void Appear_31000();
void Appear_32000();
void Appear_33000();
void Appear_34000();
void Appear_36000();
void Appear_37000();
void Appear_38000();
void Appear_39000();
void Appear_41000();
void gouki_appear();

#endif
