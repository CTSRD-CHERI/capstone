
/* Capstone Disassembly Engine, http://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2019 */

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

enum {
  AArch64_NoRegister,
  AArch64_CFP = 1,
  AArch64_CLR = 2,
  AArch64_CSP = 3,
  AArch64_CZR = 4,
  AArch64_FFR = 5,
  AArch64_FP = 6,
  AArch64_LR = 7,
  AArch64_NZCV = 8,
  AArch64_SP = 9,
  AArch64_VG = 10,
  AArch64_WSP = 11,
  AArch64_WZR = 12,
  AArch64_XZR = 13,
  AArch64_ZA = 14,
  AArch64_B0 = 15,
  AArch64_B1 = 16,
  AArch64_B2 = 17,
  AArch64_B3 = 18,
  AArch64_B4 = 19,
  AArch64_B5 = 20,
  AArch64_B6 = 21,
  AArch64_B7 = 22,
  AArch64_B8 = 23,
  AArch64_B9 = 24,
  AArch64_B10 = 25,
  AArch64_B11 = 26,
  AArch64_B12 = 27,
  AArch64_B13 = 28,
  AArch64_B14 = 29,
  AArch64_B15 = 30,
  AArch64_B16 = 31,
  AArch64_B17 = 32,
  AArch64_B18 = 33,
  AArch64_B19 = 34,
  AArch64_B20 = 35,
  AArch64_B21 = 36,
  AArch64_B22 = 37,
  AArch64_B23 = 38,
  AArch64_B24 = 39,
  AArch64_B25 = 40,
  AArch64_B26 = 41,
  AArch64_B27 = 42,
  AArch64_B28 = 43,
  AArch64_B29 = 44,
  AArch64_B30 = 45,
  AArch64_B31 = 46,
  AArch64_C0 = 47,
  AArch64_C1 = 48,
  AArch64_C2 = 49,
  AArch64_C3 = 50,
  AArch64_C4 = 51,
  AArch64_C5 = 52,
  AArch64_C6 = 53,
  AArch64_C7 = 54,
  AArch64_C8 = 55,
  AArch64_C9 = 56,
  AArch64_C10 = 57,
  AArch64_C11 = 58,
  AArch64_C12 = 59,
  AArch64_C13 = 60,
  AArch64_C14 = 61,
  AArch64_C15 = 62,
  AArch64_C16 = 63,
  AArch64_C17 = 64,
  AArch64_C18 = 65,
  AArch64_C19 = 66,
  AArch64_C20 = 67,
  AArch64_C21 = 68,
  AArch64_C22 = 69,
  AArch64_C23 = 70,
  AArch64_C24 = 71,
  AArch64_C25 = 72,
  AArch64_C26 = 73,
  AArch64_C27 = 74,
  AArch64_C28 = 75,
  AArch64_D0 = 76,
  AArch64_D1 = 77,
  AArch64_D2 = 78,
  AArch64_D3 = 79,
  AArch64_D4 = 80,
  AArch64_D5 = 81,
  AArch64_D6 = 82,
  AArch64_D7 = 83,
  AArch64_D8 = 84,
  AArch64_D9 = 85,
  AArch64_D10 = 86,
  AArch64_D11 = 87,
  AArch64_D12 = 88,
  AArch64_D13 = 89,
  AArch64_D14 = 90,
  AArch64_D15 = 91,
  AArch64_D16 = 92,
  AArch64_D17 = 93,
  AArch64_D18 = 94,
  AArch64_D19 = 95,
  AArch64_D20 = 96,
  AArch64_D21 = 97,
  AArch64_D22 = 98,
  AArch64_D23 = 99,
  AArch64_D24 = 100,
  AArch64_D25 = 101,
  AArch64_D26 = 102,
  AArch64_D27 = 103,
  AArch64_D28 = 104,
  AArch64_D29 = 105,
  AArch64_D30 = 106,
  AArch64_D31 = 107,
  AArch64_H0 = 108,
  AArch64_H1 = 109,
  AArch64_H2 = 110,
  AArch64_H3 = 111,
  AArch64_H4 = 112,
  AArch64_H5 = 113,
  AArch64_H6 = 114,
  AArch64_H7 = 115,
  AArch64_H8 = 116,
  AArch64_H9 = 117,
  AArch64_H10 = 118,
  AArch64_H11 = 119,
  AArch64_H12 = 120,
  AArch64_H13 = 121,
  AArch64_H14 = 122,
  AArch64_H15 = 123,
  AArch64_H16 = 124,
  AArch64_H17 = 125,
  AArch64_H18 = 126,
  AArch64_H19 = 127,
  AArch64_H20 = 128,
  AArch64_H21 = 129,
  AArch64_H22 = 130,
  AArch64_H23 = 131,
  AArch64_H24 = 132,
  AArch64_H25 = 133,
  AArch64_H26 = 134,
  AArch64_H27 = 135,
  AArch64_H28 = 136,
  AArch64_H29 = 137,
  AArch64_H30 = 138,
  AArch64_H31 = 139,
  AArch64_P0 = 140,
  AArch64_P1 = 141,
  AArch64_P2 = 142,
  AArch64_P3 = 143,
  AArch64_P4 = 144,
  AArch64_P5 = 145,
  AArch64_P6 = 146,
  AArch64_P7 = 147,
  AArch64_P8 = 148,
  AArch64_P9 = 149,
  AArch64_P10 = 150,
  AArch64_P11 = 151,
  AArch64_P12 = 152,
  AArch64_P13 = 153,
  AArch64_P14 = 154,
  AArch64_P15 = 155,
  AArch64_Q0 = 156,
  AArch64_Q1 = 157,
  AArch64_Q2 = 158,
  AArch64_Q3 = 159,
  AArch64_Q4 = 160,
  AArch64_Q5 = 161,
  AArch64_Q6 = 162,
  AArch64_Q7 = 163,
  AArch64_Q8 = 164,
  AArch64_Q9 = 165,
  AArch64_Q10 = 166,
  AArch64_Q11 = 167,
  AArch64_Q12 = 168,
  AArch64_Q13 = 169,
  AArch64_Q14 = 170,
  AArch64_Q15 = 171,
  AArch64_Q16 = 172,
  AArch64_Q17 = 173,
  AArch64_Q18 = 174,
  AArch64_Q19 = 175,
  AArch64_Q20 = 176,
  AArch64_Q21 = 177,
  AArch64_Q22 = 178,
  AArch64_Q23 = 179,
  AArch64_Q24 = 180,
  AArch64_Q25 = 181,
  AArch64_Q26 = 182,
  AArch64_Q27 = 183,
  AArch64_Q28 = 184,
  AArch64_Q29 = 185,
  AArch64_Q30 = 186,
  AArch64_Q31 = 187,
  AArch64_S0 = 188,
  AArch64_S1 = 189,
  AArch64_S2 = 190,
  AArch64_S3 = 191,
  AArch64_S4 = 192,
  AArch64_S5 = 193,
  AArch64_S6 = 194,
  AArch64_S7 = 195,
  AArch64_S8 = 196,
  AArch64_S9 = 197,
  AArch64_S10 = 198,
  AArch64_S11 = 199,
  AArch64_S12 = 200,
  AArch64_S13 = 201,
  AArch64_S14 = 202,
  AArch64_S15 = 203,
  AArch64_S16 = 204,
  AArch64_S17 = 205,
  AArch64_S18 = 206,
  AArch64_S19 = 207,
  AArch64_S20 = 208,
  AArch64_S21 = 209,
  AArch64_S22 = 210,
  AArch64_S23 = 211,
  AArch64_S24 = 212,
  AArch64_S25 = 213,
  AArch64_S26 = 214,
  AArch64_S27 = 215,
  AArch64_S28 = 216,
  AArch64_S29 = 217,
  AArch64_S30 = 218,
  AArch64_S31 = 219,
  AArch64_W0 = 220,
  AArch64_W1 = 221,
  AArch64_W2 = 222,
  AArch64_W3 = 223,
  AArch64_W4 = 224,
  AArch64_W5 = 225,
  AArch64_W6 = 226,
  AArch64_W7 = 227,
  AArch64_W8 = 228,
  AArch64_W9 = 229,
  AArch64_W10 = 230,
  AArch64_W11 = 231,
  AArch64_W12 = 232,
  AArch64_W13 = 233,
  AArch64_W14 = 234,
  AArch64_W15 = 235,
  AArch64_W16 = 236,
  AArch64_W17 = 237,
  AArch64_W18 = 238,
  AArch64_W19 = 239,
  AArch64_W20 = 240,
  AArch64_W21 = 241,
  AArch64_W22 = 242,
  AArch64_W23 = 243,
  AArch64_W24 = 244,
  AArch64_W25 = 245,
  AArch64_W26 = 246,
  AArch64_W27 = 247,
  AArch64_W28 = 248,
  AArch64_W29 = 249,
  AArch64_W30 = 250,
  AArch64_X0 = 251,
  AArch64_X1 = 252,
  AArch64_X2 = 253,
  AArch64_X3 = 254,
  AArch64_X4 = 255,
  AArch64_X5 = 256,
  AArch64_X6 = 257,
  AArch64_X7 = 258,
  AArch64_X8 = 259,
  AArch64_X9 = 260,
  AArch64_X10 = 261,
  AArch64_X11 = 262,
  AArch64_X12 = 263,
  AArch64_X13 = 264,
  AArch64_X14 = 265,
  AArch64_X15 = 266,
  AArch64_X16 = 267,
  AArch64_X17 = 268,
  AArch64_X18 = 269,
  AArch64_X19 = 270,
  AArch64_X20 = 271,
  AArch64_X21 = 272,
  AArch64_X22 = 273,
  AArch64_X23 = 274,
  AArch64_X24 = 275,
  AArch64_X25 = 276,
  AArch64_X26 = 277,
  AArch64_X27 = 278,
  AArch64_X28 = 279,
  AArch64_Z0 = 280,
  AArch64_Z1 = 281,
  AArch64_Z2 = 282,
  AArch64_Z3 = 283,
  AArch64_Z4 = 284,
  AArch64_Z5 = 285,
  AArch64_Z6 = 286,
  AArch64_Z7 = 287,
  AArch64_Z8 = 288,
  AArch64_Z9 = 289,
  AArch64_Z10 = 290,
  AArch64_Z11 = 291,
  AArch64_Z12 = 292,
  AArch64_Z13 = 293,
  AArch64_Z14 = 294,
  AArch64_Z15 = 295,
  AArch64_Z16 = 296,
  AArch64_Z17 = 297,
  AArch64_Z18 = 298,
  AArch64_Z19 = 299,
  AArch64_Z20 = 300,
  AArch64_Z21 = 301,
  AArch64_Z22 = 302,
  AArch64_Z23 = 303,
  AArch64_Z24 = 304,
  AArch64_Z25 = 305,
  AArch64_Z26 = 306,
  AArch64_Z27 = 307,
  AArch64_Z28 = 308,
  AArch64_Z29 = 309,
  AArch64_Z30 = 310,
  AArch64_Z31 = 311,
  AArch64_ZAB0 = 312,
  AArch64_ZAD0 = 313,
  AArch64_ZAD1 = 314,
  AArch64_ZAD2 = 315,
  AArch64_ZAD3 = 316,
  AArch64_ZAD4 = 317,
  AArch64_ZAD5 = 318,
  AArch64_ZAD6 = 319,
  AArch64_ZAD7 = 320,
  AArch64_ZAH0 = 321,
  AArch64_ZAH1 = 322,
  AArch64_ZAQ0 = 323,
  AArch64_ZAQ1 = 324,
  AArch64_ZAQ2 = 325,
  AArch64_ZAQ3 = 326,
  AArch64_ZAQ4 = 327,
  AArch64_ZAQ5 = 328,
  AArch64_ZAQ6 = 329,
  AArch64_ZAQ7 = 330,
  AArch64_ZAQ8 = 331,
  AArch64_ZAQ9 = 332,
  AArch64_ZAQ10 = 333,
  AArch64_ZAQ11 = 334,
  AArch64_ZAQ12 = 335,
  AArch64_ZAQ13 = 336,
  AArch64_ZAQ14 = 337,
  AArch64_ZAQ15 = 338,
  AArch64_ZAS0 = 339,
  AArch64_ZAS1 = 340,
  AArch64_ZAS2 = 341,
  AArch64_ZAS3 = 342,
  AArch64_Z0_HI = 343,
  AArch64_Z1_HI = 344,
  AArch64_Z2_HI = 345,
  AArch64_Z3_HI = 346,
  AArch64_Z4_HI = 347,
  AArch64_Z5_HI = 348,
  AArch64_Z6_HI = 349,
  AArch64_Z7_HI = 350,
  AArch64_Z8_HI = 351,
  AArch64_Z9_HI = 352,
  AArch64_Z10_HI = 353,
  AArch64_Z11_HI = 354,
  AArch64_Z12_HI = 355,
  AArch64_Z13_HI = 356,
  AArch64_Z14_HI = 357,
  AArch64_Z15_HI = 358,
  AArch64_Z16_HI = 359,
  AArch64_Z17_HI = 360,
  AArch64_Z18_HI = 361,
  AArch64_Z19_HI = 362,
  AArch64_Z20_HI = 363,
  AArch64_Z21_HI = 364,
  AArch64_Z22_HI = 365,
  AArch64_Z23_HI = 366,
  AArch64_Z24_HI = 367,
  AArch64_Z25_HI = 368,
  AArch64_Z26_HI = 369,
  AArch64_Z27_HI = 370,
  AArch64_Z28_HI = 371,
  AArch64_Z29_HI = 372,
  AArch64_Z30_HI = 373,
  AArch64_Z31_HI = 374,
  AArch64_D0_D1 = 375,
  AArch64_D1_D2 = 376,
  AArch64_D2_D3 = 377,
  AArch64_D3_D4 = 378,
  AArch64_D4_D5 = 379,
  AArch64_D5_D6 = 380,
  AArch64_D6_D7 = 381,
  AArch64_D7_D8 = 382,
  AArch64_D8_D9 = 383,
  AArch64_D9_D10 = 384,
  AArch64_D10_D11 = 385,
  AArch64_D11_D12 = 386,
  AArch64_D12_D13 = 387,
  AArch64_D13_D14 = 388,
  AArch64_D14_D15 = 389,
  AArch64_D15_D16 = 390,
  AArch64_D16_D17 = 391,
  AArch64_D17_D18 = 392,
  AArch64_D18_D19 = 393,
  AArch64_D19_D20 = 394,
  AArch64_D20_D21 = 395,
  AArch64_D21_D22 = 396,
  AArch64_D22_D23 = 397,
  AArch64_D23_D24 = 398,
  AArch64_D24_D25 = 399,
  AArch64_D25_D26 = 400,
  AArch64_D26_D27 = 401,
  AArch64_D27_D28 = 402,
  AArch64_D28_D29 = 403,
  AArch64_D29_D30 = 404,
  AArch64_D30_D31 = 405,
  AArch64_D31_D0 = 406,
  AArch64_D0_D1_D2_D3 = 407,
  AArch64_D1_D2_D3_D4 = 408,
  AArch64_D2_D3_D4_D5 = 409,
  AArch64_D3_D4_D5_D6 = 410,
  AArch64_D4_D5_D6_D7 = 411,
  AArch64_D5_D6_D7_D8 = 412,
  AArch64_D6_D7_D8_D9 = 413,
  AArch64_D7_D8_D9_D10 = 414,
  AArch64_D8_D9_D10_D11 = 415,
  AArch64_D9_D10_D11_D12 = 416,
  AArch64_D10_D11_D12_D13 = 417,
  AArch64_D11_D12_D13_D14 = 418,
  AArch64_D12_D13_D14_D15 = 419,
  AArch64_D13_D14_D15_D16 = 420,
  AArch64_D14_D15_D16_D17 = 421,
  AArch64_D15_D16_D17_D18 = 422,
  AArch64_D16_D17_D18_D19 = 423,
  AArch64_D17_D18_D19_D20 = 424,
  AArch64_D18_D19_D20_D21 = 425,
  AArch64_D19_D20_D21_D22 = 426,
  AArch64_D20_D21_D22_D23 = 427,
  AArch64_D21_D22_D23_D24 = 428,
  AArch64_D22_D23_D24_D25 = 429,
  AArch64_D23_D24_D25_D26 = 430,
  AArch64_D24_D25_D26_D27 = 431,
  AArch64_D25_D26_D27_D28 = 432,
  AArch64_D26_D27_D28_D29 = 433,
  AArch64_D27_D28_D29_D30 = 434,
  AArch64_D28_D29_D30_D31 = 435,
  AArch64_D29_D30_D31_D0 = 436,
  AArch64_D30_D31_D0_D1 = 437,
  AArch64_D31_D0_D1_D2 = 438,
  AArch64_D0_D1_D2 = 439,
  AArch64_D1_D2_D3 = 440,
  AArch64_D2_D3_D4 = 441,
  AArch64_D3_D4_D5 = 442,
  AArch64_D4_D5_D6 = 443,
  AArch64_D5_D6_D7 = 444,
  AArch64_D6_D7_D8 = 445,
  AArch64_D7_D8_D9 = 446,
  AArch64_D8_D9_D10 = 447,
  AArch64_D9_D10_D11 = 448,
  AArch64_D10_D11_D12 = 449,
  AArch64_D11_D12_D13 = 450,
  AArch64_D12_D13_D14 = 451,
  AArch64_D13_D14_D15 = 452,
  AArch64_D14_D15_D16 = 453,
  AArch64_D15_D16_D17 = 454,
  AArch64_D16_D17_D18 = 455,
  AArch64_D17_D18_D19 = 456,
  AArch64_D18_D19_D20 = 457,
  AArch64_D19_D20_D21 = 458,
  AArch64_D20_D21_D22 = 459,
  AArch64_D21_D22_D23 = 460,
  AArch64_D22_D23_D24 = 461,
  AArch64_D23_D24_D25 = 462,
  AArch64_D24_D25_D26 = 463,
  AArch64_D25_D26_D27 = 464,
  AArch64_D26_D27_D28 = 465,
  AArch64_D27_D28_D29 = 466,
  AArch64_D28_D29_D30 = 467,
  AArch64_D29_D30_D31 = 468,
  AArch64_D30_D31_D0 = 469,
  AArch64_D31_D0_D1 = 470,
  AArch64_Q0_Q1 = 471,
  AArch64_Q1_Q2 = 472,
  AArch64_Q2_Q3 = 473,
  AArch64_Q3_Q4 = 474,
  AArch64_Q4_Q5 = 475,
  AArch64_Q5_Q6 = 476,
  AArch64_Q6_Q7 = 477,
  AArch64_Q7_Q8 = 478,
  AArch64_Q8_Q9 = 479,
  AArch64_Q9_Q10 = 480,
  AArch64_Q10_Q11 = 481,
  AArch64_Q11_Q12 = 482,
  AArch64_Q12_Q13 = 483,
  AArch64_Q13_Q14 = 484,
  AArch64_Q14_Q15 = 485,
  AArch64_Q15_Q16 = 486,
  AArch64_Q16_Q17 = 487,
  AArch64_Q17_Q18 = 488,
  AArch64_Q18_Q19 = 489,
  AArch64_Q19_Q20 = 490,
  AArch64_Q20_Q21 = 491,
  AArch64_Q21_Q22 = 492,
  AArch64_Q22_Q23 = 493,
  AArch64_Q23_Q24 = 494,
  AArch64_Q24_Q25 = 495,
  AArch64_Q25_Q26 = 496,
  AArch64_Q26_Q27 = 497,
  AArch64_Q27_Q28 = 498,
  AArch64_Q28_Q29 = 499,
  AArch64_Q29_Q30 = 500,
  AArch64_Q30_Q31 = 501,
  AArch64_Q31_Q0 = 502,
  AArch64_Q0_Q1_Q2_Q3 = 503,
  AArch64_Q1_Q2_Q3_Q4 = 504,
  AArch64_Q2_Q3_Q4_Q5 = 505,
  AArch64_Q3_Q4_Q5_Q6 = 506,
  AArch64_Q4_Q5_Q6_Q7 = 507,
  AArch64_Q5_Q6_Q7_Q8 = 508,
  AArch64_Q6_Q7_Q8_Q9 = 509,
  AArch64_Q7_Q8_Q9_Q10 = 510,
  AArch64_Q8_Q9_Q10_Q11 = 511,
  AArch64_Q9_Q10_Q11_Q12 = 512,
  AArch64_Q10_Q11_Q12_Q13 = 513,
  AArch64_Q11_Q12_Q13_Q14 = 514,
  AArch64_Q12_Q13_Q14_Q15 = 515,
  AArch64_Q13_Q14_Q15_Q16 = 516,
  AArch64_Q14_Q15_Q16_Q17 = 517,
  AArch64_Q15_Q16_Q17_Q18 = 518,
  AArch64_Q16_Q17_Q18_Q19 = 519,
  AArch64_Q17_Q18_Q19_Q20 = 520,
  AArch64_Q18_Q19_Q20_Q21 = 521,
  AArch64_Q19_Q20_Q21_Q22 = 522,
  AArch64_Q20_Q21_Q22_Q23 = 523,
  AArch64_Q21_Q22_Q23_Q24 = 524,
  AArch64_Q22_Q23_Q24_Q25 = 525,
  AArch64_Q23_Q24_Q25_Q26 = 526,
  AArch64_Q24_Q25_Q26_Q27 = 527,
  AArch64_Q25_Q26_Q27_Q28 = 528,
  AArch64_Q26_Q27_Q28_Q29 = 529,
  AArch64_Q27_Q28_Q29_Q30 = 530,
  AArch64_Q28_Q29_Q30_Q31 = 531,
  AArch64_Q29_Q30_Q31_Q0 = 532,
  AArch64_Q30_Q31_Q0_Q1 = 533,
  AArch64_Q31_Q0_Q1_Q2 = 534,
  AArch64_Q0_Q1_Q2 = 535,
  AArch64_Q1_Q2_Q3 = 536,
  AArch64_Q2_Q3_Q4 = 537,
  AArch64_Q3_Q4_Q5 = 538,
  AArch64_Q4_Q5_Q6 = 539,
  AArch64_Q5_Q6_Q7 = 540,
  AArch64_Q6_Q7_Q8 = 541,
  AArch64_Q7_Q8_Q9 = 542,
  AArch64_Q8_Q9_Q10 = 543,
  AArch64_Q9_Q10_Q11 = 544,
  AArch64_Q10_Q11_Q12 = 545,
  AArch64_Q11_Q12_Q13 = 546,
  AArch64_Q12_Q13_Q14 = 547,
  AArch64_Q13_Q14_Q15 = 548,
  AArch64_Q14_Q15_Q16 = 549,
  AArch64_Q15_Q16_Q17 = 550,
  AArch64_Q16_Q17_Q18 = 551,
  AArch64_Q17_Q18_Q19 = 552,
  AArch64_Q18_Q19_Q20 = 553,
  AArch64_Q19_Q20_Q21 = 554,
  AArch64_Q20_Q21_Q22 = 555,
  AArch64_Q21_Q22_Q23 = 556,
  AArch64_Q22_Q23_Q24 = 557,
  AArch64_Q23_Q24_Q25 = 558,
  AArch64_Q24_Q25_Q26 = 559,
  AArch64_Q25_Q26_Q27 = 560,
  AArch64_Q26_Q27_Q28 = 561,
  AArch64_Q27_Q28_Q29 = 562,
  AArch64_Q28_Q29_Q30 = 563,
  AArch64_Q29_Q30_Q31 = 564,
  AArch64_Q30_Q31_Q0 = 565,
  AArch64_Q31_Q0_Q1 = 566,
  AArch64_X22_X23_X24_X25_X26_X27_X28_FP = 567,
  AArch64_X0_X1_X2_X3_X4_X5_X6_X7 = 568,
  AArch64_X2_X3_X4_X5_X6_X7_X8_X9 = 569,
  AArch64_X4_X5_X6_X7_X8_X9_X10_X11 = 570,
  AArch64_X6_X7_X8_X9_X10_X11_X12_X13 = 571,
  AArch64_X8_X9_X10_X11_X12_X13_X14_X15 = 572,
  AArch64_X10_X11_X12_X13_X14_X15_X16_X17 = 573,
  AArch64_X12_X13_X14_X15_X16_X17_X18_X19 = 574,
  AArch64_X14_X15_X16_X17_X18_X19_X20_X21 = 575,
  AArch64_X16_X17_X18_X19_X20_X21_X22_X23 = 576,
  AArch64_X18_X19_X20_X21_X22_X23_X24_X25 = 577,
  AArch64_X20_X21_X22_X23_X24_X25_X26_X27 = 578,
  AArch64_WZR_W0 = 579,
  AArch64_W30_WZR = 580,
  AArch64_W0_W1 = 581,
  AArch64_W1_W2 = 582,
  AArch64_W2_W3 = 583,
  AArch64_W3_W4 = 584,
  AArch64_W4_W5 = 585,
  AArch64_W5_W6 = 586,
  AArch64_W6_W7 = 587,
  AArch64_W7_W8 = 588,
  AArch64_W8_W9 = 589,
  AArch64_W9_W10 = 590,
  AArch64_W10_W11 = 591,
  AArch64_W11_W12 = 592,
  AArch64_W12_W13 = 593,
  AArch64_W13_W14 = 594,
  AArch64_W14_W15 = 595,
  AArch64_W15_W16 = 596,
  AArch64_W16_W17 = 597,
  AArch64_W17_W18 = 598,
  AArch64_W18_W19 = 599,
  AArch64_W19_W20 = 600,
  AArch64_W20_W21 = 601,
  AArch64_W21_W22 = 602,
  AArch64_W22_W23 = 603,
  AArch64_W23_W24 = 604,
  AArch64_W24_W25 = 605,
  AArch64_W25_W26 = 606,
  AArch64_W26_W27 = 607,
  AArch64_W27_W28 = 608,
  AArch64_W28_W29 = 609,
  AArch64_W29_W30 = 610,
  AArch64_FP_LR = 611,
  AArch64_LR_XZR = 612,
  AArch64_XZR_X0 = 613,
  AArch64_X28_FP = 614,
  AArch64_X0_X1 = 615,
  AArch64_X1_X2 = 616,
  AArch64_X2_X3 = 617,
  AArch64_X3_X4 = 618,
  AArch64_X4_X5 = 619,
  AArch64_X5_X6 = 620,
  AArch64_X6_X7 = 621,
  AArch64_X7_X8 = 622,
  AArch64_X8_X9 = 623,
  AArch64_X9_X10 = 624,
  AArch64_X10_X11 = 625,
  AArch64_X11_X12 = 626,
  AArch64_X12_X13 = 627,
  AArch64_X13_X14 = 628,
  AArch64_X14_X15 = 629,
  AArch64_X15_X16 = 630,
  AArch64_X16_X17 = 631,
  AArch64_X17_X18 = 632,
  AArch64_X18_X19 = 633,
  AArch64_X19_X20 = 634,
  AArch64_X20_X21 = 635,
  AArch64_X21_X22 = 636,
  AArch64_X22_X23 = 637,
  AArch64_X23_X24 = 638,
  AArch64_X24_X25 = 639,
  AArch64_X25_X26 = 640,
  AArch64_X26_X27 = 641,
  AArch64_X27_X28 = 642,
  AArch64_Z0_Z1 = 643,
  AArch64_Z1_Z2 = 644,
  AArch64_Z2_Z3 = 645,
  AArch64_Z3_Z4 = 646,
  AArch64_Z4_Z5 = 647,
  AArch64_Z5_Z6 = 648,
  AArch64_Z6_Z7 = 649,
  AArch64_Z7_Z8 = 650,
  AArch64_Z8_Z9 = 651,
  AArch64_Z9_Z10 = 652,
  AArch64_Z10_Z11 = 653,
  AArch64_Z11_Z12 = 654,
  AArch64_Z12_Z13 = 655,
  AArch64_Z13_Z14 = 656,
  AArch64_Z14_Z15 = 657,
  AArch64_Z15_Z16 = 658,
  AArch64_Z16_Z17 = 659,
  AArch64_Z17_Z18 = 660,
  AArch64_Z18_Z19 = 661,
  AArch64_Z19_Z20 = 662,
  AArch64_Z20_Z21 = 663,
  AArch64_Z21_Z22 = 664,
  AArch64_Z22_Z23 = 665,
  AArch64_Z23_Z24 = 666,
  AArch64_Z24_Z25 = 667,
  AArch64_Z25_Z26 = 668,
  AArch64_Z26_Z27 = 669,
  AArch64_Z27_Z28 = 670,
  AArch64_Z28_Z29 = 671,
  AArch64_Z29_Z30 = 672,
  AArch64_Z30_Z31 = 673,
  AArch64_Z31_Z0 = 674,
  AArch64_Z0_Z1_Z2_Z3 = 675,
  AArch64_Z1_Z2_Z3_Z4 = 676,
  AArch64_Z2_Z3_Z4_Z5 = 677,
  AArch64_Z3_Z4_Z5_Z6 = 678,
  AArch64_Z4_Z5_Z6_Z7 = 679,
  AArch64_Z5_Z6_Z7_Z8 = 680,
  AArch64_Z6_Z7_Z8_Z9 = 681,
  AArch64_Z7_Z8_Z9_Z10 = 682,
  AArch64_Z8_Z9_Z10_Z11 = 683,
  AArch64_Z9_Z10_Z11_Z12 = 684,
  AArch64_Z10_Z11_Z12_Z13 = 685,
  AArch64_Z11_Z12_Z13_Z14 = 686,
  AArch64_Z12_Z13_Z14_Z15 = 687,
  AArch64_Z13_Z14_Z15_Z16 = 688,
  AArch64_Z14_Z15_Z16_Z17 = 689,
  AArch64_Z15_Z16_Z17_Z18 = 690,
  AArch64_Z16_Z17_Z18_Z19 = 691,
  AArch64_Z17_Z18_Z19_Z20 = 692,
  AArch64_Z18_Z19_Z20_Z21 = 693,
  AArch64_Z19_Z20_Z21_Z22 = 694,
  AArch64_Z20_Z21_Z22_Z23 = 695,
  AArch64_Z21_Z22_Z23_Z24 = 696,
  AArch64_Z22_Z23_Z24_Z25 = 697,
  AArch64_Z23_Z24_Z25_Z26 = 698,
  AArch64_Z24_Z25_Z26_Z27 = 699,
  AArch64_Z25_Z26_Z27_Z28 = 700,
  AArch64_Z26_Z27_Z28_Z29 = 701,
  AArch64_Z27_Z28_Z29_Z30 = 702,
  AArch64_Z28_Z29_Z30_Z31 = 703,
  AArch64_Z29_Z30_Z31_Z0 = 704,
  AArch64_Z30_Z31_Z0_Z1 = 705,
  AArch64_Z31_Z0_Z1_Z2 = 706,
  AArch64_Z0_Z1_Z2 = 707,
  AArch64_Z1_Z2_Z3 = 708,
  AArch64_Z2_Z3_Z4 = 709,
  AArch64_Z3_Z4_Z5 = 710,
  AArch64_Z4_Z5_Z6 = 711,
  AArch64_Z5_Z6_Z7 = 712,
  AArch64_Z6_Z7_Z8 = 713,
  AArch64_Z7_Z8_Z9 = 714,
  AArch64_Z8_Z9_Z10 = 715,
  AArch64_Z9_Z10_Z11 = 716,
  AArch64_Z10_Z11_Z12 = 717,
  AArch64_Z11_Z12_Z13 = 718,
  AArch64_Z12_Z13_Z14 = 719,
  AArch64_Z13_Z14_Z15 = 720,
  AArch64_Z14_Z15_Z16 = 721,
  AArch64_Z15_Z16_Z17 = 722,
  AArch64_Z16_Z17_Z18 = 723,
  AArch64_Z17_Z18_Z19 = 724,
  AArch64_Z18_Z19_Z20 = 725,
  AArch64_Z19_Z20_Z21 = 726,
  AArch64_Z20_Z21_Z22 = 727,
  AArch64_Z21_Z22_Z23 = 728,
  AArch64_Z22_Z23_Z24 = 729,
  AArch64_Z23_Z24_Z25 = 730,
  AArch64_Z24_Z25_Z26 = 731,
  AArch64_Z25_Z26_Z27 = 732,
  AArch64_Z26_Z27_Z28 = 733,
  AArch64_Z27_Z28_Z29 = 734,
  AArch64_Z28_Z29_Z30 = 735,
  AArch64_Z29_Z30_Z31 = 736,
  AArch64_Z30_Z31_Z0 = 737,
  AArch64_Z31_Z0_Z1 = 738,
  AArch64_NUM_TARGET_REGS // 739
};

