#ifndef EFFJ8_H
#define EFFJ8_H

#include "structs.h"
#include "types.h"

extern const s16 effj8_timer_tbl[8]; // size: 0x10, address: 0x519870
extern const s16 effj8_y_tbl[8];     // size: 0x10, address: 0x519880
extern const s32 effj8_sp_tbl[8][4]; // size: 0x80, address: 0x5198D0

void effect_J8_move();
void dragonfly_l_move_0();
void dragonfly_l_move_1();
void dragonfly_l_move_2();
void dragonfly_l_move_3();
void dragonfly_l_move_4();
void dragonfly_l_move();
void dragonfly_r_move_0();
void dragonfly_r_move_1();
void dragonfly_r_move_2();
void dragonfly_r_move_3();
void dragonfly_r_move_4();
void dragonfly_r_move();
void dragonfly_move_0000();
void dragonfly_move_0001();
void dragonfly_move_0004();
void dragonfly_move_0005();
void dragonfly_stop_timer();
void dragonfly_line_set();
void dragonfly_move_next();
s32 effect_J8_init();

#endif
