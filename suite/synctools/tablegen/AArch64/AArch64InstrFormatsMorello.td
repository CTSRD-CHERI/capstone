// AArch64InstrFormatsMorello.td - Morello Instruction Formats -*- tablegen -*//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//----------------------------------------------------------------------------//

class AltCapLoadAcqFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-10} = 0b0100001001011111011111;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class AltCapStoreRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-10} = 0b0100001000011111011111;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class AltLoadByteAcqFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  let Inst{31-10} = 0b0100001001111111011111;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
}
class AltLoadByteImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10000010011;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadByteImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010000;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadCapImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10000010011;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadCapabilityImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010110;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadDWordImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10000010011;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadDWordImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010110;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadFPByteImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010001;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadFPDoubleImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010111;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadFPHalfImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010011;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadFPQuadImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010001;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadFPSingleImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010101;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadHalfImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010010;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadSignedByteToDWordImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010000;
  let Inst{11-10} = 0b10;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadSignedByteToWordImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010000;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadSignedHalfToDWordImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010010;
  let Inst{11-10} = 0b10;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadSignedHalfToWordImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010010;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadSignedWordToDWordImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010100;
  let Inst{11-10} = 0b10;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadWordAcqFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  let Inst{31-10} = 0b0100001001111111111111;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
}
class AltLoadWordImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10000010011;
  let Inst{11-10} = 0b10;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltLoadWordImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010100;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreByteImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10000010010;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreByteImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010000;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreByteRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  let Inst{31-10} = 0b0100001000111111011111;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
}
class AltStoreCapImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10000010010;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreCapabilityImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010100;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreDWordImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10000010010;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreDWordImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010110;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreFPByteImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010001;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreFPDoubleImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010111;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreFPHalfImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010011;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreFPQuadImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010001;
  let Inst{11-10} = 0b10;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreFPSingleImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010101;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreHalfImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010010;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreWordImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10000010010;
  let Inst{11-10} = 0b10;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreWordImmUnscaledFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b11100010100;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class AltStoreWordRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  let Inst{31-10} = 0b0100001000111111111111;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
}
class CapAlignDownFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<6> imm6;
  let Inst{31-21} = 0b11000010110;
  let Inst{14-10} = 0b00110;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-15} = imm6;
}
class CapAlignUpFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<6> imm6;
  let Inst{31-21} = 0b11000010110;
  let Inst{14-10} = 0b10110;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-15} = imm6;
}
class CapBicImmFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<8> imm8;
  let Inst{31-21} = 0b11000010111;
  let Inst{12-10} = 0b000;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-13} = imm8;
}
class CapBicRegFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b001010;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapBranchFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010000100;
  let Inst{4-0} = 0b00000;
  let Inst{9-5} = Cn;
}
class CapBranchDirectFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010000100;
  let Inst{4-0} = 0b00010;
  let Inst{9-5} = Cn;
}
class CapBranchExchange4Fmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  let Inst{31-0} = 0b11000010110000100111001111100000;
}
class CapBranchLinkFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010001100;
  let Inst{4-0} = 0b00000;
  let Inst{9-5} = Cn;
}
class CapBranchLinkDirectFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010001100;
  let Inst{4-0} = 0b00010;
  let Inst{9-5} = Cn;
}
class CapBranchLinkRestrictedFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010001100;
  let Inst{4-0} = 0b00011;
  let Inst{9-5} = Cn;
}
class CapBranchLinkSealedFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b101001;
  let Inst{4-0} = 0b00000;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapBranchRestrictedFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010000100;
  let Inst{4-0} = 0b00011;
  let Inst{9-5} = Cn;
}
class CapBranchSealedFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b100001;
  let Inst{4-0} = 0b00000;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapBuildCapFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b000001;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapCheckEqualsFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b101001;
  let Inst{4-0} = 0b00001;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapCheckSealedFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010000100;
  let Inst{4-0} = 0b00001;
  let Inst{9-5} = Cn;
}
class CapCheckSubsetFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b100001;
  let Inst{4-0} = 0b00001;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapCheckSubsetUnsealFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b100010;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapCheckTaggedFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010001100;
  let Inst{4-0} = 0b00001;
  let Inst{9-5} = Cn;
}
class CapClearPermFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b101000;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapClearPermImmFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<3> perm;
  let Inst{31-16} = 0b1100001011000110;
  let Inst{12-10} = 0b100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{15-13} = perm;
}
class CapClearTagFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000001100100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
}
class CapCompareSwapFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b10100010101;
  let Inst{15-10} = 0b011111;
  let Inst{20-16} = Cs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapCompareSwapAcqFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b10100010111;
  let Inst{15-10} = 0b011111;
  let Inst{20-16} = Cs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapCompareSwapAcqRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b10100010111;
  let Inst{15-10} = 0b111111;
  let Inst{20-16} = Cs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapCompareSwapRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b10100010101;
  let Inst{15-10} = 0b111111;
  let Inst{20-16} = Cs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapConvert64ToCapDDCFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Rn;
  let Inst{31-10} = 0b1100001011000101100100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Rn;
}
class CapConvert64ToCapDDCNullCheckFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Rn;
  let Inst{31-10} = 0b1100001011000101110100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Rn;
}
class CapConvert64ToCapPCCFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Rn;
  let Inst{31-10} = 0b1100001011000101101100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Rn;
}
class CapConvert64ToCapPCCNullCheckFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Rn;
  let Inst{31-10} = 0b1100001011000101111100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Rn;
}
class CapConvert64toCapFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010111;
  let Inst{15-10} = 0b000110;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapConvert64toCapNullCheckFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010111;
  let Inst{15-10} = 0b010110;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapConvertCapTo64Fmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b110000;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapConvertCapTo64DDCFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000101000100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapConvertCapTo64PCCFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000101001100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapCopyFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000001110100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
}
class CapCopyFromHighFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000001010100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapCopyToHighFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b111010;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapEorImmFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<8> imm8;
  let Inst{31-21} = 0b11000010111;
  let Inst{12-10} = 0b100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-13} = imm8;
}
class CapEorRegFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b101010;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapGetBaseFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000000000100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapGetFlagsFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000001001100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapGetLenFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000000001100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapGetLimitFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000001000100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapGetOffsetFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000000011100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapGetPermFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000000110100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapGetSealFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000000101100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapGetSysFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<15> csreg;
  let Inst{31-20} = 0b110000101001;
  let Inst{4-0} = Ct;
  let Inst{19-5} = csreg{14-0};
}
class CapGetTagFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000000100100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapGetTypeFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000000111100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapGetValueFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000000010100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
}
class CapLoadAcqFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-10} = 0b0100001001011111111111;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapLoadAcqPRFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-10} = 0b1010001000111111110000;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapLoadBranchIndirectFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  bits<7> imm7;
  let Inst{31-20} = 0b110000101101;
  let Inst{12-10} = 0b100;
  let Inst{4-0} = 0b00000;
  let Inst{9-5} = Cn;
  let Inst{19-13} = imm7;
}
class CapLoadBranchLinkIndirectFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  bits<7> imm7;
  let Inst{31-20} = 0b110000101101;
  let Inst{12-10} = 0b100;
  let Inst{4-0} = 0b00001;
  let Inst{9-5} = Cn;
  let Inst{19-13} = imm7;
}
class CapLoadExFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-10} = 0b0010001001011111011111;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapLoadExAcqFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-10} = 0b0010001001011111111111;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapLoadExPairFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  let Inst{31-15} = 0b00100010011111110;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
}
class CapLoadExPairAcqFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  let Inst{31-15} = 0b00100010011111111;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
}
class CapLoadImmPostFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10100010010;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class CapLoadImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<12> imm12;
  let Inst{31-22} = 0b1100001001;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{21-10} = imm12;
}
class CapLoadImmPreWFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10100010010;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class CapLoadLiteralFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<17> imm17;
  let Inst{31-22} = 0b1000001000;
  let Inst{4-0} = Ct;
  let Inst{21-5} = imm17;
}
class CapLoadPairBranchFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000100000100;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Cn;
}
class CapLoadPairBranchLinkFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000100001100;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Cn;
}
class CapLoadPairImmPostFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  bits<7> imm7;
  let Inst{31-22} = 0b0010001011;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
  let Inst{21-15} = imm7;
}
class CapLoadPairImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  bits<7> imm7;
  let Inst{31-22} = 0b0100001011;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
  let Inst{21-15} = imm7;
}
class CapLoadPairImmPreWFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  bits<7> imm7;
  let Inst{31-22} = 0b0110001011;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
  let Inst{21-15} = imm7;
}
class CapLoadPairNonTemporalFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  bits<7> imm7;
  let Inst{31-22} = 0b0110001001;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
  let Inst{21-15} = imm7;
}
class CapLoadTagsFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  let Inst{31-10} = 0b1100001011000100101100;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
}
class CapLoadUnprivFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10100010010;
  let Inst{11-10} = 0b10;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class CapLoadUnscaledImmFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10100010010;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class CapMovFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000001110100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
}
class CapOrImmFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<8> imm8;
  let Inst{31-21} = 0b11000010111;
  let Inst{12-10} = 0b010;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-13} = imm8;
}
class CapOrrRegFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b011010;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapReturnFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010010100;
  let Inst{4-0} = 0b00000;
  let Inst{9-5} = Cn;
}
class CapReturnDirectFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010010100;
  let Inst{4-0} = 0b00010;
  let Inst{9-5} = Cn;
}
class CapReturnRestrictedFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  let Inst{31-10} = 0b1100001011000010010100;
  let Inst{4-0} = 0b00011;
  let Inst{9-5} = Cn;
}
class CapReturnSealedFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b110001;
  let Inst{4-0} = 0b00000;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapRoundRepresentableLengthFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Rn;
  let Inst{31-10} = 0b1100001011000111000100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Rn;
}
class CapRoundRepresentableMaskFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Rn;
  let Inst{31-10} = 0b1100001011000111001100;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Rn;
}
class CapSealFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b000010;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapSealCondFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b010001;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapSealImmFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<2> form;
  let Inst{31-15} = 0b11000010110000110;
  let Inst{12-10} = 0b100;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{14-13} = form;
}
class CapSetBoundsFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b000000;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapSetBoundsExactFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b001000;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapSetFlagsFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b111000;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapSetOffsetFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b011000;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapSetSysFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<15> csreg;
  bits<5> Ct;
  let Inst{31-20} = 0b110000101000;
  let Inst{19-5} = csreg{14-0};
  let Inst{4-0} = Ct;
}
class CapSetTagPrivFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b100000;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapSetValueFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b010000;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Rm;
}
class CapSetValueFromTypeFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b001001;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapSetValueFromValueFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b011001;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapStoreExFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b00100010000;
  let Inst{15-10} = 0b011111;
  let Inst{20-16} = Rs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapStoreExPairFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rs;
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  let Inst{31-21} = 0b00100010001;
  let Inst{15} = 0b0;
  let Inst{20-16} = Rs;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
}
class CapStoreExPairRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rs;
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  let Inst{31-21} = 0b00100010001;
  let Inst{15} = 0b1;
  let Inst{20-16} = Rs;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
}
class CapStoreExRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b00100010000;
  let Inst{15-10} = 0b111111;
  let Inst{20-16} = Rs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapStoreImmPostFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10100010000;
  let Inst{11-10} = 0b01;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class CapStoreImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<12> imm12;
  let Inst{31-22} = 0b1100001000;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{21-10} = imm12;
}
class CapStoreImmPreWFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10100010000;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class CapStorePairImmPostFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  bits<7> imm7;
  let Inst{31-22} = 0b0010001010;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
  let Inst{21-15} = imm7;
}
class CapStorePairImmPreFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  bits<7> imm7;
  let Inst{31-22} = 0b0100001010;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
  let Inst{21-15} = imm7;
}
class CapStorePairImmPreWFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  bits<7> imm7;
  let Inst{31-22} = 0b0110001010;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
  let Inst{21-15} = imm7;
}
class CapStorePairNonTemporalFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Ct2;
  bits<5> Rn;
  bits<7> imm7;
  let Inst{31-22} = 0b0110001000;
  let Inst{4-0} = Ct;
  let Inst{14-10} = Ct2;
  let Inst{9-5} = Rn;
  let Inst{21-15} = imm7;
}
class CapStoreRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-10} = 0b0100001000011111111111;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapStoreTagsPrivFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rt;
  bits<5> Rn;
  let Inst{31-10} = 0b1100001011000100100100;
  let Inst{4-0} = Rt;
  let Inst{9-5} = Rn;
}
class CapStoreUnprivFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10100010000;
  let Inst{11-10} = 0b10;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class CapStoreUnscaledImmFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<9> imm9;
  let Inst{31-21} = 0b10100010000;
  let Inst{11-10} = 0b00;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
  let Inst{20-12} = imm9;
}
class CapSubSetFlagsFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Rd;
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010111;
  let Inst{15-10} = 0b100110;
  let Inst{4-0} = Rd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}
class CapSwapFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b10100010001;
  let Inst{15-10} = 0b100000;
  let Inst{20-16} = Cs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapSwapAcqFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b10100010101;
  let Inst{15-10} = 0b100000;
  let Inst{20-16} = Cs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapSwapAcqRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b10100010111;
  let Inst{15-10} = 0b100000;
  let Inst{20-16} = Cs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapSwapRelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cs;
  bits<5> Ct;
  bits<5> Rn;
  let Inst{31-21} = 0b10100010011;
  let Inst{15-10} = 0b100000;
  let Inst{20-16} = Cs;
  let Inst{4-0} = Ct;
  let Inst{9-5} = Rn;
}
class CapUnsealFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Cm;
  let Inst{31-21} = 0b11000010110;
  let Inst{15-10} = 0b010010;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
}

// ========================= Manually added encodings =========================

let mayLoad = 0, mayStore = 0, hasSideEffects = 0 in {
class CapCondSelFmt<dag oops, dag iops, string asm, string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Cm;
  bits<4> cond;
  let Inst{31-21} = 0b11000010110;
  let Inst{11-10} = 0b11;
  let Inst{4-0} = Cd;
  let Inst{9-5} = Cn;
  let Inst{20-16} = Cm;
  let Inst{15-12} = cond;
}