// Register classes
enum {
  AArch64_FPR8RegClassID = 0,
  AArch64_FPR16RegClassID = 1,
  AArch64_FPR16_loRegClassID = 2,
  AArch64_PPRRegClassID = 3,
  AArch64_PPR_3bRegClassID = 4,
  AArch64_GPR32allRegClassID = 5,
  AArch64_FPR32RegClassID = 6,
  AArch64_GPR32RegClassID = 7,
  AArch64_GPR32spRegClassID = 8,
  AArch64_GPR32commonRegClassID = 9,
  AArch64_FPR32_with_hsub_in_FPR16_loRegClassID = 10,
  AArch64_GPR32argRegClassID = 11,
  AArch64_MatrixIndexGPR32_12_15RegClassID = 12,
  AArch64_CCRRegClassID = 13,
  AArch64_GPR32sponlyRegClassID = 14,
  AArch64_WSeqPairsAllClassRegClassID = 15,
  AArch64_WSeqPairsAllClass_with_sube32_in_GPR32commonRegClassID = 16,
  AArch64_WSeqPairsAllClass_with_subo32_in_GPR32commonRegClassID = 17,
  AArch64_WSeqPairsAllClass_with_sube32_in_GPR32common_and_WSeqPairsAllClass_with_subo32_in_GPR32commonRegClassID = 18,
  AArch64_WSeqPairsClassRegClassID = 19,
  AArch64_WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32commonRegClassID = 20,
  AArch64_WSeqPairsAllClass_with_sube32_in_GPR32argRegClassID = 21,
  AArch64_WSeqPairsAllClass_with_subo32_in_GPR32argRegClassID = 22,
  AArch64_WSeqPairsAllClass_with_sube32_in_GPR32arg_and_WSeqPairsAllClass_with_subo32_in_GPR32argRegClassID = 23,
  AArch64_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15RegClassID = 24,
  AArch64_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15RegClassID = 25,
  AArch64_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32argRegClassID = 26,
  AArch64_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15RegClassID = 27,
  AArch64_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15RegClassID = 28,
  AArch64_GPR64allRegClassID = 29,
  AArch64_FPR64RegClassID = 30,
  AArch64_GPR64RegClassID = 31,
  AArch64_GPR64spRegClassID = 32,
  AArch64_GPR64commonRegClassID = 33,
  AArch64_GPR64noipRegClassID = 34,
  AArch64_GPR64common_and_GPR64noipRegClassID = 35,
  AArch64_tcGPR64RegClassID = 36,
  AArch64_GPR64noip_and_tcGPR64RegClassID = 37,
  AArch64_FPR64_loRegClassID = 38,
  AArch64_GPR64argRegClassID = 39,
  AArch64_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID = 40,
  AArch64_rtcGPR64RegClassID = 41,
  AArch64_GPR64sponlyRegClassID = 42,
  AArch64_DDRegClassID = 43,
  AArch64_XSeqPairsAllClassRegClassID = 44,
  AArch64_XSeqPairsAllClass_with_sub_32_in_GPR32commonRegClassID = 45,
  AArch64_XSeqPairsAllClass_with_subo64_in_GPR64commonRegClassID = 46,
  AArch64_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64commonRegClassID = 47,
  AArch64_XSeqPairsAllClass_with_sube64_in_GPR64noipRegClassID = 48,
  AArch64_XSeqPairsAllClass_with_subo64_in_GPR64noipRegClassID = 49,
  AArch64_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noipRegClassID = 50,
  AArch64_XSeqPairsAllClass_with_sube64_in_GPR64common_and_GPR64noipRegClassID = 51,
  AArch64_XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noipRegClassID = 52,
  AArch64_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noipRegClassID = 53,
  AArch64_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noipRegClassID = 54,
  AArch64_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noipRegClassID = 55,
  AArch64_XSeqPairsAllClass_with_sube64_in_tcGPR64RegClassID = 56,
  AArch64_XSeqPairsAllClass_with_subo64_in_tcGPR64RegClassID = 57,
  AArch64_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64RegClassID = 58,
  AArch64_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_tcGPR64RegClassID = 59,
  AArch64_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64RegClassID = 60,
  AArch64_XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noipRegClassID = 61,
  AArch64_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64RegClassID = 62,
  AArch64_DD_with_dsub0_in_FPR64_loRegClassID = 63,
  AArch64_DD_with_dsub1_in_FPR64_loRegClassID = 64,
  AArch64_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64RegClassID = 65,
  AArch64_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64RegClassID = 66,
  AArch64_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64RegClassID = 67,
  AArch64_XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noipRegClassID = 68,
  AArch64_XSeqPairsClassRegClassID = 69,
  AArch64_DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loRegClassID = 70,
  AArch64_XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32commonRegClassID = 71,
  AArch64_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64RegClassID = 72,
  AArch64_XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noipRegClassID = 73,
  AArch64_XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noipRegClassID = 74,
  AArch64_XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_tcGPR64RegClassID = 75,
  AArch64_XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64RegClassID = 76,
  AArch64_XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_tcGPR64RegClassID = 77,
  AArch64_XSeqPairsAllClass_with_sub_32_in_GPR32argRegClassID = 78,
  AArch64_XSeqPairsAllClass_with_subo64_in_GPR64argRegClassID = 79,
  AArch64_XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64RegClassID = 80,
  AArch64_XSeqPairsAllClass_with_sub_32_in_GPR32arg_and_XSeqPairsAllClass_with_subo64_in_GPR64argRegClassID = 81,
  AArch64_XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID = 82,
  AArch64_XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32argRegClassID = 83,
  AArch64_XSeqPairsAllClass_with_subo64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID = 84,
  AArch64_XSeqPairsAllClass_with_sub_32_in_GPR32common_with_sub_32_subo64_then_sub_32_in_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15RegClassID = 85,
  AArch64_XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15RegClassID = 86,
  AArch64_XSeqPairsAllClass_with_sube64_in_rtcGPR64RegClassID = 87,
  AArch64_XSeqPairsAllClass_with_subo64_in_rtcGPR64RegClassID = 88,
  AArch64_XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15_and_XSeqPairsAllClass_with_subo64_in_rtcGPR64RegClassID = 89,
  AArch64_XSeqPairsAllClass_with_sube64_in_rtcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noipRegClassID = 90,
  AArch64_XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_rtcGPR64RegClassID = 91,
  AArch64_CapallRegClassID = 92,
  AArch64_CapRegClassID = 93,
  AArch64_CapspRegClassID = 94,
  AArch64_FPR128RegClassID = 95,
  AArch64_ZPRRegClassID = 96,
  AArch64_Cap_and_CapspRegClassID = 97,
  AArch64_CapcommonRegClassID = 98,
  AArch64_Cap_with_sub_64_in_GPR64noipRegClassID = 99,
  AArch64_Capcommon_and_Cap_with_sub_64_in_GPR64noipRegClassID = 100,
  AArch64_tcCapDescRegClassID = 101,
  AArch64_tcCapRegClassID = 102,
  AArch64_tcCapDesc_and_Cap_with_sub_64_in_GPR64noipRegClassID = 103,
  AArch64_tcCap_and_tcCapDescRegClassID = 104,
  AArch64_tcCap_and_Cap_with_sub_64_in_GPR64noipRegClassID = 105,
  AArch64_FPR128_loRegClassID = 106,
  AArch64_MPR128RegClassID = 107,
  AArch64_ZPR_4bRegClassID = 108,
  AArch64_Cap_with_sub_32_in_GPR32argRegClassID = 109,
  AArch64_ZPR_3bRegClassID = 110,
  AArch64_Cap_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID = 111,
  AArch64_Cap_with_sub_64_in_rtcGPR64RegClassID = 112,
  AArch64_Capall_with_sub_32_in_GPR32sponlyRegClassID = 113,
  AArch64_tcCapDesc_and_Cap_with_sub_64_in_rtcGPR64RegClassID = 114,
  AArch64_DDDRegClassID = 115,
  AArch64_DDD_with_dsub0_in_FPR64_loRegClassID = 116,
  AArch64_DDD_with_dsub1_in_FPR64_loRegClassID = 117,
  AArch64_DDD_with_dsub2_in_FPR64_loRegClassID = 118,
  AArch64_DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loRegClassID = 119,
  AArch64_DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID = 120,
  AArch64_DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loRegClassID = 121,
  AArch64_DDDDRegClassID = 122,
  AArch64_DDDD_with_dsub0_in_FPR64_loRegClassID = 123,
  AArch64_DDDD_with_dsub1_in_FPR64_loRegClassID = 124,
  AArch64_DDDD_with_dsub2_in_FPR64_loRegClassID = 125,
  AArch64_DDDD_with_dsub3_in_FPR64_loRegClassID = 126,
  AArch64_DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loRegClassID = 127,
  AArch64_DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID = 128,
  AArch64_DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID = 129,
  AArch64_DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loRegClassID = 130,
  AArch64_DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID = 131,
  AArch64_DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loRegClassID = 132,
  AArch64_QQRegClassID = 133,
  AArch64_ZPR2RegClassID = 134,
  AArch64_QQ_with_dsub_in_FPR64_loRegClassID = 135,
  AArch64_QQ_with_qsub1_in_FPR128_loRegClassID = 136,
  AArch64_ZPR2_with_dsub_in_FPR64_loRegClassID = 137,
  AArch64_ZPR2_with_zsub1_in_ZPR_4bRegClassID = 138,
  AArch64_QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loRegClassID = 139,
  AArch64_ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bRegClassID = 140,
  AArch64_ZPR2_with_zsub0_in_ZPR_3bRegClassID = 141,
  AArch64_ZPR2_with_zsub1_in_ZPR_3bRegClassID = 142,
  AArch64_ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bRegClassID = 143,
  AArch64_MPR64RegClassID = 144,
  AArch64_QQQRegClassID = 145,
  AArch64_ZPR3RegClassID = 146,
  AArch64_QQQ_with_dsub_in_FPR64_loRegClassID = 147,
  AArch64_QQQ_with_qsub1_in_FPR128_loRegClassID = 148,
  AArch64_QQQ_with_qsub2_in_FPR128_loRegClassID = 149,
  AArch64_ZPR3_with_dsub_in_FPR64_loRegClassID = 150,
  AArch64_ZPR3_with_zsub1_in_ZPR_4bRegClassID = 151,
  AArch64_ZPR3_with_zsub2_in_ZPR_4bRegClassID = 152,
  AArch64_QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loRegClassID = 153,
  AArch64_QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID = 154,
  AArch64_ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bRegClassID = 155,
  AArch64_ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bRegClassID = 156,
  AArch64_QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loRegClassID = 157,
  AArch64_ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bRegClassID = 158,
  AArch64_ZPR3_with_zsub0_in_ZPR_3bRegClassID = 159,
  AArch64_ZPR3_with_zsub1_in_ZPR_3bRegClassID = 160,
  AArch64_ZPR3_with_zsub2_in_ZPR_3bRegClassID = 161,
  AArch64_ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bRegClassID = 162,
  AArch64_ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bRegClassID = 163,
  AArch64_ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bRegClassID = 164,
  AArch64_QQQQRegClassID = 165,
  AArch64_ZPR4RegClassID = 166,
  AArch64_QQQQ_with_dsub_in_FPR64_loRegClassID = 167,
  AArch64_QQQQ_with_qsub1_in_FPR128_loRegClassID = 168,
  AArch64_QQQQ_with_qsub2_in_FPR128_loRegClassID = 169,
  AArch64_QQQQ_with_qsub3_in_FPR128_loRegClassID = 170,
  AArch64_ZPR4_with_dsub_in_FPR64_loRegClassID = 171,
  AArch64_ZPR4_with_zsub1_in_ZPR_4bRegClassID = 172,
  AArch64_ZPR4_with_zsub2_in_ZPR_4bRegClassID = 173,
  AArch64_ZPR4_with_zsub3_in_ZPR_4bRegClassID = 174,
  AArch64_QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loRegClassID = 175,
  AArch64_QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID = 176,
  AArch64_QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID = 177,
  AArch64_ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bRegClassID = 178,
  AArch64_ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bRegClassID = 179,
  AArch64_ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID = 180,
  AArch64_QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loRegClassID = 181,
  AArch64_QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID = 182,
  AArch64_ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bRegClassID = 183,
  AArch64_ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID = 184,
  AArch64_QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loRegClassID = 185,
  AArch64_ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bRegClassID = 186,
  AArch64_ZPR4_with_zsub0_in_ZPR_3bRegClassID = 187,
  AArch64_ZPR4_with_zsub1_in_ZPR_3bRegClassID = 188,
  AArch64_ZPR4_with_zsub2_in_ZPR_3bRegClassID = 189,
  AArch64_ZPR4_with_zsub3_in_ZPR_3bRegClassID = 190,
  AArch64_ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bRegClassID = 191,
  AArch64_ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bRegClassID = 192,
  AArch64_ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID = 193,
  AArch64_ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bRegClassID = 194,
  AArch64_ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID = 195,
  AArch64_ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bRegClassID = 196,
  AArch64_GPR64x8ClassRegClassID = 197,
  AArch64_GPR64x8Class_with_x8sub_0_in_GPR64noipRegClassID = 198,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noipRegClassID = 199,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 200,
  AArch64_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 201,
  AArch64_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noipRegClassID = 202,
  AArch64_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 203,
  AArch64_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 204,
  AArch64_GPR64x8Class_with_x8sub_0_in_tcGPR64RegClassID = 205,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 206,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 207,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 208,
  AArch64_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_tcGPR64RegClassID = 209,
  AArch64_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_2_in_GPR64noipRegClassID = 210,
  AArch64_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 211,
  AArch64_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 212,
  AArch64_GPR64x8Class_with_x8sub_1_in_tcGPR64RegClassID = 213,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 214,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 215,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 216,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 217,
  AArch64_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noipRegClassID = 218,
  AArch64_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 219,
  AArch64_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 220,
  AArch64_GPR64x8Class_with_x8sub_1_in_GPR64noip_and_tcGPR64RegClassID = 221,
  AArch64_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 222,
  AArch64_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 223,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 224,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 225,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_tcGPR64RegClassID = 226,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 227,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 228,
  AArch64_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 229,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 230,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 231,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipRegClassID = 232,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 233,
  AArch64_GPR64x8Class_with_x8sub_3_in_GPR64noip_and_tcGPR64RegClassID = 234,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 235,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 236,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 237,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_tcGPR64RegClassID = 238,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 239,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 240,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 241,
  AArch64_GPR64x8Class_with_x8sub_5_in_GPR64noip_and_tcGPR64RegClassID = 242,
  AArch64_GPR64x8Class_with_x8sub_6_in_GPR64noip_and_tcGPR64RegClassID = 243,
  AArch64_GPR64x8Class_with_x8sub_7_in_GPR64noip_and_tcGPR64RegClassID = 244,
  AArch64_GPR64x8Class_with_sub_32_in_GPR32argRegClassID = 245,
  AArch64_MPR32RegClassID = 246,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64argRegClassID = 247,
  AArch64_GPR64x8Class_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID = 248,
  AArch64_GPR64x8Class_with_x8sub_2_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID = 249,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID = 250,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64argRegClassID = 251,
  AArch64_GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID = 252,
  AArch64_GPR64x8Class_with_sub_32_in_GPR32arg_and_GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15RegClassID = 253,
  AArch64_GPR64x8Class_with_x8sub_0_in_rtcGPR64RegClassID = 254,
  AArch64_GPR64x8Class_with_x8sub_2_in_rtcGPR64RegClassID = 255,
  AArch64_GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15_and_GPR64x8Class_with_x8sub_6_in_GPR64noipRegClassID = 256,
  AArch64_GPR64x8Class_with_x8sub_4_in_rtcGPR64RegClassID = 257,
  AArch64_GPR64x8Class_with_x8sub_6_in_GPR64argRegClassID = 258,
  AArch64_GPR64x8Class_with_x8sub_6_in_rtcGPR64RegClassID = 259,
  AArch64_MPR16RegClassID = 260,
  AArch64_MPRRegClassID = 261,
  AArch64_MPR8RegClassID = 262,
};

// Register alternate name indices
enum {
  AArch64_NoRegAltName,	// 0
  AArch64_vlist1,	// 1
  AArch64_vreg,	// 2
  AArch64_NUM_TARGET_REG_ALT_NAMES = 3
};

// Subregister indices
enum {
  AArch64_NoSubRegister,
  AArch64_bsub,	// 1
  AArch64_caph,	// 2
  AArch64_capl,	// 3
  AArch64_dsub,	// 4
  AArch64_dsub0,	// 5
  AArch64_dsub1,	// 6
  AArch64_dsub2,	// 7
  AArch64_dsub3,	// 8
  AArch64_hsub,	// 9
  AArch64_qsub0,	// 10
  AArch64_qsub1,	// 11
  AArch64_qsub2,	// 12
  AArch64_qsub3,	// 13
  AArch64_ssub,	// 14
  AArch64_sub_32,	// 15
  AArch64_sub_64,	// 16
  AArch64_sube32,	// 17
  AArch64_sube64,	// 18
  AArch64_subo32,	// 19
  AArch64_subo64,	// 20
  AArch64_x8sub_0,	// 21
  AArch64_x8sub_1,	// 22
  AArch64_x8sub_2,	// 23
  AArch64_x8sub_3,	// 24
  AArch64_x8sub_4,	// 25
  AArch64_x8sub_5,	// 26
  AArch64_x8sub_6,	// 27
  AArch64_x8sub_7,	// 28
  AArch64_zasubb,	// 29
  AArch64_zasubd0,	// 30
  AArch64_zasubd1,	// 31
  AArch64_zasubh0,	// 32
  AArch64_zasubh1,	// 33
  AArch64_zasubq0,	// 34
  AArch64_zasubq1,	// 35
  AArch64_zasubs0,	// 36
  AArch64_zasubs1,	// 37
  AArch64_zsub,	// 38
  AArch64_zsub0,	// 39
  AArch64_zsub1,	// 40
  AArch64_zsub2,	// 41
  AArch64_zsub3,	// 42
  AArch64_zsub_hi,	// 43
  AArch64_zasubd1_then_zasubq0,	// 44
  AArch64_zasubd1_then_zasubq1,	// 45
  AArch64_zasubs1_then_zasubd0,	// 46
  AArch64_zasubs1_then_zasubd1,	// 47
  AArch64_zasubs1_then_zasubq0,	// 48
  AArch64_zasubs1_then_zasubq1,	// 49
  AArch64_zasubs1_then_zasubd1_then_zasubq0,	// 50
  AArch64_zasubs1_then_zasubd1_then_zasubq1,	// 51
  AArch64_zasubh1_then_zasubd0,	// 52
  AArch64_zasubh1_then_zasubd1,	// 53
  AArch64_zasubh1_then_zasubq0,	// 54
  AArch64_zasubh1_then_zasubq1,	// 55
  AArch64_zasubh1_then_zasubs0,	// 56
  AArch64_zasubh1_then_zasubs1,	// 57
  AArch64_zasubh1_then_zasubd1_then_zasubq0,	// 58
  AArch64_zasubh1_then_zasubd1_then_zasubq1,	// 59
  AArch64_zasubh1_then_zasubs1_then_zasubd0,	// 60
  AArch64_zasubh1_then_zasubs1_then_zasubd1,	// 61
  AArch64_zasubh1_then_zasubs1_then_zasubq0,	// 62
  AArch64_zasubh1_then_zasubs1_then_zasubq1,	// 63
  AArch64_zasubh1_then_zasubs1_then_zasubd1_then_zasubq0,	// 64
  AArch64_zasubh1_then_zasubs1_then_zasubd1_then_zasubq1,	// 65
  AArch64_dsub1_then_bsub,	// 66
  AArch64_dsub1_then_hsub,	// 67
  AArch64_dsub1_then_ssub,	// 68
  AArch64_dsub3_then_bsub,	// 69
  AArch64_dsub3_then_hsub,	// 70
  AArch64_dsub3_then_ssub,	// 71
  AArch64_dsub2_then_bsub,	// 72
  AArch64_dsub2_then_hsub,	// 73
  AArch64_dsub2_then_ssub,	// 74
  AArch64_qsub1_then_bsub,	// 75
  AArch64_qsub1_then_dsub,	// 76
  AArch64_qsub1_then_hsub,	// 77
  AArch64_qsub1_then_ssub,	// 78
  AArch64_qsub3_then_bsub,	// 79
  AArch64_qsub3_then_dsub,	// 80
  AArch64_qsub3_then_hsub,	// 81
  AArch64_qsub3_then_ssub,	// 82
  AArch64_qsub2_then_bsub,	// 83
  AArch64_qsub2_then_dsub,	// 84
  AArch64_qsub2_then_hsub,	// 85
  AArch64_qsub2_then_ssub,	// 86
  AArch64_x8sub_7_then_sub_32,	// 87
  AArch64_x8sub_6_then_sub_32,	// 88
  AArch64_x8sub_5_then_sub_32,	// 89
  AArch64_x8sub_4_then_sub_32,	// 90
  AArch64_x8sub_3_then_sub_32,	// 91
  AArch64_x8sub_2_then_sub_32,	// 92
  AArch64_x8sub_1_then_sub_32,	// 93
  AArch64_subo64_then_sub_32,	// 94
  AArch64_zsub1_then_bsub,	// 95
  AArch64_zsub1_then_dsub,	// 96
  AArch64_zsub1_then_hsub,	// 97
  AArch64_zsub1_then_ssub,	// 98
  AArch64_zsub1_then_zsub,	// 99
  AArch64_zsub1_then_zsub_hi,	// 100
  AArch64_zsub3_then_bsub,	// 101
  AArch64_zsub3_then_dsub,	// 102
  AArch64_zsub3_then_hsub,	// 103
  AArch64_zsub3_then_ssub,	// 104
  AArch64_zsub3_then_zsub,	// 105
  AArch64_zsub3_then_zsub_hi,	// 106
  AArch64_zsub2_then_bsub,	// 107
  AArch64_zsub2_then_dsub,	// 108
  AArch64_zsub2_then_hsub,	// 109
  AArch64_zsub2_then_ssub,	// 110
  AArch64_zsub2_then_zsub,	// 111
  AArch64_zsub2_then_zsub_hi,	// 112
  AArch64_dsub0_dsub1,	// 113
  AArch64_dsub0_dsub1_dsub2,	// 114
  AArch64_dsub1_dsub2,	// 115
  AArch64_dsub1_dsub2_dsub3,	// 116
  AArch64_dsub2_dsub3,	// 117
  AArch64_dsub_qsub1_then_dsub,	// 118
  AArch64_dsub_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub,	// 119
  AArch64_dsub_qsub1_then_dsub_qsub2_then_dsub,	// 120
  AArch64_qsub0_qsub1,	// 121
  AArch64_qsub0_qsub1_qsub2,	// 122
  AArch64_qsub1_qsub2,	// 123
  AArch64_qsub1_qsub2_qsub3,	// 124
  AArch64_qsub2_qsub3,	// 125
  AArch64_qsub1_then_dsub_qsub2_then_dsub,	// 126
  AArch64_qsub1_then_dsub_qsub2_then_dsub_qsub3_then_dsub,	// 127
  AArch64_qsub2_then_dsub_qsub3_then_dsub,	// 128
  AArch64_sub_32_x8sub_1_then_sub_32,	// 129
  AArch64_x8sub_0_x8sub_1,	// 130
  AArch64_x8sub_1_x8sub_2,	// 131
  AArch64_x8sub_2_x8sub_3,	// 132
  AArch64_x8sub_3_x8sub_4,	// 133
  AArch64_x8sub_4_x8sub_5,	// 134
  AArch64_x8sub_5_x8sub_6,	// 135
  AArch64_x8sub_6_x8sub_7,	// 136
  AArch64_x8sub_6_then_sub_32_x8sub_7_then_sub_32,	// 137
  AArch64_x8sub_5_then_sub_32_x8sub_6_then_sub_32,	// 138
  AArch64_x8sub_4_then_sub_32_x8sub_5_then_sub_32,	// 139
  AArch64_x8sub_3_then_sub_32_x8sub_4_then_sub_32,	// 140
  AArch64_x8sub_2_then_sub_32_x8sub_3_then_sub_32,	// 141
  AArch64_x8sub_1_then_sub_32_x8sub_2_then_sub_32,	// 142
  AArch64_sub_32_subo64_then_sub_32,	// 143
  AArch64_dsub_zsub1_then_dsub,	// 144
  AArch64_zsub_zsub1_then_zsub,	// 145
  AArch64_dsub_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub,	// 146
  AArch64_dsub_zsub1_then_dsub_zsub2_then_dsub,	// 147
  AArch64_zsub_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub,	// 148
  AArch64_zsub_zsub1_then_zsub_zsub2_then_zsub,	// 149
  AArch64_zsub0_zsub1,	// 150
  AArch64_zsub0_zsub1_zsub2,	// 151
  AArch64_zsub1_zsub2,	// 152
  AArch64_zsub1_zsub2_zsub3,	// 153
  AArch64_zsub2_zsub3,	// 154
  AArch64_zsub1_then_dsub_zsub2_then_dsub,	// 155
  AArch64_zsub1_then_dsub_zsub2_then_dsub_zsub3_then_dsub,	// 156
  AArch64_zsub1_then_zsub_zsub2_then_zsub,	// 157
  AArch64_zsub1_then_zsub_zsub2_then_zsub_zsub3_then_zsub,	// 158
  AArch64_zsub2_then_dsub_zsub3_then_dsub,	// 159
  AArch64_zsub2_then_zsub_zsub3_then_zsub,	// 160
  AArch64_NUM_TARGET_SUBREGS
};

#endif // GET_REGINFO_ENUM

#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC


