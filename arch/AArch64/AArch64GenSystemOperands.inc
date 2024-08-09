/* Capstone Disassembly Engine, http://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2019 */

static const AT ATsList[] = {
  { "s12e0r",  0x23C6 }, // 0
  { "s12e0w",  0x23C7 }, // 1
  { "s12e1r",  0x23C4 }, // 2
  { "s12e1w",  0x23C5 }, // 3
  { "s1e0r",  0x3C2 }, // 4
  { "s1e0w",  0x3C3 }, // 5
  { "s1e1r",  0x3C0 }, // 6
  { "s1e1rp",  0x3C8 }, // 7
  { "s1e1w",  0x3C1 }, // 8
  { "s1e1wp",  0x3C9 }, // 9
  { "s1e2r",  0x23C0 }, // 10
  { "s1e2w",  0x23C1 }, // 11
  { "s1e3r",  0x33C0 }, // 12
  { "s1e3w",  0x33C1 }, // 13
};

const AT *lookupATByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x3C0, 6 },
    { 0x3C1, 8 },
    { 0x3C2, 4 },
    { 0x3C3, 5 },
    { 0x3C8, 7 },
    { 0x3C9, 9 },
    { 0x23C0, 10 },
    { 0x23C1, 11 },
    { 0x23C4, 2 },
    { 0x23C5, 3 },
    { 0x23C6, 0 },
    { 0x23C7, 1 },
    { 0x33C0, 12 },
    { 0x33C1, 13 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &ATsList[Index[i].index];
}

static const DB DBsList[] = {
  { "ish", 0xB }, // 0
  { "ishld", 0x9 }, // 1
  { "ishst", 0xA }, // 2
  { "ld", 0xD }, // 3
  { "nsh", 0x7 }, // 4
  { "nshld", 0x5 }, // 5
  { "nshst", 0x6 }, // 6
  { "osh", 0x3 }, // 7
  { "oshld", 0x1 }, // 8
  { "oshst", 0x2 }, // 9
  { "st", 0xE }, // 10
  { "sy", 0xF }, // 11
};

const DB *lookupDBByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x1, 8 },
    { 0x2, 9 },
    { 0x3, 7 },
    { 0x5, 5 },
    { 0x6, 6 },
    { 0x7, 4 },
    { 0x9, 1 },
    { 0xA, 2 },
    { 0xB, 0 },
    { 0xD, 3 },
    { 0xE, 10 },
    { 0xF, 11 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &DBsList[Index[i].index];
}

static const DC DCsList[] = {
  { "cgdsw",  0x3D6 }, // 0
  { "cgdvac",  0x1BD5 }, // 1
  { "cgdvadp",  0x1BED }, // 2
  { "cgdvap",  0x1BE5 }, // 3
  { "cgsw",  0x3D4 }, // 4
  { "cgvac",  0x1BD3 }, // 5
  { "cgvadp",  0x1BEB }, // 6
  { "cgvap",  0x1BE3 }, // 7
  { "cigdsw",  0x3F6 }, // 8
  { "cigdvac",  0x1BF5 }, // 9
  { "cigsw",  0x3F4 }, // 10
  { "cigvac",  0x1BF3 }, // 11
  { "cisw",  0x3F2 }, // 12
  { "civac",  0x1BF1 }, // 13
  { "csw",  0x3D2 }, // 14
  { "cvac",  0x1BD1 }, // 15
  { "cvadp",  0x1BE9 }, // 16
  { "cvap",  0x1BE1 }, // 17
  { "cvau",  0x1BD9 }, // 18
  { "gva",  0x1BA3 }, // 19
  { "gzva",  0x1BA4 }, // 20
  { "igdsw",  0x3B6 }, // 21
  { "igdvac",  0x3B5 }, // 22
  { "igsw",  0x3B4 }, // 23
  { "igvac",  0x3B3 }, // 24
  { "isw",  0x3B2 }, // 25
  { "ivac",  0x3B1 }, // 26
  { "zva",  0x1BA1 }, // 27
};

const DC *lookupDCByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x3B1, 26 },
    { 0x3B2, 25 },
    { 0x3B3, 24 },
    { 0x3B4, 23 },
    { 0x3B5, 22 },
    { 0x3B6, 21 },
    { 0x3D2, 14 },
    { 0x3D4, 4 },
    { 0x3D6, 0 },
    { 0x3F2, 12 },
    { 0x3F4, 10 },
    { 0x3F6, 8 },
    { 0x1BA1, 27 },
    { 0x1BA3, 19 },
    { 0x1BA4, 20 },
    { 0x1BD1, 15 },
    { 0x1BD3, 5 },
    { 0x1BD5, 1 },
    { 0x1BD9, 18 },
    { 0x1BE1, 17 },
    { 0x1BE3, 7 },
    { 0x1BE5, 3 },
    { 0x1BE9, 16 },
    { 0x1BEB, 6 },
    { 0x1BED, 2 },
    { 0x1BF1, 13 },
    { 0x1BF3, 11 },
    { 0x1BF5, 9 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &DCsList[Index[i].index];
}

static const IC ICsList[] = {
  { "iallu", 0x3a8, false }, // 0
  { "ialluis", 0x388, false }, // 1
  { "ivau", 0x1ba9, true }, // 2
};

const IC *lookupICByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x388, 1 },
    { 0x3A8, 0 },
    { 0x1BA9, 2 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &ICsList[Index[i].index];
}

static const TLBI TLBIsList[] = {
  { "alle1",  0x243C,  false }, // 0
  { "alle1is",  0x241C,  false }, // 1
  { "alle1isnxs",  0x249C,  false }, // 2
  { "alle1nxs",  0x24BC,  false }, // 3
  { "alle1os",  0x240C,  false }, // 4
  { "alle1osnxs",  0x248C,  false }, // 5
  { "alle2",  0x2438,  false }, // 6
  { "alle2is",  0x2418,  false }, // 7
  { "alle2isnxs",  0x2498,  false }, // 8
  { "alle2nxs",  0x24B8,  false }, // 9
  { "alle2os",  0x2408,  false }, // 10
  { "alle2osnxs",  0x2488,  false }, // 11
  { "alle3",  0x3438,  false }, // 12
  { "alle3is",  0x3418,  false }, // 13
  { "alle3isnxs",  0x3498,  false }, // 14
  { "alle3nxs",  0x34B8,  false }, // 15
  { "alle3os",  0x3408,  false }, // 16
  { "alle3osnxs",  0x3488,  false }, // 17
  { "aside1",  0x43A,  true }, // 18
  { "aside1is",  0x41A,  true }, // 19
  { "aside1isnxs",  0x49A,  true }, // 20
  { "aside1nxs",  0x4BA,  true }, // 21
  { "aside1os",  0x40A,  true }, // 22
  { "aside1osnxs",  0x48A,  true }, // 23
  { "ipas2e1",  0x2421,  true }, // 24
  { "ipas2e1is",  0x2401,  true }, // 25
  { "ipas2e1isnxs",  0x2481,  true }, // 26
  { "ipas2e1nxs",  0x24A1,  true }, // 27
  { "ipas2e1os",  0x2420,  true }, // 28
  { "ipas2e1osnxs",  0x24A0,  true }, // 29
  { "ipas2le1",  0x2425,  true }, // 30
  { "ipas2le1is",  0x2405,  true }, // 31
  { "ipas2le1isnxs",  0x2485,  true }, // 32
  { "ipas2le1nxs",  0x24A5,  true }, // 33
  { "ipas2le1os",  0x2424,  true }, // 34
  { "ipas2le1osnxs",  0x24A4,  true }, // 35
  { "paall",  0x343C,  false }, // 36
  { "paallnxs",  0x34BC,  false }, // 37
  { "paallos",  0x340C,  false }, // 38
  { "paallosnxs",  0x348C,  false }, // 39
  { "ripas2e1",  0x2422,  true }, // 40
  { "ripas2e1is",  0x2402,  true }, // 41
  { "ripas2e1isnxs",  0x2482,  true }, // 42
  { "ripas2e1nxs",  0x24A2,  true }, // 43
  { "ripas2e1os",  0x2423,  true }, // 44
  { "ripas2e1osnxs",  0x24A3,  true }, // 45
  { "ripas2le1",  0x2426,  true }, // 46
  { "ripas2le1is",  0x2406,  true }, // 47
  { "ripas2le1isnxs",  0x2486,  true }, // 48
  { "ripas2le1nxs",  0x24A6,  true }, // 49
  { "ripas2le1os",  0x2427,  true }, // 50
  { "ripas2le1osnxs",  0x24A7,  true }, // 51
  { "rpalos",  0x3427,  true }, // 52
  { "rpalosnxs",  0x34A7,  true }, // 53
  { "rpaos",  0x3423,  true }, // 54
  { "rpaosnxs",  0x34A3,  true }, // 55
  { "rvaae1",  0x433,  true }, // 56
  { "rvaae1is",  0x413,  true }, // 57
  { "rvaae1isnxs",  0x493,  true }, // 58
  { "rvaae1nxs",  0x4B3,  true }, // 59
  { "rvaae1os",  0x42B,  true }, // 60
  { "rvaae1osnxs",  0x4AB,  true }, // 61
  { "rvaale1",  0x437,  true }, // 62
  { "rvaale1is",  0x417,  true }, // 63
  { "rvaale1isnxs",  0x497,  true }, // 64
  { "rvaale1nxs",  0x4B7,  true }, // 65
  { "rvaale1os",  0x42F,  true }, // 66
  { "rvaale1osnxs",  0x4AF,  true }, // 67
  { "rvae1",  0x431,  true }, // 68
  { "rvae1is",  0x411,  true }, // 69
  { "rvae1isnxs",  0x491,  true }, // 70
  { "rvae1nxs",  0x4B1,  true }, // 71
  { "rvae1os",  0x429,  true }, // 72
  { "rvae1osnxs",  0x4A9,  true }, // 73
  { "rvae2",  0x2431,  true }, // 74
  { "rvae2is",  0x2411,  true }, // 75
  { "rvae2isnxs",  0x2491,  true }, // 76
  { "rvae2nxs",  0x24B1,  true }, // 77
  { "rvae2os",  0x2429,  true }, // 78
  { "rvae2osnxs",  0x24A9,  true }, // 79
  { "rvae3",  0x3431,  true }, // 80
  { "rvae3is",  0x3411,  true }, // 81
  { "rvae3isnxs",  0x3491,  true }, // 82
  { "rvae3nxs",  0x34B1,  true }, // 83
  { "rvae3os",  0x3429,  true }, // 84
  { "rvae3osnxs",  0x34A9,  true }, // 85
  { "rvale1",  0x435,  true }, // 86
  { "rvale1is",  0x415,  true }, // 87
  { "rvale1isnxs",  0x495,  true }, // 88
  { "rvale1nxs",  0x4B5,  true }, // 89
  { "rvale1os",  0x42D,  true }, // 90
  { "rvale1osnxs",  0x4AD,  true }, // 91
  { "rvale2",  0x2435,  true }, // 92
  { "rvale2is",  0x2415,  true }, // 93
  { "rvale2isnxs",  0x2495,  true }, // 94
  { "rvale2nxs",  0x24B5,  true }, // 95
  { "rvale2os",  0x242D,  true }, // 96
  { "rvale2osnxs",  0x24AD,  true }, // 97
  { "rvale3",  0x3435,  true }, // 98
  { "rvale3is",  0x3415,  true }, // 99
  { "rvale3isnxs",  0x3495,  true }, // 100
  { "rvale3nxs",  0x34B5,  true }, // 101
  { "rvale3os",  0x342D,  true }, // 102
  { "rvale3osnxs",  0x34AD,  true }, // 103
  { "vaae1",  0x43B,  true }, // 104
  { "vaae1is",  0x41B,  true }, // 105
  { "vaae1isnxs",  0x49B,  true }, // 106
  { "vaae1nxs",  0x4BB,  true }, // 107
  { "vaae1os",  0x40B,  true }, // 108
  { "vaae1osnxs",  0x48B,  true }, // 109
  { "vaale1",  0x43F,  true }, // 110
  { "vaale1is",  0x41F,  true }, // 111
  { "vaale1isnxs",  0x49F,  true }, // 112
  { "vaale1nxs",  0x4BF,  true }, // 113
  { "vaale1os",  0x40F,  true }, // 114
  { "vaale1osnxs",  0x48F,  true }, // 115
  { "vae1",  0x439,  true }, // 116
  { "vae1is",  0x419,  true }, // 117
  { "vae1isnxs",  0x499,  true }, // 118
  { "vae1nxs",  0x4B9,  true }, // 119
  { "vae1os",  0x409,  true }, // 120
  { "vae1osnxs",  0x489,  true }, // 121
  { "vae2",  0x2439,  true }, // 122
  { "vae2is",  0x2419,  true }, // 123
  { "vae2isnxs",  0x2499,  true }, // 124
  { "vae2nxs",  0x24B9,  true }, // 125
  { "vae2os",  0x2409,  true }, // 126
  { "vae2osnxs",  0x2489,  true }, // 127
  { "vae3",  0x3439,  true }, // 128
  { "vae3is",  0x3419,  true }, // 129
  { "vae3isnxs",  0x3499,  true }, // 130
  { "vae3nxs",  0x34B9,  true }, // 131
  { "vae3os",  0x3409,  true }, // 132
  { "vae3osnxs",  0x3489,  true }, // 133
  { "vale1",  0x43D,  true }, // 134
  { "vale1is",  0x41D,  true }, // 135
  { "vale1isnxs",  0x49D,  true }, // 136
  { "vale1nxs",  0x4BD,  true }, // 137
  { "vale1os",  0x40D,  true }, // 138
  { "vale1osnxs",  0x48D,  true }, // 139
  { "vale2",  0x243D,  true }, // 140
  { "vale2is",  0x241D,  true }, // 141
  { "vale2isnxs",  0x249D,  true }, // 142
  { "vale2nxs",  0x24BD,  true }, // 143
  { "vale2os",  0x240D,  true }, // 144
  { "vale2osnxs",  0x248D,  true }, // 145
  { "vale3",  0x343D,  true }, // 146
  { "vale3is",  0x341D,  true }, // 147
  { "vale3isnxs",  0x349D,  true }, // 148
  { "vale3nxs",  0x34BD,  true }, // 149
  { "vale3os",  0x340D,  true }, // 150
  { "vale3osnxs",  0x348D,  true }, // 151
  { "vmalle1",  0x438,  false }, // 152
  { "vmalle1is",  0x418,  false }, // 153
  { "vmalle1isnxs",  0x498,  false }, // 154
  { "vmalle1nxs",  0x4B8,  false }, // 155
  { "vmalle1os",  0x408,  false }, // 156
  { "vmalle1osnxs",  0x488,  false }, // 157
  { "vmalls12e1",  0x243E,  false }, // 158
  { "vmalls12e1is",  0x241E,  false }, // 159
  { "vmalls12e1isnxs",  0x249E,  false }, // 160
  { "vmalls12e1nxs",  0x24BE,  false }, // 161
  { "vmalls12e1os",  0x240E,  false }, // 162
  { "vmalls12e1osnxs",  0x248E,  false }, // 163
};