class CapAddSubImmBaseFmt<bit isSub, dag oops, dag iops, string asm,
                          string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<13> imm;
  let Inst{31-24} = 0b00000010;
  let Inst{23} = isSub;    // '0' => add, '1' => sub
  let Inst{22} = imm{12};  // '0' => lsl #0, '1' => lsl #12
  let Inst{21-10} = imm{11-0};
  let Inst{9-5} = Cn;
  let Inst{4-0} = Cd;
  let DecoderMethod = "DecodeCAddSubImmInstruction";
}

class CapAddImmFmt<dag oops, dag iops, string asm, string operands,
                   list<dag> pattern>
    : CapAddSubImmBaseFmt<0b0, oops, iops, asm, operands, pattern> { }

class CapSubImmFmt<dag oops, dag iops, string asm, string operands,
                   list<dag> pattern>
    : CapAddSubImmBaseFmt<0b1, oops, iops, asm, operands, pattern> { }

class CapAddRegBaseWFmt<dag oops, dag iops, string asm,
                     string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  bits<6> ext;
  let Inst{31-21} = 0b11000010101;
  let Inst{20-16} = Rm;
  let Inst{15-10} = ext;
  let Inst{9-5} = Cn;
  let Inst{4-0} = Cd;
  let DecoderMethod = "DecodeAddSubERegInstruction";
}