static const MCPhysReg AArch64RegDiffLists[] = {
  /* 0 */ 0, 1, 0,
  /* 3 */ 7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
  /* 20 */ 62975, 1, 1, 1, 1, 1, 1, 1, 0,
  /* 29 */ 64455, 1, 1, 1, 1, 1, 1, 1, 0,
  /* 38 */ 0, 77, 1, 1, 1, 1, 1, 1, 0,
  /* 47 */ 64884, 1, 1, 1, 74, 1, 1, 1, 0,
  /* 56 */ 62819, 1, 1, 1, 0,
  /* 61 */ 62831, 1, 1, 1, 0,
  /* 66 */ 65056, 1, 1, 1, 0,
  /* 71 */ 65152, 1, 1, 1, 0,
  /* 76 */ 65332, 567, 1, 65476, 1, 1, 1, 0,
  /* 84 */ 31, 65332, 533, 34, 65503, 34, 65476, 1, 1, 1, 0,
  /* 95 */ 65332, 567, 1, 65477, 1, 1, 1, 0,
  /* 103 */ 31, 65332, 533, 34, 65503, 34, 65477, 1, 1, 1, 0,
  /* 114 */ 65332, 567, 1, 65478, 1, 1, 1, 0,
  /* 122 */ 31, 65332, 533, 34, 65503, 34, 65478, 1, 1, 1, 0,
  /* 133 */ 65332, 567, 1, 65479, 1, 1, 1, 0,
  /* 141 */ 31, 65332, 533, 34, 65503, 34, 65479, 1, 1, 1, 0,
  /* 152 */ 65332, 567, 1, 65480, 1, 1, 1, 0,
  /* 160 */ 31, 65332, 533, 34, 65503, 34, 65480, 1, 1, 1, 0,
  /* 171 */ 65332, 567, 1, 65481, 1, 1, 1, 0,
  /* 179 */ 31, 65332, 533, 34, 65503, 34, 65481, 1, 1, 1, 0,
  /* 190 */ 65332, 567, 1, 65482, 1, 1, 1, 0,
  /* 198 */ 31, 65332, 533, 34, 65503, 34, 65482, 1, 1, 1, 0,
  /* 209 */ 65332, 567, 1, 65483, 1, 1, 1, 0,
  /* 217 */ 31, 65332, 533, 34, 65503, 34, 65483, 1, 1, 1, 0,
  /* 228 */ 65332, 567, 1, 65465, 9, 1, 1, 0,
  /* 236 */ 31, 65332, 533, 34, 65503, 34, 65465, 9, 1, 1, 0,
  /* 247 */ 34, 65466, 9, 1, 1, 0,
  /* 253 */ 23, 29, 1, 1, 0,
  /* 258 */ 23, 29, 1, 1, 46, 29, 1, 1, 0,
  /* 267 */ 65293, 65531, 578, 30, 1, 1, 0,
  /* 274 */ 64852, 1, 1, 75, 1, 1, 0,
  /* 281 */ 65024, 1, 1, 0,
  /* 285 */ 65120, 1, 1, 0,
  /* 289 */ 31, 65332, 533, 34, 65476, 27, 34, 65476, 1, 1, 0,
  /* 300 */ 31, 65332, 534, 34, 65466, 35, 34, 65476, 1, 1, 0,
  /* 311 */ 65332, 567, 65476, 61, 65476, 1, 1, 0,
  /* 319 */ 65332, 568, 65466, 69, 65476, 1, 1, 0,
  /* 327 */ 31, 65332, 533, 34, 65477, 26, 34, 65477, 1, 1, 0,
  /* 338 */ 65332, 567, 65477, 60, 65477, 1, 1, 0,
  /* 346 */ 31, 65332, 533, 34, 65478, 25, 34, 65478, 1, 1, 0,
  /* 357 */ 65332, 567, 65478, 59, 65478, 1, 1, 0,
  /* 365 */ 31, 65332, 533, 34, 65479, 24, 34, 65479, 1, 1, 0,
  /* 376 */ 65332, 567, 65479, 58, 65479, 1, 1, 0,
  /* 384 */ 31, 65332, 533, 34, 65480, 23, 34, 65480, 1, 1, 0,
  /* 395 */ 65332, 567, 65480, 57, 65480, 1, 1, 0,
  /* 403 */ 31, 65332, 533, 34, 65481, 22, 34, 65481, 1, 1, 0,
  /* 414 */ 65332, 567, 65481, 56, 65481, 1, 1, 0,
  /* 422 */ 31, 65332, 533, 34, 65482, 21, 34, 65482, 1, 1, 0,
  /* 433 */ 65332, 567, 65482, 55, 65482, 1, 1, 0,
  /* 441 */ 31, 65332, 533, 34, 65483, 20, 34, 65483, 1, 1, 0,
  /* 452 */ 65332, 567, 65483, 54, 65483, 1, 1, 0,
  /* 460 */ 65332, 567, 1, 65484, 1, 1, 0,
  /* 467 */ 31, 65332, 533, 34, 65503, 34, 65484, 1, 1, 0,
  /* 477 */ 65332, 567, 1, 65485, 1, 1, 0,
  /* 484 */ 31, 65332, 533, 34, 65503, 34, 65485, 1, 1, 0,
  /* 494 */ 65332, 567, 1, 65463, 10, 1, 0,
  /* 501 */ 31, 65332, 533, 34, 65503, 34, 65463, 10, 1, 0,
  /* 511 */ 65332, 567, 1, 65464, 10, 1, 0,
  /* 518 */ 31, 65332, 533, 34, 65503, 34, 65464, 10, 1, 0,
  /* 528 */ 34, 65465, 10, 1, 0,
  /* 533 */ 23, 1, 29, 1, 0,
  /* 538 */ 23, 1, 29, 1, 46, 1, 29, 1, 0,
  /* 547 */ 23, 30, 1, 0,
  /* 551 */ 23, 30, 1, 46, 30, 1, 0,
  /* 558 */ 1, 65527, 575, 1, 32, 1, 0,
  /* 565 */ 65293, 65531, 608, 5, 65489, 43, 1, 0,
  /* 573 */ 64916, 1, 76, 1, 0,
  /* 578 */ 65173, 112, 65456, 65443, 62, 112, 65456, 65443, 62, 112, 65456, 65443, 358, 1, 0,
  /* 593 */ 65173, 112, 65456, 65443, 62, 112, 65456, 65443, 30, 112, 65456, 65443, 390, 1, 0,
  /* 608 */ 65527, 608, 1, 0,
  /* 612 */ 65531, 609, 1, 0,
  /* 616 */ 62997, 1, 0,
  /* 619 */ 63009, 1, 0,
  /* 622 */ 63027, 1, 0,
  /* 625 */ 63039, 1, 0,
  /* 628 */ 64976, 1, 0,
  /* 631 */ 65010, 1, 0,
  /* 634 */ 65088, 1, 0,
  /* 637 */ 65175, 1, 0,
  /* 640 */ 65184, 1, 0,
  /* 643 */ 65332, 567, 1, 65486, 1, 0,
  /* 649 */ 31, 65332, 533, 34, 65503, 34, 65486, 1, 0,
  /* 658 */ 65332, 567, 1, 65487, 1, 0,
  /* 664 */ 31, 65332, 533, 34, 65503, 34, 65487, 1, 0,
  /* 673 */ 93, 80, 65424, 80, 124, 94, 1, 62, 65503, 34, 65503, 34, 65503, 1, 63, 1, 62, 65503, 34, 65503, 34, 65503, 1, 139, 1, 62, 65503, 34, 65503, 34, 65503, 1, 0,
  /* 706 */ 124, 190, 1, 62, 65503, 34, 65503, 34, 65503, 1, 139, 1, 62, 65503, 34, 65503, 34, 65503, 1, 0,
  /* 726 */ 65473, 362, 1, 62, 65503, 34, 65503, 34, 65503, 1, 0,
  /* 737 */ 93, 80, 65424, 80, 124, 95, 31, 33, 65504, 62, 65503, 34, 65503, 1, 33, 31, 33, 65504, 62, 65503, 34, 65503, 1, 109, 31, 33, 65504, 62, 65503, 34, 65503, 1, 0,
  /* 770 */ 124, 191, 31, 33, 65504, 62, 65503, 34, 65503, 1, 109, 31, 33, 65504, 62, 65503, 34, 65503, 1, 0,
  /* 790 */ 65473, 363, 31, 33, 65504, 62, 65503, 34, 65503, 1, 0,
  /* 801 */ 63, 65503, 34, 65503, 1, 64, 63, 65503, 34, 65503, 1, 140, 63, 65503, 34, 65503, 1, 0,
  /* 819 */ 93, 80, 65424, 80, 124, 94, 1, 63, 1, 65503, 1, 62, 65503, 1, 33, 1, 63, 1, 65503, 1, 62, 65503, 1, 109, 1, 63, 1, 65503, 1, 62, 65503, 1, 0,
  /* 852 */ 124, 190, 1, 63, 1, 65503, 1, 62, 65503, 1, 109, 1, 63, 1, 65503, 1, 62, 65503, 1, 0,
  /* 872 */ 65473, 362, 1, 63, 1, 65503, 1, 62, 65503, 1, 0,
  /* 883 */ 64, 65504, 63, 65503, 1, 33, 64, 65504, 63, 65503, 1, 109, 64, 65504, 63, 65503, 1, 0,
  /* 901 */ 65503, 1, 128, 65503, 1, 204, 65503, 1, 0,
  /* 910 */ 1, 2, 0,
  /* 913 */ 6, 2, 0,
  /* 916 */ 64925, 2, 0,
  /* 919 */ 3, 0,
  /* 921 */ 298, 9, 18, 65510, 10, 8, 65522, 10, 8, 6, 65510, 10, 8, 65522, 10, 8, 65521, 18, 65510, 10, 8, 65522, 10, 8, 6, 65510, 10, 8, 65522, 10, 8, 0,
  /* 953 */ 65332, 567, 1, 65461, 11, 0,
  /* 959 */ 31, 65332, 533, 34, 65503, 34, 65461, 11, 0,
  /* 968 */ 65332, 567, 1, 65462, 11, 0,
  /* 974 */ 31, 65332, 533, 34, 65503, 34, 65462, 11, 0,
  /* 983 */ 34, 65463, 11, 0,
  /* 987 */ 23, 1, 1, 29, 0,
  /* 992 */ 23, 1, 1, 29, 46, 1, 1, 29, 0,
  /* 1001 */ 93, 80, 65424, 80, 124, 94, 1, 62, 1, 65503, 34, 65503, 1, 29, 34, 1, 62, 1, 65503, 34, 65503, 1, 29, 110, 1, 62, 1, 65503, 34, 65503, 1, 29, 0,
  /* 1034 */ 124, 190, 1, 62, 1, 65503, 34, 65503, 1, 29, 110, 1, 62, 1, 65503, 34, 65503, 1, 29, 0,
  /* 1054 */ 65473, 362, 1, 62, 1, 65503, 34, 65503, 1, 29, 0,
  /* 1065 */ 23, 1, 30, 0,
  /* 1069 */ 23, 1, 30, 46, 1, 30, 0,
  /* 1076 */ 63, 1, 65503, 1, 30, 34, 63, 1, 65503, 1, 30, 110, 63, 1, 65503, 1, 30, 0,
  /* 1094 */ 23, 31, 0,
  /* 1097 */ 23, 31, 46, 31, 0,
  /* 1102 */ 65504, 31, 97, 65504, 31, 173, 65504, 31, 0,
  /* 1111 */ 32, 0,
  /* 1113 */ 31, 65332, 534, 34, 65489, 11, 34, 0,
  /* 1121 */ 65531, 613, 65489, 44, 0,
  /* 1126 */ 65332, 568, 65489, 45, 0,
  /* 1131 */ 3, 52, 0,
  /* 1134 */ 64313, 52, 0,
  /* 1137 */ 65279, 77, 0,
  /* 1140 */ 0, 83, 0,
  /* 1143 */ 65173, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 31, 96, 0,
  /* 1160 */ 65173, 65412, 65456, 112, 65456, 65443, 328, 65442, 65412, 65456, 112, 65456, 65443, 328, 63, 96, 0,
  /* 1177 */ 65109, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 30, 96, 65504, 96, 108, 1, 65268, 96, 0,
  /* 1207 */ 65109, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 65442, 65412, 65456, 112, 65456, 65443, 328, 62, 96, 65504, 96, 108, 1, 65268, 96, 0,
  /* 1237 */ 65109, 65412, 65456, 112, 65456, 65443, 328, 65442, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 62, 96, 65504, 96, 108, 65505, 65268, 96, 0,
  /* 1267 */ 65141, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 65442, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 61, 96, 65472, 32, 64, 32, 108, 64, 65473, 64, 65441, 65299, 64, 32, 64, 65345, 96, 0,
  /* 1313 */ 65141, 65412, 65456, 112, 65456, 65443, 328, 65442, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 61, 96, 65472, 32, 64, 32, 108, 64, 65441, 64, 65473, 65267, 64, 32, 64, 65377, 96, 0,
  /* 1359 */ 65141, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 29, 96, 65472, 32, 64, 32, 108, 64, 65473, 64, 65473, 65267, 64, 32, 64, 65377, 96, 0,
  /* 1405 */ 65141, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 65474, 65412, 65456, 112, 65456, 65443, 328, 65442, 65412, 65456, 112, 65456, 65443, 328, 61, 96, 65472, 32, 64, 32, 108, 64, 65473, 64, 65473, 65267, 64, 32, 64, 65377, 96, 0,
  /* 1451 */ 96, 172, 0,
  /* 1454 */ 64969, 208, 0,
  /* 1457 */ 5, 243, 0,
  /* 1460 */ 65412, 65456, 112, 65456, 65443, 328, 0,
  /* 1467 */ 65221, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 359, 0,
  /* 1479 */ 64936, 65535, 239, 65505, 359, 0,
  /* 1485 */ 64931, 243, 65294, 243, 360, 0,
  /* 1491 */ 65201, 65505, 65294, 243, 360, 0,
  /* 1497 */ 65172, 65505, 32, 65505, 360, 0,
  /* 1503 */ 65221, 65456, 112, 65456, 65443, 110, 65456, 112, 65456, 65443, 391, 0,
  /* 1515 */ 64931, 243, 65299, 65535, 568, 0,
  /* 1521 */ 62854, 0,
  /* 1523 */ 62866, 0,
  /* 1525 */ 62884, 0,
  /* 1527 */ 62896, 0,
  /* 1529 */ 62917, 0,
  /* 1531 */ 62929, 0,
  /* 1533 */ 62947, 0,
  /* 1535 */ 62959, 0,
  /* 1537 */ 65518, 22, 65516, 65526, 65238, 0,
  /* 1543 */ 65526, 22, 65516, 65526, 65238, 0,
  /* 1549 */ 65518, 26, 65516, 65526, 65238, 0,
  /* 1555 */ 65526, 26, 65516, 65526, 65238, 0,
  /* 1561 */ 65518, 22, 65518, 65526, 65238, 0,
  /* 1567 */ 65526, 22, 65518, 65526, 65238, 0,
  /* 1573 */ 65518, 26, 65518, 65526, 65238, 0,
  /* 1579 */ 65526, 26, 65518, 65526, 65238, 0,
  /* 1585 */ 65518, 22, 65516, 65527, 65238, 0,
  /* 1591 */ 65526, 22, 65516, 65527, 65238, 0,
  /* 1597 */ 65518, 26, 65516, 65527, 65238, 0,
  /* 1603 */ 65526, 26, 65516, 65527, 65238, 0,
  /* 1609 */ 65518, 22, 65518, 65527, 65238, 0,
  /* 1615 */ 65526, 22, 65518, 65527, 65238, 0,
  /* 1621 */ 65518, 26, 65518, 65527, 65238, 0,
  /* 1627 */ 65526, 26, 65518, 65527, 65238, 0,
  /* 1633 */ 65287, 0,
  /* 1635 */ 65293, 0,
  /* 1637 */ 65206, 65298, 0,
  /* 1640 */ 65340, 0,
  /* 1642 */ 65371, 0,
  /* 1644 */ 65403, 0,
  /* 1646 */ 65157, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 358, 64, 32, 1, 65440, 0,
  /* 1667 */ 65157, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 110, 65456, 112, 65456, 65443, 390, 64, 32, 1, 65440, 0,
  /* 1688 */ 65157, 65456, 112, 65456, 65443, 110, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 390, 64, 32, 65505, 65440, 0,
  /* 1709 */ 65189, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 110, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 389, 32, 32, 32, 64, 65473, 64, 65441, 65471, 64, 65441, 0,
  /* 1741 */ 65205, 112, 65456, 65443, 62, 112, 65456, 65443, 30, 112, 65456, 65443, 62, 112, 65456, 65443, 389, 64, 65473, 64, 65441, 0,
  /* 1763 */ 65237, 112, 65456, 65443, 30, 112, 65456, 65443, 0,
  /* 1772 */ 65237, 112, 65456, 65443, 62, 112, 65456, 65443, 0,
  /* 1781 */ 65456, 112, 65456, 65443, 0,
  /* 1786 */ 65451, 0,
  /* 1788 */ 34, 65461, 0,
  /* 1791 */ 65189, 65456, 112, 65456, 65443, 110, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 389, 32, 32, 32, 64, 65441, 64, 65473, 65439, 64, 65473, 0,
  /* 1823 */ 65189, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 357, 32, 32, 32, 64, 65473, 64, 65473, 65439, 64, 65473, 0,
  /* 1855 */ 65189, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 142, 65456, 112, 65456, 65443, 110, 65456, 112, 65456, 65443, 389, 32, 32, 32, 64, 65473, 64, 65473, 65439, 64, 65473, 0,
  /* 1887 */ 65205, 112, 65456, 65443, 30, 112, 65456, 65443, 62, 112, 65456, 65443, 62, 112, 65456, 65443, 389, 64, 65441, 64, 65473, 0,
  /* 1909 */ 65205, 112, 65456, 65443, 62, 112, 65456, 65443, 62, 112, 65456, 65443, 62, 112, 65456, 65443, 357, 64, 65473, 64, 65473, 0,
  /* 1931 */ 65205, 112, 65456, 65443, 62, 112, 65456, 65443, 62, 112, 65456, 65443, 30, 112, 65456, 65443, 389, 64, 65473, 64, 65473, 0,
  /* 1953 */ 65480, 0,
  /* 1955 */ 65483, 0,
  /* 1957 */ 65332, 567, 1, 65488, 0,
  /* 1962 */ 31, 65332, 533, 34, 65503, 34, 65488, 0,
  /* 1970 */ 31, 65332, 533, 34, 65503, 5, 65489, 0,
  /* 1978 */ 34, 65489, 0,
  /* 1981 */ 65332, 567, 65508, 65489, 0,
  /* 1986 */ 65502, 0,
  /* 1988 */ 204, 65505, 0,
  /* 1991 */ 65173, 112, 65456, 65443, 30, 112, 65456, 65443, 62, 112, 65456, 65443, 390, 65505, 0,
  /* 2006 */ 65509, 0,
  /* 2008 */ 65527, 0,
  /* 2010 */ 65534, 65530, 0,
  /* 2013 */ 9, 65535, 0,
  /* 2016 */ 65219, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2047 */ 65220, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2078 */ 65221, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2109 */ 65222, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2140 */ 65223, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2171 */ 65224, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2202 */ 65225, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2233 */ 65226, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2264 */ 65227, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2295 */ 65228, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2326 */ 65229, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 354, 34, 1, 1, 1, 1, 1, 1, 65502, 65535, 65535, 65535, 65535, 65535, 0,
  /* 2357 */ 65242, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 32, 65505, 65294, 243, 354, 34, 1, 1, 1, 1, 1, 65508, 65531, 65535, 65535, 65535, 65535, 65535, 0,
};

static const uint16_t AArch64SubRegIdxLists[] = {
  /* 0 */ 4, 14, 9, 1, 0,
  /* 5 */ 16, 15, 0,
  /* 8 */ 17, 19, 0,
  /* 11 */ 34, 35, 0,
  /* 14 */ 38, 4, 14, 9, 1, 43, 0,
  /* 21 */ 30, 34, 35, 31, 44, 45, 0,
  /* 28 */ 36, 30, 34, 35, 31, 44, 45, 37, 46, 48, 49, 47, 50, 51, 0,
  /* 43 */ 29, 32, 36, 30, 34, 35, 31, 44, 45, 37, 46, 48, 49, 47, 50, 51, 33, 56, 52, 54, 55, 53, 58, 59, 57, 60, 62, 63, 61, 64, 65, 0,
  /* 75 */ 5, 14, 9, 1, 6, 68, 67, 66, 0,
  /* 84 */ 5, 14, 9, 1, 6, 68, 67, 66, 7, 74, 73, 72, 113, 115, 0,
  /* 99 */ 5, 14, 9, 1, 6, 68, 67, 66, 7, 74, 73, 72, 8, 71, 70, 69, 113, 114, 115, 116, 117, 0,
  /* 121 */ 10, 4, 14, 9, 1, 11, 76, 78, 77, 75, 118, 0,
  /* 133 */ 10, 4, 14, 9, 1, 11, 76, 78, 77, 75, 12, 84, 86, 85, 83, 118, 120, 121, 123, 126, 0,
  /* 154 */ 10, 4, 14, 9, 1, 11, 76, 78, 77, 75, 12, 84, 86, 85, 83, 13, 80, 82, 81, 79, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 0,
  /* 186 */ 21, 15, 22, 93, 23, 92, 24, 91, 25, 90, 26, 89, 27, 88, 28, 87, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 0,
  /* 217 */ 18, 15, 20, 94, 143, 0,
  /* 223 */ 39, 38, 4, 14, 9, 1, 43, 40, 99, 96, 98, 97, 95, 100, 144, 145, 0,
  /* 240 */ 39, 38, 4, 14, 9, 1, 43, 40, 99, 96, 98, 97, 95, 100, 41, 111, 108, 110, 109, 107, 112, 144, 145, 147, 149, 150, 152, 155, 157, 0,
  /* 270 */ 39, 38, 4, 14, 9, 1, 43, 40, 99, 96, 98, 97, 95, 100, 41, 111, 108, 110, 109, 107, 112, 42, 105, 102, 104, 103, 101, 106, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 0,
};