const TLBI *lookupTLBIByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x408, 156 },
    { 0x409, 120 },
    { 0x40A, 22 },
    { 0x40B, 108 },
    { 0x40D, 138 },
    { 0x40F, 114 },
    { 0x411, 69 },
    { 0x413, 57 },
    { 0x415, 87 },
    { 0x417, 63 },
    { 0x418, 153 },
    { 0x419, 117 },
    { 0x41A, 19 },
    { 0x41B, 105 },
    { 0x41D, 135 },
    { 0x41F, 111 },
    { 0x429, 72 },
    { 0x42B, 60 },
    { 0x42D, 90 },
    { 0x42F, 66 },
    { 0x431, 68 },
    { 0x433, 56 },
    { 0x435, 86 },
    { 0x437, 62 },
    { 0x438, 152 },
    { 0x439, 116 },
    { 0x43A, 18 },
    { 0x43B, 104 },
    { 0x43D, 134 },
    { 0x43F, 110 },
    { 0x488, 157 },
    { 0x489, 121 },
    { 0x48A, 23 },
    { 0x48B, 109 },
    { 0x48D, 139 },
    { 0x48F, 115 },
    { 0x491, 70 },
    { 0x493, 58 },
    { 0x495, 88 },
    { 0x497, 64 },
    { 0x498, 154 },
    { 0x499, 118 },
    { 0x49A, 20 },
    { 0x49B, 106 },
    { 0x49D, 136 },
    { 0x49F, 112 },
    { 0x4A9, 73 },
    { 0x4AB, 61 },
    { 0x4AD, 91 },
    { 0x4AF, 67 },
    { 0x4B1, 71 },
    { 0x4B3, 59 },
    { 0x4B5, 89 },
    { 0x4B7, 65 },
    { 0x4B8, 155 },
    { 0x4B9, 119 },
    { 0x4BA, 21 },
    { 0x4BB, 107 },
    { 0x4BD, 137 },
    { 0x4BF, 113 },
    { 0x2401, 25 },
    { 0x2402, 41 },
    { 0x2405, 31 },
    { 0x2406, 47 },
    { 0x2408, 10 },
    { 0x2409, 126 },
    { 0x240C, 4 },
    { 0x240D, 144 },
    { 0x240E, 162 },
    { 0x2411, 75 },
    { 0x2415, 93 },
    { 0x2418, 7 },
    { 0x2419, 123 },
    { 0x241C, 1 },
    { 0x241D, 141 },
    { 0x241E, 159 },
    { 0x2420, 28 },
    { 0x2421, 24 },
    { 0x2422, 40 },
    { 0x2423, 44 },
    { 0x2424, 34 },
    { 0x2425, 30 },
    { 0x2426, 46 },
    { 0x2427, 50 },
    { 0x2429, 78 },
    { 0x242D, 96 },
    { 0x2431, 74 },
    { 0x2435, 92 },
    { 0x2438, 6 },
    { 0x2439, 122 },
    { 0x243C, 0 },
    { 0x243D, 140 },
    { 0x243E, 158 },
    { 0x2481, 26 },
    { 0x2482, 42 },
    { 0x2485, 32 },
    { 0x2486, 48 },
    { 0x2488, 11 },
    { 0x2489, 127 },
    { 0x248C, 5 },
    { 0x248D, 145 },
    { 0x248E, 163 },
    { 0x2491, 76 },
    { 0x2495, 94 },
    { 0x2498, 8 },
    { 0x2499, 124 },
    { 0x249C, 2 },
    { 0x249D, 142 },
    { 0x249E, 160 },
    { 0x24A0, 29 },
    { 0x24A1, 27 },
    { 0x24A2, 43 },
    { 0x24A3, 45 },
    { 0x24A4, 35 },
    { 0x24A5, 33 },
    { 0x24A6, 49 },
    { 0x24A7, 51 },
    { 0x24A9, 79 },
    { 0x24AD, 97 },
    { 0x24B1, 77 },
    { 0x24B5, 95 },
    { 0x24B8, 9 },
    { 0x24B9, 125 },
    { 0x24BC, 3 },
    { 0x24BD, 143 },
    { 0x24BE, 161 },
    { 0x3408, 16 },
    { 0x3409, 132 },
    { 0x340C, 38 },
    { 0x340D, 150 },
    { 0x3411, 81 },
    { 0x3415, 99 },
    { 0x3418, 13 },
    { 0x3419, 129 },
    { 0x341D, 147 },
    { 0x3423, 54 },
    { 0x3427, 52 },
    { 0x3429, 84 },
    { 0x342D, 102 },
    { 0x3431, 80 },
    { 0x3435, 98 },
    { 0x3438, 12 },
    { 0x3439, 128 },
    { 0x343C, 36 },
    { 0x343D, 146 },
    { 0x3488, 17 },
    { 0x3489, 133 },
    { 0x348C, 39 },
    { 0x348D, 151 },
    { 0x3491, 82 },
    { 0x3495, 100 },
    { 0x3498, 14 },
    { 0x3499, 130 },
    { 0x349D, 148 },
    { 0x34A3, 55 },
    { 0x34A7, 53 },
    { 0x34A9, 85 },
    { 0x34AD, 103 },
    { 0x34B1, 83 },
    { 0x34B5, 101 },
    { 0x34B8, 15 },
    { 0x34B9, 131 },
    { 0x34BC, 37 },
    { 0x34BD, 149 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &TLBIsList[Index[i].index];
}

static const SVEPRFM SVEPRFMsList[] = {
  { "pldl1keep",  0x0 }, // 0
  { "pldl1strm",  0x1 }, // 1
  { "pldl2keep",  0x2 }, // 2
  { "pldl2strm",  0x3 }, // 3
  { "pldl3keep",  0x4 }, // 4
  { "pldl3strm",  0x5 }, // 5
  { "pstl1keep",  0x8 }, // 6
  { "pstl1strm",  0x9 }, // 7
  { "pstl2keep",  0xA }, // 8
  { "pstl2strm",  0xB }, // 9
  { "pstl3keep",  0xC }, // 10
  { "pstl3strm",  0xD }, // 11
};

const SVEPRFM *lookupSVEPRFMByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x0, 0 },
    { 0x1, 1 },
    { 0x2, 2 },
    { 0x3, 3 },
    { 0x4, 4 },
    { 0x5, 5 },
    { 0x8, 6 },
    { 0x9, 7 },
    { 0xA, 8 },
    { 0xB, 9 },
    { 0xC, 10 },
    { 0xD, 11 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &SVEPRFMsList[Index[i].index];
}

static const PRFM PRFMsList[] = {
  { "pldl1keep", 0x0 }, // 0
  { "pldl1strm", 0x1 }, // 1
  { "pldl2keep", 0x2 }, // 2
  { "pldl2strm", 0x3 }, // 3
  { "pldl3keep", 0x4 }, // 4
  { "pldl3strm", 0x5 }, // 5
  { "plil1keep", 0x8 }, // 6
  { "plil1strm", 0x9 }, // 7
  { "plil2keep", 0xa }, // 8
  { "plil2strm", 0xb }, // 9
  { "plil3keep", 0xc }, // 10
  { "plil3strm", 0xd }, // 11
  { "pstl1keep", 0x10 }, // 12
  { "pstl1strm", 0x11 }, // 13
  { "pstl2keep", 0x12 }, // 14
  { "pstl2strm", 0x13 }, // 15
  { "pstl3keep", 0x14 }, // 16
  { "pstl3strm", 0x15 }, // 17
};

const PRFM *lookupPRFMByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x0, 0 },
    { 0x1, 1 },
    { 0x2, 2 },
    { 0x3, 3 },
    { 0x4, 4 },
    { 0x5, 5 },
    { 0x8, 6 },
    { 0x9, 7 },
    { 0xA, 8 },
    { 0xB, 9 },
    { 0xC, 10 },
    { 0xD, 11 },
    { 0x10, 12 },
    { 0x11, 13 },
    { 0x12, 14 },
    { 0x13, 15 },
    { 0x14, 16 },
    { 0x15, 17 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &PRFMsList[Index[i].index];
}

static const PSB PSBsList[] = {
  { "csync", 0x11 }, // 0
};

const PSB *lookupPSBByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x11, 0 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &PSBsList[Index[i].index];
}

static const ISB ISBsList[] = {
  { "sy", 0xf }, // 0
};

const ISB *lookupISBByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0xF, 0 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &ISBsList[Index[i].index];
}

static const TSB TSBsList[] = {
  { "csync",  0x0 }, // 0
};

const TSB *lookupTSBByEncoding(uint16_t Encoding)
{
  static const struct IndexType Index[] = {
    { 0x0, 0 },
  };

  if (Encoding >= ARR_SIZE(TSBsList))
    return NULL;
  else
    return &TSBsList[Index[Encoding].index];
}

