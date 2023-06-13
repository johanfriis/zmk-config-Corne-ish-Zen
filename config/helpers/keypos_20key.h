#pragma once

/*                               30 KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────╮ ╭────────────────────╮╭─────────────────────┬─────────────────────╮
 │  0   1   2   3   4 │ │  5   6   7   8   9 ││ LT3 LT2 LT1 LT0 ___ │ ___ RT0 RT1 RT2 RT3 │
 │ 10  11  12  13  14 │ │ 15  16  17  18  19 ││ LB3 LB2 LB1 LB0 ___ │ ___ RB0 RB1 RB2 RB3 │
 │     20  21  22     │ │     23  24  25     ││     ___ ___ ___     │     ___ ___ ___     │
 ╰───────────╮ 26  27 │ │ 28  29 ╭───────────╯╰───────────╮ LH1 LH0 │ RH0 RH1 ╭───────────╯
             ╰────────╯ ╰────────╯                        ╰─────────┴─────────╯
 */

#define LT0  3  // left-top row
#define LT1  2
#define LT2  1
#define LT3  0

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9

#define LB0 13  // left-bottom row
#define LB1 12
#define LB2 11
#define LB3 10

#define RB0 16  // right-bottom row
#define RB1 17
#define RB2 18
#define RB3 19

#define LH0 27  // left thumb keys
#define LH1 26

#define RH0 28  // right thumb keys
#define RH1 29

#define LEFT_KEYS LT0 LT1 LT2 LT3 LB0 LB1 LB2 LB3
#define RIGHT_KEYS RT0 RT1 RT2 RT3 RB0 RB1 RB2 RB3
#define THUMBS LH1 LH0 RH0 RH1