class CapAddRegBaseXFmt<dag oops, dag iops, string asm,
                     string operands, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<5> Rm;
  bits<6> ext;
  let Inst{31-21} = 0b11000010101;
  let Inst{20-16} = Rm;
  let Inst{15} = ext{5};
  let Inst{14-13} = 0b11;
  let Inst{12-10} = ext{2-0};
  let Inst{9-5} = Cn;
  let Inst{4-0} = Cd;
  let DecoderMethod = "DecodeAddSubERegInstruction";
}

class CapSetBoundsImmFmt<dag oops, dag iops, string asm, string operands,
                         list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, operands, pattern> {
  bits<5> Cd;
  bits<5> Cn;
  bits<7> imm;
  let Inst{31-21} = 0b11000010110;
  let Inst{20-15} = imm{5-0};
  let Inst{14} = imm{6};
  let Inst{13-10} = 0b1110;
  let Inst{9-5} = Cn;
  let Inst{4-0} = Cd;
}
}

class CapLoadStoreRegExtBaseFmt<bit isLoad, bit isWide,
                              dag oops, dag iops, string asm,
                              list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, "\t$Ct, [$Rn, $Rm, $extend]", pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<5> Rm;
  bits<2> extend;

  let Inst{31-23} = 0b101000100;
  let Inst{22} = isLoad;
  let Inst{21} = 0b1;
  let Inst{20-16} = Rm;
  let Inst{15} = extend{1};
  let Inst{14} = 1;
  let Inst{13} = isWide;
  let Inst{12} = extend{0};
  let Inst{11-10} = 0b10;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Ct;
}

class CapLoadRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : CapLoadStoreRegExtBaseFmt<0b1, 0b1, (outs Cap:$Ct),
                                (ins regtype:$Rn, GPR64:$Rm, ro_Xextend128:$extend),
                                asm, pattern> { }

class CapLoadRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : CapLoadStoreRegExtBaseFmt<0b1, 0b0, (outs Cap:$Ct),
                                (ins regtype:$Rn, GPR32:$Rm, ro_Wextend128:$extend),
                                 asm, pattern> { }

class CapStoreRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : CapLoadStoreRegExtBaseFmt<0b0, 0b1, (outs),
                                (ins Cap:$Ct, regtype:$Rn, GPR64:$Rm,
                                     ro_Xextend128:$extend),
                                asm, pattern> { }

class CapStoreRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : CapLoadStoreRegExtBaseFmt<0b0, 0b0, (outs),
                                (ins Cap:$Ct, regtype:$Rn, GPR32:$Rm,
                                     ro_Wextend128:$extend),
                                asm, pattern> { }


// Load/Store capability (register) via alternate base.
//
class AltLoadStoreCapRegExtFmt<bit isLoad, bit isWide, dag oops, dag iops,
                               string asm, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, "\t$Ct, [$Rn, $Rm, $extend]", pattern> {
  bits<5> Ct;
  bits<5> Rn;
  bits<5> Rm;
  bits<2> extend;

  let Inst{31-21} = 0b11000010111;
  let Inst{20-16} = Rm;
  let Inst{15} = extend{1}; // sign extend Rm?
  let Inst{14} = 0b1;
  let Inst{13} = isWide;
  let Inst{12} = extend{0}; // do shift?
  let Inst{11} = isLoad;
  let Inst{10} = 0b1;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Ct;
}

class AltLoadCapRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreCapRegExtFmt<0b1, 0b0, (outs Cap:$Ct),
                               (ins regtype:$Rn, GPR32:$Rm, ro_Wextend128:$extend),
                               asm, pattern> { }

class AltLoadCapRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreCapRegExtFmt<0b1, 0b1, (outs Cap:$Ct),
                               (ins regtype:$Rn, GPR64:$Rm, ro_Xextend128:$extend),
                               asm, pattern> { }

class AltStoreCapRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreCapRegExtFmt<0b0, 0b0, (outs),
                               (ins Cap:$Ct, regtype:$Rn, GPR32:$Rm, ro_Wextend128:$extend),
                               asm, pattern> { }

class AltStoreCapRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreCapRegExtFmt<0b0, 0b1, (outs),
                               (ins Cap:$Ct, regtype:$Rn, GPR64:$Rm, ro_Xextend128:$extend),
                               asm, pattern> { }

// Load/Store Register (register) via alternate base.
//
class AltLoadStoreWordRegExtFmt<bit isLoad, bit isDouble, bit isWide, dag oops,
                                dag iops, string asm, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, "\t$Rt, [$Rn, $Rm, $extend]", pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<5> Rm;
  bits<2> extend;

  let Inst{31-23} = 0b100000101;
  let Inst{22} = isLoad;
  let Inst{21} = 0b1;
  let Inst{20-16} = Rm;
  let Inst{15} = extend{1}; // sign extend Rm?
  let Inst{14} = 0b1;
  let Inst{13} = isWide;
  let Inst{12} = extend{0}; // do shift?
  let Inst{11} = 0b0;
  let Inst{10} = isDouble;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;
}

class AltLoadSWordRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreWordRegExtFmt<0b1, 0b0, 0b0, (outs GPR32:$Rt),
                                (ins regtype:$Rn, GPR32:$Rm, ro_Wextend32:$extend),
                                asm, pattern> { }

class AltLoadSWordRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreWordRegExtFmt<0b1, 0b0, 0b1, (outs GPR32:$Rt),
                                (ins regtype:$Rn, GPR64:$Rm, ro_Xextend32:$extend),
                                asm, pattern> { }

class AltLoadDWordRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreWordRegExtFmt<0b1, 0b1, 0b0, (outs GPR64:$Rt),
                                (ins regtype:$Rn, GPR32:$Rm, ro_Wextend64:$extend),
                                asm, pattern> { }

class AltLoadDWordRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreWordRegExtFmt<0b1, 0b1, 0b1, (outs GPR64:$Rt),
                                (ins regtype:$Rn, GPR64:$Rm, ro_Xextend64:$extend),
                                asm, pattern> { }

class AltStoreSWordRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreWordRegExtFmt<0b0, 0b0, 0b0, (outs),
                                (ins GPR32:$Rt, regtype:$Rn, GPR32:$Rm, ro_Wextend32:$extend),
                                asm, pattern> { }

class AltStoreSWordRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreWordRegExtFmt<0b0, 0b0, 0b1, (outs),
                                (ins GPR32:$Rt, regtype:$Rn, GPR64:$Rm, ro_Xextend32:$extend),
                                asm, pattern> { }

class AltStoreDWordRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreWordRegExtFmt<0b0, 0b1, 0b0, (outs),
                                (ins GPR64:$Rt, regtype:$Rn, GPR32:$Rm, ro_Wextend64:$extend),
                                asm, pattern> { }

class AltStoreDWordRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreWordRegExtFmt<0b0, 0b1, 0b1, (outs),
                                (ins GPR64:$Rt, regtype:$Rn, GPR64:$Rm, ro_Xextend64:$extend),
                                asm, pattern> { }

// Load/Store Register Byte (register) via alternate base.
//
class AltLoadStoreByteRegExtFmt<bit isLoad, bit isWide, dag oops, dag iops,
                                string asm, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, "\t$Rt, [$Rn, $Rm, $extend]", pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<5> Rm;
  bits<2> extend;

  let Inst{31-23} = 0b100000101;
  let Inst{22} = isLoad;
  let Inst{21} = 0b0;
  let Inst{20-16} = Rm;
  let Inst{15} = extend{1}; // sign extend Rm?
  let Inst{14} = 0b1;
  let Inst{13} = isWide;
  let Inst{12} = extend{0}; // do shift?
  let Inst{11-10} = 0b00;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;
}

class AltLoadByteRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreByteRegExtFmt<0b1, 0b0, (outs GPR32:$Rt),
                                (ins regtype:$Rn, GPR32:$Rm, ro_Wextend8:$extend),
                                asm, pattern> { }

class AltLoadByteRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreByteRegExtFmt<0b1, 0b1, (outs GPR32:$Rt),
                                (ins regtype:$Rn, GPR64:$Rm, ro_Xextend8:$extend),
                                asm, pattern> { }

class AltStoreByteRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreByteRegExtFmt<0b0, 0b0, (outs),
                                (ins GPR32:$Rt, regtype:$Rn, GPR32:$Rm, ro_Wextend8:$extend),
                                asm, pattern> { }

class AltStoreByteRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreByteRegExtFmt<0b0, 0b1, (outs),
                                (ins GPR32:$Rt, regtype:$Rn, GPR64:$Rm, ro_Xextend8:$extend),
                                asm, pattern> { }

// Load/Store Register Halfword (register) via alternate base.
//
class AltLoadStoreHalfwordRegExtFmt<bit isLoad, bit isWide, dag oops, dag iops,
                                    string asm, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, "\t$Rt, [$Rn, $Rm, $extend]", pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<5> Rm;
  bits<2> extend;

  let Inst{31-23} = 0b100000101;
  let Inst{22} = isLoad;
  let Inst{21} = 0b0;
  let Inst{20-16} = Rm;
  let Inst{15} = extend{1}; // sign extend Rm?
  let Inst{14} = 0b1;
  let Inst{13} = isWide;
  let Inst{12} = extend{0}; // do shift?
  let Inst{11-10} = 0b11;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;
}

class AltLoadHalfwordRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreHalfwordRegExtFmt<0b1, 0b0, (outs GPR32:$Rt),
                                    (ins regtype:$Rn, GPR32:$Rm, ro_Wextend16:$extend),
                                    asm, pattern> { }

class AltLoadHalfwordRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreHalfwordRegExtFmt<0b1, 0b1, (outs GPR32:$Rt),
                                    (ins regtype:$Rn, GPR64:$Rm, ro_Xextend16:$extend),
                                    asm, pattern> { }

class AltStoreHalfwordRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreHalfwordRegExtFmt<0b0, 0b0, (outs),
                                    (ins GPR32:$Rt, regtype:$Rn, GPR32:$Rm, ro_Wextend16:$extend),
                                    asm, pattern> { }

class AltStoreHalfwordRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreHalfwordRegExtFmt<0b0, 0b1, (outs),
                                    (ins GPR32:$Rt, regtype:$Rn, GPR64:$Rm, ro_Xextend16:$extend),
                                    asm, pattern> { }

// Load Register Signed Byte (register) via alternate base.
//
class AltLoadSignedByteRegExtFmt<bit isSingle, bit isWide, dag oops, dag iops,
                                 string asm, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, "\t$Rt, [$Rn, $Rm, $extend]", pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<5> Rm;
  bits<2> extend;

  let Inst{31-23} = 0b100000101;
  let Inst{22} = isSingle;
  let Inst{21} = 0b0;
  let Inst{20-16} = Rm;
  let Inst{15} = extend{1}; // sign extend Rm?
  let Inst{14} = 0b1;
  let Inst{13} = isWide;
  let Inst{12} = extend{0}; // do shift?
  let Inst{11-10} = 0b01;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;
}

class AltLoadSignedByteDRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadSignedByteRegExtFmt<0b0, 0b0, (outs GPR64:$Rt),
                                 (ins regtype:$Rn, GPR32:$Rm, ro_Wextend8:$extend),
                                 asm, pattern> { }

class AltLoadSignedByteDRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadSignedByteRegExtFmt<0b0, 0b1, (outs GPR64:$Rt),
                                 (ins regtype:$Rn, GPR64:$Rm, ro_Xextend8:$extend),
                                 asm, pattern> { }

class AltLoadSignedByteSRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadSignedByteRegExtFmt<0b1, 0b0, (outs GPR32:$Rt),
                                 (ins regtype:$Rn, GPR32:$Rm, ro_Wextend8:$extend),
                                 asm, pattern> { }

class AltLoadSignedByteSRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadSignedByteRegExtFmt<0b1, 0b1, (outs GPR32:$Rt),
                                 (ins regtype:$Rn, GPR64:$Rm, ro_Xextend8:$extend),
                                 asm, pattern> { }

// Load Register Signed Halfword (register) via alternate base.
//
class AltLoadSignedHalfwordRegExtFmt<bit isSingle, bit isWide, dag oops, dag iops,
                                     string asm, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, "\t$Rt, [$Rn, $Rm, $extend]", pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<5> Rm;
  bits<2> extend;

  let Inst{31-23} = 0b100000101;
  let Inst{22} = isSingle;
  let Inst{21} = 0b0;
  let Inst{20-16} = Rm;
  let Inst{15} = extend{1}; // sign extend Rm?
  let Inst{14} = 0b1;
  let Inst{13} = isWide;
  let Inst{12} = extend{0}; // do shift?
  let Inst{11-10} = 0b10;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;
}

class AltLoadSignedHalfwordDRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadSignedHalfwordRegExtFmt<0b0, 0b0, (outs GPR64:$Rt),
                                     (ins regtype:$Rn, GPR32:$Rm, ro_Wextend16:$extend),
                                     asm, pattern> { }

class AltLoadSignedHalfwordDRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadSignedHalfwordRegExtFmt<0b0, 0b1, (outs GPR64:$Rt),
                                     (ins regtype:$Rn, GPR64:$Rm, ro_Xextend16:$extend),
                                     asm, pattern> { }

class AltLoadSignedHalfwordSRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadSignedHalfwordRegExtFmt<0b1, 0b0, (outs GPR32:$Rt),
                                     (ins regtype:$Rn, GPR32:$Rm, ro_Wextend16:$extend),
                                     asm, pattern> { }

class AltLoadSignedHalfwordSRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadSignedHalfwordRegExtFmt<0b1, 0b1, (outs GPR32:$Rt),
                                     (ins regtype:$Rn, GPR64:$Rm, ro_Xextend16:$extend),
                                     asm, pattern> { }

// Load/Store SIMD&FP Register (register) via alternate base.
//
class AltLoadStoreFPRegExtFmt<bit isLoad, bit isSingle, bit isWide, dag oops, dag iops,
                              string asm, list<dag> pattern>
    : MorelloEncoding<oops, iops, asm, "\t$Rt, [$Rn, $Rm, $extend]", pattern> {
  bits<5> Rt;
  bits<5> Rn;
  bits<5> Rm;
  bits<2> extend;

  let Inst{31-23} = 0b100000101;
  let Inst{22} = isLoad;
  let Inst{21} = 0b1;
  let Inst{20-16} = Rm;
  let Inst{15} = extend{1}; // sign extend Rm?
  let Inst{14} = 0b1;
  let Inst{13} = isWide;
  let Inst{12} = extend{0}; // do shift?
  let Inst{11} = 0b1;
  let Inst{10} = isSingle;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;
}

class AltLoadDFPRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreFPRegExtFmt<0b1, 0b0, 0b0, (outs FPR64:$Rt),
                              (ins regtype:$Rn, GPR32:$Rm, ro_Wextend64:$extend),
                              asm, pattern> { }

class AltLoadDFPRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreFPRegExtFmt<0b1, 0b0, 0b1, (outs FPR64:$Rt),
                              (ins regtype:$Rn, GPR64:$Rm, ro_Xextend64:$extend),
                              asm, pattern> { }

class AltLoadSFPRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreFPRegExtFmt<0b1, 0b1, 0b0, (outs FPR32:$Rt),
                              (ins regtype:$Rn, GPR32:$Rm, ro_Wextend32:$extend),
                              asm, pattern> { }

class AltLoadSFPRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreFPRegExtFmt<0b1, 0b1, 0b1, (outs FPR32:$Rt),
                              (ins regtype:$Rn, GPR64:$Rm, ro_Xextend32:$extend),
                              asm, pattern> { }

class AltStoreDFPRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreFPRegExtFmt<0b0, 0b0, 0b0, (outs),
                              (ins FPR64:$Rt, regtype:$Rn, GPR32:$Rm, ro_Wextend64:$extend),
                              asm, pattern> { }

class AltStoreDFPRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreFPRegExtFmt<0b0, 0b0, 0b1, (outs),
                              (ins FPR64:$Rt, regtype:$Rn, GPR64:$Rm, ro_Xextend64:$extend),
                              asm, pattern> { }

class AltStoreSFPRegExtWFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreFPRegExtFmt<0b0, 0b1, 0b0, (outs),
                              (ins FPR32:$Rt, regtype:$Rn, GPR32:$Rm, ro_Wextend32:$extend),
                              asm, pattern> { }

class AltStoreSFPRegExtXFmt<RegisterClass regtype, string asm, list<dag> pattern>
    : AltLoadStoreFPRegExtFmt<0b0, 0b1, 0b1, (outs),
                              (ins FPR32:$Rt, regtype:$Rn, GPR64:$Rm, ro_Xextend32:$extend),
                              asm, pattern> { }

class CapADRI<bit page, bit pcrel, string asm, Operand adr, list<dag> pattern>
    : MorelloEncoding<(outs Cap:$Cd), (ins adr:$label), asm, "\t$Cd, $label",
                    pattern> {
  bits<5>  Cd;
  bits<20> label;
  let Inst{31}    = page;
  let Inst{30-29} = label{1-0};
  let Inst{28-24} = 0b10000;
  let Inst{23}    = pcrel;
  let Inst{22-5}  = label{19-2};
  let Inst{4-0}   = Cd;

  let DecoderMethod = "DecodeCAdrInstruction";
}