static const SysReg SysRegsList[] = {
  { "accdata_el1",  0xC685,  true,  true }, // 0
  { "actlr_el1",  0xC081,  true,  true }, // 1
  { "actlr_el2",  0xE081,  true,  true }, // 2
  { "actlr_el3",  0xF081,  true,  true }, // 3
  { "afsr0_el1",  0xC288,  true,  true }, // 4
  { "afsr0_el12",  0xEA88,  true,  true }, // 5
  { "afsr0_el2",  0xE288,  true,  true }, // 6
  { "afsr0_el3",  0xF288,  true,  true }, // 7
  { "afsr1_el1",  0xC289,  true,  true }, // 8
  { "afsr1_el12",  0xEA89,  true,  true }, // 9
  { "afsr1_el2",  0xE289,  true,  true }, // 10
  { "afsr1_el3",  0xF289,  true,  true }, // 11
  { "aidr_el1",  0xC807,  true,  false }, // 12
  { "amair_el1",  0xC518,  true,  true }, // 13
  { "amair_el12",  0xED18,  true,  true }, // 14
  { "amair_el2",  0xE518,  true,  true }, // 15
  { "amair_el3",  0xF518,  true,  true }, // 16
  { "amcfgr_el0",  0xDE91,  true,  false }, // 17
  { "amcgcr_el0",  0xDE92,  true,  false }, // 18
  { "amcntenclr0_el0",  0xDE94,  true,  true }, // 19
  { "amcntenclr1_el0",  0xDE98,  true,  true }, // 20
  { "amcntenset0_el0",  0xDE95,  true,  true }, // 21
  { "amcntenset1_el0",  0xDE99,  true,  true }, // 22
  { "amcr_el0",  0xDE90,  true,  true }, // 23
  { "amevcntr00_el0",  0xDEA0,  true,  true }, // 24
  { "amevcntr01_el0",  0xDEA1,  true,  true }, // 25
  { "amevcntr02_el0",  0xDEA2,  true,  true }, // 26
  { "amevcntr03_el0",  0xDEA3,  true,  true }, // 27
  { "amevcntr10_el0",  0xDEE0,  true,  true }, // 28
  { "amevcntr110_el0",  0xDEEA,  true,  true }, // 29
  { "amevcntr111_el0",  0xDEEB,  true,  true }, // 30
  { "amevcntr112_el0",  0xDEEC,  true,  true }, // 31
  { "amevcntr113_el0",  0xDEED,  true,  true }, // 32
  { "amevcntr114_el0",  0xDEEE,  true,  true }, // 33
  { "amevcntr115_el0",  0xDEEF,  true,  true }, // 34
  { "amevcntr11_el0",  0xDEE1,  true,  true }, // 35
  { "amevcntr12_el0",  0xDEE2,  true,  true }, // 36
  { "amevcntr13_el0",  0xDEE3,  true,  true }, // 37
  { "amevcntr14_el0",  0xDEE4,  true,  true }, // 38
  { "amevcntr15_el0",  0xDEE5,  true,  true }, // 39
  { "amevcntr16_el0",  0xDEE6,  true,  true }, // 40
  { "amevcntr17_el0",  0xDEE7,  true,  true }, // 41
  { "amevcntr18_el0",  0xDEE8,  true,  true }, // 42
  { "amevcntr19_el0",  0xDEE9,  true,  true }, // 43
  { "amevcntvoff00_el2",  0xE6C0,  true,  true }, // 44
  { "amevcntvoff010_el2",  0xE6CA,  true,  true }, // 45
  { "amevcntvoff011_el2",  0xE6CB,  true,  true }, // 46
  { "amevcntvoff012_el2",  0xE6CC,  true,  true }, // 47
  { "amevcntvoff013_el2",  0xE6CD,  true,  true }, // 48
  { "amevcntvoff014_el2",  0xE6CE,  true,  true }, // 49
  { "amevcntvoff015_el2",  0xE6CF,  true,  true }, // 50
  { "amevcntvoff01_el2",  0xE6C1,  true,  true }, // 51
  { "amevcntvoff02_el2",  0xE6C2,  true,  true }, // 52
  { "amevcntvoff03_el2",  0xE6C3,  true,  true }, // 53
  { "amevcntvoff04_el2",  0xE6C4,  true,  true }, // 54
  { "amevcntvoff05_el2",  0xE6C5,  true,  true }, // 55
  { "amevcntvoff06_el2",  0xE6C6,  true,  true }, // 56
  { "amevcntvoff07_el2",  0xE6C7,  true,  true }, // 57
  { "amevcntvoff08_el2",  0xE6C8,  true,  true }, // 58
  { "amevcntvoff09_el2",  0xE6C9,  true,  true }, // 59
  { "amevcntvoff10_el2",  0xE6D0,  true,  true }, // 60
  { "amevcntvoff110_el2",  0xE6DA,  true,  true }, // 61
  { "amevcntvoff111_el2",  0xE6DB,  true,  true }, // 62
  { "amevcntvoff112_el2",  0xE6DC,  true,  true }, // 63
  { "amevcntvoff113_el2",  0xE6DD,  true,  true }, // 64
  { "amevcntvoff114_el2",  0xE6DE,  true,  true }, // 65
  { "amevcntvoff115_el2",  0xE6DF,  true,  true }, // 66
  { "amevcntvoff11_el2",  0xE6D1,  true,  true }, // 67
  { "amevcntvoff12_el2",  0xE6D2,  true,  true }, // 68
  { "amevcntvoff13_el2",  0xE6D3,  true,  true }, // 69
  { "amevcntvoff14_el2",  0xE6D4,  true,  true }, // 70
  { "amevcntvoff15_el2",  0xE6D5,  true,  true }, // 71
  { "amevcntvoff16_el2",  0xE6D6,  true,  true }, // 72
  { "amevcntvoff17_el2",  0xE6D7,  true,  true }, // 73
  { "amevcntvoff18_el2",  0xE6D8,  true,  true }, // 74
  { "amevcntvoff19_el2",  0xE6D9,  true,  true }, // 75
  { "amevtyper00_el0",  0xDEB0,  true,  false }, // 76
  { "amevtyper01_el0",  0xDEB1,  true,  false }, // 77
  { "amevtyper02_el0",  0xDEB2,  true,  false }, // 78
  { "amevtyper03_el0",  0xDEB3,  true,  false }, // 79
  { "amevtyper10_el0",  0xDEF0,  true,  true }, // 80
  { "amevtyper110_el0",  0xDEFA,  true,  true }, // 81
  { "amevtyper111_el0",  0xDEFB,  true,  true }, // 82
  { "amevtyper112_el0",  0xDEFC,  true,  true }, // 83
  { "amevtyper113_el0",  0xDEFD,  true,  true }, // 84
  { "amevtyper114_el0",  0xDEFE,  true,  true }, // 85
  { "amevtyper115_el0",  0xDEFF,  true,  true }, // 86
  { "amevtyper11_el0",  0xDEF1,  true,  true }, // 87
  { "amevtyper12_el0",  0xDEF2,  true,  true }, // 88
  { "amevtyper13_el0",  0xDEF3,  true,  true }, // 89
  { "amevtyper14_el0",  0xDEF4,  true,  true }, // 90
  { "amevtyper15_el0",  0xDEF5,  true,  true }, // 91
  { "amevtyper16_el0",  0xDEF6,  true,  true }, // 92
  { "amevtyper17_el0",  0xDEF7,  true,  true }, // 93
  { "amevtyper18_el0",  0xDEF8,  true,  true }, // 94
  { "amevtyper19_el0",  0xDEF9,  true,  true }, // 95
  { "amuserenr_el0",  0xDE93,  true,  true }, // 96
  { "apdakeyhi_el1",  0xC111,  true,  true }, // 97
  { "apdakeylo_el1",  0xC110,  true,  true }, // 98
  { "apdbkeyhi_el1",  0xC113,  true,  true }, // 99
  { "apdbkeylo_el1",  0xC112,  true,  true }, // 100
  { "apgakeyhi_el1",  0xC119,  true,  true }, // 101
  { "apgakeylo_el1",  0xC118,  true,  true }, // 102
  { "apiakeyhi_el1",  0xC109,  true,  true }, // 103
  { "apiakeylo_el1",  0xC108,  true,  true }, // 104
  { "apibkeyhi_el1",  0xC10B,  true,  true }, // 105
  { "apibkeylo_el1",  0xC10A,  true,  true }, // 106
  { "brbcr_el1",  0x8C80,  true,  true }, // 107
  { "brbcr_el12",  0xAC80,  true,  true }, // 108
  { "brbcr_el2",  0xA480,  true,  true }, // 109
  { "brbfcr_el1",  0x8C81,  true,  true }, // 110
  { "brbidr0_el1",  0x8C90,  true,  false }, // 111
  { "brbinf0_el1",  0x8C00,  true,  false }, // 112
  { "brbinf10_el1",  0x8C50,  true,  false }, // 113
  { "brbinf11_el1",  0x8C58,  true,  false }, // 114
  { "brbinf12_el1",  0x8C60,  true,  false }, // 115
  { "brbinf13_el1",  0x8C68,  true,  false }, // 116
  { "brbinf14_el1",  0x8C70,  true,  false }, // 117
  { "brbinf15_el1",  0x8C78,  true,  false }, // 118
  { "brbinf16_el1",  0x8C04,  true,  false }, // 119
  { "brbinf17_el1",  0x8C0C,  true,  false }, // 120
  { "brbinf18_el1",  0x8C14,  true,  false }, // 121
  { "brbinf19_el1",  0x8C1C,  true,  false }, // 122
  { "brbinf1_el1",  0x8C08,  true,  false }, // 123
  { "brbinf20_el1",  0x8C24,  true,  false }, // 124
  { "brbinf21_el1",  0x8C2C,  true,  false }, // 125
  { "brbinf22_el1",  0x8C34,  true,  false }, // 126
  { "brbinf23_el1",  0x8C3C,  true,  false }, // 127
  { "brbinf24_el1",  0x8C44,  true,  false }, // 128
  { "brbinf25_el1",  0x8C4C,  true,  false }, // 129
  { "brbinf26_el1",  0x8C54,  true,  false }, // 130
  { "brbinf27_el1",  0x8C5C,  true,  false }, // 131
  { "brbinf28_el1",  0x8C64,  true,  false }, // 132
  { "brbinf29_el1",  0x8C6C,  true,  false }, // 133
  { "brbinf2_el1",  0x8C10,  true,  false }, // 134
  { "brbinf30_el1",  0x8C74,  true,  false }, // 135
  { "brbinf31_el1",  0x8C7C,  true,  false }, // 136
  { "brbinf3_el1",  0x8C18,  true,  false }, // 137
  { "brbinf4_el1",  0x8C20,  true,  false }, // 138
  { "brbinf5_el1",  0x8C28,  true,  false }, // 139
  { "brbinf6_el1",  0x8C30,  true,  false }, // 140
  { "brbinf7_el1",  0x8C38,  true,  false }, // 141
  { "brbinf8_el1",  0x8C40,  true,  false }, // 142
  { "brbinf9_el1",  0x8C48,  true,  false }, // 143
  { "brbinfinj_el1",  0x8C88,  true,  true }, // 144
  { "brbsrc0_el1",  0x8C01,  true,  false }, // 145
  { "brbsrc10_el1",  0x8C51,  true,  false }, // 146
  { "brbsrc11_el1",  0x8C59,  true,  false }, // 147
  { "brbsrc12_el1",  0x8C61,  true,  false }, // 148
  { "brbsrc13_el1",  0x8C69,  true,  false }, // 149
  { "brbsrc14_el1",  0x8C71,  true,  false }, // 150
  { "brbsrc15_el1",  0x8C79,  true,  false }, // 151
  { "brbsrc16_el1",  0x8C05,  true,  false }, // 152
  { "brbsrc17_el1",  0x8C0D,  true,  false }, // 153
  { "brbsrc18_el1",  0x8C15,  true,  false }, // 154
  { "brbsrc19_el1",  0x8C1D,  true,  false }, // 155
  { "brbsrc1_el1",  0x8C09,  true,  false }, // 156
  { "brbsrc20_el1",  0x8C25,  true,  false }, // 157
  { "brbsrc21_el1",  0x8C2D,  true,  false }, // 158
  { "brbsrc22_el1",  0x8C35,  true,  false }, // 159
  { "brbsrc23_el1",  0x8C3D,  true,  false }, // 160
  { "brbsrc24_el1",  0x8C45,  true,  false }, // 161
  { "brbsrc25_el1",  0x8C4D,  true,  false }, // 162
  { "brbsrc26_el1",  0x8C55,  true,  false }, // 163
  { "brbsrc27_el1",  0x8C5D,  true,  false }, // 164
  { "brbsrc28_el1",  0x8C65,  true,  false }, // 165
  { "brbsrc29_el1",  0x8C6D,  true,  false }, // 166
  { "brbsrc2_el1",  0x8C11,  true,  false }, // 167
  { "brbsrc30_el1",  0x8C75,  true,  false }, // 168
  { "brbsrc31_el1",  0x8C7D,  true,  false }, // 169
  { "brbsrc3_el1",  0x8C19,  true,  false }, // 170
  { "brbsrc4_el1",  0x8C21,  true,  false }, // 171
  { "brbsrc5_el1",  0x8C29,  true,  false }, // 172
  { "brbsrc6_el1",  0x8C31,  true,  false }, // 173
  { "brbsrc7_el1",  0x8C39,  true,  false }, // 174
  { "brbsrc8_el1",  0x8C41,  true,  false }, // 175
  { "brbsrc9_el1",  0x8C49,  true,  false }, // 176
  { "brbsrcinj_el1",  0x8C89,  true,  true }, // 177
  { "brbtgt0_el1",  0x8C02,  true,  false }, // 178
  { "brbtgt10_el1",  0x8C52,  true,  false }, // 179
  { "brbtgt11_el1",  0x8C5A,  true,  false }, // 180
  { "brbtgt12_el1",  0x8C62,  true,  false }, // 181
  { "brbtgt13_el1",  0x8C6A,  true,  false }, // 182
  { "brbtgt14_el1",  0x8C72,  true,  false }, // 183
  { "brbtgt15_el1",  0x8C7A,  true,  false }, // 184
  { "brbtgt16_el1",  0x8C06,  true,  false }, // 185
  { "brbtgt17_el1",  0x8C0E,  true,  false }, // 186
  { "brbtgt18_el1",  0x8C16,  true,  false }, // 187
  { "brbtgt19_el1",  0x8C1E,  true,  false }, // 188
  { "brbtgt1_el1",  0x8C0A,  true,  false }, // 189
  { "brbtgt20_el1",  0x8C26,  true,  false }, // 190
  { "brbtgt21_el1",  0x8C2E,  true,  false }, // 191
  { "brbtgt22_el1",  0x8C36,  true,  false }, // 192
  { "brbtgt23_el1",  0x8C3E,  true,  false }, // 193
  { "brbtgt24_el1",  0x8C46,  true,  false }, // 194
  { "brbtgt25_el1",  0x8C4E,  true,  false }, // 195
  { "brbtgt26_el1",  0x8C56,  true,  false }, // 196
  { "brbtgt27_el1",  0x8C5E,  true,  false }, // 197
  { "brbtgt28_el1",  0x8C66,  true,  false }, // 198
  { "brbtgt29_el1",  0x8C6E,  true,  false }, // 199
  { "brbtgt2_el1",  0x8C12,  true,  false }, // 200
  { "brbtgt30_el1",  0x8C76,  true,  false }, // 201
  { "brbtgt31_el1",  0x8C7E,  true,  false }, // 202
  { "brbtgt3_el1",  0x8C1A,  true,  false }, // 203
  { "brbtgt4_el1",  0x8C22,  true,  false }, // 204
  { "brbtgt5_el1",  0x8C2A,  true,  false }, // 205
  { "brbtgt6_el1",  0x8C32,  true,  false }, // 206
  { "brbtgt7_el1",  0x8C3A,  true,  false }, // 207
  { "brbtgt8_el1",  0x8C42,  true,  false }, // 208
  { "brbtgt9_el1",  0x8C4A,  true,  false }, // 209
  { "brbtgtinj_el1",  0x8C8A,  true,  true }, // 210
  { "brbts_el1",  0x8C82,  true,  true }, // 211
  { "ccsidr2_el1",  0xC802,  true,  false }, // 212
  { "ccsidr_el1",  0xC800,  true,  false }, // 213
  { "cctlr_el0",  0xD892,  true,  true }, // 214
  { "cctlr_el1",  0xC092,  true,  true }, // 215
  { "cctlr_el12",  0xE892,  true,  true }, // 216
  { "cctlr_el2",  0xE092,  true,  true }, // 217
  { "cctlr_el3",  0xF092,  true,  true }, // 218
  { "chcr_el2",  0xE093,  true,  true }, // 219
  { "clidr_el1",  0xC801,  true,  false }, // 220
  { "cntfrq_el0",  0xDF00,  true,  true }, // 221
  { "cnthctl_el2",  0xE708,  true,  true }, // 222
  { "cnthps_ctl_el2",  0xE729,  true,  true }, // 223
  { "cnthps_cval_el2",  0xE72A,  true,  true }, // 224
  { "cnthps_tval_el2",  0xE728,  true,  true }, // 225
  { "cnthp_ctl_el2",  0xE711,  true,  true }, // 226
  { "cnthp_cval_el2",  0xE712,  true,  true }, // 227
  { "cnthp_tval_el2",  0xE710,  true,  true }, // 228
  { "cnthvs_ctl_el2",  0xE721,  true,  true }, // 229
  { "cnthvs_cval_el2",  0xE722,  true,  true }, // 230
  { "cnthvs_tval_el2",  0xE720,  true,  true }, // 231
  { "cnthv_ctl_el2",  0xE719,  true,  true }, // 232
  { "cnthv_cval_el2",  0xE71A,  true,  true }, // 233
  { "cnthv_tval_el2",  0xE718,  true,  true }, // 234
  { "cntiscale_el2",  0xE705,  true,  true }, // 235
  { "cntkctl_el1",  0xC708,  true,  true }, // 236
  { "cntkctl_el12",  0xEF08,  true,  true }, // 237
  { "cntpctss_el0",  0xDF05,  true,  true }, // 238
  { "cntpct_el0",  0xDF01,  true,  false }, // 239
  { "cntpoff_el2",  0xE706,  true,  true }, // 240
  { "cntps_ctl_el1",  0xFF11,  true,  true }, // 241
  { "cntps_cval_el1",  0xFF12,  true,  true }, // 242
  { "cntps_tval_el1",  0xFF10,  true,  true }, // 243
  { "cntp_ctl_el0",  0xDF11,  true,  true }, // 244
  { "cntp_ctl_el02",  0xEF11,  true,  true }, // 245
  { "cntp_cval_el0",  0xDF12,  true,  true }, // 246
  { "cntp_cval_el02",  0xEF12,  true,  true }, // 247
  { "cntp_tval_el0",  0xDF10,  true,  true }, // 248
  { "cntp_tval_el02",  0xEF10,  true,  true }, // 249
  { "cntscale_el2",  0xE704,  true,  true }, // 250
  { "cntvctss_el0",  0xDF06,  true,  true }, // 251
  { "cntvct_el0",  0xDF02,  true,  false }, // 252
  { "cntvfrq_el2",  0xE707,  true,  true }, // 253
  { "cntvoff_el2",  0xE703,  true,  true }, // 254
  { "cntv_ctl_el0",  0xDF19,  true,  true }, // 255
  { "cntv_ctl_el02",  0xEF19,  true,  true }, // 256
  { "cntv_cval_el0",  0xDF1A,  true,  true }, // 257
  { "cntv_cval_el02",  0xEF1A,  true,  true }, // 258
  { "cntv_tval_el0",  0xDF18,  true,  true }, // 259
  { "cntv_tval_el02",  0xEF18,  true,  true }, // 260
  { "contextidr_el1",  0xC681,  true,  true }, // 261
  { "contextidr_el12",  0xEE81,  true,  true }, // 262
  { "contextidr_el2",  0xE681,  true,  true }, // 263
  { "cpacr_el1",  0xC082,  true,  true }, // 264
  { "cpacr_el12",  0xE882,  true,  true }, // 265
  { "cpm_ioacc_ctl_el3",  0xFF90,  true,  true }, // 266
  { "cptr_el2",  0xE08A,  true,  true }, // 267
  { "cptr_el3",  0xF08A,  true,  true }, // 268
  { "cscr_el3",  0xF093,  true,  true }, // 269
  { "csselr_el1",  0xD000,  true,  true }, // 270
  { "ctr_el0",  0xD801,  true,  false }, // 271
  { "currentel",  0xC212,  true,  false }, // 272
  { "dacr32_el2",  0xE180,  true,  true }, // 273
  { "daif",  0xDA11,  true,  true }, // 274
  { "dbgauthstatus_el1",  0x83F6,  true,  false }, // 275
  { "dbgbcr0_el1",  0x8005,  true,  true }, // 276
  { "dbgbcr10_el1",  0x8055,  true,  true }, // 277
  { "dbgbcr11_el1",  0x805D,  true,  true }, // 278
  { "dbgbcr12_el1",  0x8065,  true,  true }, // 279
  { "dbgbcr13_el1",  0x806D,  true,  true }, // 280
  { "dbgbcr14_el1",  0x8075,  true,  true }, // 281
  { "dbgbcr15_el1",  0x807D,  true,  true }, // 282
  { "dbgbcr1_el1",  0x800D,  true,  true }, // 283
  { "dbgbcr2_el1",  0x8015,  true,  true }, // 284
  { "dbgbcr3_el1",  0x801D,  true,  true }, // 285
  { "dbgbcr4_el1",  0x8025,  true,  true }, // 286
  { "dbgbcr5_el1",  0x802D,  true,  true }, // 287
  { "dbgbcr6_el1",  0x8035,  true,  true }, // 288
  { "dbgbcr7_el1",  0x803D,  true,  true }, // 289
  { "dbgbcr8_el1",  0x8045,  true,  true }, // 290
  { "dbgbcr9_el1",  0x804D,  true,  true }, // 291
  { "dbgbvr0_el1",  0x8004,  true,  true }, // 292
  { "dbgbvr10_el1",  0x8054,  true,  true }, // 293
  { "dbgbvr11_el1",  0x805C,  true,  true }, // 294
  { "dbgbvr12_el1",  0x8064,  true,  true }, // 295
  { "dbgbvr13_el1",  0x806C,  true,  true }, // 296
  { "dbgbvr14_el1",  0x8074,  true,  true }, // 297
  { "dbgbvr15_el1",  0x807C,  true,  true }, // 298
  { "dbgbvr1_el1",  0x800C,  true,  true }, // 299
  { "dbgbvr2_el1",  0x8014,  true,  true }, // 300
  { "dbgbvr3_el1",  0x801C,  true,  true }, // 301
  { "dbgbvr4_el1",  0x8024,  true,  true }, // 302
  { "dbgbvr5_el1",  0x802C,  true,  true }, // 303
  { "dbgbvr6_el1",  0x8034,  true,  true }, // 304
  { "dbgbvr7_el1",  0x803C,  true,  true }, // 305
  { "dbgbvr8_el1",  0x8044,  true,  true }, // 306
  { "dbgbvr9_el1",  0x804C,  true,  true }, // 307
  { "dbgclaimclr_el1",  0x83CE,  true,  true }, // 308
  { "dbgclaimset_el1",  0x83C6,  true,  true }, // 309
  { "dbgdtrrx_el0",  0x9828,  true,  false }, // 310
  { "dbgdtrtx_el0",  0x9828,  false,  true }, // 311
  { "dbgdtr_el0",  0x9820,  true,  true }, // 312
  { "dbgprcr_el1",  0x80A4,  true,  true }, // 313
  { "dbgvcr32_el2",  0xA038,  true,  true }, // 314
  { "dbgwcr0_el1",  0x8007,  true,  true }, // 315
  { "dbgwcr10_el1",  0x8057,  true,  true }, // 316
  { "dbgwcr11_el1",  0x805F,  true,  true }, // 317
  { "dbgwcr12_el1",  0x8067,  true,  true }, // 318
  { "dbgwcr13_el1",  0x806F,  true,  true }, // 319
  { "dbgwcr14_el1",  0x8077,  true,  true }, // 320
  { "dbgwcr15_el1",  0x807F,  true,  true }, // 321
  { "dbgwcr1_el1",  0x800F,  true,  true }, // 322
  { "dbgwcr2_el1",  0x8017,  true,  true }, // 323
  { "dbgwcr3_el1",  0x801F,  true,  true }, // 324
  { "dbgwcr4_el1",  0x8027,  true,  true }, // 325
  { "dbgwcr5_el1",  0x802F,  true,  true }, // 326
  { "dbgwcr6_el1",  0x8037,  true,  true }, // 327
  { "dbgwcr7_el1",  0x803F,  true,  true }, // 328
  { "dbgwcr8_el1",  0x8047,  true,  true }, // 329
  { "dbgwcr9_el1",  0x804F,  true,  true }, // 330
  { "dbgwvr0_el1",  0x8006,  true,  true }, // 331
  { "dbgwvr10_el1",  0x8056,  true,  true }, // 332
  { "dbgwvr11_el1",  0x805E,  true,  true }, // 333
  { "dbgwvr12_el1",  0x8066,  true,  true }, // 334
  { "dbgwvr13_el1",  0x806E,  true,  true }, // 335
  { "dbgwvr14_el1",  0x8076,  true,  true }, // 336
  { "dbgwvr15_el1",  0x807E,  true,  true }, // 337
  { "dbgwvr1_el1",  0x800E,  true,  true }, // 338
  { "dbgwvr2_el1",  0x8016,  true,  true }, // 339
  { "dbgwvr3_el1",  0x801E,  true,  true }, // 340
  { "dbgwvr4_el1",  0x8026,  true,  true }, // 341
  { "dbgwvr5_el1",  0x802E,  true,  true }, // 342
  { "dbgwvr6_el1",  0x8036,  true,  true }, // 343
  { "dbgwvr7_el1",  0x803E,  true,  true }, // 344
  { "dbgwvr8_el1",  0x8046,  true,  true }, // 345
  { "dbgwvr9_el1",  0x804E,  true,  true }, // 346
  { "dczid_el0",  0xD807,  true,  false }, // 347
  { "disr_el1",  0xC609,  true,  true }, // 348
  { "dit",  0xDA15,  true,  true }, // 349
  { "dlr_el0",  0xDA29,  true,  true }, // 350
  { "dspsr_el0",  0xDA28,  true,  true }, // 351
  { "elr_el1",  0xC201,  true,  true }, // 352
  { "elr_el12",  0xEA01,  true,  true }, // 353
  { "elr_el2",  0xE201,  true,  true }, // 354
  { "elr_el3",  0xF201,  true,  true }, // 355
  { "erridr_el1",  0xC298,  true,  false }, // 356
  { "errselr_el1",  0xC299,  true,  true }, // 357
  { "erxaddr_el1",  0xC2A3,  true,  true }, // 358
  { "erxctlr_el1",  0xC2A1,  true,  true }, // 359
  { "erxfr_el1",  0xC2A0,  true,  false }, // 360
  { "erxmisc0_el1",  0xC2A8,  true,  true }, // 361
  { "erxmisc1_el1",  0xC2A9,  true,  true }, // 362
  { "erxmisc2_el1",  0xC2AA,  true,  true }, // 363
  { "erxmisc3_el1",  0xC2AB,  true,  true }, // 364
  { "erxpfgcdn_el1",  0xC2A6,  true,  true }, // 365
  { "erxpfgctl_el1",  0xC2A5,  true,  true }, // 366
  { "erxpfgf_el1",  0xC2A4,  true,  false }, // 367
  { "erxstatus_el1",  0xC2A2,  true,  true }, // 368
  { "esr_el1",  0xC290,  true,  true }, // 369
  { "esr_el12",  0xEA90,  true,  true }, // 370
  { "esr_el2",  0xE290,  true,  true }, // 371
  { "esr_el3",  0xF290,  true,  true }, // 372
  { "far_el1",  0xC300,  true,  true }, // 373
  { "far_el12",  0xEB00,  true,  true }, // 374
  { "far_el2",  0xE300,  true,  true }, // 375
  { "far_el3",  0xF300,  true,  true }, // 376
  { "fpcr",  0xDA20,  true,  true }, // 377
  { "fpexc32_el2",  0xE298,  true,  true }, // 378
  { "fpsr",  0xDA21,  true,  true }, // 379
  { "gcr_el1",  0xC086,  true,  true }, // 380
  { "gmid_el1",  0xC804,  true,  false }, // 381
  { "gpccr_el3",  0xF10E,  true,  true }, // 382
  { "gptbr_el3",  0xF10C,  true,  true }, // 383
  { "hacr_el2",  0xE08F,  true,  true }, // 384
  { "hcrx_el2",  0xE092,  true,  true }, // 385
  { "hcr_el2",  0xE088,  true,  true }, // 386
  { "hdfgrtr_el2",  0xE18C,  true,  true }, // 387
  { "hdfgwtr_el2",  0xE18D,  true,  true }, // 388
  { "hfgitr_el2",  0xE08E,  true,  true }, // 389
  { "hfgrtr_el2",  0xE08C,  true,  true }, // 390
  { "hfgwtr_el2",  0xE08D,  true,  true }, // 391
  { "hpfar_el2",  0xE304,  true,  true }, // 392
  { "hstr_el2",  0xE08B,  true,  true }, // 393
  { "icc_ap0r0_el1",  0xC644,  true,  true }, // 394
  { "icc_ap0r1_el1",  0xC645,  true,  true }, // 395
  { "icc_ap0r2_el1",  0xC646,  true,  true }, // 396
  { "icc_ap0r3_el1",  0xC647,  true,  true }, // 397
  { "icc_ap1r0_el1",  0xC648,  true,  true }, // 398
  { "icc_ap1r1_el1",  0xC649,  true,  true }, // 399
  { "icc_ap1r2_el1",  0xC64A,  true,  true }, // 400
  { "icc_ap1r3_el1",  0xC64B,  true,  true }, // 401
  { "icc_asgi1r_el1",  0xC65E,  false,  true }, // 402
  { "icc_bpr0_el1",  0xC643,  true,  true }, // 403
  { "icc_bpr1_el1",  0xC663,  true,  true }, // 404
  { "icc_ctlr_el1",  0xC664,  true,  true }, // 405
  { "icc_ctlr_el3",  0xF664,  true,  true }, // 406
  { "icc_dir_el1",  0xC659,  false,  true }, // 407
  { "icc_eoir0_el1",  0xC641,  false,  true }, // 408
  { "icc_eoir1_el1",  0xC661,  false,  true }, // 409
  { "icc_hppir0_el1",  0xC642,  true,  false }, // 410
  { "icc_hppir1_el1",  0xC662,  true,  false }, // 411
  { "icc_iar0_el1",  0xC640,  true,  false }, // 412
  { "icc_iar1_el1",  0xC660,  true,  false }, // 413
  { "icc_igrpen0_el1",  0xC666,  true,  true }, // 414
  { "icc_igrpen1_el1",  0xC667,  true,  true }, // 415
  { "icc_igrpen1_el3",  0xF667,  true,  true }, // 416
  { "icc_pmr_el1",  0xC230,  true,  true }, // 417
  { "icc_rpr_el1",  0xC65B,  true,  false }, // 418
  { "icc_sgi0r_el1",  0xC65F,  false,  true }, // 419
  { "icc_sgi1r_el1",  0xC65D,  false,  true }, // 420
  { "icc_sre_el1",  0xC665,  true,  true }, // 421
  { "icc_sre_el2",  0xE64D,  true,  true }, // 422
  { "icc_sre_el3",  0xF665,  true,  true }, // 423
  { "ich_ap0r0_el2",  0xE640,  true,  true }, // 424
  { "ich_ap0r1_el2",  0xE641,  true,  true }, // 425
  { "ich_ap0r2_el2",  0xE642,  true,  true }, // 426
  { "ich_ap0r3_el2",  0xE643,  true,  true }, // 427
  { "ich_ap1r0_el2",  0xE648,  true,  true }, // 428
  { "ich_ap1r1_el2",  0xE649,  true,  true }, // 429
  { "ich_ap1r2_el2",  0xE64A,  true,  true }, // 430
  { "ich_ap1r3_el2",  0xE64B,  true,  true }, // 431
  { "ich_eisr_el2",  0xE65B,  true,  false }, // 432
  { "ich_elrsr_el2",  0xE65D,  true,  false }, // 433
  { "ich_hcr_el2",  0xE658,  true,  true }, // 434
  { "ich_lr0_el2",  0xE660,  true,  true }, // 435
  { "ich_lr10_el2",  0xE66A,  true,  true }, // 436
  { "ich_lr11_el2",  0xE66B,  true,  true }, // 437
  { "ich_lr12_el2",  0xE66C,  true,  true }, // 438
  { "ich_lr13_el2",  0xE66D,  true,  true }, // 439
  { "ich_lr14_el2",  0xE66E,  true,  true }, // 440
  { "ich_lr15_el2",  0xE66F,  true,  true }, // 441
  { "ich_lr1_el2",  0xE661,  true,  true }, // 442
  { "ich_lr2_el2",  0xE662,  true,  true }, // 443
  { "ich_lr3_el2",  0xE663,  true,  true }, // 444
  { "ich_lr4_el2",  0xE664,  true,  true }, // 445
  { "ich_lr5_el2",  0xE665,  true,  true }, // 446
  { "ich_lr6_el2",  0xE666,  true,  true }, // 447
  { "ich_lr7_el2",  0xE667,  true,  true }, // 448
  { "ich_lr8_el2",  0xE668,  true,  true }, // 449
  { "ich_lr9_el2",  0xE669,  true,  true }, // 450
  { "ich_misr_el2",  0xE65A,  true,  false }, // 451
  { "ich_vmcr_el2",  0xE65F,  true,  true }, // 452
  { "ich_vtr_el2",  0xE659,  true,  false }, // 453
  { "id_aa64afr0_el1",  0xC02C,  true,  false }, // 454
  { "id_aa64afr1_el1",  0xC02D,  true,  false }, // 455
  { "id_aa64dfr0_el1",  0xC028,  true,  false }, // 456
  { "id_aa64dfr1_el1",  0xC029,  true,  false }, // 457
  { "id_aa64isar0_el1",  0xC030,  true,  false }, // 458
  { "id_aa64isar1_el1",  0xC031,  true,  false }, // 459
  { "id_aa64isar2_el1",  0xC032,  true,  false }, // 460
  { "id_aa64mmfr0_el1",  0xC038,  true,  false }, // 461
  { "id_aa64mmfr1_el1",  0xC039,  true,  false }, // 462
  { "id_aa64mmfr2_el1",  0xC03A,  true,  false }, // 463
  { "id_aa64pfr0_el1",  0xC020,  true,  false }, // 464
  { "id_aa64pfr1_el1",  0xC021,  true,  false }, // 465
  { "id_aa64smfr0_el1",  0xC025,  true,  false }, // 466
  { "id_aa64zfr0_el1",  0xC024,  true,  false }, // 467
  { "id_afr0_el1",  0xC00B,  true,  false }, // 468
  { "id_dfr0_el1",  0xC00A,  true,  false }, // 469
  { "id_isar0_el1",  0xC010,  true,  false }, // 470
  { "id_isar1_el1",  0xC011,  true,  false }, // 471
  { "id_isar2_el1",  0xC012,  true,  false }, // 472
  { "id_isar3_el1",  0xC013,  true,  false }, // 473
  { "id_isar4_el1",  0xC014,  true,  false }, // 474
  { "id_isar5_el1",  0xC015,  true,  false }, // 475
  { "id_isar6_el1",  0xC017,  true,  false }, // 476
  { "id_mmfr0_el1",  0xC00C,  true,  false }, // 477
  { "id_mmfr1_el1",  0xC00D,  true,  false }, // 478
  { "id_mmfr2_el1",  0xC00E,  true,  false }, // 479
  { "id_mmfr3_el1",  0xC00F,  true,  false }, // 480
  { "id_mmfr4_el1",  0xC016,  true,  false }, // 481
  { "id_mmfr5_el1",  0xC01E,  true,  false }, // 482
  { "id_pfr0_el1",  0xC008,  true,  false }, // 483
  { "id_pfr1_el1",  0xC009,  true,  false }, // 484
  { "id_pfr2_el1",  0xC01C,  true,  false }, // 485
  { "ifsr32_el2",  0xE281,  true,  true }, // 486
  { "isr_el1",  0xC608,  true,  false }, // 487
  { "lorc_el1",  0xC523,  true,  true }, // 488
  { "lorea_el1",  0xC521,  true,  true }, // 489
  { "lorid_el1",  0xC527,  true,  false }, // 490
  { "lorn_el1",  0xC522,  true,  true }, // 491
  { "lorsa_el1",  0xC520,  true,  true }, // 492
  { "mair_el1",  0xC510,  true,  true }, // 493
  { "mair_el12",  0xED10,  true,  true }, // 494
  { "mair_el2",  0xE510,  true,  true }, // 495
  { "mair_el3",  0xF510,  true,  true }, // 496
  { "mdccint_el1",  0x8010,  true,  true }, // 497
  { "mdccsr_el0",  0x9808,  true,  false }, // 498
  { "mdcr_el2",  0xE089,  true,  true }, // 499
  { "mdcr_el3",  0xF099,  true,  true }, // 500
  { "mdrar_el1",  0x8080,  true,  false }, // 501
  { "mdscr_el1",  0x8012,  true,  true }, // 502
  { "mfar_el3",  0xF305,  true,  true }, // 503
  { "midr_el1",  0xC000,  true,  false }, // 504
  { "mpam0_el1",  0xC529,  true,  true }, // 505
  { "mpam1_el1",  0xC528,  true,  true }, // 506
  { "mpam1_el12",  0xED28,  true,  true }, // 507
  { "mpam2_el2",  0xE528,  true,  true }, // 508
  { "mpam3_el3",  0xF528,  true,  true }, // 509
  { "mpamhcr_el2",  0xE520,  true,  true }, // 510
  { "mpamidr_el1",  0xC524,  true,  false }, // 511
  { "mpamsm_el1",  0xC52B,  true,  true }, // 512
  { "mpamvpm0_el2",  0xE530,  true,  true }, // 513
  { "mpamvpm1_el2",  0xE531,  true,  true }, // 514
  { "mpamvpm2_el2",  0xE532,  true,  true }, // 515
  { "mpamvpm3_el2",  0xE533,  true,  true }, // 516
  { "mpamvpm4_el2",  0xE534,  true,  true }, // 517
  { "mpamvpm5_el2",  0xE535,  true,  true }, // 518
  { "mpamvpm6_el2",  0xE536,  true,  true }, // 519
  { "mpamvpm7_el2",  0xE537,  true,  true }, // 520
  { "mpamvpmv_el2",  0xE521,  true,  true }, // 521
  { "mpidr_el1",  0xC005,  true,  false }, // 522
  { "mpuir_el1",  0xC004,  true,  true }, // 523
  { "mpuir_el2",  0xE004,  true,  true }, // 524
  { "mvfr0_el1",  0xC018,  true,  false }, // 525
  { "mvfr1_el1",  0xC019,  true,  false }, // 526
  { "mvfr2_el1",  0xC01A,  true,  false }, // 527
  { "nzcv",  0xDA10,  true,  true }, // 528
  { "osdlr_el1",  0x809C,  true,  true }, // 529
  { "osdtrrx_el1",  0x8002,  true,  true }, // 530
  { "osdtrtx_el1",  0x801A,  true,  true }, // 531
  { "oseccr_el1",  0x8032,  true,  true }, // 532
  { "oslar_el1",  0x8084,  false,  true }, // 533
  { "oslsr_el1",  0x808C,  true,  false }, // 534
  { "pan",  0xC213,  true,  true }, // 535
  { "par_el1",  0xC3A0,  true,  true }, // 536
  { "pmbidr_el1",  0xC4D7,  true,  false }, // 537
  { "pmblimitr_el1",  0xC4D0,  true,  true }, // 538
  { "pmbptr_el1",  0xC4D1,  true,  true }, // 539
  { "pmbsr_el1",  0xC4D3,  true,  true }, // 540
  { "pmccfiltr_el0",  0xDF7F,  true,  true }, // 541
  { "pmccntr_el0",  0xDCE8,  true,  true }, // 542
  { "pmceid0_el0",  0xDCE6,  true,  false }, // 543
  { "pmceid1_el0",  0xDCE7,  true,  false }, // 544
  { "pmcntenclr_el0",  0xDCE2,  true,  true }, // 545
  { "pmcntenset_el0",  0xDCE1,  true,  true }, // 546
  { "pmcr_el0",  0xDCE0,  true,  true }, // 547
  { "pmevcntr0_el0",  0xDF40,  true,  true }, // 548
  { "pmevcntr10_el0",  0xDF4A,  true,  true }, // 549
  { "pmevcntr11_el0",  0xDF4B,  true,  true }, // 550
  { "pmevcntr12_el0",  0xDF4C,  true,  true }, // 551
  { "pmevcntr13_el0",  0xDF4D,  true,  true }, // 552
  { "pmevcntr14_el0",  0xDF4E,  true,  true }, // 553
  { "pmevcntr15_el0",  0xDF4F,  true,  true }, // 554
  { "pmevcntr16_el0",  0xDF50,  true,  true }, // 555
  { "pmevcntr17_el0",  0xDF51,  true,  true }, // 556
  { "pmevcntr18_el0",  0xDF52,  true,  true }, // 557
  { "pmevcntr19_el0",  0xDF53,  true,  true }, // 558
  { "pmevcntr1_el0",  0xDF41,  true,  true }, // 559
  { "pmevcntr20_el0",  0xDF54,  true,  true }, // 560
  { "pmevcntr21_el0",  0xDF55,  true,  true }, // 561
  { "pmevcntr22_el0",  0xDF56,  true,  true }, // 562
  { "pmevcntr23_el0",  0xDF57,  true,  true }, // 563
  { "pmevcntr24_el0",  0xDF58,  true,  true }, // 564
  { "pmevcntr25_el0",  0xDF59,  true,  true }, // 565
  { "pmevcntr26_el0",  0xDF5A,  true,  true }, // 566
  { "pmevcntr27_el0",  0xDF5B,  true,  true }, // 567
  { "pmevcntr28_el0",  0xDF5C,  true,  true }, // 568
  { "pmevcntr29_el0",  0xDF5D,  true,  true }, // 569
  { "pmevcntr2_el0",  0xDF42,  true,  true }, // 570
  { "pmevcntr30_el0",  0xDF5E,  true,  true }, // 571
  { "pmevcntr3_el0",  0xDF43,  true,  true }, // 572
  { "pmevcntr4_el0",  0xDF44,  true,  true }, // 573
  { "pmevcntr5_el0",  0xDF45,  true,  true }, // 574
  { "pmevcntr6_el0",  0xDF46,  true,  true }, // 575
  { "pmevcntr7_el0",  0xDF47,  true,  true }, // 576
  { "pmevcntr8_el0",  0xDF48,  true,  true }, // 577
  { "pmevcntr9_el0",  0xDF49,  true,  true }, // 578
  { "pmevtyper0_el0",  0xDF60,  true,  true }, // 579
  { "pmevtyper10_el0",  0xDF6A,  true,  true }, // 580
  { "pmevtyper11_el0",  0xDF6B,  true,  true }, // 581
  { "pmevtyper12_el0",  0xDF6C,  true,  true }, // 582
  { "pmevtyper13_el0",  0xDF6D,  true,  true }, // 583
  { "pmevtyper14_el0",  0xDF6E,  true,  true }, // 584
  { "pmevtyper15_el0",  0xDF6F,  true,  true }, // 585
  { "pmevtyper16_el0",  0xDF70,  true,  true }, // 586
  { "pmevtyper17_el0",  0xDF71,  true,  true }, // 587
  { "pmevtyper18_el0",  0xDF72,  true,  true }, // 588
  { "pmevtyper19_el0",  0xDF73,  true,  true }, // 589
  { "pmevtyper1_el0",  0xDF61,  true,  true }, // 590
  { "pmevtyper20_el0",  0xDF74,  true,  true }, // 591
  { "pmevtyper21_el0",  0xDF75,  true,  true }, // 592
  { "pmevtyper22_el0",  0xDF76,  true,  true }, // 593
  { "pmevtyper23_el0",  0xDF77,  true,  true }, // 594
  { "pmevtyper24_el0",  0xDF78,  true,  true }, // 595
  { "pmevtyper25_el0",  0xDF79,  true,  true }, // 596
  { "pmevtyper26_el0",  0xDF7A,  true,  true }, // 597
  { "pmevtyper27_el0",  0xDF7B,  true,  true }, // 598
  { "pmevtyper28_el0",  0xDF7C,  true,  true }, // 599
  { "pmevtyper29_el0",  0xDF7D,  true,  true }, // 600
  { "pmevtyper2_el0",  0xDF62,  true,  true }, // 601
  { "pmevtyper30_el0",  0xDF7E,  true,  true }, // 602
  { "pmevtyper3_el0",  0xDF63,  true,  true }, // 603
  { "pmevtyper4_el0",  0xDF64,  true,  true }, // 604
  { "pmevtyper5_el0",  0xDF65,  true,  true }, // 605
  { "pmevtyper6_el0",  0xDF66,  true,  true }, // 606
  { "pmevtyper7_el0",  0xDF67,  true,  true }, // 607
  { "pmevtyper8_el0",  0xDF68,  true,  true }, // 608
  { "pmevtyper9_el0",  0xDF69,  true,  true }, // 609
  { "pmintenclr_el1",  0xC4F2,  true,  true }, // 610
  { "pmintenset_el1",  0xC4F1,  true,  true }, // 611
  { "pmmir_el1",  0xC4F6,  true,  true }, // 612
  { "pmovsclr_el0",  0xDCE3,  true,  true }, // 613
  { "pmovsset_el0",  0xDCF3,  true,  true }, // 614
  { "pmscr_el1",  0xC4C8,  true,  true }, // 615
  { "pmscr_el12",  0xECC8,  true,  true }, // 616
  { "pmscr_el2",  0xE4C8,  true,  true }, // 617
  { "pmselr_el0",  0xDCE5,  true,  true }, // 618
  { "pmsevfr_el1",  0xC4CD,  true,  true }, // 619
  { "pmsfcr_el1",  0xC4CC,  true,  true }, // 620
  { "pmsicr_el1",  0xC4CA,  true,  true }, // 621
  { "pmsidr_el1",  0xC4CF,  true,  false }, // 622
  { "pmsirr_el1",  0xC4CB,  true,  true }, // 623
  { "pmslatfr_el1",  0xC4CE,  true,  true }, // 624
  { "pmsnevfr_el1",  0xC4C9,  true,  true }, // 625
  { "pmswinc_el0",  0xDCE4,  false,  true }, // 626
  { "pmuserenr_el0",  0xDCF0,  true,  true }, // 627
  { "pmxevcntr_el0",  0xDCEA,  true,  true }, // 628
  { "pmxevtyper_el0",  0xDCE9,  true,  true }, // 629
  { "prbar10_el1",  0xC368,  true,  true }, // 630
  { "prbar10_el2",  0xE368,  true,  true }, // 631
  { "prbar11_el1",  0xC36C,  true,  true }, // 632
  { "prbar11_el2",  0xE36C,  true,  true }, // 633
  { "prbar12_el1",  0xC370,  true,  true }, // 634
  { "prbar12_el2",  0xE370,  true,  true }, // 635
  { "prbar13_el1",  0xC374,  true,  true }, // 636
  { "prbar13_el2",  0xE374,  true,  true }, // 637
  { "prbar14_el1",  0xC378,  true,  true }, // 638
  { "prbar14_el2",  0xE378,  true,  true }, // 639
  { "prbar15_el1",  0xC37C,  true,  true }, // 640
  { "prbar15_el2",  0xE37C,  true,  true }, // 641
  { "prbar1_el1",  0xC344,  true,  true }, // 642
  { "prbar1_el2",  0xE344,  true,  true }, // 643
  { "prbar2_el1",  0xC348,  true,  true }, // 644
  { "prbar2_el2",  0xE348,  true,  true }, // 645
  { "prbar3_el1",  0xC34C,  true,  true }, // 646
  { "prbar3_el2",  0xE34C,  true,  true }, // 647
  { "prbar4_el1",  0xC350,  true,  true }, // 648
  { "prbar4_el2",  0xE350,  true,  true }, // 649
  { "prbar5_el1",  0xC354,  true,  true }, // 650
  { "prbar5_el2",  0xE354,  true,  true }, // 651
  { "prbar6_el1",  0xC358,  true,  true }, // 652
  { "prbar6_el2",  0xE358,  true,  true }, // 653
  { "prbar7_el1",  0xC35C,  true,  true }, // 654
  { "prbar7_el2",  0xE35C,  true,  true }, // 655
  { "prbar8_el1",  0xC360,  true,  true }, // 656
  { "prbar8_el2",  0xE360,  true,  true }, // 657
  { "prbar9_el1",  0xC364,  true,  true }, // 658
  { "prbar9_el2",  0xE364,  true,  true }, // 659
  { "prbar_el1",  0xC340,  true,  true }, // 660
  { "prbar_el2",  0xE340,  true,  true }, // 661
  { "prenr_el1",  0xC309,  true,  true }, // 662
  { "prenr_el2",  0xE309,  true,  true }, // 663
  { "prlar10_el1",  0xC369,  true,  true }, // 664
  { "prlar10_el2",  0xE369,  true,  true }, // 665
  { "prlar11_el1",  0xC36D,  true,  true }, // 666
  { "prlar11_el2",  0xE36D,  true,  true }, // 667
  { "prlar12_el1",  0xC371,  true,  true }, // 668
  { "prlar12_el2",  0xE371,  true,  true }, // 669
  { "prlar13_el1",  0xC375,  true,  true }, // 670
  { "prlar13_el2",  0xE375,  true,  true }, // 671
  { "prlar14_el1",  0xC379,  true,  true }, // 672
  { "prlar14_el2",  0xE379,  true,  true }, // 673
  { "prlar15_el1",  0xC37D,  true,  true }, // 674
  { "prlar15_el2",  0xE37D,  true,  true }, // 675
  { "prlar1_el1",  0xC345,  true,  true }, // 676
  { "prlar1_el2",  0xE345,  true,  true }, // 677
  { "prlar2_el1",  0xC349,  true,  true }, // 678
  { "prlar2_el2",  0xE349,  true,  true }, // 679
  { "prlar3_el1",  0xC34D,  true,  true }, // 680
  { "prlar3_el2",  0xE34D,  true,  true }, // 681
  { "prlar4_el1",  0xC351,  true,  true }, // 682
  { "prlar4_el2",  0xE351,  true,  true }, // 683
  { "prlar5_el1",  0xC355,  true,  true }, // 684
  { "prlar5_el2",  0xE355,  true,  true }, // 685
  { "prlar6_el1",  0xC359,  true,  true }, // 686
  { "prlar6_el2",  0xE359,  true,  true }, // 687
  { "prlar7_el1",  0xC35D,  true,  true }, // 688
  { "prlar7_el2",  0xE35D,  true,  true }, // 689
  { "prlar8_el1",  0xC361,  true,  true }, // 690
  { "prlar8_el2",  0xE361,  true,  true }, // 691
  { "prlar9_el1",  0xC365,  true,  true }, // 692
  { "prlar9_el2",  0xE365,  true,  true }, // 693
  { "prlar_el1",  0xC341,  true,  true }, // 694
  { "prlar_el2",  0xE341,  true,  true }, // 695
  { "prselr_el1",  0xC311,  true,  true }, // 696
  { "prselr_el2",  0xE311,  true,  true }, // 697
  { "revidr_el1",  0xC006,  true,  false }, // 698
  { "rgsr_el1",  0xC085,  true,  true }, // 699
  { "rmr_el1",  0xC602,  true,  true }, // 700
  { "rmr_el2",  0xE602,  true,  true }, // 701
  { "rmr_el3",  0xF602,  true,  true }, // 702
  { "rndr",  0xD920,  true,  false }, // 703
  { "rndrrs",  0xD921,  true,  false }, // 704
  { "rsp_el0",  0xFA0B,  true,  true }, // 705
  { "rtpidr_el0",  0xDE84,  true,  true }, // 706
  { "rvbar_el1",  0xC601,  true,  false }, // 707
  { "rvbar_el2",  0xE601,  true,  false }, // 708
  { "rvbar_el3",  0xF601,  true,  false }, // 709
  { "scr_el3",  0xF088,  true,  true }, // 710
  { "sctlr_el1",  0xC080,  true,  true }, // 711
  { "sctlr_el12",  0xE880,  true,  true }, // 712
  { "sctlr_el2",  0xE080,  true,  true }, // 713
  { "sctlr_el3",  0xF080,  true,  true }, // 714
  { "scxtnum_el0",  0xDE87,  true,  true }, // 715
  { "scxtnum_el1",  0xC687,  true,  true }, // 716
  { "scxtnum_el12",  0xEE87,  true,  true }, // 717
  { "scxtnum_el2",  0xE687,  true,  true }, // 718
  { "scxtnum_el3",  0xF687,  true,  true }, // 719
  { "sder32_el2",  0xE099,  true,  true }, // 720
  { "sder32_el3",  0xF089,  true,  true }, // 721
  { "smcr_el1",  0xC096,  true,  true }, // 722
  { "smcr_el12",  0xE896,  true,  true }, // 723
  { "smcr_el2",  0xE096,  true,  true }, // 724
  { "smcr_el3",  0xF096,  true,  true }, // 725
  { "smidr_el1",  0xC806,  true,  false }, // 726
  { "smprimap_el2",  0xE095,  true,  true }, // 727
  { "smpri_el1",  0xC094,  true,  true }, // 728
  { "spsel",  0xC210,  true,  true }, // 729
  { "spsr_abt",  0xE219,  true,  true }, // 730
  { "spsr_el1",  0xC200,  true,  true }, // 731
  { "spsr_el12",  0xEA00,  true,  true }, // 732
  { "spsr_el2",  0xE200,  true,  true }, // 733
  { "spsr_el3",  0xF200,  true,  true }, // 734
  { "spsr_fiq",  0xE21B,  true,  true }, // 735
  { "spsr_irq",  0xE218,  true,  true }, // 736
  { "spsr_und",  0xE21A,  true,  true }, // 737
  { "sp_el0",  0xC208,  true,  true }, // 738
  { "sp_el1",  0xE208,  true,  true }, // 739
  { "sp_el2",  0xF208,  true,  true }, // 740
  { "ssbs",  0xDA16,  true,  true }, // 741
  { "svcr",  0xDA12,  true,  true }, // 742
  { "tco",  0xDA17,  true,  true }, // 743
  { "tcr_el1",  0xC102,  true,  true }, // 744
  { "tcr_el12",  0xE902,  true,  true }, // 745
  { "tcr_el2",  0xE102,  true,  true }, // 746
  { "tcr_el3",  0xF102,  true,  true }, // 747
  { "teecr32_el1",  0x9000,  true,  true }, // 748
  { "teehbr32_el1",  0x9080,  true,  true }, // 749
  { "tfsre0_el1",  0xC2B1,  true,  true }, // 750
  { "tfsr_el1",  0xC2B0,  true,  true }, // 751
  { "tfsr_el12",  0xEAB0,  true,  true }, // 752
  { "tfsr_el2",  0xE2B0,  true,  true }, // 753
  { "tfsr_el3",  0xF2B0,  true,  true }, // 754
  { "tpidr2_el0",  0xDE85,  true,  true }, // 755
  { "tpidrro_el0",  0xDE83,  true,  true }, // 756
  { "tpidr_el0",  0xDE82,  true,  true }, // 757
  { "tpidr_el1",  0xC684,  true,  true }, // 758
  { "tpidr_el2",  0xE682,  true,  true }, // 759
  { "tpidr_el3",  0xF682,  true,  true }, // 760
  { "trbbaser_el1",  0xC4DA,  true,  true }, // 761
  { "trbidr_el1",  0xC4DF,  true,  false }, // 762
  { "trblimitr_el1",  0xC4D8,  true,  true }, // 763
  { "trbmar_el1",  0xC4DC,  true,  true }, // 764
  { "trbptr_el1",  0xC4D9,  true,  true }, // 765
  { "trbsr_el1",  0xC4DB,  true,  true }, // 766
  { "trbtrg_el1",  0xC4DE,  true,  true }, // 767
  { "trcacatr0",  0x8902,  true,  true }, // 768
  { "trcacatr1",  0x8912,  true,  true }, // 769
  { "trcacatr10",  0x8923,  true,  true }, // 770
  { "trcacatr11",  0x8933,  true,  true }, // 771
  { "trcacatr12",  0x8943,  true,  true }, // 772
  { "trcacatr13",  0x8953,  true,  true }, // 773
  { "trcacatr14",  0x8963,  true,  true }, // 774
  { "trcacatr15",  0x8973,  true,  true }, // 775
  { "trcacatr2",  0x8922,  true,  true }, // 776
  { "trcacatr3",  0x8932,  true,  true }, // 777
  { "trcacatr4",  0x8942,  true,  true }, // 778
  { "trcacatr5",  0x8952,  true,  true }, // 779
  { "trcacatr6",  0x8962,  true,  true }, // 780
  { "trcacatr7",  0x8972,  true,  true }, // 781
  { "trcacatr8",  0x8903,  true,  true }, // 782
  { "trcacatr9",  0x8913,  true,  true }, // 783
  { "trcacvr0",  0x8900,  true,  true }, // 784
  { "trcacvr1",  0x8910,  true,  true }, // 785
  { "trcacvr10",  0x8921,  true,  true }, // 786
  { "trcacvr11",  0x8931,  true,  true }, // 787
  { "trcacvr12",  0x8941,  true,  true }, // 788
  { "trcacvr13",  0x8951,  true,  true }, // 789
  { "trcacvr14",  0x8961,  true,  true }, // 790
  { "trcacvr15",  0x8971,  true,  true }, // 791
  { "trcacvr2",  0x8920,  true,  true }, // 792
  { "trcacvr3",  0x8930,  true,  true }, // 793
  { "trcacvr4",  0x8940,  true,  true }, // 794
  { "trcacvr5",  0x8950,  true,  true }, // 795
  { "trcacvr6",  0x8960,  true,  true }, // 796
  { "trcacvr7",  0x8970,  true,  true }, // 797
  { "trcacvr8",  0x8901,  true,  true }, // 798
  { "trcacvr9",  0x8911,  true,  true }, // 799
  { "trcauthstatus",  0x8BF6,  true,  false }, // 800
  { "trcauxctlr",  0x8830,  true,  true }, // 801
  { "trcbbctlr",  0x8878,  true,  true }, // 802
  { "trcccctlr",  0x8870,  true,  true }, // 803
  { "trccidcctlr0",  0x8982,  true,  true }, // 804
  { "trccidcctlr1",  0x898A,  true,  true }, // 805
  { "trccidcvr0",  0x8980,  true,  true }, // 806
  { "trccidcvr1",  0x8990,  true,  true }, // 807
  { "trccidcvr2",  0x89A0,  true,  true }, // 808
  { "trccidcvr3",  0x89B0,  true,  true }, // 809
  { "trccidcvr4",  0x89C0,  true,  true }, // 810
  { "trccidcvr5",  0x89D0,  true,  true }, // 811
  { "trccidcvr6",  0x89E0,  true,  true }, // 812
  { "trccidcvr7",  0x89F0,  true,  true }, // 813
  { "trccidr0",  0x8BE7,  true,  false }, // 814
  { "trccidr1",  0x8BEF,  true,  false }, // 815
  { "trccidr2",  0x8BF7,  true,  false }, // 816
  { "trccidr3",  0x8BFF,  true,  false }, // 817
  { "trcclaimclr",  0x8BCE,  true,  true }, // 818
  { "trcclaimset",  0x8BC6,  true,  true }, // 819
  { "trccntctlr0",  0x8825,  true,  true }, // 820
  { "trccntctlr1",  0x882D,  true,  true }, // 821
  { "trccntctlr2",  0x8835,  true,  true }, // 822
  { "trccntctlr3",  0x883D,  true,  true }, // 823
  { "trccntrldvr0",  0x8805,  true,  true }, // 824
  { "trccntrldvr1",  0x880D,  true,  true }, // 825
  { "trccntrldvr2",  0x8815,  true,  true }, // 826
  { "trccntrldvr3",  0x881D,  true,  true }, // 827
  { "trccntvr0",  0x8845,  true,  true }, // 828
  { "trccntvr1",  0x884D,  true,  true }, // 829
  { "trccntvr2",  0x8855,  true,  true }, // 830
  { "trccntvr3",  0x885D,  true,  true }, // 831
  { "trcconfigr",  0x8820,  true,  true }, // 832
  { "trcdevaff0",  0x8BD6,  true,  false }, // 833
  { "trcdevaff1",  0x8BDE,  true,  false }, // 834
  { "trcdevarch",  0x8BFE,  true,  false }, // 835
  { "trcdevid",  0x8B97,  true,  false }, // 836
  { "trcdevtype",  0x8B9F,  true,  false }, // 837
  { "trcdvcmr0",  0x8906,  true,  true }, // 838
  { "trcdvcmr1",  0x8926,  true,  true }, // 839
  { "trcdvcmr2",  0x8946,  true,  true }, // 840
  { "trcdvcmr3",  0x8966,  true,  true }, // 841
  { "trcdvcmr4",  0x8907,  true,  true }, // 842
  { "trcdvcmr5",  0x8927,  true,  true }, // 843
  { "trcdvcmr6",  0x8947,  true,  true }, // 844
  { "trcdvcmr7",  0x8967,  true,  true }, // 845
  { "trcdvcvr0",  0x8904,  true,  true }, // 846
  { "trcdvcvr1",  0x8924,  true,  true }, // 847
  { "trcdvcvr2",  0x8944,  true,  true }, // 848
  { "trcdvcvr3",  0x8964,  true,  true }, // 849
  { "trcdvcvr4",  0x8905,  true,  true }, // 850
  { "trcdvcvr5",  0x8925,  true,  true }, // 851
  { "trcdvcvr6",  0x8945,  true,  true }, // 852
  { "trcdvcvr7",  0x8965,  true,  true }, // 853
  { "trceventctl0r",  0x8840,  true,  true }, // 854
  { "trceventctl1r",  0x8848,  true,  true }, // 855
  { "trcextinselr",  0x8844,  true,  true }, // 856
  { "trcextinselr0",  0x8844,  true,  true }, // 857
  { "trcextinselr1",  0x884C,  true,  true }, // 858
  { "trcextinselr2",  0x8854,  true,  true }, // 859
  { "trcextinselr3",  0x885C,  true,  true }, // 860
  { "trcidr0",  0x8847,  true,  false }, // 861
  { "trcidr1",  0x884F,  true,  false }, // 862
  { "trcidr10",  0x8816,  true,  false }, // 863
  { "trcidr11",  0x881E,  true,  false }, // 864
  { "trcidr12",  0x8826,  true,  false }, // 865
  { "trcidr13",  0x882E,  true,  false }, // 866
  { "trcidr2",  0x8857,  true,  false }, // 867
  { "trcidr3",  0x885F,  true,  false }, // 868
  { "trcidr4",  0x8867,  true,  false }, // 869
  { "trcidr5",  0x886F,  true,  false }, // 870
  { "trcidr6",  0x8877,  true,  false }, // 871
  { "trcidr7",  0x887F,  true,  false }, // 872
  { "trcidr8",  0x8806,  true,  false }, // 873
  { "trcidr9",  0x880E,  true,  false }, // 874
  { "trcimspec0",  0x8807,  true,  true }, // 875
  { "trcimspec1",  0x880F,  true,  true }, // 876
  { "trcimspec2",  0x8817,  true,  true }, // 877
  { "trcimspec3",  0x881F,  true,  true }, // 878
  { "trcimspec4",  0x8827,  true,  true }, // 879
  { "trcimspec5",  0x882F,  true,  true }, // 880
  { "trcimspec6",  0x8837,  true,  true }, // 881
  { "trcimspec7",  0x883F,  true,  true }, // 882
  { "trcitctrl",  0x8B84,  true,  true }, // 883
  { "trclar",  0x8BE6,  false,  true }, // 884
  { "trclsr",  0x8BEE,  true,  false }, // 885
  { "trcoslar",  0x8884,  false,  true }, // 886
  { "trcoslsr",  0x888C,  true,  false }, // 887
  { "trcpdcr",  0x88A4,  true,  true }, // 888
  { "trcpdsr",  0x88AC,  true,  false }, // 889
  { "trcpidr0",  0x8BC7,  true,  false }, // 890
  { "trcpidr1",  0x8BCF,  true,  false }, // 891
  { "trcpidr2",  0x8BD7,  true,  false }, // 892
  { "trcpidr3",  0x8BDF,  true,  false }, // 893
  { "trcpidr4",  0x8BA7,  true,  false }, // 894
  { "trcpidr5",  0x8BAF,  true,  false }, // 895
  { "trcpidr6",  0x8BB7,  true,  false }, // 896
  { "trcpidr7",  0x8BBF,  true,  false }, // 897
  { "trcprgctlr",  0x8808,  true,  true }, // 898
  { "trcprocselr",  0x8810,  true,  true }, // 899
  { "trcqctlr",  0x8809,  true,  true }, // 900
  { "trcrsctlr10",  0x88D0,  true,  true }, // 901
  { "trcrsctlr11",  0x88D8,  true,  true }, // 902
  { "trcrsctlr12",  0x88E0,  true,  true }, // 903
  { "trcrsctlr13",  0x88E8,  true,  true }, // 904
  { "trcrsctlr14",  0x88F0,  true,  true }, // 905
  { "trcrsctlr15",  0x88F8,  true,  true }, // 906
  { "trcrsctlr16",  0x8881,  true,  true }, // 907
  { "trcrsctlr17",  0x8889,  true,  true }, // 908
  { "trcrsctlr18",  0x8891,  true,  true }, // 909
  { "trcrsctlr19",  0x8899,  true,  true }, // 910
  { "trcrsctlr2",  0x8890,  true,  true }, // 911
  { "trcrsctlr20",  0x88A1,  true,  true }, // 912
  { "trcrsctlr21",  0x88A9,  true,  true }, // 913
  { "trcrsctlr22",  0x88B1,  true,  true }, // 914
  { "trcrsctlr23",  0x88B9,  true,  true }, // 915
  { "trcrsctlr24",  0x88C1,  true,  true }, // 916
  { "trcrsctlr25",  0x88C9,  true,  true }, // 917
  { "trcrsctlr26",  0x88D1,  true,  true }, // 918
  { "trcrsctlr27",  0x88D9,  true,  true }, // 919
  { "trcrsctlr28",  0x88E1,  true,  true }, // 920
  { "trcrsctlr29",  0x88E9,  true,  true }, // 921
  { "trcrsctlr3",  0x8898,  true,  true }, // 922
  { "trcrsctlr30",  0x88F1,  true,  true }, // 923
  { "trcrsctlr31",  0x88F9,  true,  true }, // 924
  { "trcrsctlr4",  0x88A0,  true,  true }, // 925
  { "trcrsctlr5",  0x88A8,  true,  true }, // 926
  { "trcrsctlr6",  0x88B0,  true,  true }, // 927
  { "trcrsctlr7",  0x88B8,  true,  true }, // 928
  { "trcrsctlr8",  0x88C0,  true,  true }, // 929
  { "trcrsctlr9",  0x88C8,  true,  true }, // 930
  { "trcrsr",  0x8850,  true,  true }, // 931
  { "trcseqevr0",  0x8804,  true,  true }, // 932
  { "trcseqevr1",  0x880C,  true,  true }, // 933
  { "trcseqevr2",  0x8814,  true,  true }, // 934
  { "trcseqrstevr",  0x8834,  true,  true }, // 935
  { "trcseqstr",  0x883C,  true,  true }, // 936
  { "trcssccr0",  0x8882,  true,  true }, // 937
  { "trcssccr1",  0x888A,  true,  true }, // 938
  { "trcssccr2",  0x8892,  true,  true }, // 939
  { "trcssccr3",  0x889A,  true,  true }, // 940
  { "trcssccr4",  0x88A2,  true,  true }, // 941
  { "trcssccr5",  0x88AA,  true,  true }, // 942
  { "trcssccr6",  0x88B2,  true,  true }, // 943
  { "trcssccr7",  0x88BA,  true,  true }, // 944
  { "trcsscsr0",  0x88C2,  true,  true }, // 945
  { "trcsscsr1",  0x88CA,  true,  true }, // 946
  { "trcsscsr2",  0x88D2,  true,  true }, // 947
  { "trcsscsr3",  0x88DA,  true,  true }, // 948
  { "trcsscsr4",  0x88E2,  true,  true }, // 949
  { "trcsscsr5",  0x88EA,  true,  true }, // 950
  { "trcsscsr6",  0x88F2,  true,  true }, // 951
  { "trcsscsr7",  0x88FA,  true,  true }, // 952
  { "trcsspcicr0",  0x8883,  true,  true }, // 953
  { "trcsspcicr1",  0x888B,  true,  true }, // 954
  { "trcsspcicr2",  0x8893,  true,  true }, // 955
  { "trcsspcicr3",  0x889B,  true,  true }, // 956
  { "trcsspcicr4",  0x88A3,  true,  true }, // 957
  { "trcsspcicr5",  0x88AB,  true,  true }, // 958
  { "trcsspcicr6",  0x88B3,  true,  true }, // 959
  { "trcsspcicr7",  0x88BB,  true,  true }, // 960
  { "trcstallctlr",  0x8858,  true,  true }, // 961
  { "trcstatr",  0x8818,  true,  false }, // 962
  { "trcsyncpr",  0x8868,  true,  true }, // 963
  { "trctraceidr",  0x8801,  true,  true }, // 964
  { "trctsctlr",  0x8860,  true,  true }, // 965
  { "trcvdarcctlr",  0x8852,  true,  true }, // 966
  { "trcvdctlr",  0x8842,  true,  true }, // 967
  { "trcvdsacctlr",  0x884A,  true,  true }, // 968
  { "trcvictlr",  0x8802,  true,  true }, // 969
  { "trcviiectlr",  0x880A,  true,  true }, // 970
  { "trcvipcssctlr",  0x881A,  true,  true }, // 971
  { "trcvissctlr",  0x8812,  true,  true }, // 972
  { "trcvmidcctlr0",  0x8992,  true,  true }, // 973
  { "trcvmidcctlr1",  0x899A,  true,  true }, // 974
  { "trcvmidcvr0",  0x8981,  true,  true }, // 975
  { "trcvmidcvr1",  0x8991,  true,  true }, // 976
  { "trcvmidcvr2",  0x89A1,  true,  true }, // 977
  { "trcvmidcvr3",  0x89B1,  true,  true }, // 978
  { "trcvmidcvr4",  0x89C1,  true,  true }, // 979
  { "trcvmidcvr5",  0x89D1,  true,  true }, // 980
  { "trcvmidcvr6",  0x89E1,  true,  true }, // 981
  { "trcvmidcvr7",  0x89F1,  true,  true }, // 982
  { "trfcr_el1",  0xC091,  true,  true }, // 983
  { "trfcr_el12",  0xE891,  true,  true }, // 984
  { "trfcr_el2",  0xE091,  true,  true }, // 985
  { "ttbr0_el1",  0xC100,  true,  true }, // 986
  { "ttbr0_el12",  0xE900,  true,  true }, // 987
  { "ttbr0_el2",  0xE100,  true,  true }, // 988
  { "ttbr0_el3",  0xF100,  true,  true }, // 989
  { "ttbr1_el1",  0xC101,  true,  true }, // 990
  { "ttbr1_el12",  0xE901,  true,  true }, // 991
  { "ttbr1_el2",  0xE101,  true,  true }, // 992
  { "uao",  0xC214,  true,  true }, // 993
  { "vbar_el1",  0xC600,  true,  true }, // 994
  { "vbar_el12",  0xEE00,  true,  true }, // 995
  { "vbar_el2",  0xE600,  true,  true }, // 996
  { "vbar_el3",  0xF600,  true,  true }, // 997
  { "vdisr_el2",  0xE609,  true,  true }, // 998
  { "vmpidr_el2",  0xE005,  true,  true }, // 999
  { "vncr_el2",  0xE110,  true,  true }, // 1000
  { "vpidr_el2",  0xE000,  true,  true }, // 1001
  { "vsctlr_el2",  0xE100,  true,  true }, // 1002
  { "vsesr_el2",  0xE293,  true,  true }, // 1003
  { "vstcr_el2",  0xE132,  true,  true }, // 1004
  { "vsttbr_el2",  0xE130,  true,  true }, // 1005
  { "vtcr_el2",  0xE10A,  true,  true }, // 1006
  { "vttbr_el2",  0xE108,  true,  true }, // 1007
  { "zcr_el1",  0xC090,  true,  true }, // 1008
  { "zcr_el12",  0xE890,  true,  true }, // 1009
  { "zcr_el2",  0xE090,  true,  true }, // 1010
  { "zcr_el3",  0xF090,  true,  true }, // 1011
};