static const MCRegisterDesc AArch64RegDesc[] = {
  { 3, 0, 0, 0, 0, 0 },
  { 2970, 1457, 2, 5, 32225, 27 },
  { 3017, 1457, 2, 5, 32225, 27 },
  { 3005, 913, 2, 5, 32225, 27 },
  { 3027, 2013, 2, 5, 32225, 27 },
  { 3013, 2, 2, 4, 32225, 0 },
  { 2971, 1458, 1121, 6, 32177, 27 },
  { 3018, 1458, 612, 6, 32177, 27 },
  { 3046, 2, 2, 4, 32100, 0 },
  { 3006, 911, 2011, 6, 31780, 27 },
  { 2753, 2, 2, 4, 31780, 0 },
  { 3009, 2, 2010, 4, 32129, 0 },
  { 3035, 2, 558, 4, 14704, 0 },
  { 3042, 2014, 608, 6, 14704, 27 },
  { 2750, 921, 2, 43, 48, 76 },
  { 229, 2, 737, 4, 15217, 0 },
  { 583, 2, 819, 4, 15217, 0 },
  { 833, 2, 1001, 4, 15217, 0 },
  { 1125, 2, 673, 4, 15217, 0 },
  { 1370, 2, 673, 4, 15217, 0 },
  { 1659, 2, 673, 4, 15217, 0 },
  { 1892, 2, 673, 4, 15217, 0 },
  { 2173, 2, 673, 4, 15217, 0 },
  { 2424, 2, 673, 4, 15217, 0 },
  { 2664, 2, 673, 4, 15217, 0 },
  { 0, 2, 673, 4, 15217, 0 },
  { 317, 2, 673, 4, 15217, 0 },
  { 666, 2, 673, 4, 15217, 0 },
  { 911, 2, 673, 4, 15217, 0 },
  { 1200, 2, 673, 4, 15217, 0 },
  { 1443, 2, 673, 4, 15217, 0 },
  { 1732, 2, 673, 4, 15217, 0 },
  { 1965, 2, 673, 4, 15217, 0 },
  { 2264, 2, 673, 4, 15217, 0 },
  { 2492, 2, 673, 4, 15217, 0 },
  { 79, 2, 673, 4, 15217, 0 },
  { 419, 2, 673, 4, 15217, 0 },
  { 753, 2, 673, 4, 15217, 0 },
  { 1021, 2, 673, 4, 15217, 0 },
  { 1290, 2, 673, 4, 15217, 0 },
  { 1555, 2, 673, 4, 15217, 0 },
  { 1812, 2, 673, 4, 15217, 0 },
  { 2069, 2, 673, 4, 15217, 0 },
  { 2344, 2, 673, 4, 15217, 0 },
  { 2596, 2, 673, 4, 15217, 0 },
  { 159, 2, 673, 4, 15217, 0 },
  { 523, 2, 673, 4, 15217, 0 },
  { 232, 1988, 2, 5, 15217, 27 },
  { 586, 1988, 2, 5, 15217, 27 },
  { 836, 1988, 2, 5, 15217, 27 },
  { 1128, 1988, 2, 5, 15217, 27 },
  { 1373, 1988, 2, 5, 15217, 27 },
  { 1662, 1988, 2, 5, 15217, 27 },
  { 1895, 1988, 2, 5, 15217, 27 },
  { 2176, 1988, 2, 5, 15217, 27 },
  { 2427, 1988, 2, 5, 15217, 27 },
  { 2667, 1988, 2, 5, 15217, 27 },
  { 4, 1988, 2, 5, 15217, 27 },
  { 321, 1988, 2, 5, 15217, 27 },
  { 670, 1988, 2, 5, 15217, 27 },
  { 915, 1988, 2, 5, 15217, 27 },
  { 1204, 1988, 2, 5, 15217, 27 },
  { 1447, 1988, 2, 5, 15217, 27 },
  { 1736, 1988, 2, 5, 15217, 27 },
  { 1969, 1988, 2, 5, 15217, 27 },
  { 2268, 1988, 2, 5, 15217, 27 },
  { 2496, 1988, 2, 5, 15217, 27 },
  { 83, 1988, 2, 5, 15217, 27 },
  { 423, 1988, 2, 5, 15217, 27 },
  { 757, 1988, 2, 5, 15217, 27 },
  { 1025, 1988, 2, 5, 15217, 27 },
  { 1294, 1988, 2, 5, 15217, 27 },
  { 1559, 1988, 2, 5, 15217, 27 },
  { 1816, 1988, 2, 5, 15217, 27 },
  { 2073, 1988, 2, 5, 15217, 27 },
  { 2348, 1988, 2, 5, 15217, 27 },
  { 237, 1768, 740, 1, 31281, 3 },
  { 591, 1768, 822, 1, 31281, 3 },
  { 841, 1768, 1004, 1, 31281, 3 },
  { 1133, 1768, 676, 1, 31281, 3 },
  { 1378, 1768, 676, 1, 31281, 3 },
  { 1667, 1768, 676, 1, 31281, 3 },
  { 1900, 1768, 676, 1, 31281, 3 },
  { 2181, 1768, 676, 1, 31281, 3 },
  { 2439, 1768, 676, 1, 31281, 3 },
  { 2679, 1768, 676, 1, 31281, 3 },
  { 17, 1768, 676, 1, 31281, 3 },
  { 335, 1768, 676, 1, 31281, 3 },
  { 685, 1768, 676, 1, 31281, 3 },
  { 931, 1768, 676, 1, 31281, 3 },
  { 1220, 1768, 676, 1, 31281, 3 },
  { 1463, 1768, 676, 1, 31281, 3 },
  { 1752, 1768, 676, 1, 31281, 3 },
  { 1985, 1768, 676, 1, 31281, 3 },
  { 2284, 1768, 676, 1, 31281, 3 },
  { 2512, 1768, 676, 1, 31281, 3 },
  { 99, 1768, 676, 1, 31281, 3 },
  { 439, 1768, 676, 1, 31281, 3 },
  { 773, 1768, 676, 1, 31281, 3 },
  { 1041, 1768, 676, 1, 31281, 3 },
  { 1310, 1768, 676, 1, 31281, 3 },
  { 1575, 1768, 676, 1, 31281, 3 },
  { 1832, 1768, 676, 1, 31281, 3 },
  { 2089, 1768, 676, 1, 31281, 3 },
  { 2364, 1768, 676, 1, 31281, 3 },
  { 2612, 1768, 676, 1, 31281, 3 },
  { 175, 1768, 676, 1, 31281, 3 },
  { 539, 1768, 676, 1, 31281, 3 },
  { 257, 1770, 738, 3, 28577, 3 },
  { 610, 1770, 820, 3, 28577, 3 },
  { 857, 1770, 1002, 3, 28577, 3 },
  { 1148, 1770, 674, 3, 28577, 3 },
  { 1393, 1770, 674, 3, 28577, 3 },
  { 1682, 1770, 674, 3, 28577, 3 },
  { 1915, 1770, 674, 3, 28577, 3 },
  { 2196, 1770, 674, 3, 28577, 3 },
  { 2442, 1770, 674, 3, 28577, 3 },
  { 2682, 1770, 674, 3, 28577, 3 },
  { 21, 1770, 674, 3, 28577, 3 },
  { 339, 1770, 674, 3, 28577, 3 },
  { 689, 1770, 674, 3, 28577, 3 },
  { 935, 1770, 674, 3, 28577, 3 },
  { 1224, 1770, 674, 3, 28577, 3 },
  { 1467, 1770, 674, 3, 28577, 3 },
  { 1756, 1770, 674, 3, 28577, 3 },
  { 1989, 1770, 674, 3, 28577, 3 },
  { 2288, 1770, 674, 3, 28577, 3 },
  { 2516, 1770, 674, 3, 28577, 3 },
  { 103, 1770, 674, 3, 28577, 3 },
  { 443, 1770, 674, 3, 28577, 3 },
  { 777, 1770, 674, 3, 28577, 3 },
  { 1045, 1770, 674, 3, 28577, 3 },
  { 1314, 1770, 674, 3, 28577, 3 },
  { 1579, 1770, 674, 3, 28577, 3 },
  { 1836, 1770, 674, 3, 28577, 3 },
  { 2093, 1770, 674, 3, 28577, 3 },
  { 2368, 1770, 674, 3, 28577, 3 },
  { 2616, 1770, 674, 3, 28577, 3 },
  { 179, 1770, 674, 3, 28577, 3 },
  { 543, 1770, 674, 3, 28577, 3 },
  { 260, 2, 2, 4, 31249, 0 },
  { 613, 2, 2, 4, 31249, 0 },
  { 860, 2, 2, 4, 31249, 0 },
  { 1151, 2, 2, 4, 31249, 0 },
  { 1396, 2, 2, 4, 31249, 0 },
  { 1685, 2, 2, 4, 31249, 0 },
  { 1918, 2, 2, 4, 31249, 0 },
  { 2199, 2, 2, 4, 31249, 0 },
  { 2445, 2, 2, 4, 31249, 0 },
  { 2685, 2, 2, 4, 31249, 0 },
  { 25, 2, 2, 4, 31249, 0 },
  { 343, 2, 2, 4, 31249, 0 },
  { 693, 2, 2, 4, 31249, 0 },
  { 939, 2, 2, 4, 31249, 0 },
  { 1228, 2, 2, 4, 31249, 0 },
  { 1471, 2, 2, 4, 31249, 0 },
  { 265, 1781, 770, 0, 26305, 3 },
  { 618, 1781, 852, 0, 26305, 3 },
  { 865, 1781, 1034, 0, 26305, 3 },
  { 1156, 1781, 706, 0, 26305, 3 },
  { 1401, 1781, 706, 0, 26305, 3 },
  { 1690, 1781, 706, 0, 26305, 3 },
  { 1923, 1781, 706, 0, 26305, 3 },
  { 2204, 1781, 706, 0, 26305, 3 },
  { 2450, 1781, 706, 0, 26305, 3 },
  { 2690, 1781, 706, 0, 26305, 3 },
  { 31, 1781, 706, 0, 26305, 3 },
  { 349, 1781, 706, 0, 26305, 3 },
  { 699, 1781, 706, 0, 26305, 3 },
  { 945, 1781, 706, 0, 26305, 3 },
  { 1234, 1781, 706, 0, 26305, 3 },
  { 1477, 1781, 706, 0, 26305, 3 },
  { 1772, 1781, 706, 0, 26305, 3 },
  { 2005, 1781, 706, 0, 26305, 3 },
  { 2304, 1781, 706, 0, 26305, 3 },
  { 2532, 1781, 706, 0, 26305, 3 },
  { 119, 1781, 706, 0, 26305, 3 },
  { 459, 1781, 706, 0, 26305, 3 },
  { 793, 1781, 706, 0, 26305, 3 },
  { 1061, 1781, 706, 0, 26305, 3 },
  { 1330, 1781, 706, 0, 26305, 3 },
  { 1595, 1781, 706, 0, 26305, 3 },
  { 1852, 1781, 706, 0, 26305, 3 },
  { 2109, 1781, 706, 0, 26305, 3 },
  { 2384, 1781, 706, 0, 26305, 3 },
  { 2632, 1781, 706, 0, 26305, 3 },
  { 195, 1781, 706, 0, 26305, 3 },
  { 559, 1781, 706, 0, 26305, 3 },
  { 285, 1769, 739, 2, 26273, 3 },
  { 637, 1769, 821, 2, 26273, 3 },
  { 883, 1769, 1003, 2, 26273, 3 },
  { 1173, 1769, 675, 2, 26273, 3 },
  { 1416, 1769, 675, 2, 26273, 3 },
  { 1705, 1769, 675, 2, 26273, 3 },
  { 1938, 1769, 675, 2, 26273, 3 },
  { 2219, 1769, 675, 2, 26273, 3 },
  { 2465, 1769, 675, 2, 26273, 3 },
  { 2705, 1769, 675, 2, 26273, 3 },
  { 48, 1769, 675, 2, 26273, 3 },
  { 367, 1769, 675, 2, 26273, 3 },
  { 718, 1769, 675, 2, 26273, 3 },
  { 965, 1769, 675, 2, 26273, 3 },
  { 1254, 1769, 675, 2, 26273, 3 },
  { 1497, 1769, 675, 2, 26273, 3 },
  { 1776, 1769, 675, 2, 26273, 3 },
  { 2009, 1769, 675, 2, 26273, 3 },
  { 2308, 1769, 675, 2, 26273, 3 },
  { 2536, 1769, 675, 2, 26273, 3 },
  { 123, 1769, 675, 2, 26273, 3 },
  { 463, 1769, 675, 2, 26273, 3 },
  { 797, 1769, 675, 2, 26273, 3 },
  { 1065, 1769, 675, 2, 26273, 3 },
  { 1334, 1769, 675, 2, 26273, 3 },
  { 1599, 1769, 675, 2, 26273, 3 },
  { 1856, 1769, 675, 2, 26273, 3 },
  { 2113, 1769, 675, 2, 26273, 3 },
  { 2388, 1769, 675, 2, 26273, 3 },
  { 2636, 1769, 675, 2, 26273, 3 },
  { 199, 1769, 675, 2, 26273, 3 },
  { 563, 1769, 675, 2, 26273, 3 },
  { 292, 2, 1113, 4, 26273, 0 },
  { 643, 2, 1962, 4, 26273, 0 },
  { 889, 2, 664, 4, 26273, 0 },
  { 1179, 2, 649, 4, 26273, 0 },
  { 1422, 2, 484, 4, 26273, 0 },
  { 1711, 2, 467, 4, 26273, 0 },
  { 1944, 2, 217, 4, 26273, 0 },
  { 2225, 2, 441, 4, 26273, 0 },
  { 2471, 2, 198, 4, 26273, 0 },
  { 2711, 2, 422, 4, 26273, 0 },
  { 55, 2, 179, 4, 26273, 0 },
  { 375, 2, 403, 4, 26273, 0 },
  { 726, 2, 160, 4, 26273, 0 },
  { 973, 2, 384, 4, 26273, 0 },
  { 1262, 2, 141, 4, 26273, 0 },
  { 1505, 2, 365, 4, 26273, 0 },
  { 1784, 2, 122, 4, 26273, 0 },
  { 2017, 2, 346, 4, 26273, 0 },
  { 2316, 2, 103, 4, 26273, 0 },
  { 2544, 2, 327, 4, 26273, 0 },
  { 131, 2, 84, 4, 26273, 0 },
  { 471, 2, 289, 4, 26273, 0 },
  { 805, 2, 300, 4, 26273, 0 },
  { 1073, 2, 236, 4, 26273, 0 },
  { 1342, 2, 518, 4, 26273, 0 },
  { 1607, 2, 501, 4, 26273, 0 },
  { 1864, 2, 974, 4, 26273, 0 },
  { 2121, 2, 959, 4, 26273, 0 },
  { 2396, 2, 1970, 4, 26273, 0 },
  { 2644, 2, 565, 4, 26129, 0 },
  { 207, 2, 267, 4, 26129, 0 },
  { 299, 1989, 1126, 6, 26241, 27 },
  { 649, 1989, 1957, 6, 26241, 27 },
  { 895, 1989, 658, 6, 26241, 27 },
  { 1185, 1989, 643, 6, 26241, 27 },
  { 1428, 1989, 477, 6, 26241, 27 },
  { 1717, 1989, 460, 6, 26241, 27 },
  { 1950, 1989, 209, 6, 26241, 27 },
  { 2249, 1989, 452, 6, 26241, 27 },
  { 2477, 1989, 190, 6, 26241, 27 },
  { 2735, 1989, 433, 6, 26241, 27 },
  { 62, 1989, 171, 6, 26241, 27 },
  { 401, 1989, 414, 6, 26241, 27 },
  { 734, 1989, 152, 6, 26241, 27 },
  { 1001, 1989, 395, 6, 26241, 27 },
  { 1270, 1989, 133, 6, 26241, 27 },
  { 1535, 1989, 376, 6, 26241, 27 },
  { 1792, 1989, 114, 6, 26241, 27 },
  { 2049, 1989, 357, 6, 26241, 27 },
  { 2324, 1989, 95, 6, 26241, 27 },
  { 2576, 1989, 338, 6, 26241, 27 },
  { 139, 1989, 76, 6, 26241, 27 },
  { 503, 1989, 311, 6, 26241, 27 },
  { 813, 1989, 319, 6, 26241, 27 },
  { 1105, 1989, 228, 6, 26241, 27 },
  { 1350, 1989, 511, 6, 26241, 27 },
  { 1639, 1989, 494, 6, 26241, 27 },
  { 1872, 1989, 968, 6, 26241, 27 },
  { 2153, 1989, 953, 6, 26241, 27 },
  { 2404, 1989, 1981, 6, 26241, 27 },
  { 314, 1460, 791, 14, 18193, 38 },
  { 663, 1460, 873, 14, 18193, 38 },
  { 908, 1460, 1055, 14, 18193, 38 },
  { 1197, 1460, 727, 14, 18193, 38 },
  { 1440, 1460, 727, 14, 18193, 38 },
  { 1729, 1460, 727, 14, 18193, 38 },
  { 1962, 1460, 727, 14, 18193, 38 },
  { 2261, 1460, 727, 14, 18193, 38 },
  { 2489, 1460, 727, 14, 18193, 38 },
  { 2747, 1460, 727, 14, 18193, 38 },
  { 75, 1460, 727, 14, 18193, 38 },
  { 415, 1460, 727, 14, 18193, 38 },
  { 749, 1460, 727, 14, 18193, 38 },
  { 1017, 1460, 727, 14, 18193, 38 },
  { 1286, 1460, 727, 14, 18193, 38 },
  { 1551, 1460, 727, 14, 18193, 38 },
  { 1808, 1460, 727, 14, 18193, 38 },
  { 2065, 1460, 727, 14, 18193, 38 },
  { 2340, 1460, 727, 14, 18193, 38 },
  { 2592, 1460, 727, 14, 18193, 38 },
  { 155, 1460, 727, 14, 18193, 38 },
  { 519, 1460, 727, 14, 18193, 38 },
  { 829, 1460, 727, 14, 18193, 38 },
  { 1121, 1460, 727, 14, 18193, 38 },
  { 1366, 1460, 727, 14, 18193, 38 },
  { 1655, 1460, 727, 14, 18193, 38 },
  { 1888, 1460, 727, 14, 18193, 38 },
  { 2169, 1460, 727, 14, 18193, 38 },
  { 2420, 1460, 727, 14, 18193, 38 },
  { 2660, 1460, 727, 14, 18193, 38 },
  { 223, 1460, 727, 14, 18193, 38 },
  { 579, 1460, 727, 14, 18193, 38 },
  { 227, 922, 1541, 44, 48, 76 },
  { 235, 950, 1622, 11, 10008, 35 },
  { 589, 950, 1574, 11, 10008, 35 },
  { 839, 950, 1598, 11, 9960, 35 },
  { 1131, 950, 1550, 11, 9960, 35 },
  { 1376, 950, 1610, 11, 9912, 35 },
  { 1665, 950, 1562, 11, 9912, 35 },
  { 1898, 950, 1586, 11, 9864, 35 },
  { 2179, 950, 1538, 11, 9864, 35 },
  { 255, 938, 1588, 28, 328, 67 },
  { 608, 938, 1540, 28, 328, 67 },
  { 263, 2, 1627, 4, 24568, 0 },
  { 616, 2, 1579, 4, 24568, 0 },
  { 863, 2, 1603, 4, 24536, 0 },
  { 1154, 2, 1555, 4, 24536, 0 },
  { 1399, 2, 1615, 4, 24504, 0 },
  { 1688, 2, 1567, 4, 24504, 0 },
  { 1921, 2, 1591, 4, 24472, 0 },
  { 2202, 2, 1543, 4, 24472, 0 },
  { 2448, 2, 1621, 4, 24440, 0 },
  { 2688, 2, 1573, 4, 24440, 0 },
  { 29, 2, 1597, 4, 24408, 0 },
  { 347, 2, 1549, 4, 24408, 0 },
  { 697, 2, 1609, 4, 24376, 0 },
  { 943, 2, 1561, 4, 24376, 0 },
  { 1232, 2, 1585, 4, 24344, 0 },
  { 1475, 2, 1537, 4, 24344, 0 },
  { 283, 946, 1611, 21, 984, 62 },
  { 635, 946, 1563, 21, 984, 62 },
  { 881, 946, 1587, 21, 904, 62 },
  { 1171, 946, 1539, 21, 904, 62 },
  { 2777, 2, 790, 4, 26161, 0 },
  { 2804, 2, 872, 4, 26161, 0 },
  { 2824, 2, 1054, 4, 26161, 0 },
  { 2844, 2, 726, 4, 26161, 0 },
  { 2864, 2, 726, 4, 26161, 0 },
  { 2884, 2, 726, 4, 26161, 0 },
  { 2904, 2, 726, 4, 26161, 0 },
  { 2924, 2, 726, 4, 26161, 0 },
  { 2944, 2, 726, 4, 26161, 0 },
  { 2964, 2, 726, 4, 26161, 0 },
  { 2756, 2, 726, 4, 26161, 0 },
  { 2783, 2, 726, 4, 26161, 0 },
  { 2810, 2, 726, 4, 26161, 0 },
  { 2830, 2, 726, 4, 26161, 0 },
  { 2850, 2, 726, 4, 26161, 0 },
  { 2870, 2, 726, 4, 26161, 0 },
  { 2890, 2, 726, 4, 26161, 0 },
  { 2910, 2, 726, 4, 26161, 0 },
  { 2930, 2, 726, 4, 26161, 0 },
  { 2950, 2, 726, 4, 26161, 0 },
  { 2763, 2, 726, 4, 26161, 0 },
  { 2790, 2, 726, 4, 26161, 0 },
  { 2817, 2, 726, 4, 26161, 0 },
  { 2837, 2, 726, 4, 26161, 0 },
  { 2857, 2, 726, 4, 26161, 0 },
  { 2877, 2, 726, 4, 26161, 0 },
  { 2897, 2, 726, 4, 26161, 0 },
  { 2917, 2, 726, 4, 26161, 0 },
  { 2937, 2, 726, 4, 26161, 0 },
  { 2957, 2, 726, 4, 26161, 0 },
  { 2770, 2, 726, 4, 26161, 0 },
  { 2797, 2, 726, 4, 26161, 0 },
  { 602, 1772, 883, 75, 10241, 95 },
  { 851, 1772, 1076, 75, 10241, 95 },
  { 1142, 1772, 801, 75, 10241, 95 },
  { 1387, 1772, 801, 75, 10241, 95 },
  { 1676, 1772, 801, 75, 10241, 95 },
  { 1909, 1772, 801, 75, 10241, 95 },
  { 2190, 1772, 801, 75, 10241, 95 },
  { 2436, 1772, 801, 75, 10241, 95 },
  { 2676, 1772, 801, 75, 10241, 95 },
  { 14, 1772, 801, 75, 10241, 95 },
  { 331, 1772, 801, 75, 10241, 95 },
  { 681, 1772, 801, 75, 10241, 95 },
  { 927, 1772, 801, 75, 10241, 95 },
  { 1216, 1772, 801, 75, 10241, 95 },
  { 1459, 1772, 801, 75, 10241, 95 },
  { 1748, 1772, 801, 75, 10241, 95 },
  { 1981, 1772, 801, 75, 10241, 95 },
  { 2280, 1772, 801, 75, 10241, 95 },
  { 2508, 1772, 801, 75, 10241, 95 },
  { 95, 1772, 801, 75, 10241, 95 },
  { 435, 1772, 801, 75, 10241, 95 },
  { 769, 1772, 801, 75, 10241, 95 },
  { 1037, 1772, 801, 75, 10241, 95 },
  { 1306, 1772, 801, 75, 10241, 95 },
  { 1571, 1772, 801, 75, 10241, 95 },
  { 1828, 1772, 801, 75, 10241, 95 },
  { 2085, 1772, 801, 75, 10241, 95 },
  { 2360, 1772, 801, 75, 10241, 95 },
  { 2608, 1772, 801, 75, 10241, 95 },
  { 171, 1772, 801, 75, 10241, 95 },
  { 535, 1772, 801, 75, 10241, 95 },
  { 248, 1763, 801, 75, 17504, 2 },
  { 1136, 1909, 1451, 99, 1137, 102 },
  { 1381, 1909, 1451, 99, 1137, 102 },
  { 1670, 1909, 1451, 99, 1137, 102 },
  { 1903, 1909, 1451, 99, 1137, 102 },
  { 2184, 1909, 1451, 99, 1137, 102 },
  { 2430, 1909, 1451, 99, 1137, 102 },
  { 2670, 1909, 1451, 99, 1137, 102 },
  { 8, 1909, 1451, 99, 1137, 102 },
  { 325, 1909, 1451, 99, 1137, 102 },
  { 674, 1909, 1451, 99, 1137, 102 },
  { 919, 1909, 1451, 99, 1137, 102 },
  { 1208, 1909, 1451, 99, 1137, 102 },
  { 1451, 1909, 1451, 99, 1137, 102 },
  { 1740, 1909, 1451, 99, 1137, 102 },
  { 1973, 1909, 1451, 99, 1137, 102 },
  { 2272, 1909, 1451, 99, 1137, 102 },
  { 2500, 1909, 1451, 99, 1137, 102 },
  { 87, 1909, 1451, 99, 1137, 102 },
  { 427, 1909, 1451, 99, 1137, 102 },
  { 761, 1909, 1451, 99, 1137, 102 },
  { 1029, 1909, 1451, 99, 1137, 102 },
  { 1298, 1909, 1451, 99, 1137, 102 },
  { 1563, 1909, 1451, 99, 1137, 102 },
  { 1820, 1909, 1451, 99, 1137, 102 },
  { 2077, 1909, 1451, 99, 1137, 102 },
  { 2352, 1909, 1451, 99, 1137, 102 },
  { 2600, 1909, 1451, 99, 1137, 102 },
  { 163, 1909, 1451, 99, 1137, 102 },
  { 527, 1909, 1451, 99, 1137, 102 },
  { 240, 1931, 1451, 99, 4048, 107 },
  { 594, 1741, 1451, 99, 8528, 93 },
  { 844, 1887, 1451, 99, 15792, 5 },
  { 848, 578, 1102, 84, 4561, 108 },
  { 1139, 578, 901, 84, 4561, 108 },
  { 1384, 578, 901, 84, 4561, 108 },
  { 1673, 578, 901, 84, 4561, 108 },
  { 1906, 578, 901, 84, 4561, 108 },
  { 2187, 578, 901, 84, 4561, 108 },
  { 2433, 578, 901, 84, 4561, 108 },
  { 2673, 578, 901, 84, 4561, 108 },
  { 11, 578, 901, 84, 4561, 108 },
  { 328, 578, 901, 84, 4561, 108 },
  { 677, 578, 901, 84, 4561, 108 },
  { 923, 578, 901, 84, 4561, 108 },
  { 1212, 578, 901, 84, 4561, 108 },
  { 1455, 578, 901, 84, 4561, 108 },
  { 1744, 578, 901, 84, 4561, 108 },
  { 1977, 578, 901, 84, 4561, 108 },
  { 2276, 578, 901, 84, 4561, 108 },
  { 2504, 578, 901, 84, 4561, 108 },
  { 91, 578, 901, 84, 4561, 108 },
  { 431, 578, 901, 84, 4561, 108 },
  { 765, 578, 901, 84, 4561, 108 },
  { 1033, 578, 901, 84, 4561, 108 },
  { 1302, 578, 901, 84, 4561, 108 },
  { 1567, 578, 901, 84, 4561, 108 },
  { 1824, 578, 901, 84, 4561, 108 },
  { 2081, 578, 901, 84, 4561, 108 },
  { 2356, 578, 901, 84, 4561, 108 },
  { 2604, 578, 901, 84, 4561, 108 },
  { 167, 578, 901, 84, 4561, 108 },
  { 531, 578, 901, 84, 4561, 108 },
  { 244, 593, 901, 84, 8752, 98 },
  { 598, 1991, 901, 84, 17040, 10 },
  { 629, 1467, 889, 121, 10145, 114 },
  { 875, 1467, 1082, 121, 10145, 114 },
  { 1165, 1467, 807, 121, 10145, 114 },
  { 1410, 1467, 807, 121, 10145, 114 },
  { 1699, 1467, 807, 121, 10145, 114 },
  { 1932, 1467, 807, 121, 10145, 114 },
  { 2213, 1467, 807, 121, 10145, 114 },
  { 2459, 1467, 807, 121, 10145, 114 },
  { 2699, 1467, 807, 121, 10145, 114 },
  { 41, 1467, 807, 121, 10145, 114 },
  { 359, 1467, 807, 121, 10145, 114 },
  { 710, 1467, 807, 121, 10145, 114 },
  { 957, 1467, 807, 121, 10145, 114 },
  { 1246, 1467, 807, 121, 10145, 114 },
  { 1489, 1467, 807, 121, 10145, 114 },
  { 1768, 1467, 807, 121, 10145, 114 },
  { 2001, 1467, 807, 121, 10145, 114 },
  { 2300, 1467, 807, 121, 10145, 114 },
  { 2528, 1467, 807, 121, 10145, 114 },
  { 115, 1467, 807, 121, 10145, 114 },
  { 455, 1467, 807, 121, 10145, 114 },
  { 789, 1467, 807, 121, 10145, 114 },
  { 1057, 1467, 807, 121, 10145, 114 },
  { 1326, 1467, 807, 121, 10145, 114 },
  { 1591, 1467, 807, 121, 10145, 114 },
  { 1848, 1467, 807, 121, 10145, 114 },
  { 2105, 1467, 807, 121, 10145, 114 },
  { 2380, 1467, 807, 121, 10145, 114 },
  { 2628, 1467, 807, 121, 10145, 114 },
  { 191, 1467, 807, 121, 10145, 114 },
  { 555, 1467, 807, 121, 10145, 114 },
  { 276, 1503, 807, 121, 17504, 14 },
  { 1159, 1823, 1452, 154, 1057, 121 },
  { 1404, 1823, 1452, 154, 1057, 121 },
  { 1693, 1823, 1452, 154, 1057, 121 },
  { 1926, 1823, 1452, 154, 1057, 121 },
  { 2207, 1823, 1452, 154, 1057, 121 },
  { 2453, 1823, 1452, 154, 1057, 121 },
  { 2693, 1823, 1452, 154, 1057, 121 },
  { 35, 1823, 1452, 154, 1057, 121 },
  { 353, 1823, 1452, 154, 1057, 121 },
  { 703, 1823, 1452, 154, 1057, 121 },
  { 949, 1823, 1452, 154, 1057, 121 },
  { 1238, 1823, 1452, 154, 1057, 121 },
  { 1481, 1823, 1452, 154, 1057, 121 },
  { 1760, 1823, 1452, 154, 1057, 121 },
  { 1993, 1823, 1452, 154, 1057, 121 },
  { 2292, 1823, 1452, 154, 1057, 121 },
  { 2520, 1823, 1452, 154, 1057, 121 },
  { 107, 1823, 1452, 154, 1057, 121 },
  { 447, 1823, 1452, 154, 1057, 121 },
  { 781, 1823, 1452, 154, 1057, 121 },
  { 1049, 1823, 1452, 154, 1057, 121 },
  { 1318, 1823, 1452, 154, 1057, 121 },
  { 1583, 1823, 1452, 154, 1057, 121 },
  { 1840, 1823, 1452, 154, 1057, 121 },
  { 2097, 1823, 1452, 154, 1057, 121 },
  { 2372, 1823, 1452, 154, 1057, 121 },
  { 2620, 1823, 1452, 154, 1057, 121 },
  { 183, 1823, 1452, 154, 1057, 121 },
  { 547, 1823, 1452, 154, 1057, 121 },
  { 268, 1855, 1452, 154, 4048, 126 },
  { 621, 1709, 1452, 154, 8528, 112 },
  { 868, 1791, 1452, 154, 15792, 17 },
  { 872, 1646, 1105, 133, 4497, 127 },
  { 1162, 1646, 904, 133, 4497, 127 },
  { 1407, 1646, 904, 133, 4497, 127 },
  { 1696, 1646, 904, 133, 4497, 127 },
  { 1929, 1646, 904, 133, 4497, 127 },
  { 2210, 1646, 904, 133, 4497, 127 },
  { 2456, 1646, 904, 133, 4497, 127 },
  { 2696, 1646, 904, 133, 4497, 127 },
  { 38, 1646, 904, 133, 4497, 127 },
  { 356, 1646, 904, 133, 4497, 127 },
  { 706, 1646, 904, 133, 4497, 127 },
  { 953, 1646, 904, 133, 4497, 127 },
  { 1242, 1646, 904, 133, 4497, 127 },
  { 1485, 1646, 904, 133, 4497, 127 },
  { 1764, 1646, 904, 133, 4497, 127 },
  { 1997, 1646, 904, 133, 4497, 127 },
  { 2296, 1646, 904, 133, 4497, 127 },
  { 2524, 1646, 904, 133, 4497, 127 },
  { 111, 1646, 904, 133, 4497, 127 },
  { 451, 1646, 904, 133, 4497, 127 },
  { 785, 1646, 904, 133, 4497, 127 },
  { 1053, 1646, 904, 133, 4497, 127 },
  { 1322, 1646, 904, 133, 4497, 127 },
  { 1587, 1646, 904, 133, 4497, 127 },
  { 1844, 1646, 904, 133, 4497, 127 },
  { 2101, 1646, 904, 133, 4497, 127 },
  { 2376, 1646, 904, 133, 4497, 127 },
  { 2624, 1646, 904, 133, 4497, 127 },
  { 187, 1646, 904, 133, 4497, 127 },
  { 551, 1646, 904, 133, 4497, 127 },
  { 272, 1667, 904, 133, 8752, 117 },
  { 625, 1688, 904, 133, 17040, 22 },
  { 2974, 2357, 2, 186, 608, 140 },
  { 2228, 2016, 2, 186, 466, 131 },
  { 2714, 2047, 2, 186, 466, 131 },
  { 379, 2078, 2, 186, 466, 131 },
  { 977, 2109, 2, 186, 466, 131 },
  { 1509, 2140, 2, 186, 466, 131 },
  { 2021, 2171, 2, 186, 466, 131 },
  { 2548, 2202, 2, 186, 466, 131 },
  { 475, 2233, 2, 186, 466, 131 },
  { 1077, 2264, 2, 186, 466, 131 },
  { 1611, 2295, 2, 186, 466, 131 },
  { 2125, 2326, 2, 186, 466, 131 },
  { 288, 1454, 1119, 8, 18096, 32 },
  { 3031, 1637, 1111, 8, 14560, 32 },
  { 640, 637, 1978, 8, 10097, 32 },
  { 886, 637, 1967, 8, 10097, 32 },
  { 1176, 637, 669, 8, 10097, 32 },
  { 1419, 637, 654, 8, 10097, 32 },
  { 1708, 637, 489, 8, 10097, 32 },
  { 1941, 637, 472, 8, 10097, 32 },
  { 2222, 637, 222, 8, 10097, 32 },
  { 2468, 637, 447, 8, 10097, 32 },
  { 2708, 637, 203, 8, 10097, 32 },
  { 52, 637, 428, 8, 10097, 32 },
  { 371, 637, 184, 8, 10097, 32 },
  { 722, 637, 409, 8, 10097, 32 },
  { 969, 637, 165, 8, 10097, 32 },
  { 1258, 637, 390, 8, 10097, 32 },
  { 1501, 637, 146, 8, 10097, 32 },
  { 1780, 637, 371, 8, 10097, 32 },
  { 2013, 637, 127, 8, 10097, 32 },
  { 2312, 637, 352, 8, 10097, 32 },
  { 2540, 637, 108, 8, 10097, 32 },
  { 127, 637, 333, 8, 10097, 32 },
  { 467, 637, 89, 8, 10097, 32 },
  { 801, 637, 295, 8, 10097, 32 },
  { 1069, 637, 247, 8, 10097, 32 },
  { 1338, 637, 528, 8, 10097, 32 },
  { 1603, 637, 523, 8, 10097, 32 },
  { 1860, 637, 983, 8, 10097, 32 },
  { 2117, 637, 979, 8, 10097, 32 },
  { 2392, 637, 1788, 8, 10097, 32 },
  { 2640, 637, 1975, 8, 18240, 29 },
  { 203, 637, 1, 8, 0, 32 },
  { 3021, 1485, 2, 217, 0, 149 },
  { 3039, 1515, 2, 217, 14657, 149 },
  { 295, 1479, 2, 217, 18146, 149 },
  { 2998, 1491, 1976, 217, 18240, 26 },
  { 646, 1497, 1976, 217, 10049, 149 },
  { 892, 1497, 1960, 217, 10049, 149 },
  { 1182, 1497, 661, 217, 10049, 149 },
  { 1425, 1497, 646, 217, 10049, 149 },
  { 1714, 1497, 480, 217, 10049, 149 },
  { 1947, 1497, 463, 217, 10049, 149 },
  { 2246, 1497, 212, 217, 10049, 149 },
  { 2474, 1497, 448, 217, 10049, 149 },
  { 2732, 1497, 193, 217, 10049, 149 },
  { 59, 1497, 429, 217, 10049, 149 },
  { 397, 1497, 174, 217, 10049, 149 },
  { 730, 1497, 410, 217, 10049, 149 },
  { 997, 1497, 155, 217, 10049, 149 },
  { 1266, 1497, 391, 217, 10049, 149 },
  { 1531, 1497, 136, 217, 10049, 149 },
  { 1788, 1497, 372, 217, 10049, 149 },
  { 2045, 1497, 117, 217, 10049, 149 },
  { 2320, 1497, 353, 217, 10049, 149 },
  { 2572, 1497, 98, 217, 10049, 149 },
  { 135, 1497, 334, 217, 10049, 149 },
  { 499, 1497, 79, 217, 10049, 149 },
  { 809, 1497, 296, 217, 10049, 149 },
  { 1101, 1497, 248, 217, 10049, 149 },
  { 1346, 1497, 529, 217, 10049, 149 },
  { 1635, 1497, 514, 217, 10049, 149 },
  { 1868, 1497, 984, 217, 10049, 149 },
  { 2149, 1497, 971, 217, 10049, 149 },
  { 2400, 1497, 1789, 217, 10049, 149 },
  { 660, 1143, 895, 223, 9169, 152 },
  { 905, 1143, 1088, 223, 9169, 152 },
  { 1194, 1143, 813, 223, 9169, 152 },
  { 1437, 1143, 813, 223, 9169, 152 },
  { 1726, 1143, 813, 223, 9169, 152 },
  { 1959, 1143, 813, 223, 9169, 152 },
  { 2258, 1143, 813, 223, 9169, 152 },
  { 2486, 1143, 813, 223, 9169, 152 },
  { 2744, 1143, 813, 223, 9169, 152 },
  { 72, 1143, 813, 223, 9169, 152 },
  { 411, 1143, 813, 223, 9169, 152 },
  { 745, 1143, 813, 223, 9169, 152 },
  { 1013, 1143, 813, 223, 9169, 152 },
  { 1282, 1143, 813, 223, 9169, 152 },
  { 1547, 1143, 813, 223, 9169, 152 },
  { 1804, 1143, 813, 223, 9169, 152 },
  { 2061, 1143, 813, 223, 9169, 152 },
  { 2336, 1143, 813, 223, 9169, 152 },
  { 2588, 1143, 813, 223, 9169, 152 },
  { 151, 1143, 813, 223, 9169, 152 },
  { 515, 1143, 813, 223, 9169, 152 },
  { 825, 1143, 813, 223, 9169, 152 },
  { 1117, 1143, 813, 223, 9169, 152 },
  { 1362, 1143, 813, 223, 9169, 152 },
  { 1651, 1143, 813, 223, 9169, 152 },
  { 1884, 1143, 813, 223, 9169, 152 },
  { 2165, 1143, 813, 223, 9169, 152 },
  { 2416, 1143, 813, 223, 9169, 152 },
  { 2656, 1143, 813, 223, 9169, 152 },
  { 219, 1143, 813, 223, 9169, 152 },
  { 575, 1143, 813, 223, 9169, 152 },
  { 310, 1160, 813, 223, 17552, 41 },
  { 1188, 1359, 2, 270, 753, 173 },
  { 1431, 1359, 2, 270, 753, 173 },
  { 1720, 1359, 2, 270, 753, 173 },
  { 1953, 1359, 2, 270, 753, 173 },
  { 2252, 1359, 2, 270, 753, 173 },
  { 2480, 1359, 2, 270, 753, 173 },
  { 2738, 1359, 2, 270, 753, 173 },
  { 66, 1359, 2, 270, 753, 173 },
  { 405, 1359, 2, 270, 753, 173 },
  { 738, 1359, 2, 270, 753, 173 },
  { 1005, 1359, 2, 270, 753, 173 },
  { 1274, 1359, 2, 270, 753, 173 },
  { 1539, 1359, 2, 270, 753, 173 },
  { 1796, 1359, 2, 270, 753, 173 },
  { 2053, 1359, 2, 270, 753, 173 },
  { 2328, 1359, 2, 270, 753, 173 },
  { 2580, 1359, 2, 270, 753, 173 },
  { 143, 1359, 2, 270, 753, 173 },
  { 507, 1359, 2, 270, 753, 173 },
  { 817, 1359, 2, 270, 753, 173 },
  { 1109, 1359, 2, 270, 753, 173 },
  { 1354, 1359, 2, 270, 753, 173 },
  { 1643, 1359, 2, 270, 753, 173 },
  { 1876, 1359, 2, 270, 753, 173 },
  { 2157, 1359, 2, 270, 753, 173 },
  { 2408, 1359, 2, 270, 753, 173 },
  { 2648, 1359, 2, 270, 753, 173 },
  { 211, 1359, 2, 270, 753, 173 },
  { 567, 1359, 2, 270, 753, 173 },
  { 302, 1405, 2, 270, 4128, 182 },
  { 652, 1267, 2, 270, 8608, 157 },
  { 898, 1313, 2, 270, 15872, 46 },
  { 902, 1177, 1108, 240, 4385, 191 },
  { 1191, 1177, 703, 240, 4385, 191 },
  { 1434, 1177, 703, 240, 4385, 191 },
  { 1723, 1177, 703, 240, 4385, 191 },
  { 1956, 1177, 703, 240, 4385, 191 },
  { 2255, 1177, 703, 240, 4385, 191 },
  { 2483, 1177, 703, 240, 4385, 191 },
  { 2741, 1177, 703, 240, 4385, 191 },
  { 69, 1177, 703, 240, 4385, 191 },
  { 408, 1177, 703, 240, 4385, 191 },
  { 741, 1177, 703, 240, 4385, 191 },
  { 1009, 1177, 703, 240, 4385, 191 },
  { 1278, 1177, 703, 240, 4385, 191 },
  { 1543, 1177, 703, 240, 4385, 191 },
  { 1800, 1177, 703, 240, 4385, 191 },
  { 2057, 1177, 703, 240, 4385, 191 },
  { 2332, 1177, 703, 240, 4385, 191 },
  { 2584, 1177, 703, 240, 4385, 191 },
  { 147, 1177, 703, 240, 4385, 191 },
  { 511, 1177, 703, 240, 4385, 191 },
  { 821, 1177, 703, 240, 4385, 191 },
  { 1113, 1177, 703, 240, 4385, 191 },
  { 1358, 1177, 703, 240, 4385, 191 },
  { 1647, 1177, 703, 240, 4385, 191 },
  { 1880, 1177, 703, 240, 4385, 191 },
  { 2161, 1177, 703, 240, 4385, 191 },
  { 2412, 1177, 703, 240, 4385, 191 },
  { 2652, 1177, 703, 240, 4385, 191 },
  { 215, 1177, 703, 240, 4385, 191 },
  { 571, 1177, 703, 240, 4385, 191 },
  { 306, 1207, 703, 240, 8816, 166 },
  { 656, 1237, 703, 240, 17104, 55 },
};

  // FPR8 Register Class...
  static const MCPhysReg FPR8[] = {
    AArch64_B0, AArch64_B1, AArch64_B2, AArch64_B3, AArch64_B4, AArch64_B5, AArch64_B6, AArch64_B7, AArch64_B8, AArch64_B9, AArch64_B10, AArch64_B11, AArch64_B12, AArch64_B13, AArch64_B14, AArch64_B15, AArch64_B16, AArch64_B17, AArch64_B18, AArch64_B19, AArch64_B20, AArch64_B21, AArch64_B22, AArch64_B23, AArch64_B24, AArch64_B25, AArch64_B26, AArch64_B27, AArch64_B28, AArch64_B29, AArch64_B30, AArch64_B31,
  };
  // FPR8 Bit set.
  static const uint8_t FPR8Bits[] = {
    0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // FPR16 Register Class...
  static const MCPhysReg FPR16[] = {
    AArch64_H0, AArch64_H1, AArch64_H2, AArch64_H3, AArch64_H4, AArch64_H5, AArch64_H6, AArch64_H7, AArch64_H8, AArch64_H9, AArch64_H10, AArch64_H11, AArch64_H12, AArch64_H13, AArch64_H14, AArch64_H15, AArch64_H16, AArch64_H17, AArch64_H18, AArch64_H19, AArch64_H20, AArch64_H21, AArch64_H22, AArch64_H23, AArch64_H24, AArch64_H25, AArch64_H26, AArch64_H27, AArch64_H28, AArch64_H29, AArch64_H30, AArch64_H31,
  };
  // FPR16 Bit set.
  static const uint8_t FPR16Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f,
  };
  // FPR16_lo Register Class...
  static const MCPhysReg FPR16_lo[] = {
    AArch64_H0, AArch64_H1, AArch64_H2, AArch64_H3, AArch64_H4, AArch64_H5, AArch64_H6, AArch64_H7, AArch64_H8, AArch64_H9, AArch64_H10, AArch64_H11, AArch64_H12, AArch64_H13, AArch64_H14, AArch64_H15,
  };
  // FPR16_lo Bit set.
  static const uint8_t FPR16_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f,
  };
  // PPR Register Class...
  static const MCPhysReg PPR[] = {
    AArch64_P0, AArch64_P1, AArch64_P2, AArch64_P3, AArch64_P4, AArch64_P5, AArch64_P6, AArch64_P7, AArch64_P8, AArch64_P9, AArch64_P10, AArch64_P11, AArch64_P12, AArch64_P13, AArch64_P14, AArch64_P15,
  };
  // PPR Bit set.
  static const uint8_t PPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f,
  };
  // PPR_3b Register Class...
  static const MCPhysReg PPR_3b[] = {
    AArch64_P0, AArch64_P1, AArch64_P2, AArch64_P3, AArch64_P4, AArch64_P5, AArch64_P6, AArch64_P7,
  };
  // PPR_3b Bit set.
  static const uint8_t PPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f,
  };
  // GPR32all Register Class...
  static const MCPhysReg GPR32all[] = {
    AArch64_W0, AArch64_W1, AArch64_W2, AArch64_W3, AArch64_W4, AArch64_W5, AArch64_W6, AArch64_W7, AArch64_W8, AArch64_W9, AArch64_W10, AArch64_W11, AArch64_W12, AArch64_W13, AArch64_W14, AArch64_W15, AArch64_W16, AArch64_W17, AArch64_W18, AArch64_W19, AArch64_W20, AArch64_W21, AArch64_W22, AArch64_W23, AArch64_W24, AArch64_W25, AArch64_W26, AArch64_W27, AArch64_W28, AArch64_W29, AArch64_W30, AArch64_WZR, AArch64_WSP,
  };
  // GPR32all Bit set.
  static const uint8_t GPR32allBits[] = {
    0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x07,
  };
  // FPR32 Register Class...
  static const MCPhysReg FPR32[] = {
    AArch64_S0, AArch64_S1, AArch64_S2, AArch64_S3, AArch64_S4, AArch64_S5, AArch64_S6, AArch64_S7, AArch64_S8, AArch64_S9, AArch64_S10, AArch64_S11, AArch64_S12, AArch64_S13, AArch64_S14, AArch64_S15, AArch64_S16, AArch64_S17, AArch64_S18, AArch64_S19, AArch64_S20, AArch64_S21, AArch64_S22, AArch64_S23, AArch64_S24, AArch64_S25, AArch64_S26, AArch64_S27, AArch64_S28, AArch64_S29, AArch64_S30, AArch64_S31,
  };
  // FPR32 Bit set.
  static const uint8_t FPR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f,
  };
  // GPR32 Register Class...
  static const MCPhysReg GPR32[] = {
    AArch64_W0, AArch64_W1, AArch64_W2, AArch64_W3, AArch64_W4, AArch64_W5, AArch64_W6, AArch64_W7, AArch64_W8, AArch64_W9, AArch64_W10, AArch64_W11, AArch64_W12, AArch64_W13, AArch64_W14, AArch64_W15, AArch64_W16, AArch64_W17, AArch64_W18, AArch64_W19, AArch64_W20, AArch64_W21, AArch64_W22, AArch64_W23, AArch64_W24, AArch64_W25, AArch64_W26, AArch64_W27, AArch64_W28, AArch64_W29, AArch64_W30, AArch64_WZR,
  };
  // GPR32 Bit set.
  static const uint8_t GPR32Bits[] = {
    0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x07,
  };
  // GPR32sp Register Class...
  static const MCPhysReg GPR32sp[] = {
    AArch64_W0, AArch64_W1, AArch64_W2, AArch64_W3, AArch64_W4, AArch64_W5, AArch64_W6, AArch64_W7, AArch64_W8, AArch64_W9, AArch64_W10, AArch64_W11, AArch64_W12, AArch64_W13, AArch64_W14, AArch64_W15, AArch64_W16, AArch64_W17, AArch64_W18, AArch64_W19, AArch64_W20, AArch64_W21, AArch64_W22, AArch64_W23, AArch64_W24, AArch64_W25, AArch64_W26, AArch64_W27, AArch64_W28, AArch64_W29, AArch64_W30, AArch64_WSP,
  };
  // GPR32sp Bit set.
  static const uint8_t GPR32spBits[] = {
    0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x07,
  };
  // GPR32common Register Class...
  static const MCPhysReg GPR32common[] = {
    AArch64_W0, AArch64_W1, AArch64_W2, AArch64_W3, AArch64_W4, AArch64_W5, AArch64_W6, AArch64_W7, AArch64_W8, AArch64_W9, AArch64_W10, AArch64_W11, AArch64_W12, AArch64_W13, AArch64_W14, AArch64_W15, AArch64_W16, AArch64_W17, AArch64_W18, AArch64_W19, AArch64_W20, AArch64_W21, AArch64_W22, AArch64_W23, AArch64_W24, AArch64_W25, AArch64_W26, AArch64_W27, AArch64_W28, AArch64_W29, AArch64_W30,
  };
  // GPR32common Bit set.
  static const uint8_t GPR32commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x07,
  };
  // FPR32_with_hsub_in_FPR16_lo Register Class...
  static const MCPhysReg FPR32_with_hsub_in_FPR16_lo[] = {
    AArch64_S0, AArch64_S1, AArch64_S2, AArch64_S3, AArch64_S4, AArch64_S5, AArch64_S6, AArch64_S7, AArch64_S8, AArch64_S9, AArch64_S10, AArch64_S11, AArch64_S12, AArch64_S13, AArch64_S14, AArch64_S15,
  };
  // FPR32_with_hsub_in_FPR16_lo Bit set.
  static const uint8_t FPR32_with_hsub_in_FPR16_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f,
  };
  // GPR32arg Register Class...
  static const MCPhysReg GPR32arg[] = {
    AArch64_W0, AArch64_W1, AArch64_W2, AArch64_W3, AArch64_W4, AArch64_W5, AArch64_W6, AArch64_W7,
  };
  // GPR32arg Bit set.
  static const uint8_t GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f,
  };
  // MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg MatrixIndexGPR32_12_15[] = {
    AArch64_W12, AArch64_W13, AArch64_W14, AArch64_W15,
  };
  // MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
  };
  // CCR Register Class...
  static const MCPhysReg CCR[] = {
    AArch64_NZCV,
  };
  // CCR Bit set.
  static const uint8_t CCRBits[] = {
    0x00, 0x01,
  };
  // GPR32sponly Register Class...
  static const MCPhysReg GPR32sponly[] = {
    AArch64_WSP,
  };
  // GPR32sponly Bit set.
  static const uint8_t GPR32sponlyBits[] = {
    0x00, 0x08,
  };
  // WSeqPairsAllClass Register Class...
  static const MCPhysReg WSeqPairsAllClass[] = {
    AArch64_W0_W1, AArch64_W1_W2, AArch64_W2_W3, AArch64_W3_W4, AArch64_W4_W5, AArch64_W5_W6, AArch64_W6_W7, AArch64_W7_W8, AArch64_W8_W9, AArch64_W9_W10, AArch64_W10_W11, AArch64_W11_W12, AArch64_W12_W13, AArch64_W13_W14, AArch64_W14_W15, AArch64_W15_W16, AArch64_W16_W17, AArch64_W17_W18, AArch64_W18_W19, AArch64_W19_W20, AArch64_W20_W21, AArch64_W21_W22, AArch64_W22_W23, AArch64_W23_W24, AArch64_W24_W25, AArch64_W25_W26, AArch64_W26_W27, AArch64_W27_W28, AArch64_W28_W29, AArch64_W29_W30, AArch64_W30_WZR, AArch64_WZR_W0,
  };
  // WSeqPairsAllClass Bit set.
  static const uint8_t WSeqPairsAllClassBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07,
  };
  // WSeqPairsAllClass_with_sube32_in_GPR32common Register Class...
  static const MCPhysReg WSeqPairsAllClass_with_sube32_in_GPR32common[] = {
    AArch64_W0_W1, AArch64_W1_W2, AArch64_W2_W3, AArch64_W3_W4, AArch64_W4_W5, AArch64_W5_W6, AArch64_W6_W7, AArch64_W7_W8, AArch64_W8_W9, AArch64_W9_W10, AArch64_W10_W11, AArch64_W11_W12, AArch64_W12_W13, AArch64_W13_W14, AArch64_W14_W15, AArch64_W15_W16, AArch64_W16_W17, AArch64_W17_W18, AArch64_W18_W19, AArch64_W19_W20, AArch64_W20_W21, AArch64_W21_W22, AArch64_W22_W23, AArch64_W23_W24, AArch64_W24_W25, AArch64_W25_W26, AArch64_W26_W27, AArch64_W27_W28, AArch64_W28_W29, AArch64_W29_W30, AArch64_W30_WZR,
  };
  // WSeqPairsAllClass_with_sube32_in_GPR32common Bit set.
  static const uint8_t WSeqPairsAllClass_with_sube32_in_GPR32commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x07,
  };
  // WSeqPairsAllClass_with_subo32_in_GPR32common Register Class...
  static const MCPhysReg WSeqPairsAllClass_with_subo32_in_GPR32common[] = {
    AArch64_W0_W1, AArch64_W1_W2, AArch64_W2_W3, AArch64_W3_W4, AArch64_W4_W5, AArch64_W5_W6, AArch64_W6_W7, AArch64_W7_W8, AArch64_W8_W9, AArch64_W9_W10, AArch64_W10_W11, AArch64_W11_W12, AArch64_W12_W13, AArch64_W13_W14, AArch64_W14_W15, AArch64_W15_W16, AArch64_W16_W17, AArch64_W17_W18, AArch64_W18_W19, AArch64_W19_W20, AArch64_W20_W21, AArch64_W21_W22, AArch64_W22_W23, AArch64_W23_W24, AArch64_W24_W25, AArch64_W25_W26, AArch64_W26_W27, AArch64_W27_W28, AArch64_W28_W29, AArch64_W29_W30, AArch64_WZR_W0,
  };
  // WSeqPairsAllClass_with_subo32_in_GPR32common Bit set.
  static const uint8_t WSeqPairsAllClass_with_subo32_in_GPR32commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0xff, 0xff, 0xff, 0x07,
  };
  // WSeqPairsAllClass_with_sube32_in_GPR32common_and_WSeqPairsAllClass_with_subo32_in_GPR32common Register Class...
  static const MCPhysReg WSeqPairsAllClass_with_sube32_in_GPR32common_and_WSeqPairsAllClass_with_subo32_in_GPR32common[] = {
    AArch64_W0_W1, AArch64_W1_W2, AArch64_W2_W3, AArch64_W3_W4, AArch64_W4_W5, AArch64_W5_W6, AArch64_W6_W7, AArch64_W7_W8, AArch64_W8_W9, AArch64_W9_W10, AArch64_W10_W11, AArch64_W11_W12, AArch64_W12_W13, AArch64_W13_W14, AArch64_W14_W15, AArch64_W15_W16, AArch64_W16_W17, AArch64_W17_W18, AArch64_W18_W19, AArch64_W19_W20, AArch64_W20_W21, AArch64_W21_W22, AArch64_W22_W23, AArch64_W23_W24, AArch64_W24_W25, AArch64_W25_W26, AArch64_W26_W27, AArch64_W27_W28, AArch64_W28_W29, AArch64_W29_W30,
  };
  // WSeqPairsAllClass_with_sube32_in_GPR32common_and_WSeqPairsAllClass_with_subo32_in_GPR32common Bit set.
  static const uint8_t WSeqPairsAllClass_with_sube32_in_GPR32common_and_WSeqPairsAllClass_with_subo32_in_GPR32commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x07,
  };
  // WSeqPairsClass Register Class...
  static const MCPhysReg WSeqPairsClass[] = {
    AArch64_W0_W1, AArch64_W2_W3, AArch64_W4_W5, AArch64_W6_W7, AArch64_W8_W9, AArch64_W10_W11, AArch64_W12_W13, AArch64_W14_W15, AArch64_W16_W17, AArch64_W18_W19, AArch64_W20_W21, AArch64_W22_W23, AArch64_W24_W25, AArch64_W26_W27, AArch64_W28_W29, AArch64_W30_WZR,
  };
  // WSeqPairsClass Bit set.
  static const uint8_t WSeqPairsClassBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0xaa, 0xaa, 0xaa, 0x02,
  };
  // WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32common Register Class...
  static const MCPhysReg WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32common[] = {
    AArch64_W0_W1, AArch64_W2_W3, AArch64_W4_W5, AArch64_W6_W7, AArch64_W8_W9, AArch64_W10_W11, AArch64_W12_W13, AArch64_W14_W15, AArch64_W16_W17, AArch64_W18_W19, AArch64_W20_W21, AArch64_W22_W23, AArch64_W24_W25, AArch64_W26_W27, AArch64_W28_W29,
  };
  // WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32common Bit set.
  static const uint8_t WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xaa, 0xaa, 0xaa, 0x02,
  };
  // WSeqPairsAllClass_with_sube32_in_GPR32arg Register Class...
  static const MCPhysReg WSeqPairsAllClass_with_sube32_in_GPR32arg[] = {
    AArch64_W0_W1, AArch64_W1_W2, AArch64_W2_W3, AArch64_W3_W4, AArch64_W4_W5, AArch64_W5_W6, AArch64_W6_W7, AArch64_W7_W8,
  };
  // WSeqPairsAllClass_with_sube32_in_GPR32arg Bit set.
  static const uint8_t WSeqPairsAllClass_with_sube32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f,
  };
  // WSeqPairsAllClass_with_subo32_in_GPR32arg Register Class...
  static const MCPhysReg WSeqPairsAllClass_with_subo32_in_GPR32arg[] = {
    AArch64_W0_W1, AArch64_W1_W2, AArch64_W2_W3, AArch64_W3_W4, AArch64_W4_W5, AArch64_W5_W6, AArch64_W6_W7, AArch64_WZR_W0,
  };
  // WSeqPairsAllClass_with_subo32_in_GPR32arg Bit set.
  static const uint8_t WSeqPairsAllClass_with_subo32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x0f,
  };
  // WSeqPairsAllClass_with_sube32_in_GPR32arg_and_WSeqPairsAllClass_with_subo32_in_GPR32arg Register Class...
  static const MCPhysReg WSeqPairsAllClass_with_sube32_in_GPR32arg_and_WSeqPairsAllClass_with_subo32_in_GPR32arg[] = {
    AArch64_W0_W1, AArch64_W1_W2, AArch64_W2_W3, AArch64_W3_W4, AArch64_W4_W5, AArch64_W5_W6, AArch64_W6_W7,
  };
  // WSeqPairsAllClass_with_sube32_in_GPR32arg_and_WSeqPairsAllClass_with_subo32_in_GPR32arg Bit set.
  static const uint8_t WSeqPairsAllClass_with_sube32_in_GPR32arg_and_WSeqPairsAllClass_with_subo32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f,
  };
  // WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_W12_W13, AArch64_W13_W14, AArch64_W14_W15, AArch64_W15_W16,
  };
  // WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e,
  };
  // WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_W11_W12, AArch64_W12_W13, AArch64_W13_W14, AArch64_W14_W15,
  };
  // WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
  };
  // WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32arg Register Class...
  static const MCPhysReg WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32arg[] = {
    AArch64_W0_W1, AArch64_W2_W3, AArch64_W4_W5, AArch64_W6_W7,
  };
  // WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32arg Bit set.
  static const uint8_t WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x0a,
  };
  // WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_W12_W13, AArch64_W13_W14, AArch64_W14_W15,
  };
  // WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e,
  };
  // WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_W12_W13, AArch64_W14_W15,
  };
  // WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a,
  };
  // GPR64all Register Class...
  static const MCPhysReg GPR64all[] = {
    AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4, AArch64_X5, AArch64_X6, AArch64_X7, AArch64_X8, AArch64_X9, AArch64_X10, AArch64_X11, AArch64_X12, AArch64_X13, AArch64_X14, AArch64_X15, AArch64_X16, AArch64_X17, AArch64_X18, AArch64_X19, AArch64_X20, AArch64_X21, AArch64_X22, AArch64_X23, AArch64_X24, AArch64_X25, AArch64_X26, AArch64_X27, AArch64_X28, AArch64_FP, AArch64_LR, AArch64_XZR, AArch64_SP,
  };
  // GPR64all Bit set.
  static const uint8_t GPR64allBits[] = {
    0xc0, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff,
  };
  // FPR64 Register Class...
  static const MCPhysReg FPR64[] = {
    AArch64_D0, AArch64_D1, AArch64_D2, AArch64_D3, AArch64_D4, AArch64_D5, AArch64_D6, AArch64_D7, AArch64_D8, AArch64_D9, AArch64_D10, AArch64_D11, AArch64_D12, AArch64_D13, AArch64_D14, AArch64_D15, AArch64_D16, AArch64_D17, AArch64_D18, AArch64_D19, AArch64_D20, AArch64_D21, AArch64_D22, AArch64_D23, AArch64_D24, AArch64_D25, AArch64_D26, AArch64_D27, AArch64_D28, AArch64_D29, AArch64_D30, AArch64_D31,
  };
  // FPR64 Bit set.
  static const uint8_t FPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f,
  };
  // GPR64 Register Class...
  static const MCPhysReg GPR64[] = {
    AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4, AArch64_X5, AArch64_X6, AArch64_X7, AArch64_X8, AArch64_X9, AArch64_X10, AArch64_X11, AArch64_X12, AArch64_X13, AArch64_X14, AArch64_X15, AArch64_X16, AArch64_X17, AArch64_X18, AArch64_X19, AArch64_X20, AArch64_X21, AArch64_X22, AArch64_X23, AArch64_X24, AArch64_X25, AArch64_X26, AArch64_X27, AArch64_X28, AArch64_FP, AArch64_LR, AArch64_XZR,
  };
  // GPR64 Bit set.
  static const uint8_t GPR64Bits[] = {
    0xc0, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff,
  };
  // GPR64sp Register Class...
  static const MCPhysReg GPR64sp[] = {
    AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4, AArch64_X5, AArch64_X6, AArch64_X7, AArch64_X8, AArch64_X9, AArch64_X10, AArch64_X11, AArch64_X12, AArch64_X13, AArch64_X14, AArch64_X15, AArch64_X16, AArch64_X17, AArch64_X18, AArch64_X19, AArch64_X20, AArch64_X21, AArch64_X22, AArch64_X23, AArch64_X24, AArch64_X25, AArch64_X26, AArch64_X27, AArch64_X28, AArch64_FP, AArch64_LR, AArch64_SP,
  };
  // GPR64sp Bit set.
  static const uint8_t GPR64spBits[] = {
    0xc0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff,
  };
  // GPR64common Register Class...
  static const MCPhysReg GPR64common[] = {
    AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4, AArch64_X5, AArch64_X6, AArch64_X7, AArch64_X8, AArch64_X9, AArch64_X10, AArch64_X11, AArch64_X12, AArch64_X13, AArch64_X14, AArch64_X15, AArch64_X16, AArch64_X17, AArch64_X18, AArch64_X19, AArch64_X20, AArch64_X21, AArch64_X22, AArch64_X23, AArch64_X24, AArch64_X25, AArch64_X26, AArch64_X27, AArch64_X28, AArch64_FP, AArch64_LR,
  };
  // GPR64common Bit set.
  static const uint8_t GPR64commonBits[] = {
    0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff,
  };
  // GPR64noip Register Class...
  static const MCPhysReg GPR64noip[] = {
    AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4, AArch64_X5, AArch64_X6, AArch64_X7, AArch64_X8, AArch64_X9, AArch64_X10, AArch64_X11, AArch64_X12, AArch64_X13, AArch64_X14, AArch64_X15, AArch64_X18, AArch64_X19, AArch64_X20, AArch64_X21, AArch64_X22, AArch64_X23, AArch64_X24, AArch64_X25, AArch64_X26, AArch64_X27, AArch64_X28, AArch64_FP, AArch64_XZR,
  };
  // GPR64noip Bit set.
  static const uint8_t GPR64noipBits[] = {
    0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xe7, 0xff,
  };
  // GPR64common_and_GPR64noip Register Class...
  static const MCPhysReg GPR64common_and_GPR64noip[] = {
    AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4, AArch64_X5, AArch64_X6, AArch64_X7, AArch64_X8, AArch64_X9, AArch64_X10, AArch64_X11, AArch64_X12, AArch64_X13, AArch64_X14, AArch64_X15, AArch64_X18, AArch64_X19, AArch64_X20, AArch64_X21, AArch64_X22, AArch64_X23, AArch64_X24, AArch64_X25, AArch64_X26, AArch64_X27, AArch64_X28, AArch64_FP,
  };
  // GPR64common_and_GPR64noip Bit set.
  static const uint8_t GPR64common_and_GPR64noipBits[] = {
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xe7, 0xff,
  };
  // tcGPR64 Register Class...
  static const MCPhysReg tcGPR64[] = {
    AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4, AArch64_X5, AArch64_X6, AArch64_X7, AArch64_X8, AArch64_X9, AArch64_X10, AArch64_X11, AArch64_X12, AArch64_X13, AArch64_X14, AArch64_X15, AArch64_X16, AArch64_X17, AArch64_X18,
  };
  // tcGPR64 Bit set.
  static const uint8_t tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x3f,
  };
  // GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg GPR64noip_and_tcGPR64[] = {
    AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4, AArch64_X5, AArch64_X6, AArch64_X7, AArch64_X8, AArch64_X9, AArch64_X10, AArch64_X11, AArch64_X12, AArch64_X13, AArch64_X14, AArch64_X15, AArch64_X18,
  };
  // GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x27,
  };
  // FPR64_lo Register Class...
  static const MCPhysReg FPR64_lo[] = {
    AArch64_D0, AArch64_D1, AArch64_D2, AArch64_D3, AArch64_D4, AArch64_D5, AArch64_D6, AArch64_D7, AArch64_D8, AArch64_D9, AArch64_D10, AArch64_D11, AArch64_D12, AArch64_D13, AArch64_D14, AArch64_D15,
  };
  // FPR64_lo Bit set.
  static const uint8_t FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f,
  };
  // GPR64arg Register Class...
  static const MCPhysReg GPR64arg[] = {
    AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4, AArch64_X5, AArch64_X6, AArch64_X7,
  };
  // GPR64arg Bit set.
  static const uint8_t GPR64argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07,
  };
  // GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg GPR64_with_sub_32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X12, AArch64_X13, AArch64_X14, AArch64_X15,
  };
  // GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07,
  };
  // rtcGPR64 Register Class...
  static const MCPhysReg rtcGPR64[] = {
    AArch64_X16, AArch64_X17,
  };
  // rtcGPR64 Bit set.
  static const uint8_t rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
  };
  // GPR64sponly Register Class...
  static const MCPhysReg GPR64sponly[] = {
    AArch64_SP,
  };
  // GPR64sponly Bit set.
  static const uint8_t GPR64sponlyBits[] = {
    0x00, 0x02,
  };
  // DD Register Class...
  static const MCPhysReg DD[] = {
    AArch64_D0_D1, AArch64_D1_D2, AArch64_D2_D3, AArch64_D3_D4, AArch64_D4_D5, AArch64_D5_D6, AArch64_D6_D7, AArch64_D7_D8, AArch64_D8_D9, AArch64_D9_D10, AArch64_D10_D11, AArch64_D11_D12, AArch64_D12_D13, AArch64_D13_D14, AArch64_D14_D15, AArch64_D15_D16, AArch64_D16_D17, AArch64_D17_D18, AArch64_D18_D19, AArch64_D19_D20, AArch64_D20_D21, AArch64_D21_D22, AArch64_D22_D23, AArch64_D23_D24, AArch64_D24_D25, AArch64_D25_D26, AArch64_D26_D27, AArch64_D27_D28, AArch64_D28_D29, AArch64_D29_D30, AArch64_D30_D31, AArch64_D31_D0,
  };
  // DD Bit set.
  static const uint8_t DDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // XSeqPairsAllClass Register Class...
  static const MCPhysReg XSeqPairsAllClass[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X16_X17, AArch64_X17_X18, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_FP_LR, AArch64_LR_XZR, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass Bit set.
  static const uint8_t XSeqPairsAllClassBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_GPR32common[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X16_X17, AArch64_X17_X18, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_FP_LR, AArch64_LR_XZR,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_GPR32commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0xff, 0xff, 0xff, 0x07,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64common Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_subo64_in_GPR64common[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X16_X17, AArch64_X17_X18, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_FP_LR, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64common Bit set.
  static const uint8_t XSeqPairsAllClass_with_subo64_in_GPR64commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0xff, 0xff, 0xff, 0x07,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X16_X17, AArch64_X17_X18, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_FP_LR,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0xff, 0xff, 0xff, 0x07,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_FP_LR, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0xff, 0x7f, 0xfe, 0x07,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_subo64_in_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X17_X18, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_LR_XZR, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_subo64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x3f, 0xff, 0x07,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X17_X18, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_LR_XZR,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0xff, 0x3f, 0xff, 0x07,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64common_and_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_GPR64common_and_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_FP_LR,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64common_and_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_GPR64common_and_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0xff, 0x7f, 0xfe, 0x07,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X17_X18, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x3f, 0xff, 0x07,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X17_X18, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 0xff, 0x07,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x3f, 0xfe, 0x07,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X18_X19, AArch64_X19_X20, AArch64_X20_X21, AArch64_X21_X22, AArch64_X22_X23, AArch64_X23_X24, AArch64_X24_X25, AArch64_X25_X26, AArch64_X26_X27, AArch64_X27_X28, AArch64_X28_FP,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x3f, 0xfe, 0x07,
  };
  // XSeqPairsAllClass_with_sube64_in_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X16_X17, AArch64_X17_X18, AArch64_X18_X19,
  };
  // XSeqPairsAllClass_with_sube64_in_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x03,
  };
  // XSeqPairsAllClass_with_subo64_in_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_subo64_in_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X16_X17, AArch64_X17_X18, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_subo64_in_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_subo64_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xff, 0xff, 0x01,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X16_X17, AArch64_X17_X18,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x01,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xff, 0x7f,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16, AArch64_X18_X19,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x02,
  };
  // XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X17_X18, AArch64_X18_X19,
  };
  // XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x03,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X17_X18, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xff, 0x3f, 0x01,
  };
  // DD_with_dsub0_in_FPR64_lo Register Class...
  static const MCPhysReg DD_with_dsub0_in_FPR64_lo[] = {
    AArch64_D0_D1, AArch64_D1_D2, AArch64_D2_D3, AArch64_D3_D4, AArch64_D4_D5, AArch64_D5_D6, AArch64_D6_D7, AArch64_D7_D8, AArch64_D8_D9, AArch64_D9_D10, AArch64_D10_D11, AArch64_D11_D12, AArch64_D12_D13, AArch64_D13_D14, AArch64_D14_D15, AArch64_D15_D16,
  };
  // DD_with_dsub0_in_FPR64_lo Bit set.
  static const uint8_t DD_with_dsub0_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
  };
  // DD_with_dsub1_in_FPR64_lo Register Class...
  static const MCPhysReg DD_with_dsub1_in_FPR64_lo[] = {
    AArch64_D0_D1, AArch64_D1_D2, AArch64_D2_D3, AArch64_D3_D4, AArch64_D4_D5, AArch64_D5_D6, AArch64_D6_D7, AArch64_D7_D8, AArch64_D8_D9, AArch64_D9_D10, AArch64_D10_D11, AArch64_D11_D12, AArch64_D12_D13, AArch64_D13_D14, AArch64_D14_D15, AArch64_D31_D0,
  };
  // DD_with_dsub1_in_FPR64_lo Bit set.
  static const uint8_t DD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x00, 0x40,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X17_X18,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x01,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xff, 0x3f,
  };
  // XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X18_X19,
  };
  // XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x02,
  };
  // XSeqPairsClass Register Class...
  static const MCPhysReg XSeqPairsClass[] = {
    AArch64_X0_X1, AArch64_X2_X3, AArch64_X4_X5, AArch64_X6_X7, AArch64_X8_X9, AArch64_X10_X11, AArch64_X12_X13, AArch64_X14_X15, AArch64_X16_X17, AArch64_X18_X19, AArch64_X20_X21, AArch64_X22_X23, AArch64_X24_X25, AArch64_X26_X27, AArch64_X28_FP, AArch64_LR_XZR,
  };
  // XSeqPairsClass Bit set.
  static const uint8_t XSeqPairsClassBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0xaa, 0xaa, 0xaa, 0x02,
  };
  // DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo Register Class...
  static const MCPhysReg DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo[] = {
    AArch64_D0_D1, AArch64_D1_D2, AArch64_D2_D3, AArch64_D3_D4, AArch64_D4_D5, AArch64_D5_D6, AArch64_D6_D7, AArch64_D7_D8, AArch64_D8_D9, AArch64_D9_D10, AArch64_D10_D11, AArch64_D11_D12, AArch64_D12_D13, AArch64_D13_D14, AArch64_D14_D15,
  };
  // DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo Bit set.
  static const uint8_t DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f,
  };
  // XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32common Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32common[] = {
    AArch64_X0_X1, AArch64_X2_X3, AArch64_X4_X5, AArch64_X6_X7, AArch64_X8_X9, AArch64_X10_X11, AArch64_X12_X13, AArch64_X14_X15, AArch64_X16_X17, AArch64_X18_X19, AArch64_X20_X21, AArch64_X22_X23, AArch64_X24_X25, AArch64_X26_X27, AArch64_X28_FP,
  };
  // XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32common Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32commonBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xaa, 0xaa, 0xaa, 0x02,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8, AArch64_X8_X9, AArch64_X9_X10, AArch64_X10_X11, AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15,
  };
  // XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X2_X3, AArch64_X4_X5, AArch64_X6_X7, AArch64_X8_X9, AArch64_X10_X11, AArch64_X12_X13, AArch64_X14_X15, AArch64_X18_X19, AArch64_X20_X21, AArch64_X22_X23, AArch64_X24_X25, AArch64_X26_X27, AArch64_X28_FP, AArch64_LR_XZR,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0xaa, 0x2a, 0xaa, 0x02,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip[] = {
    AArch64_X0_X1, AArch64_X2_X3, AArch64_X4_X5, AArch64_X6_X7, AArch64_X8_X9, AArch64_X10_X11, AArch64_X12_X13, AArch64_X14_X15, AArch64_X18_X19, AArch64_X20_X21, AArch64_X22_X23, AArch64_X24_X25, AArch64_X26_X27, AArch64_X28_FP,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xaa, 0x2a, 0xaa, 0x02,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X2_X3, AArch64_X4_X5, AArch64_X6_X7, AArch64_X8_X9, AArch64_X10_X11, AArch64_X12_X13, AArch64_X14_X15, AArch64_X16_X17, AArch64_X18_X19,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_tcGPR64 Bit set.
  static const uint8_t XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xaa, 0xaa, 0x02,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X2_X3, AArch64_X4_X5, AArch64_X6_X7, AArch64_X8_X9, AArch64_X10_X11, AArch64_X12_X13, AArch64_X14_X15, AArch64_X18_X19,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xaa, 0x2a, 0x02,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X2_X3, AArch64_X4_X5, AArch64_X6_X7, AArch64_X8_X9, AArch64_X10_X11, AArch64_X12_X13, AArch64_X14_X15, AArch64_X16_X17,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_tcGPR64 Bit set.
  static const uint8_t XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xaa, 0xaa,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32arg Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_GPR32arg[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_X7_X8,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32arg Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7f,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64arg Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_subo64_in_GPR64arg[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7, AArch64_XZR_X0,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64arg Bit set.
  static const uint8_t XSeqPairsAllClass_with_subo64_in_GPR64argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x3f,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1, AArch64_X2_X3, AArch64_X4_X5, AArch64_X6_X7, AArch64_X8_X9, AArch64_X10_X11, AArch64_X12_X13, AArch64_X14_X15,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xaa, 0x2a,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32arg_and_XSeqPairsAllClass_with_subo64_in_GPR64arg Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_GPR32arg_and_XSeqPairsAllClass_with_subo64_in_GPR64arg[] = {
    AArch64_X0_X1, AArch64_X1_X2, AArch64_X2_X3, AArch64_X3_X4, AArch64_X4_X5, AArch64_X5_X6, AArch64_X6_X7,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32arg_and_XSeqPairsAllClass_with_subo64_in_GPR64arg Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_GPR32arg_and_XSeqPairsAllClass_with_subo64_in_GPR64argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f,
  };
  // XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15, AArch64_X15_X16,
  };
  // XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
  };
  // XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32arg Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32arg[] = {
    AArch64_X0_X1, AArch64_X2_X3, AArch64_X4_X5, AArch64_X6_X7,
  };
  // XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32arg Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x2a,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_subo64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X11_X12, AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15,
  };
  // XSeqPairsAllClass_with_subo64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t XSeqPairsAllClass_with_subo64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_with_sub_32_subo64_then_sub_32_in_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_GPR32common_with_sub_32_subo64_then_sub_32_in_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X12_X13, AArch64_X13_X14, AArch64_X14_X15,
  };
  // XSeqPairsAllClass_with_sub_32_in_GPR32common_with_sub_32_subo64_then_sub_32_in_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_GPR32common_with_sub_32_subo64_then_sub_32_in_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38,
  };
  // XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X12_X13, AArch64_X14_X15,
  };
  // XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28,
  };
  // XSeqPairsAllClass_with_sube64_in_rtcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_rtcGPR64[] = {
    AArch64_X16_X17, AArch64_X17_X18,
  };
  // XSeqPairsAllClass_with_sube64_in_rtcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01,
  };
  // XSeqPairsAllClass_with_subo64_in_rtcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_subo64_in_rtcGPR64[] = {
    AArch64_X15_X16, AArch64_X16_X17,
  };
  // XSeqPairsAllClass_with_subo64_in_rtcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_subo64_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
  };
  // XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15_and_XSeqPairsAllClass_with_subo64_in_rtcGPR64 Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15_and_XSeqPairsAllClass_with_subo64_in_rtcGPR64[] = {
    AArch64_X15_X16,
  };
  // XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15_and_XSeqPairsAllClass_with_subo64_in_rtcGPR64 Bit set.
  static const uint8_t XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15_and_XSeqPairsAllClass_with_subo64_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  };
  // XSeqPairsAllClass_with_sube64_in_rtcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Register Class...
  static const MCPhysReg XSeqPairsAllClass_with_sube64_in_rtcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noip[] = {
    AArch64_X17_X18,
  };
  // XSeqPairsAllClass_with_sube64_in_rtcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noip Bit set.
  static const uint8_t XSeqPairsAllClass_with_sube64_in_rtcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_rtcGPR64 Register Class...
  static const MCPhysReg XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_rtcGPR64[] = {
    AArch64_X16_X17,
  };
  // XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_rtcGPR64 Bit set.
  static const uint8_t XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  };
  // Capall Register Class...
  static const MCPhysReg Capall[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C16, AArch64_C17, AArch64_C18, AArch64_C19, AArch64_C20, AArch64_C21, AArch64_C22, AArch64_C23, AArch64_C24, AArch64_C25, AArch64_C26, AArch64_C27, AArch64_C28, AArch64_CFP, AArch64_CLR, AArch64_CSP, AArch64_CZR,
  };
  // Capall Bit set.
  static const uint8_t CapallBits[] = {
    0x1e, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x0f,
  };
  // Cap Register Class...
  static const MCPhysReg Cap[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C16, AArch64_C17, AArch64_C18, AArch64_C19, AArch64_C20, AArch64_C21, AArch64_C22, AArch64_C23, AArch64_C24, AArch64_C25, AArch64_C26, AArch64_C27, AArch64_C28, AArch64_CFP, AArch64_CLR, AArch64_CZR,
  };
  // Cap Bit set.
  static const uint8_t CapBits[] = {
    0x16, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x0f,
  };
  // Capsp Register Class...
  static const MCPhysReg Capsp[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C16, AArch64_C17, AArch64_C18, AArch64_C19, AArch64_C20, AArch64_C21, AArch64_C22, AArch64_C23, AArch64_C24, AArch64_C25, AArch64_C26, AArch64_C27, AArch64_C28, AArch64_CFP, AArch64_CLR, AArch64_CSP,
  };
  // Capsp Bit set.
  static const uint8_t CapspBits[] = {
    0x0e, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x0f,
  };
  // FPR128 Register Class...
  static const MCPhysReg FPR128[] = {
    AArch64_Q0, AArch64_Q1, AArch64_Q2, AArch64_Q3, AArch64_Q4, AArch64_Q5, AArch64_Q6, AArch64_Q7, AArch64_Q8, AArch64_Q9, AArch64_Q10, AArch64_Q11, AArch64_Q12, AArch64_Q13, AArch64_Q14, AArch64_Q15, AArch64_Q16, AArch64_Q17, AArch64_Q18, AArch64_Q19, AArch64_Q20, AArch64_Q21, AArch64_Q22, AArch64_Q23, AArch64_Q24, AArch64_Q25, AArch64_Q26, AArch64_Q27, AArch64_Q28, AArch64_Q29, AArch64_Q30, AArch64_Q31,
  };
  // FPR128 Bit set.
  static const uint8_t FPR128Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f,
  };
  // ZPR Register Class...
  static const MCPhysReg ZPR[] = {
    AArch64_Z0, AArch64_Z1, AArch64_Z2, AArch64_Z3, AArch64_Z4, AArch64_Z5, AArch64_Z6, AArch64_Z7, AArch64_Z8, AArch64_Z9, AArch64_Z10, AArch64_Z11, AArch64_Z12, AArch64_Z13, AArch64_Z14, AArch64_Z15, AArch64_Z16, AArch64_Z17, AArch64_Z18, AArch64_Z19, AArch64_Z20, AArch64_Z21, AArch64_Z22, AArch64_Z23, AArch64_Z24, AArch64_Z25, AArch64_Z26, AArch64_Z27, AArch64_Z28, AArch64_Z29, AArch64_Z30, AArch64_Z31,
  };
  // ZPR Bit set.
  static const uint8_t ZPRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  };
  // Cap_and_Capsp Register Class...
  static const MCPhysReg Cap_and_Capsp[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C16, AArch64_C17, AArch64_C18, AArch64_C19, AArch64_C20, AArch64_C21, AArch64_C22, AArch64_C23, AArch64_C24, AArch64_C25, AArch64_C26, AArch64_C27, AArch64_C28, AArch64_CFP, AArch64_CLR,
  };
  // Cap_and_Capsp Bit set.
  static const uint8_t Cap_and_CapspBits[] = {
    0x06, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x0f,
  };
  // Capcommon Register Class...
  static const MCPhysReg Capcommon[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C16, AArch64_C17, AArch64_C18, AArch64_C19, AArch64_C20, AArch64_C21, AArch64_C22, AArch64_C23, AArch64_C24, AArch64_C25, AArch64_C26, AArch64_C27, AArch64_C28, AArch64_CFP,
  };
  // Capcommon Bit set.
  static const uint8_t CapcommonBits[] = {
    0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x0f,
  };
  // Cap_with_sub_64_in_GPR64noip Register Class...
  static const MCPhysReg Cap_with_sub_64_in_GPR64noip[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C18, AArch64_C19, AArch64_C20, AArch64_C21, AArch64_C22, AArch64_C23, AArch64_C24, AArch64_C25, AArch64_C26, AArch64_C27, AArch64_C28, AArch64_CFP, AArch64_CZR,
  };
  // Cap_with_sub_64_in_GPR64noip Bit set.
  static const uint8_t Cap_with_sub_64_in_GPR64noipBits[] = {
    0x12, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0xfe, 0x0f,
  };
  // Capcommon_and_Cap_with_sub_64_in_GPR64noip Register Class...
  static const MCPhysReg Capcommon_and_Cap_with_sub_64_in_GPR64noip[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C18, AArch64_C19, AArch64_C20, AArch64_C21, AArch64_C22, AArch64_C23, AArch64_C24, AArch64_C25, AArch64_C26, AArch64_C27, AArch64_C28, AArch64_CFP,
  };
  // Capcommon_and_Cap_with_sub_64_in_GPR64noip Bit set.
  static const uint8_t Capcommon_and_Cap_with_sub_64_in_GPR64noipBits[] = {
    0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0xfe, 0x0f,
  };
  // tcCapDesc Register Class...
  static const MCPhysReg tcCapDesc[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C16, AArch64_C18, AArch64_C28, AArch64_CFP,
  };
  // tcCapDesc Bit set.
  static const uint8_t tcCapDescBits[] = {
    0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x02, 0x08,
  };
  // tcCap Register Class...
  static const MCPhysReg tcCap[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C16, AArch64_C17, AArch64_C18,
  };
  // tcCap Bit set.
  static const uint8_t tcCapBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x03,
  };
  // tcCapDesc_and_Cap_with_sub_64_in_GPR64noip Register Class...
  static const MCPhysReg tcCapDesc_and_Cap_with_sub_64_in_GPR64noip[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C18, AArch64_C28, AArch64_CFP,
  };
  // tcCapDesc_and_Cap_with_sub_64_in_GPR64noip Bit set.
  static const uint8_t tcCapDesc_and_Cap_with_sub_64_in_GPR64noipBits[] = {
    0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x02, 0x08,
  };
  // tcCap_and_tcCapDesc Register Class...
  static const MCPhysReg tcCap_and_tcCapDesc[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C16, AArch64_C18,
  };
  // tcCap_and_tcCapDesc Bit set.
  static const uint8_t tcCap_and_tcCapDescBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x02,
  };
  // tcCap_and_Cap_with_sub_64_in_GPR64noip Register Class...
  static const MCPhysReg tcCap_and_Cap_with_sub_64_in_GPR64noip[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7, AArch64_C8, AArch64_C9, AArch64_C10, AArch64_C11, AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15, AArch64_C18,
  };
  // tcCap_and_Cap_with_sub_64_in_GPR64noip Bit set.
  static const uint8_t tcCap_and_Cap_with_sub_64_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x02,
  };
  // FPR128_lo Register Class...
  static const MCPhysReg FPR128_lo[] = {
    AArch64_Q0, AArch64_Q1, AArch64_Q2, AArch64_Q3, AArch64_Q4, AArch64_Q5, AArch64_Q6, AArch64_Q7, AArch64_Q8, AArch64_Q9, AArch64_Q10, AArch64_Q11, AArch64_Q12, AArch64_Q13, AArch64_Q14, AArch64_Q15,
  };
  // FPR128_lo Bit set.
  static const uint8_t FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f,
  };
  // MPR128 Register Class...
  static const MCPhysReg MPR128[] = {
    AArch64_ZAQ0, AArch64_ZAQ1, AArch64_ZAQ2, AArch64_ZAQ3, AArch64_ZAQ4, AArch64_ZAQ5, AArch64_ZAQ6, AArch64_ZAQ7, AArch64_ZAQ8, AArch64_ZAQ9, AArch64_ZAQ10, AArch64_ZAQ11, AArch64_ZAQ12, AArch64_ZAQ13, AArch64_ZAQ14, AArch64_ZAQ15,
  };
  // MPR128 Bit set.
  static const uint8_t MPR128Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07,
  };
  // ZPR_4b Register Class...
  static const MCPhysReg ZPR_4b[] = {
    AArch64_Z0, AArch64_Z1, AArch64_Z2, AArch64_Z3, AArch64_Z4, AArch64_Z5, AArch64_Z6, AArch64_Z7, AArch64_Z8, AArch64_Z9, AArch64_Z10, AArch64_Z11, AArch64_Z12, AArch64_Z13, AArch64_Z14, AArch64_Z15,
  };
  // ZPR_4b Bit set.
  static const uint8_t ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
  };
  // Cap_with_sub_32_in_GPR32arg Register Class...
  static const MCPhysReg Cap_with_sub_32_in_GPR32arg[] = {
    AArch64_C0, AArch64_C1, AArch64_C2, AArch64_C3, AArch64_C4, AArch64_C5, AArch64_C6, AArch64_C7,
  };
  // Cap_with_sub_32_in_GPR32arg Bit set.
  static const uint8_t Cap_with_sub_32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7f,
  };
  // ZPR_3b Register Class...
  static const MCPhysReg ZPR_3b[] = {
    AArch64_Z0, AArch64_Z1, AArch64_Z2, AArch64_Z3, AArch64_Z4, AArch64_Z5, AArch64_Z6, AArch64_Z7,
  };
  // ZPR_3b Bit set.
  static const uint8_t ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
  };
  // Cap_with_sub_32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg Cap_with_sub_32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_C12, AArch64_C13, AArch64_C14, AArch64_C15,
  };
  // Cap_with_sub_32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t Cap_with_sub_32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
  };
  // Cap_with_sub_64_in_rtcGPR64 Register Class...
  static const MCPhysReg Cap_with_sub_64_in_rtcGPR64[] = {
    AArch64_C16, AArch64_C17,
  };
  // Cap_with_sub_64_in_rtcGPR64 Bit set.
  static const uint8_t Cap_with_sub_64_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01,
  };
  // Capall_with_sub_32_in_GPR32sponly Register Class...
  static const MCPhysReg Capall_with_sub_32_in_GPR32sponly[] = {
    AArch64_CSP,
  };
  // Capall_with_sub_32_in_GPR32sponly Bit set.
  static const uint8_t Capall_with_sub_32_in_GPR32sponlyBits[] = {
    0x08,
  };
  // tcCapDesc_and_Cap_with_sub_64_in_rtcGPR64 Register Class...
  static const MCPhysReg tcCapDesc_and_Cap_with_sub_64_in_rtcGPR64[] = {
    AArch64_C16,
  };
  // tcCapDesc_and_Cap_with_sub_64_in_rtcGPR64 Bit set.
  static const uint8_t tcCapDesc_and_Cap_with_sub_64_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  };
  // DDD Register Class...
  static const MCPhysReg DDD[] = {
    AArch64_D0_D1_D2, AArch64_D1_D2_D3, AArch64_D2_D3_D4, AArch64_D3_D4_D5, AArch64_D4_D5_D6, AArch64_D5_D6_D7, AArch64_D6_D7_D8, AArch64_D7_D8_D9, AArch64_D8_D9_D10, AArch64_D9_D10_D11, AArch64_D10_D11_D12, AArch64_D11_D12_D13, AArch64_D12_D13_D14, AArch64_D13_D14_D15, AArch64_D14_D15_D16, AArch64_D15_D16_D17, AArch64_D16_D17_D18, AArch64_D17_D18_D19, AArch64_D18_D19_D20, AArch64_D19_D20_D21, AArch64_D20_D21_D22, AArch64_D21_D22_D23, AArch64_D22_D23_D24, AArch64_D23_D24_D25, AArch64_D24_D25_D26, AArch64_D25_D26_D27, AArch64_D26_D27_D28, AArch64_D27_D28_D29, AArch64_D28_D29_D30, AArch64_D29_D30_D31, AArch64_D30_D31_D0, AArch64_D31_D0_D1,
  };
  // DDD Bit set.
  static const uint8_t DDDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // DDD_with_dsub0_in_FPR64_lo Register Class...
  static const MCPhysReg DDD_with_dsub0_in_FPR64_lo[] = {
    AArch64_D0_D1_D2, AArch64_D1_D2_D3, AArch64_D2_D3_D4, AArch64_D3_D4_D5, AArch64_D4_D5_D6, AArch64_D5_D6_D7, AArch64_D6_D7_D8, AArch64_D7_D8_D9, AArch64_D8_D9_D10, AArch64_D9_D10_D11, AArch64_D10_D11_D12, AArch64_D11_D12_D13, AArch64_D12_D13_D14, AArch64_D13_D14_D15, AArch64_D14_D15_D16, AArch64_D15_D16_D17,
  };
  // DDD_with_dsub0_in_FPR64_lo Bit set.
  static const uint8_t DDD_with_dsub0_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
  };
  // DDD_with_dsub1_in_FPR64_lo Register Class...
  static const MCPhysReg DDD_with_dsub1_in_FPR64_lo[] = {
    AArch64_D0_D1_D2, AArch64_D1_D2_D3, AArch64_D2_D3_D4, AArch64_D3_D4_D5, AArch64_D4_D5_D6, AArch64_D5_D6_D7, AArch64_D6_D7_D8, AArch64_D7_D8_D9, AArch64_D8_D9_D10, AArch64_D9_D10_D11, AArch64_D10_D11_D12, AArch64_D11_D12_D13, AArch64_D12_D13_D14, AArch64_D13_D14_D15, AArch64_D14_D15_D16, AArch64_D31_D0_D1,
  };
  // DDD_with_dsub1_in_FPR64_lo Bit set.
  static const uint8_t DDD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x00, 0x40,
  };
  // DDD_with_dsub2_in_FPR64_lo Register Class...
  static const MCPhysReg DDD_with_dsub2_in_FPR64_lo[] = {
    AArch64_D0_D1_D2, AArch64_D1_D2_D3, AArch64_D2_D3_D4, AArch64_D3_D4_D5, AArch64_D4_D5_D6, AArch64_D5_D6_D7, AArch64_D6_D7_D8, AArch64_D7_D8_D9, AArch64_D8_D9_D10, AArch64_D9_D10_D11, AArch64_D10_D11_D12, AArch64_D11_D12_D13, AArch64_D12_D13_D14, AArch64_D13_D14_D15, AArch64_D30_D31_D0, AArch64_D31_D0_D1,
  };
  // DDD_with_dsub2_in_FPR64_lo Bit set.
  static const uint8_t DDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x60,
  };
  // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo Register Class...
  static const MCPhysReg DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo[] = {
    AArch64_D0_D1_D2, AArch64_D1_D2_D3, AArch64_D2_D3_D4, AArch64_D3_D4_D5, AArch64_D4_D5_D6, AArch64_D5_D6_D7, AArch64_D6_D7_D8, AArch64_D7_D8_D9, AArch64_D8_D9_D10, AArch64_D9_D10_D11, AArch64_D10_D11_D12, AArch64_D11_D12_D13, AArch64_D12_D13_D14, AArch64_D13_D14_D15, AArch64_D14_D15_D16,
  };
  // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo Bit set.
  static const uint8_t DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f,
  };
  // DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo Register Class...
  static const MCPhysReg DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo[] = {
    AArch64_D0_D1_D2, AArch64_D1_D2_D3, AArch64_D2_D3_D4, AArch64_D3_D4_D5, AArch64_D4_D5_D6, AArch64_D5_D6_D7, AArch64_D6_D7_D8, AArch64_D7_D8_D9, AArch64_D8_D9_D10, AArch64_D9_D10_D11, AArch64_D10_D11_D12, AArch64_D11_D12_D13, AArch64_D12_D13_D14, AArch64_D13_D14_D15, AArch64_D31_D0_D1,
  };
  // DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo Bit set.
  static const uint8_t DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x40,
  };
  // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo Register Class...
  static const MCPhysReg DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo[] = {
    AArch64_D0_D1_D2, AArch64_D1_D2_D3, AArch64_D2_D3_D4, AArch64_D3_D4_D5, AArch64_D4_D5_D6, AArch64_D5_D6_D7, AArch64_D6_D7_D8, AArch64_D7_D8_D9, AArch64_D8_D9_D10, AArch64_D9_D10_D11, AArch64_D10_D11_D12, AArch64_D11_D12_D13, AArch64_D12_D13_D14, AArch64_D13_D14_D15,
  };
  // DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo Bit set.
  static const uint8_t DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f,
  };
  // DDDD Register Class...
  static const MCPhysReg DDDD[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D13_D14_D15_D16, AArch64_D14_D15_D16_D17, AArch64_D15_D16_D17_D18, AArch64_D16_D17_D18_D19, AArch64_D17_D18_D19_D20, AArch64_D18_D19_D20_D21, AArch64_D19_D20_D21_D22, AArch64_D20_D21_D22_D23, AArch64_D21_D22_D23_D24, AArch64_D22_D23_D24_D25, AArch64_D23_D24_D25_D26, AArch64_D24_D25_D26_D27, AArch64_D25_D26_D27_D28, AArch64_D26_D27_D28_D29, AArch64_D27_D28_D29_D30, AArch64_D28_D29_D30_D31, AArch64_D29_D30_D31_D0, AArch64_D30_D31_D0_D1, AArch64_D31_D0_D1_D2,
  };
  // DDDD Bit set.
  static const uint8_t DDDDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // DDDD_with_dsub0_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub0_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D13_D14_D15_D16, AArch64_D14_D15_D16_D17, AArch64_D15_D16_D17_D18,
  };
  // DDDD_with_dsub0_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub0_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
  };
  // DDDD_with_dsub1_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub1_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D13_D14_D15_D16, AArch64_D14_D15_D16_D17, AArch64_D31_D0_D1_D2,
  };
  // DDDD_with_dsub1_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x00, 0x40,
  };
  // DDDD_with_dsub2_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub2_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D13_D14_D15_D16, AArch64_D30_D31_D0_D1, AArch64_D31_D0_D1_D2,
  };
  // DDDD_with_dsub2_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x60,
  };
  // DDDD_with_dsub3_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub3_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D29_D30_D31_D0, AArch64_D30_D31_D0_D1, AArch64_D31_D0_D1_D2,
  };
  // DDDD_with_dsub3_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub3_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x0f, 0x00, 0x70,
  };
  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D13_D14_D15_D16, AArch64_D14_D15_D16_D17,
  };
  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f,
  };
  // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D13_D14_D15_D16, AArch64_D31_D0_D1_D2,
  };
  // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x40,
  };
  // DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D30_D31_D0_D1, AArch64_D31_D0_D1_D2,
  };
  // DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x0f, 0x00, 0x60,
  };
  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D13_D14_D15_D16,
  };
  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f,
  };
  // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15, AArch64_D31_D0_D1_D2,
  };
  // DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x0f, 0x00, 0x40,
  };
  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Register Class...
  static const MCPhysReg DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo[] = {
    AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5, AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8, AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11, AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14, AArch64_D12_D13_D14_D15,
  };
  // DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo Bit set.
  static const uint8_t DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x0f,
  };
  // QQ Register Class...
  static const MCPhysReg QQ[] = {
    AArch64_Q0_Q1, AArch64_Q1_Q2, AArch64_Q2_Q3, AArch64_Q3_Q4, AArch64_Q4_Q5, AArch64_Q5_Q6, AArch64_Q6_Q7, AArch64_Q7_Q8, AArch64_Q8_Q9, AArch64_Q9_Q10, AArch64_Q10_Q11, AArch64_Q11_Q12, AArch64_Q12_Q13, AArch64_Q13_Q14, AArch64_Q14_Q15, AArch64_Q15_Q16, AArch64_Q16_Q17, AArch64_Q17_Q18, AArch64_Q18_Q19, AArch64_Q19_Q20, AArch64_Q20_Q21, AArch64_Q21_Q22, AArch64_Q22_Q23, AArch64_Q23_Q24, AArch64_Q24_Q25, AArch64_Q25_Q26, AArch64_Q26_Q27, AArch64_Q27_Q28, AArch64_Q28_Q29, AArch64_Q29_Q30, AArch64_Q30_Q31, AArch64_Q31_Q0,
  };
  // QQ Bit set.
  static const uint8_t QQBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // ZPR2 Register Class...
  static const MCPhysReg ZPR2[] = {
    AArch64_Z0_Z1, AArch64_Z1_Z2, AArch64_Z2_Z3, AArch64_Z3_Z4, AArch64_Z4_Z5, AArch64_Z5_Z6, AArch64_Z6_Z7, AArch64_Z7_Z8, AArch64_Z8_Z9, AArch64_Z9_Z10, AArch64_Z10_Z11, AArch64_Z11_Z12, AArch64_Z12_Z13, AArch64_Z13_Z14, AArch64_Z14_Z15, AArch64_Z15_Z16, AArch64_Z16_Z17, AArch64_Z17_Z18, AArch64_Z18_Z19, AArch64_Z19_Z20, AArch64_Z20_Z21, AArch64_Z21_Z22, AArch64_Z22_Z23, AArch64_Z23_Z24, AArch64_Z24_Z25, AArch64_Z25_Z26, AArch64_Z26_Z27, AArch64_Z27_Z28, AArch64_Z28_Z29, AArch64_Z29_Z30, AArch64_Z30_Z31, AArch64_Z31_Z0,
  };
  // ZPR2 Bit set.
  static const uint8_t ZPR2Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07,
  };
  // QQ_with_dsub_in_FPR64_lo Register Class...
  static const MCPhysReg QQ_with_dsub_in_FPR64_lo[] = {
    AArch64_Q0_Q1, AArch64_Q1_Q2, AArch64_Q2_Q3, AArch64_Q3_Q4, AArch64_Q4_Q5, AArch64_Q5_Q6, AArch64_Q6_Q7, AArch64_Q7_Q8, AArch64_Q8_Q9, AArch64_Q9_Q10, AArch64_Q10_Q11, AArch64_Q11_Q12, AArch64_Q12_Q13, AArch64_Q13_Q14, AArch64_Q14_Q15, AArch64_Q15_Q16,
  };
  // QQ_with_dsub_in_FPR64_lo Bit set.
  static const uint8_t QQ_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
  };
  // QQ_with_qsub1_in_FPR128_lo Register Class...
  static const MCPhysReg QQ_with_qsub1_in_FPR128_lo[] = {
    AArch64_Q0_Q1, AArch64_Q1_Q2, AArch64_Q2_Q3, AArch64_Q3_Q4, AArch64_Q4_Q5, AArch64_Q5_Q6, AArch64_Q6_Q7, AArch64_Q7_Q8, AArch64_Q8_Q9, AArch64_Q9_Q10, AArch64_Q10_Q11, AArch64_Q11_Q12, AArch64_Q12_Q13, AArch64_Q13_Q14, AArch64_Q14_Q15, AArch64_Q31_Q0,
  };
  // QQ_with_qsub1_in_FPR128_lo Bit set.
  static const uint8_t QQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x00, 0x40,
  };
  // ZPR2_with_dsub_in_FPR64_lo Register Class...
  static const MCPhysReg ZPR2_with_dsub_in_FPR64_lo[] = {
    AArch64_Z0_Z1, AArch64_Z1_Z2, AArch64_Z2_Z3, AArch64_Z3_Z4, AArch64_Z4_Z5, AArch64_Z5_Z6, AArch64_Z6_Z7, AArch64_Z7_Z8, AArch64_Z8_Z9, AArch64_Z9_Z10, AArch64_Z10_Z11, AArch64_Z11_Z12, AArch64_Z12_Z13, AArch64_Z13_Z14, AArch64_Z14_Z15, AArch64_Z15_Z16,
  };
  // ZPR2_with_dsub_in_FPR64_lo Bit set.
  static const uint8_t ZPR2_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07,
  };
  // ZPR2_with_zsub1_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR2_with_zsub1_in_ZPR_4b[] = {
    AArch64_Z0_Z1, AArch64_Z1_Z2, AArch64_Z2_Z3, AArch64_Z3_Z4, AArch64_Z4_Z5, AArch64_Z5_Z6, AArch64_Z6_Z7, AArch64_Z7_Z8, AArch64_Z8_Z9, AArch64_Z9_Z10, AArch64_Z10_Z11, AArch64_Z11_Z12, AArch64_Z12_Z13, AArch64_Z13_Z14, AArch64_Z14_Z15, AArch64_Z31_Z0,
  };
  // ZPR2_with_zsub1_in_ZPR_4b Bit set.
  static const uint8_t ZPR2_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03, 0x00, 0x04,
  };
  // QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo Register Class...
  static const MCPhysReg QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo[] = {
    AArch64_Q0_Q1, AArch64_Q1_Q2, AArch64_Q2_Q3, AArch64_Q3_Q4, AArch64_Q4_Q5, AArch64_Q5_Q6, AArch64_Q6_Q7, AArch64_Q7_Q8, AArch64_Q8_Q9, AArch64_Q9_Q10, AArch64_Q10_Q11, AArch64_Q11_Q12, AArch64_Q12_Q13, AArch64_Q13_Q14, AArch64_Q14_Q15,
  };
  // QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo Bit set.
  static const uint8_t QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f,
  };
  // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b[] = {
    AArch64_Z0_Z1, AArch64_Z1_Z2, AArch64_Z2_Z3, AArch64_Z3_Z4, AArch64_Z4_Z5, AArch64_Z5_Z6, AArch64_Z6_Z7, AArch64_Z7_Z8, AArch64_Z8_Z9, AArch64_Z9_Z10, AArch64_Z10_Z11, AArch64_Z11_Z12, AArch64_Z12_Z13, AArch64_Z13_Z14, AArch64_Z14_Z15,
  };
  // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b Bit set.
  static const uint8_t ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03,
  };
  // ZPR2_with_zsub0_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR2_with_zsub0_in_ZPR_3b[] = {
    AArch64_Z0_Z1, AArch64_Z1_Z2, AArch64_Z2_Z3, AArch64_Z3_Z4, AArch64_Z4_Z5, AArch64_Z5_Z6, AArch64_Z6_Z7, AArch64_Z7_Z8,
  };
  // ZPR2_with_zsub0_in_ZPR_3b Bit set.
  static const uint8_t ZPR2_with_zsub0_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07,
  };
  // ZPR2_with_zsub1_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR2_with_zsub1_in_ZPR_3b[] = {
    AArch64_Z0_Z1, AArch64_Z1_Z2, AArch64_Z2_Z3, AArch64_Z3_Z4, AArch64_Z4_Z5, AArch64_Z5_Z6, AArch64_Z6_Z7, AArch64_Z31_Z0,
  };
  // ZPR2_with_zsub1_in_ZPR_3b Bit set.
  static const uint8_t ZPR2_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 0x00, 0x00, 0x04,
  };
  // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b[] = {
    AArch64_Z0_Z1, AArch64_Z1_Z2, AArch64_Z2_Z3, AArch64_Z3_Z4, AArch64_Z4_Z5, AArch64_Z5_Z6, AArch64_Z6_Z7,
  };
  // ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b Bit set.
  static const uint8_t ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03,
  };
  // MPR64 Register Class...
  static const MCPhysReg MPR64[] = {
    AArch64_ZAD0, AArch64_ZAD1, AArch64_ZAD2, AArch64_ZAD3, AArch64_ZAD4, AArch64_ZAD5, AArch64_ZAD6, AArch64_ZAD7,
  };
  // MPR64 Bit set.
  static const uint8_t MPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01,
  };
  // QQQ Register Class...
  static const MCPhysReg QQQ[] = {
    AArch64_Q0_Q1_Q2, AArch64_Q1_Q2_Q3, AArch64_Q2_Q3_Q4, AArch64_Q3_Q4_Q5, AArch64_Q4_Q5_Q6, AArch64_Q5_Q6_Q7, AArch64_Q6_Q7_Q8, AArch64_Q7_Q8_Q9, AArch64_Q8_Q9_Q10, AArch64_Q9_Q10_Q11, AArch64_Q10_Q11_Q12, AArch64_Q11_Q12_Q13, AArch64_Q12_Q13_Q14, AArch64_Q13_Q14_Q15, AArch64_Q14_Q15_Q16, AArch64_Q15_Q16_Q17, AArch64_Q16_Q17_Q18, AArch64_Q17_Q18_Q19, AArch64_Q18_Q19_Q20, AArch64_Q19_Q20_Q21, AArch64_Q20_Q21_Q22, AArch64_Q21_Q22_Q23, AArch64_Q22_Q23_Q24, AArch64_Q23_Q24_Q25, AArch64_Q24_Q25_Q26, AArch64_Q25_Q26_Q27, AArch64_Q26_Q27_Q28, AArch64_Q27_Q28_Q29, AArch64_Q28_Q29_Q30, AArch64_Q29_Q30_Q31, AArch64_Q30_Q31_Q0, AArch64_Q31_Q0_Q1,
  };
  // QQQ Bit set.
  static const uint8_t QQQBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // ZPR3 Register Class...
  static const MCPhysReg ZPR3[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8, AArch64_Z7_Z8_Z9, AArch64_Z8_Z9_Z10, AArch64_Z9_Z10_Z11, AArch64_Z10_Z11_Z12, AArch64_Z11_Z12_Z13, AArch64_Z12_Z13_Z14, AArch64_Z13_Z14_Z15, AArch64_Z14_Z15_Z16, AArch64_Z15_Z16_Z17, AArch64_Z16_Z17_Z18, AArch64_Z17_Z18_Z19, AArch64_Z18_Z19_Z20, AArch64_Z19_Z20_Z21, AArch64_Z20_Z21_Z22, AArch64_Z21_Z22_Z23, AArch64_Z22_Z23_Z24, AArch64_Z23_Z24_Z25, AArch64_Z24_Z25_Z26, AArch64_Z25_Z26_Z27, AArch64_Z26_Z27_Z28, AArch64_Z27_Z28_Z29, AArch64_Z28_Z29_Z30, AArch64_Z29_Z30_Z31, AArch64_Z30_Z31_Z0, AArch64_Z31_Z0_Z1,
  };
  // ZPR3 Bit set.
  static const uint8_t ZPR3Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07,
  };
  // QQQ_with_dsub_in_FPR64_lo Register Class...
  static const MCPhysReg QQQ_with_dsub_in_FPR64_lo[] = {
    AArch64_Q0_Q1_Q2, AArch64_Q1_Q2_Q3, AArch64_Q2_Q3_Q4, AArch64_Q3_Q4_Q5, AArch64_Q4_Q5_Q6, AArch64_Q5_Q6_Q7, AArch64_Q6_Q7_Q8, AArch64_Q7_Q8_Q9, AArch64_Q8_Q9_Q10, AArch64_Q9_Q10_Q11, AArch64_Q10_Q11_Q12, AArch64_Q11_Q12_Q13, AArch64_Q12_Q13_Q14, AArch64_Q13_Q14_Q15, AArch64_Q14_Q15_Q16, AArch64_Q15_Q16_Q17,
  };
  // QQQ_with_dsub_in_FPR64_lo Bit set.
  static const uint8_t QQQ_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
  };
  // QQQ_with_qsub1_in_FPR128_lo Register Class...
  static const MCPhysReg QQQ_with_qsub1_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2, AArch64_Q1_Q2_Q3, AArch64_Q2_Q3_Q4, AArch64_Q3_Q4_Q5, AArch64_Q4_Q5_Q6, AArch64_Q5_Q6_Q7, AArch64_Q6_Q7_Q8, AArch64_Q7_Q8_Q9, AArch64_Q8_Q9_Q10, AArch64_Q9_Q10_Q11, AArch64_Q10_Q11_Q12, AArch64_Q11_Q12_Q13, AArch64_Q12_Q13_Q14, AArch64_Q13_Q14_Q15, AArch64_Q14_Q15_Q16, AArch64_Q31_Q0_Q1,
  };
  // QQQ_with_qsub1_in_FPR128_lo Bit set.
  static const uint8_t QQQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x00, 0x40,
  };
  // QQQ_with_qsub2_in_FPR128_lo Register Class...
  static const MCPhysReg QQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2, AArch64_Q1_Q2_Q3, AArch64_Q2_Q3_Q4, AArch64_Q3_Q4_Q5, AArch64_Q4_Q5_Q6, AArch64_Q5_Q6_Q7, AArch64_Q6_Q7_Q8, AArch64_Q7_Q8_Q9, AArch64_Q8_Q9_Q10, AArch64_Q9_Q10_Q11, AArch64_Q10_Q11_Q12, AArch64_Q11_Q12_Q13, AArch64_Q12_Q13_Q14, AArch64_Q13_Q14_Q15, AArch64_Q30_Q31_Q0, AArch64_Q31_Q0_Q1,
  };
  // QQQ_with_qsub2_in_FPR128_lo Bit set.
  static const uint8_t QQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x60,
  };
  // ZPR3_with_dsub_in_FPR64_lo Register Class...
  static const MCPhysReg ZPR3_with_dsub_in_FPR64_lo[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8, AArch64_Z7_Z8_Z9, AArch64_Z8_Z9_Z10, AArch64_Z9_Z10_Z11, AArch64_Z10_Z11_Z12, AArch64_Z11_Z12_Z13, AArch64_Z12_Z13_Z14, AArch64_Z13_Z14_Z15, AArch64_Z14_Z15_Z16, AArch64_Z15_Z16_Z17,
  };
  // ZPR3_with_dsub_in_FPR64_lo Bit set.
  static const uint8_t ZPR3_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07,
  };
  // ZPR3_with_zsub1_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR3_with_zsub1_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8, AArch64_Z7_Z8_Z9, AArch64_Z8_Z9_Z10, AArch64_Z9_Z10_Z11, AArch64_Z10_Z11_Z12, AArch64_Z11_Z12_Z13, AArch64_Z12_Z13_Z14, AArch64_Z13_Z14_Z15, AArch64_Z14_Z15_Z16, AArch64_Z31_Z0_Z1,
  };
  // ZPR3_with_zsub1_in_ZPR_4b Bit set.
  static const uint8_t ZPR3_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03, 0x00, 0x04,
  };
  // ZPR3_with_zsub2_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR3_with_zsub2_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8, AArch64_Z7_Z8_Z9, AArch64_Z8_Z9_Z10, AArch64_Z9_Z10_Z11, AArch64_Z10_Z11_Z12, AArch64_Z11_Z12_Z13, AArch64_Z12_Z13_Z14, AArch64_Z13_Z14_Z15, AArch64_Z30_Z31_Z0, AArch64_Z31_Z0_Z1,
  };
  // ZPR3_with_zsub2_in_ZPR_4b Bit set.
  static const uint8_t ZPR3_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x01, 0x00, 0x06,
  };
  // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo Register Class...
  static const MCPhysReg QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2, AArch64_Q1_Q2_Q3, AArch64_Q2_Q3_Q4, AArch64_Q3_Q4_Q5, AArch64_Q4_Q5_Q6, AArch64_Q5_Q6_Q7, AArch64_Q6_Q7_Q8, AArch64_Q7_Q8_Q9, AArch64_Q8_Q9_Q10, AArch64_Q9_Q10_Q11, AArch64_Q10_Q11_Q12, AArch64_Q11_Q12_Q13, AArch64_Q12_Q13_Q14, AArch64_Q13_Q14_Q15, AArch64_Q14_Q15_Q16,
  };
  // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo Bit set.
  static const uint8_t QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f,
  };
  // QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo Register Class...
  static const MCPhysReg QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2, AArch64_Q1_Q2_Q3, AArch64_Q2_Q3_Q4, AArch64_Q3_Q4_Q5, AArch64_Q4_Q5_Q6, AArch64_Q5_Q6_Q7, AArch64_Q6_Q7_Q8, AArch64_Q7_Q8_Q9, AArch64_Q8_Q9_Q10, AArch64_Q9_Q10_Q11, AArch64_Q10_Q11_Q12, AArch64_Q11_Q12_Q13, AArch64_Q12_Q13_Q14, AArch64_Q13_Q14_Q15, AArch64_Q31_Q0_Q1,
  };
  // QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo Bit set.
  static const uint8_t QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x40,
  };
  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8, AArch64_Z7_Z8_Z9, AArch64_Z8_Z9_Z10, AArch64_Z9_Z10_Z11, AArch64_Z10_Z11_Z12, AArch64_Z11_Z12_Z13, AArch64_Z12_Z13_Z14, AArch64_Z13_Z14_Z15, AArch64_Z14_Z15_Z16,
  };
  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b Bit set.
  static const uint8_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03,
  };
  // ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8, AArch64_Z7_Z8_Z9, AArch64_Z8_Z9_Z10, AArch64_Z9_Z10_Z11, AArch64_Z10_Z11_Z12, AArch64_Z11_Z12_Z13, AArch64_Z12_Z13_Z14, AArch64_Z13_Z14_Z15, AArch64_Z31_Z0_Z1,
  };
  // ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b Bit set.
  static const uint8_t ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x01, 0x00, 0x04,
  };
  // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo Register Class...
  static const MCPhysReg QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2, AArch64_Q1_Q2_Q3, AArch64_Q2_Q3_Q4, AArch64_Q3_Q4_Q5, AArch64_Q4_Q5_Q6, AArch64_Q5_Q6_Q7, AArch64_Q6_Q7_Q8, AArch64_Q7_Q8_Q9, AArch64_Q8_Q9_Q10, AArch64_Q9_Q10_Q11, AArch64_Q10_Q11_Q12, AArch64_Q11_Q12_Q13, AArch64_Q12_Q13_Q14, AArch64_Q13_Q14_Q15,
  };
  // QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo Bit set.
  static const uint8_t QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f,
  };
  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8, AArch64_Z7_Z8_Z9, AArch64_Z8_Z9_Z10, AArch64_Z9_Z10_Z11, AArch64_Z10_Z11_Z12, AArch64_Z11_Z12_Z13, AArch64_Z12_Z13_Z14, AArch64_Z13_Z14_Z15,
  };
  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b Bit set.
  static const uint8_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x01,
  };
  // ZPR3_with_zsub0_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR3_with_zsub0_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8, AArch64_Z7_Z8_Z9,
  };
  // ZPR3_with_zsub0_in_ZPR_3b Bit set.
  static const uint8_t ZPR3_with_zsub0_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07,
  };
  // ZPR3_with_zsub1_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR3_with_zsub1_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8, AArch64_Z31_Z0_Z1,
  };
  // ZPR3_with_zsub1_in_ZPR_3b Bit set.
  static const uint8_t ZPR3_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 0x00, 0x00, 0x04,
  };
  // ZPR3_with_zsub2_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR3_with_zsub2_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z30_Z31_Z0, AArch64_Z31_Z0_Z1,
  };
  // ZPR3_with_zsub2_in_ZPR_3b Bit set.
  static const uint8_t ZPR3_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0x06,
  };
  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z6_Z7_Z8,
  };
  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b Bit set.
  static const uint8_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03,
  };
  // ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7, AArch64_Z31_Z0_Z1,
  };
  // ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b Bit set.
  static const uint8_t ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0x04,
  };
  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4, AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7,
  };
  // ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b Bit set.
  static const uint8_t ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01,
  };
  // QQQQ Register Class...
  static const MCPhysReg QQQQ[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q13_Q14_Q15_Q16, AArch64_Q14_Q15_Q16_Q17, AArch64_Q15_Q16_Q17_Q18, AArch64_Q16_Q17_Q18_Q19, AArch64_Q17_Q18_Q19_Q20, AArch64_Q18_Q19_Q20_Q21, AArch64_Q19_Q20_Q21_Q22, AArch64_Q20_Q21_Q22_Q23, AArch64_Q21_Q22_Q23_Q24, AArch64_Q22_Q23_Q24_Q25, AArch64_Q23_Q24_Q25_Q26, AArch64_Q24_Q25_Q26_Q27, AArch64_Q25_Q26_Q27_Q28, AArch64_Q26_Q27_Q28_Q29, AArch64_Q27_Q28_Q29_Q30, AArch64_Q28_Q29_Q30_Q31, AArch64_Q29_Q30_Q31_Q0, AArch64_Q30_Q31_Q0_Q1, AArch64_Q31_Q0_Q1_Q2,
  };
  // QQQQ Bit set.
  static const uint8_t QQQQBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f,
  };
  // ZPR4 Register Class...
  static const MCPhysReg ZPR4[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z13_Z14_Z15_Z16, AArch64_Z14_Z15_Z16_Z17, AArch64_Z15_Z16_Z17_Z18, AArch64_Z16_Z17_Z18_Z19, AArch64_Z17_Z18_Z19_Z20, AArch64_Z18_Z19_Z20_Z21, AArch64_Z19_Z20_Z21_Z22, AArch64_Z20_Z21_Z22_Z23, AArch64_Z21_Z22_Z23_Z24, AArch64_Z22_Z23_Z24_Z25, AArch64_Z23_Z24_Z25_Z26, AArch64_Z24_Z25_Z26_Z27, AArch64_Z25_Z26_Z27_Z28, AArch64_Z26_Z27_Z28_Z29, AArch64_Z27_Z28_Z29_Z30, AArch64_Z28_Z29_Z30_Z31, AArch64_Z29_Z30_Z31_Z0, AArch64_Z30_Z31_Z0_Z1, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4 Bit set.
  static const uint8_t ZPR4Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07,
  };
  // QQQQ_with_dsub_in_FPR64_lo Register Class...
  static const MCPhysReg QQQQ_with_dsub_in_FPR64_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q13_Q14_Q15_Q16, AArch64_Q14_Q15_Q16_Q17, AArch64_Q15_Q16_Q17_Q18,
  };
  // QQQQ_with_dsub_in_FPR64_lo Bit set.
  static const uint8_t QQQQ_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f,
  };
  // QQQQ_with_qsub1_in_FPR128_lo Register Class...
  static const MCPhysReg QQQQ_with_qsub1_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q13_Q14_Q15_Q16, AArch64_Q14_Q15_Q16_Q17, AArch64_Q31_Q0_Q1_Q2,
  };
  // QQQQ_with_qsub1_in_FPR128_lo Bit set.
  static const uint8_t QQQQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x00, 0x40,
  };
  // QQQQ_with_qsub2_in_FPR128_lo Register Class...
  static const MCPhysReg QQQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q13_Q14_Q15_Q16, AArch64_Q30_Q31_Q0_Q1, AArch64_Q31_Q0_Q1_Q2,
  };
  // QQQQ_with_qsub2_in_FPR128_lo Bit set.
  static const uint8_t QQQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x60,
  };
  // QQQQ_with_qsub3_in_FPR128_lo Register Class...
  static const MCPhysReg QQQQ_with_qsub3_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q29_Q30_Q31_Q0, AArch64_Q30_Q31_Q0_Q1, AArch64_Q31_Q0_Q1_Q2,
  };
  // QQQQ_with_qsub3_in_FPR128_lo Bit set.
  static const uint8_t QQQQ_with_qsub3_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x0f, 0x00, 0x70,
  };
  // ZPR4_with_dsub_in_FPR64_lo Register Class...
  static const MCPhysReg ZPR4_with_dsub_in_FPR64_lo[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z13_Z14_Z15_Z16, AArch64_Z14_Z15_Z16_Z17, AArch64_Z15_Z16_Z17_Z18,
  };
  // ZPR4_with_dsub_in_FPR64_lo Bit set.
  static const uint8_t ZPR4_with_dsub_in_FPR64_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07,
  };
  // ZPR4_with_zsub1_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR4_with_zsub1_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z13_Z14_Z15_Z16, AArch64_Z14_Z15_Z16_Z17, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub1_in_ZPR_4b Bit set.
  static const uint8_t ZPR4_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03, 0x00, 0x04,
  };
  // ZPR4_with_zsub2_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR4_with_zsub2_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z13_Z14_Z15_Z16, AArch64_Z30_Z31_Z0_Z1, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub2_in_ZPR_4b Bit set.
  static const uint8_t ZPR4_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x01, 0x00, 0x06,
  };
  // ZPR4_with_zsub3_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR4_with_zsub3_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z29_Z30_Z31_Z0, AArch64_Z30_Z31_Z0_Z1, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub3_in_ZPR_4b Bit set.
  static const uint8_t ZPR4_with_zsub3_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x00, 0x00, 0x07,
  };
  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo Register Class...
  static const MCPhysReg QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q13_Q14_Q15_Q16, AArch64_Q14_Q15_Q16_Q17,
  };
  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo Bit set.
  static const uint8_t QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f,
  };
  // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo Register Class...
  static const MCPhysReg QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q13_Q14_Q15_Q16, AArch64_Q31_Q0_Q1_Q2,
  };
  // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo Bit set.
  static const uint8_t QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x40,
  };
  // QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo Register Class...
  static const MCPhysReg QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q30_Q31_Q0_Q1, AArch64_Q31_Q0_Q1_Q2,
  };
  // QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo Bit set.
  static const uint8_t QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x0f, 0x00, 0x60,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z13_Z14_Z15_Z16, AArch64_Z14_Z15_Z16_Z17,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b Bit set.
  static const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x03,
  };
  // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z13_Z14_Z15_Z16, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b Bit set.
  static const uint8_t ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x01, 0x00, 0x04,
  };
  // ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z30_Z31_Z0_Z1, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b Bit set.
  static const uint8_t ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x00, 0x00, 0x06,
  };
  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo Register Class...
  static const MCPhysReg QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q13_Q14_Q15_Q16,
  };
  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo Bit set.
  static const uint8_t QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f,
  };
  // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo Register Class...
  static const MCPhysReg QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15, AArch64_Q31_Q0_Q1_Q2,
  };
  // QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo Bit set.
  static const uint8_t QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x0f, 0x00, 0x40,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z13_Z14_Z15_Z16,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b Bit set.
  static const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x01,
  };
  // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b Bit set.
  static const uint8_t ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x00, 0x00, 0x04,
  };
  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo Register Class...
  static const MCPhysReg QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo[] = {
    AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5, AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8, AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11, AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14, AArch64_Q12_Q13_Q14_Q15,
  };
  // QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo Bit set.
  static const uint8_t QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x0f,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b Register Class...
  static const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11, AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14, AArch64_Z12_Z13_Z14_Z15,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b Bit set.
  static const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff,
  };
  // ZPR4_with_zsub0_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_zsub0_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10,
  };
  // ZPR4_with_zsub0_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_zsub0_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07,
  };
  // ZPR4_with_zsub1_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_zsub1_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub1_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 0x00, 0x00, 0x04,
  };
  // ZPR4_with_zsub2_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_zsub2_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z30_Z31_Z0_Z1, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub2_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0x06,
  };
  // ZPR4_with_zsub3_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_zsub3_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z29_Z30_Z31_Z0, AArch64_Z30_Z31_Z0_Z1, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub3_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_zsub3_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x07,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z6_Z7_Z8_Z9,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03,
  };
  // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0x04,
  };
  // ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z30_Z31_Z0_Z1, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x06,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01,
  };
  // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z31_Z0_Z1_Z2,
  };
  // ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x04,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b Register Class...
  static const MCPhysReg ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b[] = {
    AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5, AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7,
  };
  // ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b Bit set.
  static const uint8_t ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8,
  };
  // GPR64x8Class Register Class...
  static const MCPhysReg GPR64x8Class[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class Bit set.
  static const uint8_t GPR64x8ClassBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x07,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x06,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7f, 0x07,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x07,
  };
  // GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xdf, 0x07,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7f, 0x06,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x06,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xdf, 0x06,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x03,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x07,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x5f, 0x07,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x9f, 0x07,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_0_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x02,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_2_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_2_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_2_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_2_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x03,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x03,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0x03,
  };
  // GPR64x8Class_with_x8sub_1_in_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_1_in_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23,
  };
  // GPR64x8Class_with_x8sub_1_in_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_1_in_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x01,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x06,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x5f, 0x06,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x9f, 0x06,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x07,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x02,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x02,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0x02,
  };
  // GPR64x8Class_with_x8sub_1_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_1_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21,
  };
  // GPR64x8Class_with_x8sub_1_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_1_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
  };
  // GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23,
  };
  // GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x01,
  };
  // GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23,
  };
  // GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0x01,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x03,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x03,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X16_X17_X18_X19_X20_X21_X22_X23,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x01,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9f, 0x03,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X18_X19_X20_X21_X22_X23_X24_X25, AArch64_X20_X21_X22_X23_X24_X25_X26_X27, AArch64_X22_X23_X24_X25_X26_X27_X28_FP,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x06,
  };
  // GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21,
  };
  // GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x02,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x02,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X16_X17_X18_X19_X20_X21_X22_X23,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x01,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X16_X17_X18_X19_X20_X21_X22_X23,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x01,
  };
  // GPR64x8Class_with_x8sub_3_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_3_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19,
  };
  // GPR64x8Class_with_x8sub_3_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_3_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9f, 0x02,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X14_X15_X16_X17_X18_X19_X20_X21, AArch64_X16_X17_X18_X19_X20_X21_X22_X23,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9f, 0x01,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X16_X17_X18_X19_X20_X21_X22_X23, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x03,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X14_X15_X16_X17_X18_X19_X20_X21,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X14_X15_X16_X17_X18_X19_X20_X21,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9f,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X18_X19_X20_X21_X22_X23_X24_X25,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x02,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X16_X17_X18_X19_X20_X21_X22_X23,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x01,
  };
  // GPR64x8Class_with_x8sub_5_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_5_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17,
  };
  // GPR64x8Class_with_x8sub_5_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_5_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f,
  };
  // GPR64x8Class_with_x8sub_6_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_6_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X12_X13_X14_X15_X16_X17_X18_X19,
  };
  // GPR64x8Class_with_x8sub_6_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_6_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f,
  };
  // GPR64x8Class_with_x8sub_7_in_GPR64noip_and_tcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_7_in_GPR64noip_and_tcGPR64[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15,
  };
  // GPR64x8Class_with_x8sub_7_in_GPR64noip_and_tcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_7_in_GPR64noip_and_tcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
  };
  // GPR64x8Class_with_sub_32_in_GPR32arg Register Class...
  static const MCPhysReg GPR64x8Class_with_sub_32_in_GPR32arg[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11, AArch64_X6_X7_X8_X9_X10_X11_X12_X13,
  };
  // GPR64x8Class_with_sub_32_in_GPR32arg Bit set.
  static const uint8_t GPR64x8Class_with_sub_32_in_GPR32argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f,
  };
  // MPR32 Register Class...
  static const MCPhysReg MPR32[] = {
    AArch64_ZAS0, AArch64_ZAS1, AArch64_ZAS2, AArch64_ZAS3,
  };
  // MPR32 Bit set.
  static const uint8_t MPR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64arg Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64arg[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9, AArch64_X4_X5_X6_X7_X8_X9_X10_X11,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64arg Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  };
  // GPR64x8Class_with_sub_32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg GPR64x8Class_with_sub_32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X12_X13_X14_X15_X16_X17_X18_X19, AArch64_X14_X15_X16_X17_X18_X19_X20_X21,
  };
  // GPR64x8Class_with_sub_32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t GPR64x8Class_with_sub_32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X10_X11_X12_X13_X14_X15_X16_X17, AArch64_X12_X13_X14_X15_X16_X17_X18_X19,
  };
  // GPR64x8Class_with_x8sub_2_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X8_X9_X10_X11_X12_X13_X14_X15, AArch64_X10_X11_X12_X13_X14_X15_X16_X17,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64arg Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64arg[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7, AArch64_X2_X3_X4_X5_X6_X7_X8_X9,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64arg Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  };
  // GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X6_X7_X8_X9_X10_X11_X12_X13, AArch64_X8_X9_X10_X11_X12_X13_X14_X15,
  };
  // GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
  };
  // GPR64x8Class_with_sub_32_in_GPR32arg_and_GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Register Class...
  static const MCPhysReg GPR64x8Class_with_sub_32_in_GPR32arg_and_GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15[] = {
    AArch64_X6_X7_X8_X9_X10_X11_X12_X13,
  };
  // GPR64x8Class_with_sub_32_in_GPR32arg_and_GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15 Bit set.
  static const uint8_t GPR64x8Class_with_sub_32_in_GPR32arg_and_GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  };
  // GPR64x8Class_with_x8sub_0_in_rtcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_0_in_rtcGPR64[] = {
    AArch64_X16_X17_X18_X19_X20_X21_X22_X23,
  };
  // GPR64x8Class_with_x8sub_0_in_rtcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_0_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  };
  // GPR64x8Class_with_x8sub_2_in_rtcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_2_in_rtcGPR64[] = {
    AArch64_X14_X15_X16_X17_X18_X19_X20_X21,
  };
  // GPR64x8Class_with_x8sub_2_in_rtcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_2_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15_and_GPR64x8Class_with_x8sub_6_in_GPR64noip[] = {
    AArch64_X8_X9_X10_X11_X12_X13_X14_X15,
  };
  // GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15_and_GPR64x8Class_with_x8sub_6_in_GPR64noip Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
  };
  // GPR64x8Class_with_x8sub_4_in_rtcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_4_in_rtcGPR64[] = {
    AArch64_X12_X13_X14_X15_X16_X17_X18_X19,
  };
  // GPR64x8Class_with_x8sub_4_in_rtcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_4_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  };
  // GPR64x8Class_with_x8sub_6_in_GPR64arg Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_6_in_GPR64arg[] = {
    AArch64_X0_X1_X2_X3_X4_X5_X6_X7,
  };
  // GPR64x8Class_with_x8sub_6_in_GPR64arg Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_6_in_GPR64argBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  };
  // GPR64x8Class_with_x8sub_6_in_rtcGPR64 Register Class...
  static const MCPhysReg GPR64x8Class_with_x8sub_6_in_rtcGPR64[] = {
    AArch64_X10_X11_X12_X13_X14_X15_X16_X17,
  };
  // GPR64x8Class_with_x8sub_6_in_rtcGPR64 Bit set.
  static const uint8_t GPR64x8Class_with_x8sub_6_in_rtcGPR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
  };
  // MPR16 Register Class...
  static const MCPhysReg MPR16[] = {
    AArch64_ZAH0, AArch64_ZAH1,
  };
  // MPR16 Bit set.
  static const uint8_t MPR16Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
  };
  // MPR Register Class...
  static const MCPhysReg MPR[] = {
    AArch64_ZA,
  };
  // MPR Bit set.
  static const uint8_t MPRBits[] = {
    0x00, 0x40,
  };
  // MPR8 Register Class...
  static const MCPhysReg MPR8[] = {
    AArch64_ZAB0,
  };
  // MPR8 Bit set.
  static const uint8_t MPR8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  };


