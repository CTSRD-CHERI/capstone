# CS_ARCH_ARM, CS_MODE_ARM, None
0x03,0x10,0x02,0xe0 = and r1, r2, r3
0x03,0x10,0x12,0xe0 = ands r1, r2, r3
0x03,0x10,0x22,0xe0 = eor r1, r2, r3
0x03,0x10,0x32,0xe0 = eors r1, r2, r3
0x03,0x10,0x42,0xe0 = sub r1, r2, r3
0x03,0x10,0x52,0xe0 = subs r1, r2, r3
0x03,0x10,0x82,0xe0 = add r1, r2, r3
0x03,0x10,0x92,0xe0 = adds r1, r2, r3
0x03,0x10,0xa2,0xe0 = adc r1, r2, r3
0x03,0x10,0xc2,0xe1 = bic r1, r2, r3
0x03,0x10,0xd2,0xe1 = bics r1, r2, r3
0x02,0x10,0xa0,0xe1 = mov r1, r2
0x02,0x10,0xe0,0xe1 = mvn r1, r2
0x02,0x10,0xf0,0xe1 = mvns r1, r2
0x90,0x02,0xcb,0xe7 = bfi r0, r0, #5, #7
0x7a,0x00,0x20,0xe1 = bkpt #0xa
0x81,0x17,0x11,0xee = cdp p7, #1, c1, c1, c1, #4
0x81,0x17,0x11,0xfe = cdp2 p7, #1, c1, c1, c1, #4
0x13,0x14,0x82,0xe0 = add r1, r2, r3, lsl r4
0x30,0x0f,0xa6,0xe6 = ssat16 r0, #7, r0
0x00,0x00,0x0a,0xf1 = cpsie none, #0
0xb0,0x30,0x42,0xe1 = strh r3, [r2, #-0]