const SysReg *lookupSysRegByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x8002, 530 },
    { 0x8004, 292 },
    { 0x8005, 276 },
    { 0x8006, 331 },
    { 0x8007, 315 },
    { 0x800C, 299 },
    { 0x800D, 283 },
    { 0x800E, 338 },
    { 0x800F, 322 },
    { 0x8010, 497 },
    { 0x8012, 502 },
    { 0x8014, 300 },
    { 0x8015, 284 },
    { 0x8016, 339 },
    { 0x8017, 323 },
    { 0x801A, 531 },
    { 0x801C, 301 },
    { 0x801D, 285 },
    { 0x801E, 340 },
    { 0x801F, 324 },
    { 0x8024, 302 },
    { 0x8025, 286 },
    { 0x8026, 341 },
    { 0x8027, 325 },
    { 0x802C, 303 },
    { 0x802D, 287 },
    { 0x802E, 342 },
    { 0x802F, 326 },
    { 0x8032, 532 },
    { 0x8034, 304 },
    { 0x8035, 288 },
    { 0x8036, 343 },
    { 0x8037, 327 },
    { 0x803C, 305 },
    { 0x803D, 289 },
    { 0x803E, 344 },
    { 0x803F, 328 },
    { 0x8044, 306 },
    { 0x8045, 290 },
    { 0x8046, 345 },
    { 0x8047, 329 },
    { 0x804C, 307 },
    { 0x804D, 291 },
    { 0x804E, 346 },
    { 0x804F, 330 },
    { 0x8054, 293 },
    { 0x8055, 277 },
    { 0x8056, 332 },
    { 0x8057, 316 },
    { 0x805C, 294 },
    { 0x805D, 278 },
    { 0x805E, 333 },
    { 0x805F, 317 },
    { 0x8064, 295 },
    { 0x8065, 279 },
    { 0x8066, 334 },
    { 0x8067, 318 },
    { 0x806C, 296 },
    { 0x806D, 280 },
    { 0x806E, 335 },
    { 0x806F, 319 },
    { 0x8074, 297 },
    { 0x8075, 281 },
    { 0x8076, 336 },
    { 0x8077, 320 },
    { 0x807C, 298 },
    { 0x807D, 282 },
    { 0x807E, 337 },
    { 0x807F, 321 },
    { 0x8080, 501 },
    { 0x8084, 533 },
    { 0x808C, 534 },
    { 0x809C, 529 },
    { 0x80A4, 313 },
    { 0x83C6, 309 },
    { 0x83CE, 308 },
    { 0x83F6, 275 },
    { 0x8801, 964 },
    { 0x8802, 969 },
    { 0x8804, 932 },
    { 0x8805, 824 },
    { 0x8806, 873 },
    { 0x8807, 875 },
    { 0x8808, 898 },
    { 0x8809, 900 },
    { 0x880A, 970 },
    { 0x880C, 933 },
    { 0x880D, 825 },
    { 0x880E, 874 },
    { 0x880F, 876 },
    { 0x8810, 899 },
    { 0x8812, 972 },
    { 0x8814, 934 },
    { 0x8815, 826 },
    { 0x8816, 863 },
    { 0x8817, 877 },
    { 0x8818, 962 },
    { 0x881A, 971 },
    { 0x881D, 827 },
    { 0x881E, 864 },
    { 0x881F, 878 },
    { 0x8820, 832 },
    { 0x8825, 820 },
    { 0x8826, 865 },
    { 0x8827, 879 },
    { 0x882D, 821 },
    { 0x882E, 866 },
    { 0x882F, 880 },
    { 0x8830, 801 },
    { 0x8834, 935 },
    { 0x8835, 822 },
    { 0x8837, 881 },
    { 0x883C, 936 },
    { 0x883D, 823 },
    { 0x883F, 882 },
    { 0x8840, 854 },
    { 0x8842, 967 },
    { 0x8844, 856 },
    { 0x8844, 857 },
    { 0x8845, 828 },
    { 0x8847, 861 },
    { 0x8848, 855 },
    { 0x884A, 968 },
    { 0x884C, 858 },
    { 0x884D, 829 },
    { 0x884F, 862 },
    { 0x8850, 931 },
    { 0x8852, 966 },
    { 0x8854, 859 },
    { 0x8855, 830 },
    { 0x8857, 867 },
    { 0x8858, 961 },
    { 0x885C, 860 },
    { 0x885D, 831 },
    { 0x885F, 868 },
    { 0x8860, 965 },
    { 0x8867, 869 },
    { 0x8868, 963 },
    { 0x886F, 870 },
    { 0x8870, 803 },
    { 0x8877, 871 },
    { 0x8878, 802 },
    { 0x887F, 872 },
    { 0x8881, 907 },
    { 0x8882, 937 },
    { 0x8883, 953 },
    { 0x8884, 886 },
    { 0x8889, 908 },
    { 0x888A, 938 },
    { 0x888B, 954 },
    { 0x888C, 887 },
    { 0x8890, 911 },
    { 0x8891, 909 },
    { 0x8892, 939 },
    { 0x8893, 955 },
    { 0x8898, 922 },
    { 0x8899, 910 },
    { 0x889A, 940 },
    { 0x889B, 956 },
    { 0x88A0, 925 },
    { 0x88A1, 912 },
    { 0x88A2, 941 },
    { 0x88A3, 957 },
    { 0x88A4, 888 },
    { 0x88A8, 926 },
    { 0x88A9, 913 },
    { 0x88AA, 942 },
    { 0x88AB, 958 },
    { 0x88AC, 889 },
    { 0x88B0, 927 },
    { 0x88B1, 914 },
    { 0x88B2, 943 },
    { 0x88B3, 959 },
    { 0x88B8, 928 },
    { 0x88B9, 915 },
    { 0x88BA, 944 },
    { 0x88BB, 960 },
    { 0x88C0, 929 },
    { 0x88C1, 916 },
    { 0x88C2, 945 },
    { 0x88C8, 930 },
    { 0x88C9, 917 },
    { 0x88CA, 946 },
    { 0x88D0, 901 },
    { 0x88D1, 918 },
    { 0x88D2, 947 },
    { 0x88D8, 902 },
    { 0x88D9, 919 },
    { 0x88DA, 948 },
    { 0x88E0, 903 },
    { 0x88E1, 920 },
    { 0x88E2, 949 },
    { 0x88E8, 904 },
    { 0x88E9, 921 },
    { 0x88EA, 950 },
    { 0x88F0, 905 },
    { 0x88F1, 923 },
    { 0x88F2, 951 },
    { 0x88F8, 906 },
    { 0x88F9, 924 },
    { 0x88FA, 952 },
    { 0x8900, 784 },
    { 0x8901, 798 },
    { 0x8902, 768 },
    { 0x8903, 782 },
    { 0x8904, 846 },
    { 0x8905, 850 },
    { 0x8906, 838 },
    { 0x8907, 842 },
    { 0x8910, 785 },
    { 0x8911, 799 },
    { 0x8912, 769 },
    { 0x8913, 783 },
    { 0x8920, 792 },
    { 0x8921, 786 },
    { 0x8922, 776 },
    { 0x8923, 770 },
    { 0x8924, 847 },
    { 0x8925, 851 },
    { 0x8926, 839 },
    { 0x8927, 843 },
    { 0x8930, 793 },
    { 0x8931, 787 },
    { 0x8932, 777 },
    { 0x8933, 771 },
    { 0x8940, 794 },
    { 0x8941, 788 },
    { 0x8942, 778 },
    { 0x8943, 772 },
    { 0x8944, 848 },
    { 0x8945, 852 },
    { 0x8946, 840 },
    { 0x8947, 844 },
    { 0x8950, 795 },
    { 0x8951, 789 },
    { 0x8952, 779 },
    { 0x8953, 773 },
    { 0x8960, 796 },
    { 0x8961, 790 },
    { 0x8962, 780 },
    { 0x8963, 774 },
    { 0x8964, 849 },
    { 0x8965, 853 },
    { 0x8966, 841 },
    { 0x8967, 845 },
    { 0x8970, 797 },
    { 0x8971, 791 },
    { 0x8972, 781 },
    { 0x8973, 775 },
    { 0x8980, 806 },
    { 0x8981, 975 },
    { 0x8982, 804 },
    { 0x898A, 805 },
    { 0x8990, 807 },
    { 0x8991, 976 },
    { 0x8992, 973 },
    { 0x899A, 974 },
    { 0x89A0, 808 },
    { 0x89A1, 977 },
    { 0x89B0, 809 },
    { 0x89B1, 978 },
    { 0x89C0, 810 },
    { 0x89C1, 979 },
    { 0x89D0, 811 },
    { 0x89D1, 980 },
    { 0x89E0, 812 },
    { 0x89E1, 981 },
    { 0x89F0, 813 },
    { 0x89F1, 982 },
    { 0x8B84, 883 },
    { 0x8B97, 836 },
    { 0x8B9F, 837 },
    { 0x8BA7, 894 },
    { 0x8BAF, 895 },
    { 0x8BB7, 896 },
    { 0x8BBF, 897 },
    { 0x8BC6, 819 },
    { 0x8BC7, 890 },
    { 0x8BCE, 818 },
    { 0x8BCF, 891 },
    { 0x8BD6, 833 },
    { 0x8BD7, 892 },
    { 0x8BDE, 834 },
    { 0x8BDF, 893 },
    { 0x8BE6, 884 },
    { 0x8BE7, 814 },
    { 0x8BEE, 885 },
    { 0x8BEF, 815 },
    { 0x8BF6, 800 },
    { 0x8BF7, 816 },
    { 0x8BFE, 835 },
    { 0x8BFF, 817 },
    { 0x8C00, 112 },
    { 0x8C01, 145 },
    { 0x8C02, 178 },
    { 0x8C04, 119 },
    { 0x8C05, 152 },
    { 0x8C06, 185 },
    { 0x8C08, 123 },
    { 0x8C09, 156 },
    { 0x8C0A, 189 },
    { 0x8C0C, 120 },
    { 0x8C0D, 153 },
    { 0x8C0E, 186 },
    { 0x8C10, 134 },
    { 0x8C11, 167 },
    { 0x8C12, 200 },
    { 0x8C14, 121 },
    { 0x8C15, 154 },
    { 0x8C16, 187 },
    { 0x8C18, 137 },
    { 0x8C19, 170 },
    { 0x8C1A, 203 },
    { 0x8C1C, 122 },
    { 0x8C1D, 155 },
    { 0x8C1E, 188 },
    { 0x8C20, 138 },
    { 0x8C21, 171 },
    { 0x8C22, 204 },
    { 0x8C24, 124 },
    { 0x8C25, 157 },
    { 0x8C26, 190 },
    { 0x8C28, 139 },
    { 0x8C29, 172 },
    { 0x8C2A, 205 },
    { 0x8C2C, 125 },
    { 0x8C2D, 158 },
    { 0x8C2E, 191 },
    { 0x8C30, 140 },
    { 0x8C31, 173 },
    { 0x8C32, 206 },
    { 0x8C34, 126 },
    { 0x8C35, 159 },
    { 0x8C36, 192 },
    { 0x8C38, 141 },
    { 0x8C39, 174 },
    { 0x8C3A, 207 },
    { 0x8C3C, 127 },
    { 0x8C3D, 160 },
    { 0x8C3E, 193 },
    { 0x8C40, 142 },
    { 0x8C41, 175 },
    { 0x8C42, 208 },
    { 0x8C44, 128 },
    { 0x8C45, 161 },
    { 0x8C46, 194 },
    { 0x8C48, 143 },
    { 0x8C49, 176 },
    { 0x8C4A, 209 },
    { 0x8C4C, 129 },
    { 0x8C4D, 162 },
    { 0x8C4E, 195 },
    { 0x8C50, 113 },
    { 0x8C51, 146 },
    { 0x8C52, 179 },
    { 0x8C54, 130 },
    { 0x8C55, 163 },
    { 0x8C56, 196 },
    { 0x8C58, 114 },
    { 0x8C59, 147 },
    { 0x8C5A, 180 },
    { 0x8C5C, 131 },
    { 0x8C5D, 164 },
    { 0x8C5E, 197 },
    { 0x8C60, 115 },
    { 0x8C61, 148 },
    { 0x8C62, 181 },
    { 0x8C64, 132 },
    { 0x8C65, 165 },
    { 0x8C66, 198 },
    { 0x8C68, 116 },
    { 0x8C69, 149 },
    { 0x8C6A, 182 },
    { 0x8C6C, 133 },
    { 0x8C6D, 166 },
    { 0x8C6E, 199 },
    { 0x8C70, 117 },
    { 0x8C71, 150 },
    { 0x8C72, 183 },
    { 0x8C74, 135 },
    { 0x8C75, 168 },
    { 0x8C76, 201 },
    { 0x8C78, 118 },
    { 0x8C79, 151 },
    { 0x8C7A, 184 },
    { 0x8C7C, 136 },
    { 0x8C7D, 169 },
    { 0x8C7E, 202 },
    { 0x8C80, 107 },
    { 0x8C81, 110 },
    { 0x8C82, 211 },
    { 0x8C88, 144 },
    { 0x8C89, 177 },
    { 0x8C8A, 210 },
    { 0x8C90, 111 },
    { 0x9000, 748 },
    { 0x9080, 749 },
    { 0x9808, 498 },
    { 0x9820, 312 },
    { 0x9828, 310 },
    { 0x9828, 311 },
    { 0xA038, 314 },
    { 0xA480, 109 },
    { 0xAC80, 108 },
    { 0xC000, 504 },
    { 0xC004, 523 },
    { 0xC005, 522 },
    { 0xC006, 698 },
    { 0xC008, 483 },
    { 0xC009, 484 },
    { 0xC00A, 469 },
    { 0xC00B, 468 },
    { 0xC00C, 477 },
    { 0xC00D, 478 },
    { 0xC00E, 479 },
    { 0xC00F, 480 },
    { 0xC010, 470 },
    { 0xC011, 471 },
    { 0xC012, 472 },
    { 0xC013, 473 },
    { 0xC014, 474 },
    { 0xC015, 475 },
    { 0xC016, 481 },
    { 0xC017, 476 },
    { 0xC018, 525 },
    { 0xC019, 526 },
    { 0xC01A, 527 },
    { 0xC01C, 485 },
    { 0xC01E, 482 },
    { 0xC020, 464 },
    { 0xC021, 465 },
    { 0xC024, 467 },
    { 0xC025, 466 },
    { 0xC028, 456 },
    { 0xC029, 457 },
    { 0xC02C, 454 },
    { 0xC02D, 455 },
    { 0xC030, 458 },
    { 0xC031, 459 },
    { 0xC032, 460 },
    { 0xC038, 461 },
    { 0xC039, 462 },
    { 0xC03A, 463 },
    { 0xC080, 711 },
    { 0xC081, 1 },
    { 0xC082, 264 },
    { 0xC085, 699 },
    { 0xC086, 380 },
    { 0xC090, 1008 },
    { 0xC091, 983 },
    { 0xC092, 215 },
    { 0xC094, 728 },
    { 0xC096, 722 },
    { 0xC100, 986 },
    { 0xC101, 990 },
    { 0xC102, 744 },
    { 0xC108, 104 },
    { 0xC109, 103 },
    { 0xC10A, 106 },
    { 0xC10B, 105 },
    { 0xC110, 98 },
    { 0xC111, 97 },
    { 0xC112, 100 },
    { 0xC113, 99 },
    { 0xC118, 102 },
    { 0xC119, 101 },
    { 0xC200, 731 },
    { 0xC201, 352 },
    { 0xC208, 738 },
    { 0xC210, 729 },
    { 0xC212, 272 },
    { 0xC213, 535 },
    { 0xC214, 993 },
    { 0xC230, 417 },
    { 0xC288, 4 },
    { 0xC289, 8 },
    { 0xC290, 369 },
    { 0xC298, 356 },
    { 0xC299, 357 },
    { 0xC2A0, 360 },
    { 0xC2A1, 359 },
    { 0xC2A2, 368 },
    { 0xC2A3, 358 },
    { 0xC2A4, 367 },
    { 0xC2A5, 366 },
    { 0xC2A6, 365 },
    { 0xC2A8, 361 },
    { 0xC2A9, 362 },
    { 0xC2AA, 363 },
    { 0xC2AB, 364 },
    { 0xC2B0, 751 },
    { 0xC2B1, 750 },
    { 0xC300, 373 },
    { 0xC309, 662 },
    { 0xC311, 696 },
    { 0xC340, 660 },
    { 0xC341, 694 },
    { 0xC344, 642 },
    { 0xC345, 676 },
    { 0xC348, 644 },
    { 0xC349, 678 },
    { 0xC34C, 646 },
    { 0xC34D, 680 },
    { 0xC350, 648 },
    { 0xC351, 682 },
    { 0xC354, 650 },
    { 0xC355, 684 },
    { 0xC358, 652 },
    { 0xC359, 686 },
    { 0xC35C, 654 },
    { 0xC35D, 688 },
    { 0xC360, 656 },
    { 0xC361, 690 },
    { 0xC364, 658 },
    { 0xC365, 692 },
    { 0xC368, 630 },
    { 0xC369, 664 },
    { 0xC36C, 632 },
    { 0xC36D, 666 },
    { 0xC370, 634 },
    { 0xC371, 668 },
    { 0xC374, 636 },
    { 0xC375, 670 },
    { 0xC378, 638 },
    { 0xC379, 672 },
    { 0xC37C, 640 },
    { 0xC37D, 674 },
    { 0xC3A0, 536 },
    { 0xC4C8, 615 },
    { 0xC4C9, 625 },
    { 0xC4CA, 621 },
    { 0xC4CB, 623 },
    { 0xC4CC, 620 },
    { 0xC4CD, 619 },
    { 0xC4CE, 624 },
    { 0xC4CF, 622 },
    { 0xC4D0, 538 },
    { 0xC4D1, 539 },
    { 0xC4D3, 540 },
    { 0xC4D7, 537 },
    { 0xC4D8, 763 },
    { 0xC4D9, 765 },
    { 0xC4DA, 761 },
    { 0xC4DB, 766 },
    { 0xC4DC, 764 },
    { 0xC4DE, 767 },
    { 0xC4DF, 762 },
    { 0xC4F1, 611 },
    { 0xC4F2, 610 },
    { 0xC4F6, 612 },
    { 0xC510, 493 },
    { 0xC518, 13 },
    { 0xC520, 492 },
    { 0xC521, 489 },
    { 0xC522, 491 },
    { 0xC523, 488 },
    { 0xC524, 511 },
    { 0xC527, 490 },
    { 0xC528, 506 },
    { 0xC529, 505 },
    { 0xC52B, 512 },
    { 0xC600, 994 },
    { 0xC601, 707 },
    { 0xC602, 700 },
    { 0xC608, 487 },
    { 0xC609, 348 },
    { 0xC640, 412 },
    { 0xC641, 408 },
    { 0xC642, 410 },
    { 0xC643, 403 },
    { 0xC644, 394 },
    { 0xC645, 395 },
    { 0xC646, 396 },
    { 0xC647, 397 },
    { 0xC648, 398 },
    { 0xC649, 399 },
    { 0xC64A, 400 },
    { 0xC64B, 401 },
    { 0xC659, 407 },
    { 0xC65B, 418 },
    { 0xC65D, 420 },
    { 0xC65E, 402 },
    { 0xC65F, 419 },
    { 0xC660, 413 },
    { 0xC661, 409 },
    { 0xC662, 411 },
    { 0xC663, 404 },
    { 0xC664, 405 },
    { 0xC665, 421 },
    { 0xC666, 414 },
    { 0xC667, 415 },
    { 0xC681, 261 },
    { 0xC684, 758 },
    { 0xC685, 0 },
    { 0xC687, 716 },
    { 0xC708, 236 },
    { 0xC800, 213 },
    { 0xC801, 220 },
    { 0xC802, 212 },
    { 0xC804, 381 },
    { 0xC806, 726 },
    { 0xC807, 12 },
    { 0xD000, 270 },
    { 0xD801, 271 },
    { 0xD807, 347 },
    { 0xD892, 214 },
    { 0xD920, 703 },
    { 0xD921, 704 },
    { 0xDA10, 528 },
    { 0xDA11, 274 },
    { 0xDA12, 742 },
    { 0xDA15, 349 },
    { 0xDA16, 741 },
    { 0xDA17, 743 },
    { 0xDA20, 377 },
    { 0xDA21, 379 },
    { 0xDA28, 351 },
    { 0xDA29, 350 },
    { 0xDCE0, 547 },
    { 0xDCE1, 546 },
    { 0xDCE2, 545 },
    { 0xDCE3, 613 },
    { 0xDCE4, 626 },
    { 0xDCE5, 618 },
    { 0xDCE6, 543 },
    { 0xDCE7, 544 },
    { 0xDCE8, 542 },
    { 0xDCE9, 629 },
    { 0xDCEA, 628 },
    { 0xDCF0, 627 },
    { 0xDCF3, 614 },
    { 0xDE82, 757 },
    { 0xDE83, 756 },
    { 0xDE84, 706 },
    { 0xDE85, 755 },
    { 0xDE87, 715 },
    { 0xDE90, 23 },
    { 0xDE91, 17 },
    { 0xDE92, 18 },
    { 0xDE93, 96 },
    { 0xDE94, 19 },
    { 0xDE95, 21 },
    { 0xDE98, 20 },
    { 0xDE99, 22 },
    { 0xDEA0, 24 },
    { 0xDEA1, 25 },
    { 0xDEA2, 26 },
    { 0xDEA3, 27 },
    { 0xDEB0, 76 },
    { 0xDEB1, 77 },
    { 0xDEB2, 78 },
    { 0xDEB3, 79 },
    { 0xDEE0, 28 },
    { 0xDEE1, 35 },
    { 0xDEE2, 36 },
    { 0xDEE3, 37 },
    { 0xDEE4, 38 },
    { 0xDEE5, 39 },
    { 0xDEE6, 40 },
    { 0xDEE7, 41 },
    { 0xDEE8, 42 },
    { 0xDEE9, 43 },
    { 0xDEEA, 29 },
    { 0xDEEB, 30 },
    { 0xDEEC, 31 },
    { 0xDEED, 32 },
    { 0xDEEE, 33 },
    { 0xDEEF, 34 },
    { 0xDEF0, 80 },
    { 0xDEF1, 87 },
    { 0xDEF2, 88 },
    { 0xDEF3, 89 },
    { 0xDEF4, 90 },
    { 0xDEF5, 91 },
    { 0xDEF6, 92 },
    { 0xDEF7, 93 },
    { 0xDEF8, 94 },
    { 0xDEF9, 95 },
    { 0xDEFA, 81 },
    { 0xDEFB, 82 },
    { 0xDEFC, 83 },
    { 0xDEFD, 84 },
    { 0xDEFE, 85 },
    { 0xDEFF, 86 },
    { 0xDF00, 221 },
    { 0xDF01, 239 },
    { 0xDF02, 252 },
    { 0xDF05, 238 },
    { 0xDF06, 251 },
    { 0xDF10, 248 },
    { 0xDF11, 244 },
    { 0xDF12, 246 },
    { 0xDF18, 259 },
    { 0xDF19, 255 },
    { 0xDF1A, 257 },
    { 0xDF40, 548 },
    { 0xDF41, 559 },
    { 0xDF42, 570 },
    { 0xDF43, 572 },
    { 0xDF44, 573 },
    { 0xDF45, 574 },
    { 0xDF46, 575 },
    { 0xDF47, 576 },
    { 0xDF48, 577 },
    { 0xDF49, 578 },
    { 0xDF4A, 549 },
    { 0xDF4B, 550 },
    { 0xDF4C, 551 },
    { 0xDF4D, 552 },
    { 0xDF4E, 553 },
    { 0xDF4F, 554 },
    { 0xDF50, 555 },
    { 0xDF51, 556 },
    { 0xDF52, 557 },
    { 0xDF53, 558 },
    { 0xDF54, 560 },
    { 0xDF55, 561 },
    { 0xDF56, 562 },
    { 0xDF57, 563 },
    { 0xDF58, 564 },
    { 0xDF59, 565 },
    { 0xDF5A, 566 },
    { 0xDF5B, 567 },
    { 0xDF5C, 568 },
    { 0xDF5D, 569 },
    { 0xDF5E, 571 },
    { 0xDF60, 579 },
    { 0xDF61, 590 },
    { 0xDF62, 601 },
    { 0xDF63, 603 },
    { 0xDF64, 604 },
    { 0xDF65, 605 },
    { 0xDF66, 606 },
    { 0xDF67, 607 },
    { 0xDF68, 608 },
    { 0xDF69, 609 },
    { 0xDF6A, 580 },
    { 0xDF6B, 581 },
    { 0xDF6C, 582 },
    { 0xDF6D, 583 },
    { 0xDF6E, 584 },
    { 0xDF6F, 585 },
    { 0xDF70, 586 },
    { 0xDF71, 587 },
    { 0xDF72, 588 },
    { 0xDF73, 589 },
    { 0xDF74, 591 },
    { 0xDF75, 592 },
    { 0xDF76, 593 },
    { 0xDF77, 594 },
    { 0xDF78, 595 },
    { 0xDF79, 596 },
    { 0xDF7A, 597 },
    { 0xDF7B, 598 },
    { 0xDF7C, 599 },
    { 0xDF7D, 600 },
    { 0xDF7E, 602 },
    { 0xDF7F, 541 },
    { 0xE000, 1001 },
    { 0xE004, 524 },
    { 0xE005, 999 },
    { 0xE080, 713 },
    { 0xE081, 2 },
    { 0xE088, 386 },
    { 0xE089, 499 },
    { 0xE08A, 267 },
    { 0xE08B, 393 },
    { 0xE08C, 390 },
    { 0xE08D, 391 },
    { 0xE08E, 389 },
    { 0xE08F, 384 },
    { 0xE090, 1010 },
    { 0xE091, 985 },
    { 0xE092, 217 },
    { 0xE092, 385 },
    { 0xE093, 219 },
    { 0xE095, 727 },
    { 0xE096, 724 },
    { 0xE099, 720 },
    { 0xE100, 988 },
    { 0xE100, 1002 },
    { 0xE101, 992 },
    { 0xE102, 746 },
    { 0xE108, 1007 },
    { 0xE10A, 1006 },
    { 0xE110, 1000 },
    { 0xE130, 1005 },
    { 0xE132, 1004 },
    { 0xE180, 273 },
    { 0xE18C, 387 },
    { 0xE18D, 388 },
    { 0xE200, 733 },
    { 0xE201, 354 },
    { 0xE208, 739 },
    { 0xE218, 736 },
    { 0xE219, 730 },
    { 0xE21A, 737 },
    { 0xE21B, 735 },
    { 0xE281, 486 },
    { 0xE288, 6 },
    { 0xE289, 10 },
    { 0xE290, 371 },
    { 0xE293, 1003 },
    { 0xE298, 378 },
    { 0xE2B0, 753 },
    { 0xE300, 375 },
    { 0xE304, 392 },
    { 0xE309, 663 },
    { 0xE311, 697 },
    { 0xE340, 661 },
    { 0xE341, 695 },
    { 0xE344, 643 },
    { 0xE345, 677 },
    { 0xE348, 645 },
    { 0xE349, 679 },
    { 0xE34C, 647 },
    { 0xE34D, 681 },
    { 0xE350, 649 },
    { 0xE351, 683 },
    { 0xE354, 651 },
    { 0xE355, 685 },
    { 0xE358, 653 },
    { 0xE359, 687 },
    { 0xE35C, 655 },
    { 0xE35D, 689 },
    { 0xE360, 657 },
    { 0xE361, 691 },
    { 0xE364, 659 },
    { 0xE365, 693 },
    { 0xE368, 631 },
    { 0xE369, 665 },
    { 0xE36C, 633 },
    { 0xE36D, 667 },
    { 0xE370, 635 },
    { 0xE371, 669 },
    { 0xE374, 637 },
    { 0xE375, 671 },
    { 0xE378, 639 },
    { 0xE379, 673 },
    { 0xE37C, 641 },
    { 0xE37D, 675 },
    { 0xE4C8, 617 },
    { 0xE510, 495 },
    { 0xE518, 15 },
    { 0xE520, 510 },
    { 0xE521, 521 },
    { 0xE528, 508 },
    { 0xE530, 513 },
    { 0xE531, 514 },
    { 0xE532, 515 },
    { 0xE533, 516 },
    { 0xE534, 517 },
    { 0xE535, 518 },
    { 0xE536, 519 },
    { 0xE537, 520 },
    { 0xE600, 996 },
    { 0xE601, 708 },
    { 0xE602, 701 },
    { 0xE609, 998 },
    { 0xE640, 424 },
    { 0xE641, 425 },
    { 0xE642, 426 },
    { 0xE643, 427 },
    { 0xE648, 428 },
    { 0xE649, 429 },
    { 0xE64A, 430 },
    { 0xE64B, 431 },
    { 0xE64D, 422 },
    { 0xE658, 434 },
    { 0xE659, 453 },
    { 0xE65A, 451 },
    { 0xE65B, 432 },
    { 0xE65D, 433 },
    { 0xE65F, 452 },
    { 0xE660, 435 },
    { 0xE661, 442 },
    { 0xE662, 443 },
    { 0xE663, 444 },
    { 0xE664, 445 },
    { 0xE665, 446 },
    { 0xE666, 447 },
    { 0xE667, 448 },
    { 0xE668, 449 },
    { 0xE669, 450 },
    { 0xE66A, 436 },
    { 0xE66B, 437 },
    { 0xE66C, 438 },
    { 0xE66D, 439 },
    { 0xE66E, 440 },
    { 0xE66F, 441 },
    { 0xE681, 263 },
    { 0xE682, 759 },
    { 0xE687, 718 },
    { 0xE6C0, 44 },
    { 0xE6C1, 51 },
    { 0xE6C2, 52 },
    { 0xE6C3, 53 },
    { 0xE6C4, 54 },
    { 0xE6C5, 55 },
    { 0xE6C6, 56 },
    { 0xE6C7, 57 },
    { 0xE6C8, 58 },
    { 0xE6C9, 59 },
    { 0xE6CA, 45 },
    { 0xE6CB, 46 },
    { 0xE6CC, 47 },
    { 0xE6CD, 48 },
    { 0xE6CE, 49 },
    { 0xE6CF, 50 },
    { 0xE6D0, 60 },
    { 0xE6D1, 67 },
    { 0xE6D2, 68 },
    { 0xE6D3, 69 },
    { 0xE6D4, 70 },
    { 0xE6D5, 71 },
    { 0xE6D6, 72 },
    { 0xE6D7, 73 },
    { 0xE6D8, 74 },
    { 0xE6D9, 75 },
    { 0xE6DA, 61 },
    { 0xE6DB, 62 },
    { 0xE6DC, 63 },
    { 0xE6DD, 64 },
    { 0xE6DE, 65 },
    { 0xE6DF, 66 },
    { 0xE703, 254 },
    { 0xE704, 250 },
    { 0xE705, 235 },
    { 0xE706, 240 },
    { 0xE707, 253 },
    { 0xE708, 222 },
    { 0xE710, 228 },
    { 0xE711, 226 },
    { 0xE712, 227 },
    { 0xE718, 234 },
    { 0xE719, 232 },
    { 0xE71A, 233 },
    { 0xE720, 231 },
    { 0xE721, 229 },
    { 0xE722, 230 },
    { 0xE728, 225 },
    { 0xE729, 223 },
    { 0xE72A, 224 },
    { 0xE880, 712 },
    { 0xE882, 265 },
    { 0xE890, 1009 },
    { 0xE891, 984 },
    { 0xE892, 216 },
    { 0xE896, 723 },
    { 0xE900, 987 },
    { 0xE901, 991 },
    { 0xE902, 745 },
    { 0xEA00, 732 },
    { 0xEA01, 353 },
    { 0xEA88, 5 },
    { 0xEA89, 9 },
    { 0xEA90, 370 },
    { 0xEAB0, 752 },
    { 0xEB00, 374 },
    { 0xECC8, 616 },
    { 0xED10, 494 },
    { 0xED18, 14 },
    { 0xED28, 507 },
    { 0xEE00, 995 },
    { 0xEE81, 262 },
    { 0xEE87, 717 },
    { 0xEF08, 237 },
    { 0xEF10, 249 },
    { 0xEF11, 245 },
    { 0xEF12, 247 },
    { 0xEF18, 260 },
    { 0xEF19, 256 },
    { 0xEF1A, 258 },
    { 0xF080, 714 },
    { 0xF081, 3 },
    { 0xF088, 710 },
    { 0xF089, 721 },
    { 0xF08A, 268 },
    { 0xF090, 1011 },
    { 0xF092, 218 },
    { 0xF093, 269 },
    { 0xF096, 725 },
    { 0xF099, 500 },
    { 0xF100, 989 },
    { 0xF102, 747 },
    { 0xF10C, 383 },
    { 0xF10E, 382 },
    { 0xF200, 734 },
    { 0xF201, 355 },
    { 0xF208, 740 },
    { 0xF288, 7 },
    { 0xF289, 11 },
    { 0xF290, 372 },
    { 0xF2B0, 754 },
    { 0xF300, 376 },
    { 0xF305, 503 },
    { 0xF510, 496 },
    { 0xF518, 16 },
    { 0xF528, 509 },
    { 0xF600, 997 },
    { 0xF601, 709 },
    { 0xF602, 702 },
    { 0xF664, 406 },
    { 0xF665, 423 },
    { 0xF667, 416 },
    { 0xF682, 760 },
    { 0xF687, 719 },
    { 0xFA0B, 705 },
    { 0xFF10, 243 },
    { 0xFF11, 241 },
    { 0xFF12, 242 },
    { 0xFF90, 266 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &SysRegsList[Index[i].index];
}

