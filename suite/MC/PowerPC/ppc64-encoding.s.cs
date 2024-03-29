# CS_ARCH_PPC, CS_MODE_BIG_ENDIAN, CS_OPT_SYNTAX_NOREGNAME
0x4c,0x8a,0x18,0x20 = bclr 4, 10, 3
0x4c,0x8a,0x00,0x20 = bflr 10
0x4c,0x8a,0x18,0x21 = bclrl 4, 10, 3
0x4c,0x8a,0x00,0x21 = bflrl 10
0x4c,0x8a,0x1c,0x20 = bcctr 4, 10, 3
0x4c,0x8a,0x04,0x20 = bfctr 10
0x4c,0x8a,0x1c,0x21 = bcctrl 4, 10, 3
0x4c,0x8a,0x04,0x21 = bfctrl 10
0x4c,0x43,0x22,0x02 = crand 2, 3, 4
0x4c,0x43,0x21,0xc2 = crnand 2, 3, 4
0x4c,0x43,0x23,0x82 = cror 2, 3, 4
0x4c,0x43,0x21,0x82 = crxor 2, 3, 4
0x4c,0x43,0x20,0x42 = crnor 2, 3, 4
0x4c,0x43,0x22,0x42 = creqv 2, 3, 4
0x4c,0x43,0x21,0x02 = crandc 2, 3, 4
0x4c,0x43,0x23,0x42 = crorc 2, 3, 4
0x4d,0x0c,0x00,0x00 = mcrf 2, 3
0x44,0x00,0x00,0x22 = sc 1
0x44,0x00,0x00,0x02 = sc
0x88,0x44,0x00,0x80 = lbz 2, 128(4)
0x7c,0x43,0x20,0xae = lbzx 2, 3, 4
0x8c,0x44,0x00,0x80 = lbzu 2, 128(4)
0x7c,0x43,0x20,0xee = lbzux 2, 3, 4
0xa0,0x44,0x00,0x80 = lhz 2, 128(4)
0x7c,0x43,0x22,0x2e = lhzx 2, 3, 4
0xa4,0x44,0x00,0x80 = lhzu 2, 128(4)
0x7c,0x43,0x22,0x6e = lhzux 2, 3, 4
0xa8,0x44,0x00,0x80 = lha 2, 128(4)
0x7c,0x43,0x22,0xae = lhax 2, 3, 4
0xac,0x44,0x00,0x80 = lhau 2, 128(4)
0x7c,0x43,0x22,0xee = lhaux 2, 3, 4
0x80,0x44,0x00,0x80 = lwz 2, 128(4)
0x7c,0x43,0x20,0x2e = lwzx 2, 3, 4
0x84,0x44,0x00,0x80 = lwzu 2, 128(4)
0x7c,0x43,0x20,0x6e = lwzux 2, 3, 4
0xe8,0x44,0x00,0x82 = lwa 2, 128(4)
0x7c,0x43,0x22,0xaa = lwax 2, 3, 4
0x7c,0x43,0x22,0xea = lwaux 2, 3, 4
0xe8,0x44,0x00,0x80 = ld 2, 128(4)
0x7c,0x43,0x20,0x2a = ldx 2, 3, 4
0xe8,0x44,0x00,0x81 = ldu 2, 128(4)
0x7c,0x43,0x20,0x6a = ldux 2, 3, 4
0x98,0x44,0x00,0x80 = stb 2, 128(4)
0x7c,0x43,0x21,0xae = stbx 2, 3, 4
0x9c,0x44,0x00,0x80 = stbu 2, 128(4)
0x7c,0x43,0x21,0xee = stbux 2, 3, 4
0xb0,0x44,0x00,0x80 = sth 2, 128(4)
0x7c,0x43,0x23,0x2e = sthx 2, 3, 4
0xb4,0x44,0x00,0x80 = sthu 2, 128(4)
0x7c,0x43,0x23,0x6e = sthux 2, 3, 4
0x90,0x44,0x00,0x80 = stw 2, 128(4)
0x7c,0x43,0x21,0x2e = stwx 2, 3, 4
0x94,0x44,0x00,0x80 = stwu 2, 128(4)
0x7c,0x43,0x21,0x6e = stwux 2, 3, 4
0xf8,0x44,0x00,0x80 = std 2, 128(4)
0x7c,0x43,0x21,0x2a = stdx 2, 3, 4
0xf8,0x44,0x00,0x81 = stdu 2, 128(4)
0x7c,0x43,0x21,0x6a = stdux 2, 3, 4
0x7c,0x43,0x26,0x2c = lhbrx 2, 3, 4
0x7c,0x43,0x27,0x2c = sthbrx 2, 3, 4
0x7c,0x43,0x24,0x2c = lwbrx 2, 3, 4
0x7c,0x43,0x25,0x2c = stwbrx 2, 3, 4
0x7c,0x43,0x24,0x28 = ldbrx 2, 3, 4
0x7c,0x43,0x25,0x28 = stdbrx 2, 3, 4
0xb8,0x41,0x00,0x80 = lmw 2, 128(1)
0xbc,0x41,0x00,0x80 = stmw 2, 128(1)
0x38,0x43,0x00,0x80 = addi 2, 3, 128
0x3c,0x43,0x00,0x80 = addis 2, 3, 128
0x7c,0x43,0x22,0x14 = add 2, 3, 4
0x7c,0x43,0x22,0x15 = add. 2, 3, 4
0x7c,0x43,0x20,0x50 = sub 2, 4, 3
0x7c,0x43,0x20,0x51 = sub. 2, 4, 3
0x30,0x43,0x00,0x80 = addic 2, 3, 128
0x34,0x43,0x00,0x80 = addic. 2, 3, 128
0x20,0x43,0x00,0x04 = subfic 2, 3, 4
0x7c,0x43,0x20,0x14 = addc 2, 3, 4
0x7c,0x43,0x20,0x15 = addc. 2, 3, 4
0x7c,0x43,0x20,0x10 = subc 2, 4, 3
0x7c,0x43,0x21,0x14 = adde 2, 3, 4
0x7c,0x43,0x21,0x15 = adde. 2, 3, 4
0x7c,0x43,0x21,0x10 = subfe 2, 3, 4
0x7c,0x43,0x21,0x11 = subfe. 2, 3, 4
0x7c,0x43,0x01,0xd4 = addme 2, 3
0x7c,0x43,0x01,0xd5 = addme. 2, 3
0x7c,0x43,0x01,0xd0 = subfme 2, 3
0x7c,0x43,0x01,0xd1 = subfme. 2, 3
0x7c,0x43,0x01,0x94 = addze 2, 3
0x7c,0x43,0x01,0x95 = addze. 2, 3
0x7c,0x43,0x01,0x90 = subfze 2, 3
0x7c,0x43,0x01,0x91 = subfze. 2, 3
0x7c,0x43,0x00,0xd0 = neg 2, 3
0x7c,0x43,0x00,0xd1 = neg. 2, 3
0x1c,0x43,0x00,0x80 = mulli 2, 3, 128
0x7c,0x43,0x20,0x96 = mulhw 2, 3, 4
0x7c,0x43,0x20,0x97 = mulhw. 2, 3, 4
0x7c,0x43,0x21,0xd6 = mullw 2, 3, 4
0x7c,0x43,0x21,0xd7 = mullw. 2, 3, 4
0x7c,0x43,0x20,0x16 = mulhwu 2, 3, 4
0x7c,0x43,0x20,0x17 = mulhwu. 2, 3, 4
0x7c,0x43,0x23,0xd6 = divw 2, 3, 4
0x7c,0x43,0x23,0xd7 = divw. 2, 3, 4
0x7c,0x43,0x23,0x96 = divwu 2, 3, 4
0x7c,0x43,0x23,0x97 = divwu. 2, 3, 4
0x7c,0x43,0x21,0xd2 = mulld 2, 3, 4
0x7c,0x43,0x21,0xd3 = mulld. 2, 3, 4
0x7c,0x43,0x20,0x92 = mulhd 2, 3, 4
0x7c,0x43,0x20,0x93 = mulhd. 2, 3, 4
0x7c,0x43,0x20,0x12 = mulhdu 2, 3, 4
0x7c,0x43,0x20,0x13 = mulhdu. 2, 3, 4
0x7c,0x43,0x23,0xd2 = divd 2, 3, 4
0x7c,0x43,0x23,0xd3 = divd. 2, 3, 4
0x7c,0x43,0x23,0x92 = divdu 2, 3, 4
0x7c,0x43,0x23,0x93 = divdu. 2, 3, 4
0x2d,0x23,0x00,0x80 = cmpdi 2, 3, 128
0x7d,0x23,0x20,0x00 = cmpd 2, 3, 4
0x29,0x23,0x00,0x80 = cmpldi 2, 3, 128
0x7d,0x23,0x20,0x40 = cmpld 2, 3, 4
0x2d,0x03,0x00,0x80 = cmpwi 2, 3, 128
0x7d,0x03,0x20,0x00 = cmpw 2, 3, 4
0x29,0x03,0x00,0x80 = cmplwi 2, 3, 128
0x7d,0x03,0x20,0x40 = cmplw 2, 3, 4
0x0c,0x43,0x00,0x04 = twllti 3, 4
0x7c,0x43,0x20,0x08 = twllt 3, 4
0x08,0x43,0x00,0x04 = tdllti 3, 4
0x7c,0x43,0x20,0x88 = tdllt 3, 4
0x7c,0x43,0x21,0x5e = isel 2, 3, 4, 5
0x70,0x62,0x00,0x80 = andi. 2, 3, 128
0x74,0x62,0x00,0x80 = andis. 2, 3, 128
0x60,0x62,0x00,0x80 = ori 2, 3, 128
0x64,0x62,0x00,0x80 = oris 2, 3, 128
0x68,0x62,0x00,0x80 = xori 2, 3, 128
0x6c,0x62,0x00,0x80 = xoris 2, 3, 128
0x7c,0x62,0x20,0x38 = and 2, 3, 4
0x7c,0x62,0x20,0x39 = and. 2, 3, 4
0x7c,0x62,0x22,0x78 = xor 2, 3, 4
0x7c,0x62,0x22,0x79 = xor. 2, 3, 4
0x7c,0x62,0x23,0xb8 = nand 2, 3, 4
0x7c,0x62,0x23,0xb9 = nand. 2, 3, 4
0x7c,0x62,0x23,0x78 = or 2, 3, 4
0x7c,0x62,0x23,0x79 = or. 2, 3, 4
0x7c,0x62,0x20,0xf8 = nor 2, 3, 4
0x7c,0x62,0x20,0xf9 = nor. 2, 3, 4
0x7c,0x62,0x22,0x38 = eqv 2, 3, 4
0x7c,0x62,0x22,0x39 = eqv. 2, 3, 4
0x7c,0x62,0x20,0x78 = andc 2, 3, 4
0x7c,0x62,0x20,0x79 = andc. 2, 3, 4
0x7c,0x62,0x23,0x38 = orc 2, 3, 4
0x7c,0x62,0x23,0x39 = orc. 2, 3, 4
0x7c,0x62,0x07,0x74 = extsb 2, 3
0x7c,0x62,0x07,0x75 = extsb. 2, 3
0x7c,0x62,0x07,0x34 = extsh 2, 3
0x7c,0x62,0x07,0x35 = extsh. 2, 3
0x7c,0x62,0x00,0x34 = cntlzw 2, 3
0x7c,0x62,0x00,0x35 = cntlzw. 2, 3
0x7c,0x62,0x02,0xf4 = popcntw 2, 3
0x7c,0x62,0x07,0xb4 = extsw 2, 3
0x7c,0x62,0x07,0xb5 = extsw. 2, 3
0x7c,0x62,0x00,0x74 = cntlzd 2, 3
0x7c,0x62,0x00,0x75 = cntlzd. 2, 3
0x7c,0x62,0x03,0xf4 = popcntd 2, 3
0x54,0x62,0x21,0x4c = rlwinm 2, 3, 4, 5, 6
0x54,0x62,0x21,0x4d = rlwinm. 2, 3, 4, 5, 6
0x5c,0x62,0x21,0x4c = rlwnm 2, 3, 4, 5, 6
0x5c,0x62,0x21,0x4d = rlwnm. 2, 3, 4, 5, 6
0x50,0x62,0x21,0x4c = rlwimi 2, 3, 4, 5, 6
0x50,0x62,0x21,0x4d = rlwimi. 2, 3, 4, 5, 6
0x78,0x62,0x21,0x40 = rldicl 2, 3, 4, 5
0x78,0x62,0x21,0x41 = rldicl. 2, 3, 4, 5
0x78,0x62,0x21,0x44 = rldicr 2, 3, 4, 5
0x78,0x62,0x21,0x45 = rldicr. 2, 3, 4, 5
0x78,0x62,0x21,0x48 = rldic 2, 3, 4, 5
0x78,0x62,0x21,0x49 = rldic. 2, 3, 4, 5
0x78,0x62,0x21,0x50 = rldcl 2, 3, 4, 5
0x78,0x62,0x21,0x51 = rldcl. 2, 3, 4, 5
0x78,0x62,0x21,0x52 = rldcr 2, 3, 4, 5
0x78,0x62,0x21,0x53 = rldcr. 2, 3, 4, 5
0x78,0x62,0x21,0x4c = rldimi 2, 3, 4, 5
0x78,0x62,0x21,0x4d = rldimi. 2, 3, 4, 5
0x7c,0x62,0x20,0x30 = slw 2, 3, 4
0x7c,0x62,0x20,0x31 = slw. 2, 3, 4
0x7c,0x62,0x24,0x30 = srw 2, 3, 4
0x7c,0x62,0x24,0x31 = srw. 2, 3, 4
0x7c,0x62,0x26,0x70 = srawi 2, 3, 4
0x7c,0x62,0x26,0x71 = srawi. 2, 3, 4
0x7c,0x62,0x26,0x30 = sraw 2, 3, 4
0x7c,0x62,0x26,0x31 = sraw. 2, 3, 4
0x7c,0x62,0x20,0x36 = sld 2, 3, 4
0x7c,0x62,0x20,0x37 = sld. 2, 3, 4
0x7c,0x62,0x24,0x36 = srd 2, 3, 4
0x7c,0x62,0x24,0x37 = srd. 2, 3, 4
0x7c,0x62,0x26,0x74 = sradi 2, 3, 4
0x7c,0x62,0x26,0x75 = sradi. 2, 3, 4
0x7c,0x62,0x26,0x34 = srad 2, 3, 4
0x7c,0x62,0x26,0x35 = srad. 2, 3, 4
0x7c,0x58,0x93,0xa6 = mtspr 600, 2
0x7c,0x58,0x92,0xa6 = mfspr 2, 600
0x7c,0x47,0xb1,0x20 = mtcrf 123, 2
0x7c,0x40,0x00,0x26 = mfcr 2
0x7c,0x51,0x01,0x20 = mtocrf 16, 2
0x7e,0x10,0x80,0x26 = mfocrf 16, 8
