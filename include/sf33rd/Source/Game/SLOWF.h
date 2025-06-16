#ifndef SLOWF_H
#define SLOWF_H

#include "types.h"

extern s16 SLOW_timer;            // size: 0x2, address: 0x579868
extern s16 SLOW_flag;             // size: 0x2, address: 0x57986C
extern s16 EXE_flag;              // size: 0x2, address: 0x579870

void init_slow_flag();
void set_conclusion_slow();
void set_EXE_flag();

#endif // SLOWF_H