static const MorelloCSysReg MorelloCSysRegsList[] = {
  { "cdbgdtr_el0",  0x9820 }, // 0
  { "cdlr_el0",  0xDA29 }, // 1
  { "celr_el1",  0xC201 }, // 2
  { "celr_el12",  0xEA01 }, // 3
  { "celr_el2",  0xE201 }, // 4
  { "celr_el3",  0xF201 }, // 5
  { "cid_el0",  0xDE87 }, // 6
  { "csp_el0",  0xC208 }, // 7
  { "csp_el1",  0xE208 }, // 8
  { "csp_el2",  0xF208 }, // 9
  { "ctpidrro_el0",  0xDE83 }, // 10
  { "ctpidr_el0",  0xDE82 }, // 11
  { "ctpidr_el1",  0xC684 }, // 12
  { "ctpidr_el2",  0xE682 }, // 13
  { "ctpidr_el3",  0xF682 }, // 14
  { "cvbar_el1",  0xC600 }, // 15
  { "cvbar_el12",  0xEE00 }, // 16
  { "cvbar_el2",  0xE600 }, // 17
  { "cvbar_el3",  0xF600 }, // 18
  { "ddc",  0xDA09 }, // 19
  { "ddc_el0",  0xC209 }, // 20
  { "ddc_el1",  0xE209 }, // 21
  { "ddc_el2",  0xF209 }, // 22
  { "rcsp_el0",  0xFA0B }, // 23
  { "rctpidr_el0",  0xDE84 }, // 24
  { "rddc_el0",  0xDA19 }, // 25
};

