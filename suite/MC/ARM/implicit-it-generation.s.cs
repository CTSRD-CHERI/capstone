# CS_ARCH_ARM, CS_MODE_THUMB, None
0x01,0x30 = adds r0, #1
0x10,0xf1,0x01,0x00 = adds.w r0, r0, #1
0x80,0xe0 = b #0x100
0x00,0xf0,0x00,0xbc = b.w #0x800
0x02,0xd0 = beq #4
0x00,0xf0,0x80,0x80 = beq.w #0x100
0x02,0xe0 = b #4
0x80,0xe0 = b #0x100
0x00,0xf0,0x00,0xbc = b.w #0x800
0x02,0xdc = bgt #4
0x00,0xf3,0x80,0x80 = bgt.w #0x100