static const MCRegisterClass AArch64MCRegisterClasses[] = {
  { FPR8, FPR8Bits, sizeof(FPR8Bits) },
  { FPR16, FPR16Bits, sizeof(FPR16Bits) },
  { FPR16_lo, FPR16_loBits, sizeof(FPR16_loBits) },
  { PPR, PPRBits, sizeof(PPRBits) },
  { PPR_3b, PPR_3bBits, sizeof(PPR_3bBits) },
  { GPR32all, GPR32allBits, sizeof(GPR32allBits) },
  { FPR32, FPR32Bits, sizeof(FPR32Bits) },
  { GPR32, GPR32Bits, sizeof(GPR32Bits) },
  { GPR32sp, GPR32spBits, sizeof(GPR32spBits) },
  { GPR32common, GPR32commonBits, sizeof(GPR32commonBits) },
  { FPR32_with_hsub_in_FPR16_lo, FPR32_with_hsub_in_FPR16_loBits, sizeof(FPR32_with_hsub_in_FPR16_loBits) },
  { GPR32arg, GPR32argBits, sizeof(GPR32argBits) },
  { MatrixIndexGPR32_12_15, MatrixIndexGPR32_12_15Bits, sizeof(MatrixIndexGPR32_12_15Bits) },
  { CCR, CCRBits, sizeof(CCRBits) },
  { GPR32sponly, GPR32sponlyBits, sizeof(GPR32sponlyBits) },
  { WSeqPairsAllClass, WSeqPairsAllClassBits, sizeof(WSeqPairsAllClassBits) },
  { WSeqPairsAllClass_with_sube32_in_GPR32common, WSeqPairsAllClass_with_sube32_in_GPR32commonBits, sizeof(WSeqPairsAllClass_with_sube32_in_GPR32commonBits) },
  { WSeqPairsAllClass_with_subo32_in_GPR32common, WSeqPairsAllClass_with_subo32_in_GPR32commonBits, sizeof(WSeqPairsAllClass_with_subo32_in_GPR32commonBits) },
  { WSeqPairsAllClass_with_sube32_in_GPR32common_and_WSeqPairsAllClass_with_subo32_in_GPR32common, WSeqPairsAllClass_with_sube32_in_GPR32common_and_WSeqPairsAllClass_with_subo32_in_GPR32commonBits, sizeof(WSeqPairsAllClass_with_sube32_in_GPR32common_and_WSeqPairsAllClass_with_subo32_in_GPR32commonBits) },
  { WSeqPairsClass, WSeqPairsClassBits, sizeof(WSeqPairsClassBits) },
  { WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32common, WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32commonBits, sizeof(WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32commonBits) },
  { WSeqPairsAllClass_with_sube32_in_GPR32arg, WSeqPairsAllClass_with_sube32_in_GPR32argBits, sizeof(WSeqPairsAllClass_with_sube32_in_GPR32argBits) },
  { WSeqPairsAllClass_with_subo32_in_GPR32arg, WSeqPairsAllClass_with_subo32_in_GPR32argBits, sizeof(WSeqPairsAllClass_with_subo32_in_GPR32argBits) },
  { WSeqPairsAllClass_with_sube32_in_GPR32arg_and_WSeqPairsAllClass_with_subo32_in_GPR32arg, WSeqPairsAllClass_with_sube32_in_GPR32arg_and_WSeqPairsAllClass_with_subo32_in_GPR32argBits, sizeof(WSeqPairsAllClass_with_sube32_in_GPR32arg_and_WSeqPairsAllClass_with_subo32_in_GPR32argBits) },
  { WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15, WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15Bits, sizeof(WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15Bits) },
  { WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15, WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15Bits, sizeof(WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15Bits) },
  { WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32arg, WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32argBits, sizeof(WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32argBits) },
  { WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15, WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15Bits, sizeof(WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15Bits) },
  { WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15, WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15Bits, sizeof(WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15Bits) },
  { GPR64all, GPR64allBits, sizeof(GPR64allBits) },
  { FPR64, FPR64Bits, sizeof(FPR64Bits) },
  { GPR64, GPR64Bits, sizeof(GPR64Bits) },
  { GPR64sp, GPR64spBits, sizeof(GPR64spBits) },
  { GPR64common, GPR64commonBits, sizeof(GPR64commonBits) },
  { GPR64noip, GPR64noipBits, sizeof(GPR64noipBits) },
  { GPR64common_and_GPR64noip, GPR64common_and_GPR64noipBits, sizeof(GPR64common_and_GPR64noipBits) },
  { tcGPR64, tcGPR64Bits, sizeof(tcGPR64Bits) },
  { GPR64noip_and_tcGPR64, GPR64noip_and_tcGPR64Bits, sizeof(GPR64noip_and_tcGPR64Bits) },
  { FPR64_lo, FPR64_loBits, sizeof(FPR64_loBits) },
  { GPR64arg, GPR64argBits, sizeof(GPR64argBits) },
  { GPR64_with_sub_32_in_MatrixIndexGPR32_12_15, GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits, sizeof(GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits) },
  { rtcGPR64, rtcGPR64Bits, sizeof(rtcGPR64Bits) },
  { GPR64sponly, GPR64sponlyBits, sizeof(GPR64sponlyBits) },
  { DD, DDBits, sizeof(DDBits) },
  { XSeqPairsAllClass, XSeqPairsAllClassBits, sizeof(XSeqPairsAllClassBits) },
  { XSeqPairsAllClass_with_sub_32_in_GPR32common, XSeqPairsAllClass_with_sub_32_in_GPR32commonBits, sizeof(XSeqPairsAllClass_with_sub_32_in_GPR32commonBits) },
  { XSeqPairsAllClass_with_subo64_in_GPR64common, XSeqPairsAllClass_with_subo64_in_GPR64commonBits, sizeof(XSeqPairsAllClass_with_subo64_in_GPR64commonBits) },
  { XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common, XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64commonBits, sizeof(XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64commonBits) },
  { XSeqPairsAllClass_with_sube64_in_GPR64noip, XSeqPairsAllClass_with_sube64_in_GPR64noipBits, sizeof(XSeqPairsAllClass_with_sube64_in_GPR64noipBits) },
  { XSeqPairsAllClass_with_subo64_in_GPR64noip, XSeqPairsAllClass_with_subo64_in_GPR64noipBits, sizeof(XSeqPairsAllClass_with_subo64_in_GPR64noipBits) },
  { XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip, XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits, sizeof(XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits) },
  { XSeqPairsAllClass_with_sube64_in_GPR64common_and_GPR64noip, XSeqPairsAllClass_with_sube64_in_GPR64common_and_GPR64noipBits, sizeof(XSeqPairsAllClass_with_sube64_in_GPR64common_and_GPR64noipBits) },
  { XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noip, XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noipBits, sizeof(XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noipBits) },
  { XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noip, XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noipBits, sizeof(XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64common_and_GPR64noipBits) },
  { XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip, XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits, sizeof(XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits) },
  { XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip, XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits, sizeof(XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits) },
  { XSeqPairsAllClass_with_sube64_in_tcGPR64, XSeqPairsAllClass_with_sube64_in_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_sube64_in_tcGPR64Bits) },
  { XSeqPairsAllClass_with_subo64_in_tcGPR64, XSeqPairsAllClass_with_subo64_in_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_subo64_in_tcGPR64Bits) },
  { XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64, XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits) },
  { XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_tcGPR64, XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits) },
  { XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64, XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64Bits) },
  { XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noip, XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits, sizeof(XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits) },
  { XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64, XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits) },
  { DD_with_dsub0_in_FPR64_lo, DD_with_dsub0_in_FPR64_loBits, sizeof(DD_with_dsub0_in_FPR64_loBits) },
  { DD_with_dsub1_in_FPR64_lo, DD_with_dsub1_in_FPR64_loBits, sizeof(DD_with_dsub1_in_FPR64_loBits) },
  { XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64, XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits) },
  { XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64, XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits) },
  { XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64, XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits) },
  { XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noip, XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits, sizeof(XSeqPairsAllClass_with_sube64_in_tcGPR64_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits) },
  { XSeqPairsClass, XSeqPairsClassBits, sizeof(XSeqPairsClassBits) },
  { DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_lo, DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loBits, sizeof(DD_with_dsub0_in_FPR64_lo_and_DD_with_dsub1_in_FPR64_loBits) },
  { XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32common, XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32commonBits, sizeof(XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_subo32_in_GPR32commonBits) },
  { XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64, XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits, sizeof(XSeqPairsAllClass_with_sube64_in_GPR64noip_and_XSeqPairsAllClass_with_sub_32_in_GPR32common_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits) },
  { XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip, XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits, sizeof(XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits) },
  { XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip, XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noipBits, sizeof(XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noipBits) },
  { XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_tcGPR64, XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_tcGPR64Bits, sizeof(XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_tcGPR64Bits) },
  { XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64, XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64Bits, sizeof(XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_GPR64noip_and_tcGPR64Bits) },
  { XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_tcGPR64, XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits, sizeof(XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_tcGPR64Bits) },
  { XSeqPairsAllClass_with_sub_32_in_GPR32arg, XSeqPairsAllClass_with_sub_32_in_GPR32argBits, sizeof(XSeqPairsAllClass_with_sub_32_in_GPR32argBits) },
  { XSeqPairsAllClass_with_subo64_in_GPR64arg, XSeqPairsAllClass_with_subo64_in_GPR64argBits, sizeof(XSeqPairsAllClass_with_subo64_in_GPR64argBits) },
  { XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64, XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits, sizeof(XSeqPairsClass_and_XSeqPairsAllClass_with_subo64_in_GPR64noip_and_tcGPR64Bits) },
  { XSeqPairsAllClass_with_sub_32_in_GPR32arg_and_XSeqPairsAllClass_with_subo64_in_GPR64arg, XSeqPairsAllClass_with_sub_32_in_GPR32arg_and_XSeqPairsAllClass_with_subo64_in_GPR64argBits, sizeof(XSeqPairsAllClass_with_sub_32_in_GPR32arg_and_XSeqPairsAllClass_with_subo64_in_GPR64argBits) },
  { XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15, XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15Bits, sizeof(XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15Bits) },
  { XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32arg, XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32argBits, sizeof(XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_GPR32argBits) },
  { XSeqPairsAllClass_with_subo64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15, XSeqPairsAllClass_with_subo64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits, sizeof(XSeqPairsAllClass_with_subo64_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits) },
  { XSeqPairsAllClass_with_sub_32_in_GPR32common_with_sub_32_subo64_then_sub_32_in_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15, XSeqPairsAllClass_with_sub_32_in_GPR32common_with_sub_32_subo64_then_sub_32_in_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15Bits, sizeof(XSeqPairsAllClass_with_sub_32_in_GPR32common_with_sub_32_subo64_then_sub_32_in_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15_and_WSeqPairsAllClass_with_subo32_in_MatrixIndexGPR32_12_15Bits) },
  { XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15, XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15Bits, sizeof(XSeqPairsAllClass_with_sub_32_subo64_then_sub_32_in_WSeqPairsClass_and_WSeqPairsAllClass_with_sube32_in_MatrixIndexGPR32_12_15Bits) },
  { XSeqPairsAllClass_with_sube64_in_rtcGPR64, XSeqPairsAllClass_with_sube64_in_rtcGPR64Bits, sizeof(XSeqPairsAllClass_with_sube64_in_rtcGPR64Bits) },
  { XSeqPairsAllClass_with_subo64_in_rtcGPR64, XSeqPairsAllClass_with_subo64_in_rtcGPR64Bits, sizeof(XSeqPairsAllClass_with_subo64_in_rtcGPR64Bits) },
  { XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15_and_XSeqPairsAllClass_with_subo64_in_rtcGPR64, XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15_and_XSeqPairsAllClass_with_subo64_in_rtcGPR64Bits, sizeof(XSeqPairsAllClass_with_sub_32_in_MatrixIndexGPR32_12_15_and_XSeqPairsAllClass_with_subo64_in_rtcGPR64Bits) },
  { XSeqPairsAllClass_with_sube64_in_rtcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noip, XSeqPairsAllClass_with_sube64_in_rtcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits, sizeof(XSeqPairsAllClass_with_sube64_in_rtcGPR64_and_XSeqPairsAllClass_with_subo64_in_GPR64noipBits) },
  { XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_rtcGPR64, XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_rtcGPR64Bits, sizeof(XSeqPairsClass_and_XSeqPairsAllClass_with_sube64_in_rtcGPR64Bits) },
  { Capall, CapallBits, sizeof(CapallBits) },
  { Cap, CapBits, sizeof(CapBits) },
  { Capsp, CapspBits, sizeof(CapspBits) },
  { FPR128, FPR128Bits, sizeof(FPR128Bits) },
  { ZPR, ZPRBits, sizeof(ZPRBits) },
  { Cap_and_Capsp, Cap_and_CapspBits, sizeof(Cap_and_CapspBits) },
  { Capcommon, CapcommonBits, sizeof(CapcommonBits) },
  { Cap_with_sub_64_in_GPR64noip, Cap_with_sub_64_in_GPR64noipBits, sizeof(Cap_with_sub_64_in_GPR64noipBits) },
  { Capcommon_and_Cap_with_sub_64_in_GPR64noip, Capcommon_and_Cap_with_sub_64_in_GPR64noipBits, sizeof(Capcommon_and_Cap_with_sub_64_in_GPR64noipBits) },
  { tcCapDesc, tcCapDescBits, sizeof(tcCapDescBits) },
  { tcCap, tcCapBits, sizeof(tcCapBits) },
  { tcCapDesc_and_Cap_with_sub_64_in_GPR64noip, tcCapDesc_and_Cap_with_sub_64_in_GPR64noipBits, sizeof(tcCapDesc_and_Cap_with_sub_64_in_GPR64noipBits) },
  { tcCap_and_tcCapDesc, tcCap_and_tcCapDescBits, sizeof(tcCap_and_tcCapDescBits) },
  { tcCap_and_Cap_with_sub_64_in_GPR64noip, tcCap_and_Cap_with_sub_64_in_GPR64noipBits, sizeof(tcCap_and_Cap_with_sub_64_in_GPR64noipBits) },
  { FPR128_lo, FPR128_loBits, sizeof(FPR128_loBits) },
  { MPR128, MPR128Bits, sizeof(MPR128Bits) },
  { ZPR_4b, ZPR_4bBits, sizeof(ZPR_4bBits) },
  { Cap_with_sub_32_in_GPR32arg, Cap_with_sub_32_in_GPR32argBits, sizeof(Cap_with_sub_32_in_GPR32argBits) },
  { ZPR_3b, ZPR_3bBits, sizeof(ZPR_3bBits) },
  { Cap_with_sub_32_in_MatrixIndexGPR32_12_15, Cap_with_sub_32_in_MatrixIndexGPR32_12_15Bits, sizeof(Cap_with_sub_32_in_MatrixIndexGPR32_12_15Bits) },
  { Cap_with_sub_64_in_rtcGPR64, Cap_with_sub_64_in_rtcGPR64Bits, sizeof(Cap_with_sub_64_in_rtcGPR64Bits) },
  { Capall_with_sub_32_in_GPR32sponly, Capall_with_sub_32_in_GPR32sponlyBits, sizeof(Capall_with_sub_32_in_GPR32sponlyBits) },
  { tcCapDesc_and_Cap_with_sub_64_in_rtcGPR64, tcCapDesc_and_Cap_with_sub_64_in_rtcGPR64Bits, sizeof(tcCapDesc_and_Cap_with_sub_64_in_rtcGPR64Bits) },
  { DDD, DDDBits, sizeof(DDDBits) },
  { DDD_with_dsub0_in_FPR64_lo, DDD_with_dsub0_in_FPR64_loBits, sizeof(DDD_with_dsub0_in_FPR64_loBits) },
  { DDD_with_dsub1_in_FPR64_lo, DDD_with_dsub1_in_FPR64_loBits, sizeof(DDD_with_dsub1_in_FPR64_loBits) },
  { DDD_with_dsub2_in_FPR64_lo, DDD_with_dsub2_in_FPR64_loBits, sizeof(DDD_with_dsub2_in_FPR64_loBits) },
  { DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_lo, DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loBits, sizeof(DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub1_in_FPR64_loBits) },
  { DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo, DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits, sizeof(DDD_with_dsub1_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits) },
  { DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_lo, DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits, sizeof(DDD_with_dsub0_in_FPR64_lo_and_DDD_with_dsub2_in_FPR64_loBits) },
  { DDDD, DDDDBits, sizeof(DDDDBits) },
  { DDDD_with_dsub0_in_FPR64_lo, DDDD_with_dsub0_in_FPR64_loBits, sizeof(DDDD_with_dsub0_in_FPR64_loBits) },
  { DDDD_with_dsub1_in_FPR64_lo, DDDD_with_dsub1_in_FPR64_loBits, sizeof(DDDD_with_dsub1_in_FPR64_loBits) },
  { DDDD_with_dsub2_in_FPR64_lo, DDDD_with_dsub2_in_FPR64_loBits, sizeof(DDDD_with_dsub2_in_FPR64_loBits) },
  { DDDD_with_dsub3_in_FPR64_lo, DDDD_with_dsub3_in_FPR64_loBits, sizeof(DDDD_with_dsub3_in_FPR64_loBits) },
  { DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_lo, DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loBits, sizeof(DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub1_in_FPR64_loBits) },
  { DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo, DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits, sizeof(DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits) },
  { DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo, DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits, sizeof(DDDD_with_dsub2_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits) },
  { DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_lo, DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits, sizeof(DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub2_in_FPR64_loBits) },
  { DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo, DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits, sizeof(DDDD_with_dsub1_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits) },
  { DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_lo, DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits, sizeof(DDDD_with_dsub0_in_FPR64_lo_and_DDDD_with_dsub3_in_FPR64_loBits) },
  { QQ, QQBits, sizeof(QQBits) },
  { ZPR2, ZPR2Bits, sizeof(ZPR2Bits) },
  { QQ_with_dsub_in_FPR64_lo, QQ_with_dsub_in_FPR64_loBits, sizeof(QQ_with_dsub_in_FPR64_loBits) },
  { QQ_with_qsub1_in_FPR128_lo, QQ_with_qsub1_in_FPR128_loBits, sizeof(QQ_with_qsub1_in_FPR128_loBits) },
  { ZPR2_with_dsub_in_FPR64_lo, ZPR2_with_dsub_in_FPR64_loBits, sizeof(ZPR2_with_dsub_in_FPR64_loBits) },
  { ZPR2_with_zsub1_in_ZPR_4b, ZPR2_with_zsub1_in_ZPR_4bBits, sizeof(ZPR2_with_zsub1_in_ZPR_4bBits) },
  { QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_lo, QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loBits, sizeof(QQ_with_dsub_in_FPR64_lo_and_QQ_with_qsub1_in_FPR128_loBits) },
  { ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4b, ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bBits, sizeof(ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_4bBits) },
  { ZPR2_with_zsub0_in_ZPR_3b, ZPR2_with_zsub0_in_ZPR_3bBits, sizeof(ZPR2_with_zsub0_in_ZPR_3bBits) },
  { ZPR2_with_zsub1_in_ZPR_3b, ZPR2_with_zsub1_in_ZPR_3bBits, sizeof(ZPR2_with_zsub1_in_ZPR_3bBits) },
  { ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3b, ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bBits, sizeof(ZPR2_with_dsub_in_FPR64_lo_and_ZPR2_with_zsub1_in_ZPR_3bBits) },
  { MPR64, MPR64Bits, sizeof(MPR64Bits) },
  { QQQ, QQQBits, sizeof(QQQBits) },
  { ZPR3, ZPR3Bits, sizeof(ZPR3Bits) },
  { QQQ_with_dsub_in_FPR64_lo, QQQ_with_dsub_in_FPR64_loBits, sizeof(QQQ_with_dsub_in_FPR64_loBits) },
  { QQQ_with_qsub1_in_FPR128_lo, QQQ_with_qsub1_in_FPR128_loBits, sizeof(QQQ_with_qsub1_in_FPR128_loBits) },
  { QQQ_with_qsub2_in_FPR128_lo, QQQ_with_qsub2_in_FPR128_loBits, sizeof(QQQ_with_qsub2_in_FPR128_loBits) },
  { ZPR3_with_dsub_in_FPR64_lo, ZPR3_with_dsub_in_FPR64_loBits, sizeof(ZPR3_with_dsub_in_FPR64_loBits) },
  { ZPR3_with_zsub1_in_ZPR_4b, ZPR3_with_zsub1_in_ZPR_4bBits, sizeof(ZPR3_with_zsub1_in_ZPR_4bBits) },
  { ZPR3_with_zsub2_in_ZPR_4b, ZPR3_with_zsub2_in_ZPR_4bBits, sizeof(ZPR3_with_zsub2_in_ZPR_4bBits) },
  { QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_lo, QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loBits, sizeof(QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub1_in_FPR128_loBits) },
  { QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_lo, QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loBits, sizeof(QQQ_with_qsub1_in_FPR128_lo_and_QQQ_with_qsub2_in_FPR128_loBits) },
  { ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4b, ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bBits, sizeof(ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_4bBits) },
  { ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4b, ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bBits, sizeof(ZPR3_with_zsub1_in_ZPR_4b_and_ZPR3_with_zsub2_in_ZPR_4bBits) },
  { QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_lo, QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loBits, sizeof(QQQ_with_dsub_in_FPR64_lo_and_QQQ_with_qsub2_in_FPR128_loBits) },
  { ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4b, ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bBits, sizeof(ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_4bBits) },
  { ZPR3_with_zsub0_in_ZPR_3b, ZPR3_with_zsub0_in_ZPR_3bBits, sizeof(ZPR3_with_zsub0_in_ZPR_3bBits) },
  { ZPR3_with_zsub1_in_ZPR_3b, ZPR3_with_zsub1_in_ZPR_3bBits, sizeof(ZPR3_with_zsub1_in_ZPR_3bBits) },
  { ZPR3_with_zsub2_in_ZPR_3b, ZPR3_with_zsub2_in_ZPR_3bBits, sizeof(ZPR3_with_zsub2_in_ZPR_3bBits) },
  { ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3b, ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bBits, sizeof(ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub1_in_ZPR_3bBits) },
  { ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3b, ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bBits, sizeof(ZPR3_with_zsub1_in_ZPR_3b_and_ZPR3_with_zsub2_in_ZPR_3bBits) },
  { ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3b, ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bBits, sizeof(ZPR3_with_dsub_in_FPR64_lo_and_ZPR3_with_zsub2_in_ZPR_3bBits) },
  { QQQQ, QQQQBits, sizeof(QQQQBits) },
  { ZPR4, ZPR4Bits, sizeof(ZPR4Bits) },
  { QQQQ_with_dsub_in_FPR64_lo, QQQQ_with_dsub_in_FPR64_loBits, sizeof(QQQQ_with_dsub_in_FPR64_loBits) },
  { QQQQ_with_qsub1_in_FPR128_lo, QQQQ_with_qsub1_in_FPR128_loBits, sizeof(QQQQ_with_qsub1_in_FPR128_loBits) },
  { QQQQ_with_qsub2_in_FPR128_lo, QQQQ_with_qsub2_in_FPR128_loBits, sizeof(QQQQ_with_qsub2_in_FPR128_loBits) },
  { QQQQ_with_qsub3_in_FPR128_lo, QQQQ_with_qsub3_in_FPR128_loBits, sizeof(QQQQ_with_qsub3_in_FPR128_loBits) },
  { ZPR4_with_dsub_in_FPR64_lo, ZPR4_with_dsub_in_FPR64_loBits, sizeof(ZPR4_with_dsub_in_FPR64_loBits) },
  { ZPR4_with_zsub1_in_ZPR_4b, ZPR4_with_zsub1_in_ZPR_4bBits, sizeof(ZPR4_with_zsub1_in_ZPR_4bBits) },
  { ZPR4_with_zsub2_in_ZPR_4b, ZPR4_with_zsub2_in_ZPR_4bBits, sizeof(ZPR4_with_zsub2_in_ZPR_4bBits) },
  { ZPR4_with_zsub3_in_ZPR_4b, ZPR4_with_zsub3_in_ZPR_4bBits, sizeof(ZPR4_with_zsub3_in_ZPR_4bBits) },
  { QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_lo, QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loBits, sizeof(QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub1_in_FPR128_loBits) },
  { QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_lo, QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loBits, sizeof(QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub2_in_FPR128_loBits) },
  { QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo, QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits, sizeof(QQQQ_with_qsub2_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits) },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bBits, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_4bBits) },
  { ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4b, ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bBits, sizeof(ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub2_in_ZPR_4bBits) },
  { ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b, ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits, sizeof(ZPR4_with_zsub2_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits) },
  { QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_lo, QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loBits, sizeof(QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub2_in_FPR128_loBits) },
  { QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_lo, QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits, sizeof(QQQQ_with_qsub1_in_FPR128_lo_and_QQQQ_with_qsub3_in_FPR128_loBits) },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bBits, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_4bBits) },
  { ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4b, ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits, sizeof(ZPR4_with_zsub1_in_ZPR_4b_and_ZPR4_with_zsub3_in_ZPR_4bBits) },
  { QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_lo, QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loBits, sizeof(QQQQ_with_dsub_in_FPR64_lo_and_QQQQ_with_qsub3_in_FPR128_loBits) },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bBits, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_4bBits) },
  { ZPR4_with_zsub0_in_ZPR_3b, ZPR4_with_zsub0_in_ZPR_3bBits, sizeof(ZPR4_with_zsub0_in_ZPR_3bBits) },
  { ZPR4_with_zsub1_in_ZPR_3b, ZPR4_with_zsub1_in_ZPR_3bBits, sizeof(ZPR4_with_zsub1_in_ZPR_3bBits) },
  { ZPR4_with_zsub2_in_ZPR_3b, ZPR4_with_zsub2_in_ZPR_3bBits, sizeof(ZPR4_with_zsub2_in_ZPR_3bBits) },
  { ZPR4_with_zsub3_in_ZPR_3b, ZPR4_with_zsub3_in_ZPR_3bBits, sizeof(ZPR4_with_zsub3_in_ZPR_3bBits) },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bBits, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub1_in_ZPR_3bBits) },
  { ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3b, ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bBits, sizeof(ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub2_in_ZPR_3bBits) },
  { ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b, ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits, sizeof(ZPR4_with_zsub2_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits) },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bBits, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub2_in_ZPR_3bBits) },
  { ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3b, ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits, sizeof(ZPR4_with_zsub1_in_ZPR_3b_and_ZPR4_with_zsub3_in_ZPR_3bBits) },
  { ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3b, ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bBits, sizeof(ZPR4_with_dsub_in_FPR64_lo_and_ZPR4_with_zsub3_in_ZPR_3bBits) },
  { GPR64x8Class, GPR64x8ClassBits, sizeof(GPR64x8ClassBits) },
  { GPR64x8Class_with_x8sub_0_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_tcGPR64, GPR64x8Class_with_x8sub_0_in_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_0_in_tcGPR64Bits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_GPR64noip_and_tcGPR64, GPR64x8Class_with_x8sub_0_in_GPR64noip_and_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_0_in_GPR64noip_and_tcGPR64Bits) },
  { GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_2_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_2_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_2_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_1_in_tcGPR64, GPR64x8Class_with_x8sub_1_in_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_1_in_tcGPR64Bits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_1_in_GPR64noip_and_tcGPR64, GPR64x8Class_with_x8sub_1_in_GPR64noip_and_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_1_in_GPR64noip_and_tcGPR64Bits) },
  { GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_tcGPR64, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_tcGPR64Bits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_4_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_3_in_GPR64noip_and_tcGPR64, GPR64x8Class_with_x8sub_3_in_GPR64noip_and_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_3_in_GPR64noip_and_tcGPR64Bits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_tcGPR64, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_tcGPR64Bits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_0_in_tcGPR64_and_GPR64x8Class_with_x8sub_0_in_GPR64noip_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64noip_and_GPR64x8Class_with_x8sub_2_in_GPR64noip_and_GPR64x8Class_with_x8sub_1_in_tcGPR64_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_5_in_GPR64noip_and_tcGPR64, GPR64x8Class_with_x8sub_5_in_GPR64noip_and_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_5_in_GPR64noip_and_tcGPR64Bits) },
  { GPR64x8Class_with_x8sub_6_in_GPR64noip_and_tcGPR64, GPR64x8Class_with_x8sub_6_in_GPR64noip_and_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_6_in_GPR64noip_and_tcGPR64Bits) },
  { GPR64x8Class_with_x8sub_7_in_GPR64noip_and_tcGPR64, GPR64x8Class_with_x8sub_7_in_GPR64noip_and_tcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_7_in_GPR64noip_and_tcGPR64Bits) },
  { GPR64x8Class_with_sub_32_in_GPR32arg, GPR64x8Class_with_sub_32_in_GPR32argBits, sizeof(GPR64x8Class_with_sub_32_in_GPR32argBits) },
  { MPR32, MPR32Bits, sizeof(MPR32Bits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64arg, GPR64x8Class_with_x8sub_2_in_GPR64argBits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64argBits) },
  { GPR64x8Class_with_sub_32_in_MatrixIndexGPR32_12_15, GPR64x8Class_with_sub_32_in_MatrixIndexGPR32_12_15Bits, sizeof(GPR64x8Class_with_sub_32_in_MatrixIndexGPR32_12_15Bits) },
  { GPR64x8Class_with_x8sub_2_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15, GPR64x8Class_with_x8sub_2_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits, sizeof(GPR64x8Class_with_x8sub_2_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15, GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64arg, GPR64x8Class_with_x8sub_4_in_GPR64argBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64argBits) },
  { GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15, GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits, sizeof(GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits) },
  { GPR64x8Class_with_sub_32_in_GPR32arg_and_GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15, GPR64x8Class_with_sub_32_in_GPR32arg_and_GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits, sizeof(GPR64x8Class_with_sub_32_in_GPR32arg_and_GPR64x8Class_with_x8sub_6_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15Bits) },
  { GPR64x8Class_with_x8sub_0_in_rtcGPR64, GPR64x8Class_with_x8sub_0_in_rtcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_0_in_rtcGPR64Bits) },
  { GPR64x8Class_with_x8sub_2_in_rtcGPR64, GPR64x8Class_with_x8sub_2_in_rtcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_2_in_rtcGPR64Bits) },
  { GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15_and_GPR64x8Class_with_x8sub_6_in_GPR64noip, GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits, sizeof(GPR64x8Class_with_x8sub_4_in_GPR64_with_sub_32_in_MatrixIndexGPR32_12_15_and_GPR64x8Class_with_x8sub_6_in_GPR64noipBits) },
  { GPR64x8Class_with_x8sub_4_in_rtcGPR64, GPR64x8Class_with_x8sub_4_in_rtcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_4_in_rtcGPR64Bits) },
  { GPR64x8Class_with_x8sub_6_in_GPR64arg, GPR64x8Class_with_x8sub_6_in_GPR64argBits, sizeof(GPR64x8Class_with_x8sub_6_in_GPR64argBits) },
  { GPR64x8Class_with_x8sub_6_in_rtcGPR64, GPR64x8Class_with_x8sub_6_in_rtcGPR64Bits, sizeof(GPR64x8Class_with_x8sub_6_in_rtcGPR64Bits) },
  { MPR16, MPR16Bits, sizeof(MPR16Bits) },
  { MPR, MPRBits, sizeof(MPRBits) },
  { MPR8, MPR8Bits, sizeof(MPR8Bits) },
};

#endif // GET_REGINFO_MC_DESC