const MorelloCSysReg *lookupMorelloCSysRegByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x9820, 0 },
    { 0xC201, 2 },
    { 0xC208, 7 },
    { 0xC209, 20 },
    { 0xC600, 15 },
    { 0xC684, 12 },
    { 0xDA09, 19 },
    { 0xDA19, 25 },
    { 0xDA29, 1 },
    { 0xDE82, 11 },
    { 0xDE83, 10 },
    { 0xDE84, 24 },
    { 0xDE87, 6 },
    { 0xE201, 4 },
    { 0xE208, 8 },
    { 0xE209, 21 },
    { 0xE600, 17 },
    { 0xE682, 13 },
    { 0xEA01, 3 },
    { 0xEE00, 16 },
    { 0xF201, 5 },
    { 0xF208, 9 },
    { 0xF209, 22 },
    { 0xF600, 18 },
    { 0xF682, 14 },
    { 0xFA0B, 23 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &MorelloCSysRegsList[Index[i].index];
}

static const PState PStatesList[] = {
  { "daifclr",  0x1F }, // 0
  { "daifset",  0x1E }, // 1
  { "dit",  0x1A }, // 2
  { "pan",  0x4 }, // 3
  { "spsel",  0x5 }, // 4
  { "ssbs",  0x19 }, // 5
  { "tco",  0x1C }, // 6
  { "uao",  0x3 }, // 7
};

