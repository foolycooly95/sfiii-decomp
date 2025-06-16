#ifndef EFF05_H
#define EFF05_H

#include "types.h"

extern const s16 scr_obj_num[22]; // size: 0x2C, address: 0x506650
extern const s16 stg_dum_data_tbl[1]; // size: 0x2, address: 0x506680
extern const s16 stg0100_data_tbl[16]; // size: 0x20, address: 0x506690
extern const s16 stg0A00_data_tbl[8]; // size: 0x10, address: 0x5066B0
extern const s16 stg0500_data_tbl[32]; // size: 0x40, address: 0x5066C0
extern const s16 stg1300_data_tbl[32]; // size: 0x40, address: 0x506700
extern const s16 stg0600_data_tbl[8]; // size: 0x10, address: 0x506740
extern const s16 stg0700_data_tbl[32]; // size: 0x40, address: 0x506750
extern const s16 stg0800_data_tbl[48]; // size: 0x60, address: 0x506790
extern const s16 stg0900_data_tbl[8]; // size: 0x10, address: 0x5067F0
extern const s16 stg0c00_data_tbl[8]; // size: 0x10, address: 0x506800
extern const s16 stg0d00_data_tbl[8]; // size: 0x10, address: 0x506810
extern const s16 stg0e00_data_tbl[24]; // size: 0x30, address: 0x506820
extern const s16 stg1000_data_tbl[16]; // size: 0x20, address: 0x506850
extern const s16 stg1100_data_tbl[16]; // size: 0x20, address: 0x506870
extern const s16 stg1400_data_tbl[32]; // size: 0x40, address: 0x506890
extern const s16 stg1500_data_tbl[8]; // size: 0x10, address: 0x5068D0
extern const s16 stg1600_data_tbl[32]; // size: 0x40, address: 0x5068E0

extern u32 *char_add[22]; // size: 0x58, address: 0x572C10
extern const s16 *scr_obj_data[22]; // size: 0x58, address: 0x572C70

s32 effect_05_init();

#endif