const PState *lookupPStateByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x3, 7 },
    { 0x4, 3 },
    { 0x5, 4 },
    { 0x19, 5 },
    { 0x1A, 2 },
    { 0x1C, 6 },
    { 0x1E, 1 },
    { 0x1F, 0 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &PStatesList[Index[i].index];
}

static const SVEPREDPAT SVEPREDPATsList[] = {
  { "all", 0x1f }, // 0
  { "mul3", 0x1e }, // 1
  { "mul4", 0x1d }, // 2
  { "pow2", 0x0 }, // 3
  { "vl1", 0x1 }, // 4
  { "vl128", 0xc }, // 5
  { "vl16", 0x9 }, // 6
  { "vl2", 0x2 }, // 7
  { "vl256", 0xd }, // 8
  { "vl3", 0x3 }, // 9
  { "vl32", 0xa }, // 10
  { "vl4", 0x4 }, // 11
  { "vl5", 0x5 }, // 12
  { "vl6", 0x6 }, // 13
  { "vl64", 0xb }, // 14
  { "vl7", 0x7 }, // 15
  { "vl8", 0x8 }, // 16
};

const SVEPREDPAT *lookupSVEPREDPATByEncoding(uint16_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x0, 3 },
    { 0x1, 4 },
    { 0x2, 7 },
    { 0x3, 9 },
    { 0x4, 11 },
    { 0x5, 12 },
    { 0x6, 13 },
    { 0x7, 15 },
    { 0x8, 16 },
    { 0x9, 6 },
    { 0xA, 10 },
    { 0xB, 14 },
    { 0xC, 5 },
    { 0xD, 8 },
    { 0x1D, 2 },
    { 0x1E, 1 },
    { 0x1F, 0 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &SVEPREDPATsList[Index[i].index];
}

static const SVCR SVCRsList[] = {
  { "svcrsm",  0x1 }, // 0
  { "svcrsmza",  0x3 }, // 1
  { "svcrza",  0x2 }, // 2
};

const SVCR *lookupSVCRByEncoding(uint8_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x1, 0 },
    { 0x2, 2 },
    { 0x3, 1 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &SVCRsList[Index[i].index];
}

static const BTI BTIsList[] = {
  { "c",  0x2 }, // 0
  { "j",  0x4 }, // 1
  { "jc",  0x6 }, // 2
};

const BTI *lookupBTIByEncoding(uint8_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x2, 0 },
    { 0x4, 1 },
    { 0x6, 2 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &BTIsList[Index[i].index];
}

static const DBnXS DBnXSsList[] = {
  { "ishnxs",  0xB,  0x18}, // 0
  { "nshnxs",  0x7,  0x14}, // 1
  { "oshnxs",  0x3,  0x10}, // 2
  { "synxs",  0xF,  0x1C}, // 3
};

const DBnXS *lookupDBnXSByEncoding(uint8_t Encoding)
{
  unsigned int i;
  static const struct IndexType Index[] = {
    { 0x3, 2 },
    { 0x7, 1 },
    { 0xB, 0 },
    { 0xF, 3 },
  };

  i = binsearch_IndexTypeEncoding(Index, ARR_SIZE(Index), Encoding);
  if (i == -1)
    return NULL;
  else
    return &DBnXSsList[Index[i].index];
}

static const ExactFPImm ExactFPImmsList[] = {
  { "half", 0x1, "0.5" }, // 0
  { "one", 0x2, "1.0" }, // 1
  { "two", 0x3, "2.0" }, // 2
  { "zero", 0x0, "0.0" }, // 3
};

const ExactFPImm *lookupExactFPImmByEnum(uint16_t Encoding)
{
  static const struct IndexType Index[] = {
    { 0x0, 3 },
    { 0x1, 0 },
    { 0x2, 1 },
    { 0x3, 2 },
  };

  if (Encoding >= ARR_SIZE(ExactFPImmsList))
    return NULL;
  else
    return &ExactFPImmsList[Index[Encoding].index];
}

