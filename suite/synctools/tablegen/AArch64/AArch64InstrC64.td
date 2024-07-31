//=====- AArch64InstrC64.td - Describes C64 Instructions -*- tablegen -*--====//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=====------------------------------------------------------------------=====//
//
// AArch64 C64 Instruction definitions.
//
//====-------------------------------------------------------------------=====//

def SDT_AArch64CPREFETCH : SDTypeProfile<0, 2, [SDTCisVT<0, i32>, SDTCisFatPtrTy<1>]>;
def SDTFatPtrLeaf: SDTypeProfile<1, 0, [SDTCisFatPtrTy<0>]>;

def SDT_AArch64TLSDescC64CallSeq : SDTypeProfile<0,1,
                                          [SDTCisFatPtrTy<0>]>;
def AArch64CPrefetch        : SDNode<"AArch64ISD::PREFETCH", SDT_AArch64CPREFETCH,
                               [SDNPHasChain, SDNPSideEffect]>;
def AArch64cthreadpointer : SDNode<"AArch64ISD::THREAD_POINTER", SDTFatPtrLeaf>;
def AArch64C64tlsdesc_callseq : SDNode<"AArch64ISD::TLSDESC_CALLSEQ",
                                       SDT_AArch64TLSDescC64CallSeq,
                                       [SDNPInGlue, SDNPOutGlue, SDNPHasChain,
                                        SDNPVariadic]>;

//===------------------------------------------------
// Pure capability instructions from AArch64 variants
//===------------------------------------------------

let Predicates = [HasC64] in {
defm ASTRX : PStoreUI<0b11, 0, 0b00, GPR64, uimm12s8, "str",
                   [(cstore GPR64:$Rt,
                            (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))]>;
defm ASTRW : PStoreUI<0b10, 0, 0b00, GPR32, uimm12s4, "str",
                    [(cstore GPR32:$Rt,
                            (am_cindexed32 Capsp:$Rn, uimm12s4:$offset))]>;
defm ASTRB : PStoreUI<0b00, 1, 0b00, FPR8, uimm12s1, "str",
                    [(cstore FPR8:$Rt,
                            (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))]>;
defm ASTRH : PStoreUI<0b01, 1, 0b00, FPR16, uimm12s2, "str",
                    [(cstore (f16 FPR16:$Rt),
                            (am_cindexed16 Capsp:$Rn, uimm12s2:$offset))]>;
defm ASTRS : PStoreUI<0b10, 1, 0b00, FPR32, uimm12s4, "str",
                    [(cstore (f32 FPR32:$Rt),
                            (am_cindexed32 Capsp:$Rn, uimm12s4:$offset))]>;
defm ASTRD : PStoreUI<0b11, 1, 0b00, FPR64, uimm12s8, "str",
                    [(cstore (f64 FPR64:$Rt),
                            (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))]>;
defm ASTRQ : PStoreUI<0b00, 1, 0b10, FPR128, uimm12s16, "str", []>;

defm ASTRHH : PStoreUI<0b01, 0, 0b00, GPR32, uimm12s2, "strh",
                     [(trunccstorei16 GPR32:$Rt,
                                     (am_cindexed16 Capsp:$Rn,
                                                   uimm12s2:$offset))]>;
defm ASTRBB : PStoreUI<0b00, 0, 0b00, GPR32, uimm12s1,  "strb",
                     [(trunccstorei8 GPR32:$Rt,
                                    (am_cindexed8 Capsp:$Rn,
                                                 uimm12s1:$offset))]>;
}

// Match all store 64 bits width whose type is compatible with FPR64
let Predicates = [HasC64, IsLE], AddedComplexity = 10 in {
  // We must use ST1 to store vectors in big-endian.
  def : Pat<(cstore (v2f32 FPR64:$Rt),
                   (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)),
            (ASTRDui FPR64:$Rt, Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(cstore (v8i8 FPR64:$Rt),
                   (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)),
            (ASTRDui FPR64:$Rt, Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(cstore (v4i16 FPR64:$Rt),
                   (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)),
            (ASTRDui FPR64:$Rt, Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(cstore (v2i32 FPR64:$Rt),
                   (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)),
            (ASTRDui FPR64:$Rt, Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(cstore (v4f16 FPR64:$Rt),
                   (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)),
            (ASTRDui FPR64:$Rt, Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(cstore (v4bf16 FPR64:$Rt),
                   (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)),
            (ASTRDui FPR64:$Rt, Capsp:$Rn, uimm12s8:$offset)>;
}

let Predicates = [HasC64], AddedComplexity = 10 in {
def : Pat<(cstore (v1f64 FPR64:$Rt),
                 (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)),
          (ASTRDui FPR64:$Rt, Capsp:$Rn, uimm12s8:$offset)>;
def : Pat<(cstore (v1i64 FPR64:$Rt),
                 (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)),
          (ASTRDui FPR64:$Rt, Capsp:$Rn, uimm12s8:$offset)>;
}

// Match all store 128 bits width whose type is compatible with FPR128
let Predicates = [HasC64, IsLE], AddedComplexity = 10 in {
  // We must use ST1 to store vectors in big-endian.
  def : Pat<(cstore (v4f32 FPR128:$Rt),
                   (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)),
            (ASTRQui FPR128:$Rt, Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(cstore (v2f64 FPR128:$Rt),
                   (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)),
            (ASTRQui FPR128:$Rt, Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(cstore (v16i8 FPR128:$Rt),
                   (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)),
            (ASTRQui FPR128:$Rt, Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(cstore (v8i16 FPR128:$Rt),
                   (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)),
            (ASTRQui FPR128:$Rt, Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(cstore (v4i32 FPR128:$Rt),
                   (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)),
            (ASTRQui FPR128:$Rt, Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(cstore (v2i64 FPR128:$Rt),
                   (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)),
            (ASTRQui FPR128:$Rt, Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(cstore (v8f16 FPR128:$Rt),
                   (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)),
            (ASTRQui FPR128:$Rt, Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(cstore (v8bf16 FPR128:$Rt),
                   (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)),
            (ASTRQui FPR128:$Rt, Capsp:$Rn, uimm12s16:$offset)>;
}

let Predicates = [HasC64], AddedComplexity = 10 in {
def : Pat<(cstore (f128  FPR128:$Rt),
                 (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)),
          (ASTRQui FPR128:$Rt, Capsp:$Rn, uimm12s16:$offset)>;

// truncstore i64
def : Pat<(trunccstorei32 GPR64:$Rt,
                         (am_cindexed32 Capsp:$Rn, uimm12s4:$offset)),
  (ASTRWui (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$Rn, uimm12s4:$offset)>;
def : Pat<(trunccstorei16 GPR64:$Rt,
                         (am_cindexed16 Capsp:$Rn, uimm12s2:$offset)),
  (ASTRHHui (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$Rn, uimm12s2:$offset)>;
def : Pat<(trunccstorei8 GPR64:$Rt, (am_cindexed8 Capsp:$Rn, uimm12s1:$offset)),
  (ASTRBBui (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$Rn, uimm12s1:$offset)>;
}

let Predicates = [HasC64] in {
//---
// (unsigned immediate)
//---
defm ALDRX : PLoadUI<0b11, 0, 0b01, GPR64z, uimm12s8, "ldr",
                   [(set GPR64z:$Rt,
                         (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)))]>;
defm ALDRW : PLoadUI<0b10, 0, 0b01, GPR32z, uimm12s4, "ldr",
                   [(set GPR32z:$Rt,
                         (cload (am_cindexed32 Capsp:$Rn, uimm12s4:$offset)))]>;
defm ALDRB : PLoadUI<0b00, 1, 0b01, FPR8Op, uimm12s1, "ldr",
                   [(set FPR8Op:$Rt,
                         (cload (am_cindexed8 Capsp:$Rn, uimm12s1:$offset)))]>;
defm ALDRH : PLoadUI<0b01, 1, 0b01, FPR16Op, uimm12s2, "ldr",
                   [(set (f16 FPR16Op:$Rt),
                         (cload (am_cindexed16 Capsp:$Rn, uimm12s2:$offset)))]>;
defm ALDRS : PLoadUI<0b10, 1, 0b01, FPR32Op, uimm12s4, "ldr",
                   [(set (f32 FPR32Op:$Rt),
                         (cload (am_cindexed32 Capsp:$Rn, uimm12s4:$offset)))]>;
defm ALDRD : PLoadUI<0b11, 1, 0b01, FPR64Op, uimm12s8, "ldr",
                   [(set (f64 FPR64Op:$Rt),
                         (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset)))]>;
defm ALDRQ : PLoadUI<0b00, 1, 0b11, FPR128Op, uimm12s16, "ldr",
                 [(set (f128 FPR128Op:$Rt),
                       (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset)))]>;

// bf16 load pattern
def : Pat <(bf16 (load (am_cindexed64 Capsp:$Rn, uimm12s2:$offset))),
           (ALDRHui Capsp:$Rn, uimm12s2:$offset)>;


def : Pat <(v8i8 (scalar_to_vector (i32
               (extcloadi8 (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))))),
           (INSERT_SUBREG (v8i8 (IMPLICIT_DEF)),
                          (ALDRBui Capsp:$Rn, uimm12s1:$offset), bsub)>;
def : Pat <(v16i8 (scalar_to_vector (i32
               (extcloadi8 (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))))),
           (INSERT_SUBREG (v16i8 (IMPLICIT_DEF)),
                          (ALDRBui Capsp:$Rn, uimm12s1:$offset), bsub)>;
def : Pat <(v4i16 (scalar_to_vector (i32
               (extcloadi16 (am_cindexed16 Capsp:$Rn, uimm12s2:$offset))))),
           (INSERT_SUBREG (v4i16 (IMPLICIT_DEF)),
                          (ALDRHui Capsp:$Rn, uimm12s2:$offset), hsub)>;
def : Pat <(v8i16 (scalar_to_vector (i32
               (extcloadi16 (am_cindexed16 Capsp:$Rn, uimm12s2:$offset))))),
           (INSERT_SUBREG (v8i16 (IMPLICIT_DEF)),
                          (ALDRHui Capsp:$Rn, uimm12s2:$offset), hsub)>;
def : Pat <(v2i32 (scalar_to_vector (i32
               (cload (am_cindexed32 Capsp:$Rn, uimm12s4:$offset))))),
           (INSERT_SUBREG (v2i32 (IMPLICIT_DEF)),
                          (ALDRSui Capsp:$Rn, uimm12s4:$offset), ssub)>;
def : Pat <(v4i32 (scalar_to_vector (i32
               (cload (am_cindexed32 Capsp:$Rn, uimm12s4:$offset))))),
           (INSERT_SUBREG (v4i32 (IMPLICIT_DEF)),
                          (ALDRSui Capsp:$Rn, uimm12s4:$offset), ssub)>;
def : Pat <(v1i64 (scalar_to_vector (i64
               (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))))),
           (ALDRDui Capsp:$Rn, uimm12s8:$offset)>;
def : Pat <(v2i64 (scalar_to_vector (i64
               (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))))),
           (INSERT_SUBREG (v2i64 (IMPLICIT_DEF)),
                          (ALDRDui Capsp:$Rn, uimm12s8:$offset), dsub)>;
} // Predicates = [HasC64]

// Match all load 64 bits width whose type is compatible with FPR64
let Predicates = [HasC64, IsLE] in {
  // We must use LD1 to perform vector loads in big-endian.
  def : Pat<(v2f32 (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))),
            (ALDRDui Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(v8i8 (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))),
            (ALDRDui Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(v4i16 (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))),
            (ALDRDui Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(v2i32 (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))),
            (ALDRDui Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(v4f16 (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))),
            (ALDRDui Capsp:$Rn, uimm12s8:$offset)>;
  def : Pat<(v4bf16 (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))),
	    (ALDRDui Capsp:$Rn, uimm12s8:$offset)>;
}

let Predicates = [HasC64] in {
def : Pat<(v1f64 (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))),
          (ALDRDui Capsp:$Rn, uimm12s8:$offset)>;
def : Pat<(v1i64 (cload (am_cindexed64 Capsp:$Rn, uimm12s8:$offset))),
          (ALDRDui Capsp:$Rn, uimm12s8:$offset)>;
}

// Match all load 128 bits width whose type is compatible with FPR128
let Predicates = [HasC64, IsLE] in {
  // We must use LD1 to perform vector loads in big-endian.
  def : Pat<(v4f32 (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset))),
            (ALDRQui Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(v2f64 (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset))),
            (ALDRQui Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(v16i8 (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset))),
            (ALDRQui Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(v8i16 (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset))),
            (ALDRQui Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(v4i32 (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset))),
            (ALDRQui Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(v2i64 (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset))),
            (ALDRQui Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(v8f16 (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset))),
            (ALDRQui Capsp:$Rn, uimm12s16:$offset)>;
  def : Pat<(v8bf16 (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset))),
            (ALDRQui Capsp:$Rn, uimm12s16:$offset)>;
}

let Predicates = [HasC64] in {

def : Pat<(f128  (cload (am_cindexed128 Capsp:$Rn, uimm12s16:$offset))),
          (ALDRQui Capsp:$Rn, uimm12s16:$offset)>;

defm ALDRHH : PLoadUI<0b01, 0, 0b01, GPR32, uimm12s2, "ldrh",
                    [(set GPR32:$Rt,
                          (zextcloadi16 (am_cindexed16 Capsp:$Rn,
                                                      uimm12s2:$offset)))]>;
defm ALDRBB : PLoadUI<0b00, 0, 0b01, GPR32, uimm12s1, "ldrb",
                    [(set GPR32:$Rt,
                          (zextcloadi8 (am_cindexed8 Capsp:$Rn,
                                                    uimm12s1:$offset)))]>;

// zextload -> i64
def : Pat<(i64 (zextcloadi8 (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDRBBui Capsp:$Rn, uimm12s1:$offset), sub_32)>;
def : Pat<(i64 (zextcloadi16 (am_cindexed16 Capsp:$Rn, uimm12s2:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDRHHui Capsp:$Rn, uimm12s2:$offset), sub_32)>;

// zextloadi1 -> zextloadi8
def : Pat<(i32 (zextcloadi1 (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))),
          (ALDRBBui Capsp:$Rn, uimm12s1:$offset)>;
def : Pat<(i64 (zextcloadi1 (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDRBBui Capsp:$Rn, uimm12s1:$offset), sub_32)>;

// extload -> zextload
def : Pat<(i32 (extcloadi16 (am_cindexed16 Capsp:$Rn, uimm12s2:$offset))),
          (ALDRHHui Capsp:$Rn, uimm12s2:$offset)>;
def : Pat<(i32 (extcloadi8 (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))),
          (ALDRBBui Capsp:$Rn, uimm12s1:$offset)>;
def : Pat<(i32 (extcloadi1 (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))),
          (ALDRBBui Capsp:$Rn, uimm12s1:$offset)>;
def : Pat<(i64 (extcloadi32 (am_cindexed32 Capsp:$Rn, uimm12s4:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDRWui Capsp:$Rn, uimm12s4:$offset), sub_32)>;
def : Pat<(i64 (extcloadi16 (am_cindexed16 Capsp:$Rn, uimm12s2:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDRHHui Capsp:$Rn, uimm12s2:$offset), sub_32)>;
def : Pat<(i64 (extcloadi8 (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDRBBui Capsp:$Rn, uimm12s1:$offset), sub_32)>;
def : Pat<(i64 (extcloadi1 (am_cindexed8 Capsp:$Rn, uimm12s1:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDRBBui Capsp:$Rn, uimm12s1:$offset), sub_32)>;

defm ALDRSHW : PLoadUI<0b01, 0, 0b11, GPR32, uimm12s2, "ldrsh",
                     [(set GPR32:$Rt,
                           (sextcloadi16 (am_cindexed16 Capsp:$Rn,
                                                       uimm12s2:$offset)))]>;
defm ALDRSHX : PLoadUI<0b01, 0, 0b10, GPR64, uimm12s2, "ldrsh",
                     [(set GPR64:$Rt,
                           (sextcloadi16 (am_cindexed16 Capsp:$Rn,
                                                       uimm12s2:$offset)))]>;

// load sign-extended byte
defm ALDRSBW : PLoadUI<0b00, 0, 0b11, GPR32, uimm12s1, "ldrsb",
                     [(set GPR32:$Rt,
                           (sextcloadi8 (am_cindexed8 Capsp:$Rn,
                                                     uimm12s1:$offset)))]>;
defm ALDRSBX : PLoadUI<0b00, 0, 0b10, GPR64, uimm12s1, "ldrsb",
                     [(set GPR64:$Rt,
                           (sextcloadi8 (am_cindexed8 Capsp:$Rn,
                                                     uimm12s1:$offset)))]>;

// load sign-extended word
defm ALDRSW  : PLoadUI<0b10, 0, 0b10, GPR64, uimm12s4, "ldrsw",
                     [(set GPR64:$Rt,
                           (sextcloadi32 (am_cindexed32 Capsp:$Rn,
                                                       uimm12s4:$offset)))]>;
// load zero-extended word
def : Pat<(i64 (zextcloadi32 (am_cindexed32 Capsp:$Rn, uimm12s4:$offset))),
      (SUBREG_TO_REG (i64 0), (ALDRWui Capsp:$Rn, uimm12s4:$offset), sub_32)>;

//---
// (register offset)
//---

// Integer
defm ALDRBB : PLoad8RO<0b00,  0, 0b01, GPR32, "ldrb", i32, zextcloadi8>;
defm ALDRHH : PLoad16RO<0b01, 0, 0b01, GPR32, "ldrh", i32, zextcloadi16>;
defm ALDRW  : PLoad32RO<0b10, 0, 0b01, GPR32, "ldr", i32, cload>;
defm ALDRX  : PLoad64RO<0b11, 0, 0b01, GPR64, "ldr", i64, cload>;

// Floating-point
defm ALDRB : PLoad8RO<0b00,   1, 0b01, FPR8Op,   "ldr", untyped, cload>;
defm ALDRH : PLoad16RO<0b01,  1, 0b01, FPR16Op,  "ldr", f16, cload>;
defm ALDRS : PLoad32RO<0b10,  1, 0b01, FPR32Op,  "ldr", f32, cload>;
defm ALDRD : PLoad64RO<0b11,  1, 0b01, FPR64Op,  "ldr", f64, cload>;
defm ALDRQ : PLoad128RO<0b00, 1, 0b11, FPR128Op, "ldr", f128, cload>;

// Load sign-extended half-word
defm ALDRSHW : PLoad16RO<0b01, 0, 0b11, GPR32, "ldrsh", i32, sextcloadi16>;
defm ALDRSHX : PLoad16RO<0b01, 0, 0b10, GPR64, "ldrsh", i64, sextcloadi16>;

// Load sign-extended byte
defm ALDRSBW : PLoad8RO<0b00, 0, 0b11, GPR32, "ldrsb", i32, sextcloadi8>;
defm ALDRSBX : PLoad8RO<0b00, 0, 0b10, GPR64, "ldrsb", i64, sextcloadi8>;

// Load sign-extended word
defm ALDRSW  : PLoad32RO<0b10, 0, 0b10, GPR64, "ldrsw", i64, sextcloadi32>;

// For regular load, we do not have any alignment requirement.
// Thus, it is safe to directly map the vector loads with interesting
// addressing modes.
// FIXME: We could do the same for bitconvert to floating point vectors.
multiclass PScalToVecROLoadPat<ROAddrMode ro, SDPatternOperator loadop,
                               ValueType ScalTy, ValueType VecTy,
                               Instruction LOADW, Instruction LOADX,
                               SubRegIndex sub> {
  def : Pat<(VecTy (scalar_to_vector (ScalTy
              (loadop (ro.Wpat Capsp:$Rn, GPR32:$Rm, ro.Wext:$offset))))),
            (INSERT_SUBREG (VecTy (IMPLICIT_DEF)),
                           (LOADW Capsp:$Rn, GPR32:$Rm, ro.Wext:$offset),
                           sub)>;

  def : Pat<(VecTy (scalar_to_vector (ScalTy
              (loadop (ro.Xpat Capsp:$Rn, GPR64:$Rm, ro.Xext:$offset))))),
            (INSERT_SUBREG (VecTy (IMPLICIT_DEF)),
                           (LOADX Capsp:$Rn, GPR64:$Rm, ro.Xext:$offset),
                           sub)>;
}

let AddedComplexity = 10 in {
defm : PScalToVecROLoadPat<cro8, extcloadi8,  i32, v8i8, ALDRBroW, ALDRBroX,
                           bsub>;
defm : PScalToVecROLoadPat<cro8,  extcloadi8,  i32, v16i8, ALDRBroW, ALDRBroX,
                           bsub>;
defm : PScalToVecROLoadPat<cro16, extcloadi16, i32, v4i16, ALDRHroW, ALDRHroX,
                           hsub>;
defm : PScalToVecROLoadPat<cro16, extcloadi16, i32, v8i16, ALDRHroW, ALDRHroX,
                           hsub>;
defm : PScalToVecROLoadPat<cro16, cload, i32, v4f16, ALDRHroW, ALDRHroX, hsub>;
defm : PScalToVecROLoadPat<cro16, cload, i32, v8f16, ALDRHroW, ALDRHroX, hsub>;
defm : PScalToVecROLoadPat<cro32, cload, i32, v2i32, ALDRSroW, ALDRSroX, ssub>;
defm : PScalToVecROLoadPat<cro32, cload, i32, v4i32, ALDRSroW, ALDRSroX, ssub>;
defm : PScalToVecROLoadPat<cro32, cload, f32, v2f32, ALDRSroW, ALDRSroX, ssub>;
defm : PScalToVecROLoadPat<cro32, cload, f32, v4f32, ALDRSroW, ALDRSroX, ssub>;
defm : PScalToVecROLoadPat<cro64, cload, i64, v2i64, ALDRDroW, ALDRDroX, dsub>;
defm : PScalToVecROLoadPat<cro64, cload, f64, v2f64, ALDRDroW, ALDRDroX, dsub>;

def : Pat <(v1i64 (scalar_to_vector (i64
                      (cload (cro_Windexed64 Capsp:$Rn, GPR32:$Rm,
                                           ro_Wextend64:$extend))))),
           (ALDRDroW Capsp:$Rn, GPR32:$Rm, ro_Wextend64:$extend)>;

def : Pat <(v1i64 (scalar_to_vector (i64
                      (cload (cro_Xindexed64 Capsp:$Rn, GPR64:$Rm,
                                           ro_Xextend64:$extend))))),
           (ALDRDroX Capsp:$Rn, GPR64:$Rm, ro_Xextend64:$extend)>;
} // AddedComplexity = 10

// Match all load 64 bits width whose type is compatible with FPR64
multiclass PVecROLoadPat<ROAddrMode ro, ValueType VecTy,
                        Instruction LOADW, Instruction LOADX> {

  def : Pat<(VecTy (cload (ro.Wpat Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend))),
            (LOADW Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend)>;

  def : Pat<(VecTy (cload (ro.Xpat Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend))),
            (LOADX Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend)>;
}
} // Predicates = [HasC64]

let Predicates = [HasC64, IsLE], AddedComplexity = 10 in {
  // We must do vector loads with LD1 in big-endian.
  defm : PVecROLoadPat<cro64, v2i32, ALDRDroW, ALDRDroX>;
  defm : PVecROLoadPat<cro64, v2f32, ALDRDroW, ALDRDroX>;
  defm : PVecROLoadPat<cro64, v8i8,  ALDRDroW, ALDRDroX>;
  defm : PVecROLoadPat<cro64, v4i16, ALDRDroW, ALDRDroX>;
  defm : PVecROLoadPat<cro64, v4f16, ALDRDroW, ALDRDroX>;
  defm : PVecROLoadPat<cro64, v4bf16, ALDRDroW, ALDRDroX>;
}

let Predicates = [HasC64], AddedComplexity = 10 in {
  defm : PVecROLoadPat<cro64, v1i64,  ALDRDroW, ALDRDroX>;
  defm : PVecROLoadPat<cro64, v1f64,  ALDRDroW, ALDRDroX>;
}

let Predicates = [HasC64, IsLE], AddedComplexity = 10 in {
  // We must do vector loads with LD1 in big-endian.
  defm : PVecROLoadPat<cro128, v2i64,  ALDRQroW, ALDRQroX>;
  defm : PVecROLoadPat<cro128, v2f64,  ALDRQroW, ALDRQroX>;
  defm : PVecROLoadPat<cro128, v4i32,  ALDRQroW, ALDRQroX>;
  defm : PVecROLoadPat<cro128, v4f32,  ALDRQroW, ALDRQroX>;
  defm : PVecROLoadPat<cro128, v8i16,  ALDRQroW, ALDRQroX>;
  defm : PVecROLoadPat<cro128, v8f16,  ALDRQroW, ALDRQroX>;
  defm : PVecROLoadPat<cro128, v8bf16,  ALDRQroW, ALDRQroX>;
  defm : PVecROLoadPat<cro128, v16i8,  ALDRQroW, ALDRQroX>;
}

// zextload -> i64
multiclass PExtLoadTo64ROPat<ROAddrMode ro, SDPatternOperator loadop,
                            Instruction INSTW, Instruction INSTX> {
  def : Pat<(i64 (loadop (ro.Wpat Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend))),
            (SUBREG_TO_REG (i64 0),
                           (INSTW Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend),
                           sub_32)>;

  def : Pat<(i64 (loadop (ro.Xpat Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend))),
            (SUBREG_TO_REG (i64 0),
                           (INSTX Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend),
                           sub_32)>;
}

let Predicates = [HasC64] in {
let AddedComplexity = 10 in {
  defm : PExtLoadTo64ROPat<cro8,  zextcloadi8,  ALDRBBroW, ALDRBBroX>;
  defm : PExtLoadTo64ROPat<cro16, zextcloadi16, ALDRHHroW, ALDRHHroX>;
  defm : PExtLoadTo64ROPat<cro32, zextcloadi32, ALDRWroW,  ALDRWroX>;

  // zextcloadi1 -> zextcloadi8
  defm : PExtLoadTo64ROPat<cro8,  zextcloadi1,  ALDRBBroW, ALDRBBroX>;

  // extload -> zextload
  defm : PExtLoadTo64ROPat<cro8,  extcloadi8,   ALDRBBroW, ALDRBBroX>;
  defm : PExtLoadTo64ROPat<cro16, extcloadi16,  ALDRHHroW, ALDRHHroX>;
  defm : PExtLoadTo64ROPat<cro32, extcloadi32,  ALDRWroW,  ALDRWroX>;

  // extcloadi1 -> zextcloadi8
  defm : PExtLoadTo64ROPat<cro8,  extcloadi1,   ALDRBBroW, ALDRBBroX>;
}

// zextload -> i64
multiclass PExtLoadTo32ROPat<ROAddrMode ro, SDPatternOperator loadop,
                            Instruction INSTW, Instruction INSTX> {
  def : Pat<(i32 (loadop (ro.Wpat Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend))),
            (INSTW Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend)>;

  def : Pat<(i32 (loadop (ro.Xpat Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend))),
            (INSTX Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend)>;

}

let AddedComplexity = 10 in {
  // extload -> zextload
  defm : PExtLoadTo32ROPat<cro8,  extcloadi8, ALDRBBroW, ALDRBBroX>;
  defm : PExtLoadTo32ROPat<cro16, extcloadi16, ALDRHHroW, ALDRHHroX>;
  defm : PExtLoadTo32ROPat<cro32, extcloadi32, ALDRWroW, ALDRWroX>;

  // zextloadi1 -> zextloadi8
  defm : PExtLoadTo32ROPat<cro8, zextcloadi1, ALDRBBroW, ALDRBBroX>;
}

//---
// (unscaled immediate)

defm ALDURX : PLoadUnscaled<0b11, 0, 0b01, GPR64z, "ldur",
                    [(set GPR64z:$Rt,
                          (cload (am_pcunscaled64 Capsp:$Rn, simm9:$offset)))]>;
defm ALDURW : PLoadUnscaled<0b10, 0, 0b01, GPR32z, "ldur",
                    [(set GPR32z:$Rt,
                          (cload (am_pcunscaled32 Capsp:$Rn, simm9:$offset)))]>;
defm ALDURB : PLoadUnscaled<0b00, 1, 0b01, FPR8Op, "ldur",
                    [(set FPR8Op:$Rt,
                          (cload (am_pcunscaled8 Capsp:$Rn, simm9:$offset)))]>;
defm ALDURH : PLoadUnscaled<0b01, 1, 0b01, FPR16Op, "ldur",
                    [(set (f16 FPR16Op:$Rt),
                          (cload (am_pcunscaled16 Capsp:$Rn, simm9:$offset)))]>;
defm ALDURS : PLoadUnscaled<0b10, 1, 0b01, FPR32Op, "ldur",
                    [(set (f32 FPR32Op:$Rt),
                          (cload (am_pcunscaled32 Capsp:$Rn, simm9:$offset)))]>;
defm ALDURD : PLoadUnscaled<0b11, 1, 0b01, FPR64Op, "ldur",
                    [(set (f64 FPR64Op:$Rt),
                          (cload (am_pcunscaled64 Capsp:$Rn, simm9:$offset)))]>;
defm ALDURQ : PLoadUnscaled<0b00, 1, 0b11, FPR128Op, "ldur",
                    [(set (f128 FPR128Op:$Rt),
                          (cload (am_pcunscaled128 Capsp:$Rn, simm9:$offset)))]>;

defm ALDURHH
    : PLoadUnscaled<0b01, 0, 0b01, GPR32, "ldurh",
             [(set GPR32:$Rt,
                    (zextcloadi16 (am_pcunscaled16 Capsp:$Rn, simm9:$offset)))]>;
defm ALDURBB
    : PLoadUnscaled<0b00, 0, 0b01, GPR32, "ldurb",
             [(set GPR32:$Rt,
                    (zextcloadi8 (am_pcunscaled16 Capsp:$Rn, simm9:$offset)))]>;
}


// Match all load 64 bits width whose type is compatible with FPR64
let Predicates = [HasC64, IsLE] in {
  def : Pat<(v2f32 (cload (am_pcunscaled64 Capsp:$Rn, simm9:$offset))),
            (ALDURDi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v2i32 (cload (am_pcunscaled64 Capsp:$Rn, simm9:$offset))),
            (ALDURDi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v4i16 (cload (am_pcunscaled64 Capsp:$Rn, simm9:$offset))),
            (ALDURDi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v8i8 (cload (am_pcunscaled64 Capsp:$Rn, simm9:$offset))),
            (ALDURDi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v4f16 (cload (am_pcunscaled64 Capsp:$Rn, simm9:$offset))),
            (ALDURDi Capsp:$Rn, simm9:$offset)>;
}

let Predicates = [HasC64] in {
def : Pat<(v1f64 (cload (am_pcunscaled64 Capsp:$Rn, simm9:$offset))),
          (ALDURDi Capsp:$Rn, simm9:$offset)>;
def : Pat<(v1i64 (cload (am_pcunscaled64 Capsp:$Rn, simm9:$offset))),
          (ALDURDi Capsp:$Rn, simm9:$offset)>;
}

// Match all load 128 bits width whose type is compatible with FPR128
let Predicates = [HasC64, IsLE] in {
  def : Pat<(v2f64 (cload (am_pcunscaled128 Capsp:$Rn, simm9:$offset))),
            (ALDURQi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v2i64 (cload (am_pcunscaled128 Capsp:$Rn, simm9:$offset))),
            (ALDURQi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v4f32 (cload (am_pcunscaled128 Capsp:$Rn, simm9:$offset))),
            (ALDURQi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v4i32 (cload (am_pcunscaled128 Capsp:$Rn, simm9:$offset))),
            (ALDURQi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v8i16 (cload (am_pcunscaled128 Capsp:$Rn, simm9:$offset))),
            (ALDURQi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v16i8 (cload (am_pcunscaled128 Capsp:$Rn, simm9:$offset))),
            (ALDURQi Capsp:$Rn, simm9:$offset)>;
  def : Pat<(v8f16 (cload (am_pcunscaled128 Capsp:$Rn, simm9:$offset))),
            (ALDURQi Capsp:$Rn, simm9:$offset)>;
}

let Predicates = [HasC64] in {

//  anyext -> zext
def : Pat<(i32 (extcloadi16 (am_pcunscaled16 Capsp:$Rn, simm9:$offset))),
          (ALDURHHi Capsp:$Rn, simm9:$offset)>;
def : Pat<(i32 (extcloadi8 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))),
          (ALDURBBi Capsp:$Rn, simm9:$offset)>;
def : Pat<(i32 (extcloadi1 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))),
          (ALDURBBi Capsp:$Rn, simm9:$offset)>;
def : Pat<(i64 (extcloadi32 (am_pcunscaled32 Capsp:$Rn, simm9:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDURWi Capsp:$Rn, simm9:$offset), sub_32)>;
def : Pat<(i64 (extcloadi16 (am_pcunscaled16 Capsp:$Rn, simm9:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDURHHi Capsp:$Rn, simm9:$offset), sub_32)>;
def : Pat<(i64 (extcloadi8 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDURBBi Capsp:$Rn, simm9:$offset), sub_32)>;
def : Pat<(i64 (extcloadi1 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDURBBi Capsp:$Rn, simm9:$offset), sub_32)>;

// unscaled zext
def : Pat<(i32 (zextcloadi16 (am_pcunscaled16 Capsp:$Rn, simm9:$offset))),
          (ALDURHHi Capsp:$Rn, simm9:$offset)>;
def : Pat<(i32 (zextcloadi8 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))),
          (ALDURBBi Capsp:$Rn, simm9:$offset)>;
def : Pat<(i32 (zextcloadi1 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))),
          (ALDURBBi Capsp:$Rn, simm9:$offset)>;
def : Pat<(i64 (zextcloadi32 (am_pcunscaled32 Capsp:$Rn, simm9:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDURWi Capsp:$Rn, simm9:$offset), sub_32)>;
def : Pat<(i64 (zextcloadi16 (am_pcunscaled16 Capsp:$Rn, simm9:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDURHHi Capsp:$Rn, simm9:$offset), sub_32)>;
def : Pat<(i64 (zextcloadi8 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDURBBi Capsp:$Rn, simm9:$offset), sub_32)>;
def : Pat<(i64 (zextcloadi1 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))),
    (SUBREG_TO_REG (i64 0), (ALDURBBi Capsp:$Rn, simm9:$offset), sub_32)>;
} // Predicates = [HasC64]

//---
// LDR mnemonics fall back to LDUR for negative or unaligned offsets.

let Predicates = [HasC64] in {

def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (ALDURXi GPR64:$Rt, Capsp:$Rn, simm9_offset_fb64:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (ALDURWi GPR32:$Rt, Capsp:$Rn, simm9_offset_fb32:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (ALDURBi FPR8:$Rt, Capsp:$Rn, simm9_offset_fb8:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (ALDURHi FPR16:$Rt, Capsp:$Rn, simm9_offset_fb16:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (ALDURSi FPR32:$Rt, Capsp:$Rn, simm9_offset_fb32:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (ALDURDi FPR64:$Rt, Capsp:$Rn, simm9_offset_fb64:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
               (ALDURQi FPR128:$Rt, Capsp:$Rn, simm9_offset_fb128:$offset), 0>;

// zextload -> i64
def : Pat<(i64 (zextcloadi8 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))),
  (SUBREG_TO_REG (i64 0), (ALDURBBi Capsp:$Rn, simm9:$offset), sub_32)>;
def : Pat<(i64 (zextcloadi16 (am_pcunscaled16 Capsp:$Rn, simm9:$offset))),
  (SUBREG_TO_REG (i64 0), (ALDURHHi Capsp:$Rn, simm9:$offset), sub_32)>;

// load sign-extended half-word
defm ALDURSHW
    : PLoadUnscaled<0b01, 0, 0b11, GPR32, "ldursh",
               [(set GPR32:$Rt,
                    (sextcloadi16 (am_pcunscaled16 Capsp:$Rn, simm9:$offset)))]>;
defm ALDURSHX
    : PLoadUnscaled<0b01, 0, 0b10, GPR64, "ldursh",
              [(set GPR64:$Rt,
                    (sextcloadi16 (am_pcunscaled16 Capsp:$Rn, simm9:$offset)))]>;

// load sign-extended byte
defm ALDURSBW
    : PLoadUnscaled<0b00, 0, 0b11, GPR32, "ldursb",
                [(set GPR32:$Rt,
                      (sextcloadi8 (am_pcunscaled8 Capsp:$Rn, simm9:$offset)))]>;
defm ALDURSBX
    : PLoadUnscaled<0b00, 0, 0b10, GPR64, "ldursb",
                [(set GPR64:$Rt,
                      (sextcloadi8 (am_pcunscaled8 Capsp:$Rn, simm9:$offset)))]>;

// load sign-extended word
defm ALDURSW
    : PLoadUnscaled<0b10, 0, 0b10, GPR64, "ldursw",
              [(set GPR64:$Rt,
                    (sextcloadi32 (am_pcunscaled32 Capsp:$Rn, simm9:$offset)))]>;

// zero and sign extending aliases from generic LDR* mnemonics to LDUR*.
def : InstAlias<"ldrb $Rt, [$Rn, $offset]",
                (ALDURBBi GPR32:$Rt, Capsp:$Rn, simm9_offset_fb8:$offset), 0>;
def : InstAlias<"ldrh $Rt, [$Rn, $offset]",
                (ALDURHHi GPR32:$Rt, Capsp:$Rn, simm9_offset_fb16:$offset), 0>;
def : InstAlias<"ldrsb $Rt, [$Rn, $offset]",
                (ALDURSBWi GPR32:$Rt, Capsp:$Rn, simm9_offset_fb8:$offset), 0>;
def : InstAlias<"ldrsb $Rt, [$Rn, $offset]",
                (ALDURSBXi GPR64:$Rt, Capsp:$Rn, simm9_offset_fb8:$offset), 0>;
def : InstAlias<"ldrsh $Rt, [$Rn, $offset]",
                (ALDURSHWi GPR32:$Rt, Capsp:$Rn, simm9_offset_fb16:$offset), 0>;
def : InstAlias<"ldrsh $Rt, [$Rn, $offset]",
                (ALDURSHXi GPR64:$Rt, Capsp:$Rn, simm9_offset_fb16:$offset), 0>;
def : InstAlias<"ldrsw $Rt, [$Rn, $offset]",
                (ALDURSWi GPR64:$Rt, Capsp:$Rn, simm9_offset_fb32:$offset), 0>;

//---
// (unscaled immediate, unprivileged)
defm ALDTRX : PLoadUnprivileged<0b11, 0, 0b01, GPR64, "ldtr">;
defm ALDTRW : PLoadUnprivileged<0b10, 0, 0b01, GPR32, "ldtr">;

defm ALDTRH : PLoadUnprivileged<0b01, 0, 0b01, GPR32, "ldtrh">;
defm ALDTRB : PLoadUnprivileged<0b00, 0, 0b01, GPR32, "ldtrb">;

// load sign-extended half-word
defm ALDTRSHW : PLoadUnprivileged<0b01, 0, 0b11, GPR32, "ldtrsh">;
defm ALDTRSHX : PLoadUnprivileged<0b01, 0, 0b10, GPR64, "ldtrsh">;

// load sign-extended byte
defm ALDTRSBW : PLoadUnprivileged<0b00, 0, 0b11, GPR32, "ldtrsb">;
defm ALDTRSBX : PLoadUnprivileged<0b00, 0, 0b10, GPR64, "ldtrsb">;

// load sign-extended word
defm ALDTRSW  : PLoadUnprivileged<0b10, 0, 0b10, GPR64, "ldtrsw">;

//---
// (immediate pre-indexed)
def ALDRWpre : PLoadPreIdx<0b10, 0, 0b01, GPR32z, "ldr">;
def ALDRXpre : PLoadPreIdx<0b11, 0, 0b01, GPR64z, "ldr">;
def ALDRBpre : PLoadPreIdx<0b00, 1, 0b01, FPR8Op,  "ldr">;
def ALDRHpre : PLoadPreIdx<0b01, 1, 0b01, FPR16Op, "ldr">;
def ALDRSpre : PLoadPreIdx<0b10, 1, 0b01, FPR32Op, "ldr">;
def ALDRDpre : PLoadPreIdx<0b11, 1, 0b01, FPR64Op, "ldr">;
def ALDRQpre : PLoadPreIdx<0b00, 1, 0b11, FPR128Op, "ldr">;

// load sign-extended half-word
def ALDRSHWpre : PLoadPreIdx<0b01, 0, 0b11, GPR32z, "ldrsh">;
def ALDRSHXpre : PLoadPreIdx<0b01, 0, 0b10, GPR64z, "ldrsh">;

// load sign-extended byte
def ALDRSBWpre : PLoadPreIdx<0b00, 0, 0b11, GPR32z, "ldrsb">;
def ALDRSBXpre : PLoadPreIdx<0b00, 0, 0b10, GPR64z, "ldrsb">;

// load zero-extended byte
def ALDRBBpre : PLoadPreIdx<0b00, 0, 0b01, GPR32z, "ldrb">;
def ALDRHHpre : PLoadPreIdx<0b01, 0, 0b01, GPR32z, "ldrh">;

// load sign-extended word
def ALDRSWpre : PLoadPreIdx<0b10, 0, 0b10, GPR64z, "ldrsw">;

//---
// (immediate post-indexed)
def ALDRWpost : PLoadPostIdx<0b10, 0, 0b01, GPR32z, "ldr">;
def ALDRXpost : PLoadPostIdx<0b11, 0, 0b01, GPR64z, "ldr">;
def ALDRBpost : PLoadPostIdx<0b00, 1, 0b01, FPR8Op,  "ldr">;
def ALDRHpost : PLoadPostIdx<0b01, 1, 0b01, FPR16Op, "ldr">;
def ALDRSpost : PLoadPostIdx<0b10, 1, 0b01, FPR32Op, "ldr">;
def ALDRDpost : PLoadPostIdx<0b11, 1, 0b01, FPR64Op, "ldr">;
def ALDRQpost : PLoadPostIdx<0b00, 1, 0b11, FPR128Op, "ldr">;

// load sign-extended half-word
def ALDRSHWpost : PLoadPostIdx<0b01, 0, 0b11, GPR32z, "ldrsh">;
def ALDRSHXpost : PLoadPostIdx<0b01, 0, 0b10, GPR64z, "ldrsh">;

// load sign-extended byte
def ALDRSBWpost : PLoadPostIdx<0b00, 0, 0b11, GPR32z, "ldrsb">;
def ALDRSBXpost : PLoadPostIdx<0b00, 0, 0b10, GPR64z, "ldrsb">;

// load zero-extended byte
def ALDRBBpost : PLoadPostIdx<0b00, 0, 0b01, GPR32z, "ldrb">;
def ALDRHHpost : PLoadPostIdx<0b01, 0, 0b01, GPR32z, "ldrh">;

// load sign-extended word
def ALDRSWpost : PLoadPostIdx<0b10, 0, 0b10, GPR64z, "ldrsw">;

// Pair (indexed, offset)
defm ALDPW : PLoadPairOffset<0b00, 0, GPR32z, simm7s4, "ldp">;
defm ALDPX : PLoadPairOffset<0b10, 0, GPR64z, simm7s8, "ldp">;
defm ALDPS : PLoadPairOffset<0b00, 1, FPR32Op, simm7s4, "ldp">;
defm ALDPD : PLoadPairOffset<0b01, 1, FPR64Op, simm7s8, "ldp">;
defm ALDPQ : PLoadPairOffset<0b10, 1, FPR128Op, simm7s16, "ldp">;
defm ALDPSW : PLoadPairOffset<0b01, 0, GPR64z, simm7s4, "ldpsw">;


// Pair (pre-indexed)
def ALDPWpre : PLoadPairPreIdx<0b00, 0, GPR32z, simm7s4, "ldp">;
def ALDPXpre : PLoadPairPreIdx<0b10, 0, GPR64z, simm7s8, "ldp">;
def ALDPSpre : PLoadPairPreIdx<0b00, 1, FPR32Op, simm7s4, "ldp">;
def ALDPDpre : PLoadPairPreIdx<0b01, 1, FPR64Op, simm7s8, "ldp">;
def ALDPQpre : PLoadPairPreIdx<0b10, 1, FPR128Op, simm7s16, "ldp">;
def ALDPSWpre : PLoadPairPreIdx<0b01, 0, GPR64z, simm7s4, "ldpsw">;

// Pair (post-indexed)
def ALDPWpost : PLoadPairPostIdx<0b00, 0, GPR32z, simm7s4, "ldp">;
def ALDPXpost : PLoadPairPostIdx<0b10, 0, GPR64z, simm7s8, "ldp">;
def ALDPSpost : PLoadPairPostIdx<0b00, 1, FPR32Op, simm7s4, "ldp">;
def ALDPDpost : PLoadPairPostIdx<0b01, 1, FPR64Op, simm7s8, "ldp">;
def ALDPQpost : PLoadPairPostIdx<0b10, 1, FPR128Op, simm7s16, "ldp">;
def ALDPSWpost : PLoadPairPostIdx<0b01, 0, GPR64z, simm7s4, "ldpsw">;

// Pair (no allocate)
defm ALDNPW : PLoadPairNoAlloc<0b00, 0, GPR32z, simm7s4, "ldnp">;
defm ALDNPX : PLoadPairNoAlloc<0b10, 0, GPR64z, simm7s8, "ldnp">;
defm ALDNPS : PLoadPairNoAlloc<0b00, 1, FPR32Op, simm7s4, "ldnp">;
defm ALDNPD : PLoadPairNoAlloc<0b01, 1, FPR64Op, simm7s8, "ldnp">;
defm ALDNPQ : PLoadPairNoAlloc<0b10, 1, FPR128Op, simm7s16, "ldnp">;

} // Predicates = [HasC64]

//===----------------------------------------------------------------------===//
// Store instructions.
//===----------------------------------------------------------------------===//

let Predicates = [HasC64] in {
// Pair (indexed, offset)
// FIXME: Use dedicated range-checked addressing mode operand here.
defm ASTPW : PStorePairOffset<0b00, 0, GPR32z, simm7s4, "stp">;
defm ASTPX : PStorePairOffset<0b10, 0, GPR64z, simm7s8, "stp">;
defm ASTPS : PStorePairOffset<0b00, 1, FPR32Op, simm7s4, "stp">;
defm ASTPD : PStorePairOffset<0b01, 1, FPR64Op, simm7s8, "stp">;
defm ASTPQ : PStorePairOffset<0b10, 1, FPR128Op, simm7s16, "stp">;

// Pair (pre-indexed)
def ASTPWpre : PStorePairPreIdx<0b00, 0, GPR32z, simm7s4, "stp">;
def ASTPXpre : PStorePairPreIdx<0b10, 0, GPR64z, simm7s8, "stp">;
def ASTPSpre : PStorePairPreIdx<0b00, 1, FPR32Op, simm7s4, "stp">;
def ASTPDpre : PStorePairPreIdx<0b01, 1, FPR64Op, simm7s8, "stp">;
def ASTPQpre : PStorePairPreIdx<0b10, 1, FPR128Op, simm7s16, "stp">;

// Pair (pre-indexed)
def ASTPWpost : PStorePairPostIdx<0b00, 0, GPR32z, simm7s4, "stp">;
def ASTPXpost : PStorePairPostIdx<0b10, 0, GPR64z, simm7s8, "stp">;
def ASTPSpost : PStorePairPostIdx<0b00, 1, FPR32Op, simm7s4, "stp">;
def ASTPDpost : PStorePairPostIdx<0b01, 1, FPR64Op, simm7s8, "stp">;
def ASTPQpost : PStorePairPostIdx<0b10, 1, FPR128Op, simm7s16, "stp">;

// Pair (no allocate)
defm ASTNPW : PStorePairNoAlloc<0b00, 0, GPR32z, simm7s4, "stnp">;
defm ASTNPX : PStorePairNoAlloc<0b10, 0, GPR64z, simm7s8, "stnp">;
defm ASTNPS : PStorePairNoAlloc<0b00, 1, FPR32Op, simm7s4, "stnp">;
defm ASTNPD : PStorePairNoAlloc<0b01, 1, FPR64Op, simm7s8, "stnp">;
defm ASTNPQ : PStorePairNoAlloc<0b10, 1, FPR128Op, simm7s16, "stnp">;

//---
// Register offset

// Integer
defm ASTRBB : PStore8RO< 0b00, 0, 0b00, GPR32, "strb", i32, trunccstorei8>;
defm ASTRHH : PStore16RO<0b01, 0, 0b00, GPR32, "strh", i32, trunccstorei16>;
defm ASTRW  : PStore32RO<0b10, 0, 0b00, GPR32, "str",  i32, cstore>;
defm ASTRX  : PStore64RO<0b11, 0, 0b00, GPR64, "str",  i64, cstore>;

// Floating point
defm ASTRB : PStore8RO< 0b00,  1, 0b00, FPR8Op,   "str", untyped, cstore>;
defm ASTRH : PStore16RO<0b01,  1, 0b00, FPR16Op,  "str", f16,     cstore>;
defm ASTRS : PStore32RO<0b10,  1, 0b00, FPR32Op,  "str", f32,     cstore>;
defm ASTRD : PStore64RO<0b11,  1, 0b00, FPR64Op,  "str", f64,     cstore>;
defm ASTRQ : PStore128RO<0b00, 1, 0b10, FPR128Op, "str", f128,    cstore>;

multiclass PTruncStoreFrom64ROPat<ROAddrMode ro, SDPatternOperator storeop,
                                  Instruction STRW, Instruction STRX> {

  def : Pat<(storeop GPR64:$Rt,
                     (ro.Wpat Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend)),
            (STRW (EXTRACT_SUBREG GPR64:$Rt, sub_32),
                  Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend)>;

  def : Pat<(storeop GPR64:$Rt,
                     (ro.Xpat Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend)),
            (STRX (EXTRACT_SUBREG GPR64:$Rt, sub_32),
                  Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend)>;
}

let AddedComplexity = 10 in {
  // truncstore i64
  defm : PTruncStoreFrom64ROPat<cro8,  trunccstorei8,  ASTRBBroW, ASTRBBroX>;
  defm : PTruncStoreFrom64ROPat<cro16, trunccstorei16, ASTRHHroW, ASTRHHroX>;
  defm : PTruncStoreFrom64ROPat<cro32, trunccstorei32, ASTRWroW,  ASTRWroX>;
}
}

multiclass PVecROStorePat<ROAddrMode ro, ValueType VecTy, RegisterClass FPR,
                         Instruction STRW, Instruction STRX> {
  def : Pat<(cstore (VecTy FPR:$Rt),
                    (ro.Wpat Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend)),
            (STRW FPR:$Rt, Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend)>;

  def : Pat<(cstore (VecTy FPR:$Rt),
                    (ro.Xpat Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend)),
            (STRX FPR:$Rt, Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend)>;
}

let Predicates = [IsLE, HasC64], AddedComplexity = 10 in {
  // We must use ST1 to store vectors in big-endian.
  defm : PVecROStorePat<cro64, v2i32, FPR64, ASTRDroW, ASTRDroX>;
  defm : PVecROStorePat<cro64, v2f32, FPR64, ASTRDroW, ASTRDroX>;
  defm : PVecROStorePat<cro64, v4i16, FPR64, ASTRDroW, ASTRDroX>;
  defm : PVecROStorePat<cro64, v8i8, FPR64, ASTRDroW, ASTRDroX>;
  defm : PVecROStorePat<cro64, v4f16, FPR64, ASTRDroW, ASTRDroX>;
  defm : PVecROStorePat<cro64, v4bf16, FPR64, ASTRDroW, ASTRDroX>;
}

let Predicates = [HasC64] in {
  defm : PVecROStorePat<cro64, v1i64, FPR64, ASTRDroW, ASTRDroX>;
  defm : PVecROStorePat<cro64, v1f64, FPR64, ASTRDroW, ASTRDroX>;
}

let Predicates = [IsLE, HasC64], AddedComplexity = 10 in {
  // We must use ST1 to store vectors in big-endian.
  defm : PVecROStorePat<cro128, v2i64, FPR128, ASTRQroW, ASTRQroX>;
  defm : PVecROStorePat<cro128, v2f64, FPR128, ASTRQroW, ASTRQroX>;
  defm : PVecROStorePat<cro128, v4i32, FPR128, ASTRQroW, ASTRQroX>;
  defm : PVecROStorePat<cro128, v4f32, FPR128, ASTRQroW, ASTRQroX>;
  defm : PVecROStorePat<cro128, v8i16, FPR128, ASTRQroW, ASTRQroX>;
  defm : PVecROStorePat<cro128, v16i8, FPR128, ASTRQroW, ASTRQroX>;
  defm : PVecROStorePat<cro128, v8f16, FPR128, ASTRQroW, ASTRQroX>;
  defm : PVecROStorePat<cro128, v8bf16, FPR128, ASTRQroW, ASTRQroX>;
}

// Match stores from lane 0 to the appropriate subreg's store.
multiclass PVecROStoreLane0Pat<ROAddrMode ro, SDPatternOperator storeop,
                               ValueType VecTy, ValueType STy,
                               SubRegIndex SubRegIdx,
                               Instruction STRW, Instruction STRX> {

  def : Pat<(storeop (STy (vector_extract (VecTy VecListOne128:$Vt), 0)),
                     (ro.Wpat Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend)),
            (STRW (EXTRACT_SUBREG VecListOne128:$Vt, SubRegIdx),
                  Capsp:$Rn, GPR32:$Rm, ro.Wext:$extend)>;

  def : Pat<(storeop (STy (vector_extract (VecTy VecListOne128:$Vt), 0)),
                     (ro.Xpat Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend)),
            (STRX (EXTRACT_SUBREG VecListOne128:$Vt, SubRegIdx),
                  Capsp:$Rn, GPR64:$Rm, ro.Xext:$extend)>;
}

let AddedComplexity = 19, Predicates = [HasC64] in {
  defm : PVecROStoreLane0Pat<cro16, trunccstorei16, v8i16, i32, hsub, ASTRHroW, ASTRHroX>;
  defm : PVecROStoreLane0Pat<cro16,      cstore   , v8i16, i16, hsub, ASTRHroW, ASTRHroX>;
  defm : PVecROStoreLane0Pat<cro32, trunccstorei32, v4i32, i32, ssub, ASTRSroW, ASTRSroX>;
  defm : PVecROStoreLane0Pat<cro32,      cstore   , v4i32, i32, ssub, ASTRSroW, ASTRSroX>;
  defm : PVecROStoreLane0Pat<cro32,      cstore   , v4f32, f32, ssub, ASTRSroW, ASTRSroX>;
  defm : PVecROStoreLane0Pat<cro64,      cstore   , v2i64, i64, dsub, ASTRDroW, ASTRDroX>;
  defm : PVecROStoreLane0Pat<cro64,      cstore   , v2f64, f64, dsub, ASTRDroW, ASTRDroX>;
}

let Predicates = [HasC64] in {

// bf16 store pattern
def : Pat<(store (bf16 FPR16Op:$Rt),
                 (am_cindexed16 Capsp:$Rn, uimm12s2:$offset)),
          (ASTRHui FPR16:$Rt, Capsp:$Rn, uimm12s2:$offset)>;


// Match stores from lane 0 to the appropriate subreg's store.
multiclass PVecStoreLane0Pat<ComplexPattern UIAddrMode, SDPatternOperator storeop,
                            ValueType VTy, ValueType STy,
                            SubRegIndex SubRegIdx, Operand IndexType,
                            Instruction STR> {
  def : Pat<(storeop (STy (vector_extract (VTy VecListOne128:$Vt), 0)),
                     (UIAddrMode Capsp:$Rn, IndexType:$offset)),
            (STR (EXTRACT_SUBREG VecListOne128:$Vt, SubRegIdx),
                 Capsp:$Rn, IndexType:$offset)>;
}


let AddedComplexity = 19, Predicates = [HasNotC64] in {
  defm : PVecStoreLane0Pat<am_cindexed16, truncstorei16, v8i16, i32, hsub, uimm12s2, ASTRHui>;
  defm : PVecStoreLane0Pat<am_cindexed16,         store, v8f16, f16, hsub, uimm12s2, ASTRHui>;
  defm : PVecStoreLane0Pat<am_cindexed32,         store, v4i32, i32, ssub, uimm12s4, ASTRSui>;
  defm : PVecStoreLane0Pat<am_cindexed32,         store, v4f32, f32, ssub, uimm12s4, ASTRSui>;
  defm : PVecStoreLane0Pat<am_cindexed64,         store, v2i64, i64, dsub, uimm12s8, ASTRDui>;
  defm : PVecStoreLane0Pat<am_cindexed64,         store, v2f64, f64, dsub, uimm12s8, ASTRDui>;
}

//---
// (unscaled immediate)
defm ASTURX : PStoreUnscaled<0b11, 0, 0b00, GPR64, "stur",
                         [(cstore GPR64:$Rt,
                                 (am_pcunscaled64 Capsp:$Rn, simm9:$offset))]>;
defm ASTURW : PStoreUnscaled<0b10, 0, 0b00, GPR32, "stur",
                         [(cstore GPR32:$Rt,
                                 (am_pcunscaled32 Capsp:$Rn, simm9:$offset))]>;
defm ASTURB : PStoreUnscaled<0b00, 1, 0b00, FPR8, "stur",
                         [(cstore FPR8:$Rt,
                                 (am_pcunscaled8 Capsp:$Rn, simm9:$offset))]>;
defm ASTURH : PStoreUnscaled<0b01, 1, 0b00, FPR16, "stur",
                         [(cstore (f16 FPR16:$Rt),
                                 (am_pcunscaled16 Capsp:$Rn, simm9:$offset))]>;
defm ASTURS : PStoreUnscaled<0b10, 1, 0b00, FPR32, "stur",
                         [(cstore (f32 FPR32:$Rt),
                                 (am_pcunscaled32 Capsp:$Rn, simm9:$offset))]>;
defm ASTURD : PStoreUnscaled<0b11, 1, 0b00, FPR64, "stur",
                         [(cstore (f64 FPR64:$Rt),
                                 (am_pcunscaled64 Capsp:$Rn, simm9:$offset))]>;
defm ASTURQ : PStoreUnscaled<0b00, 1, 0b10, FPR128, "stur",
                         [(cstore (f128 FPR128:$Rt),
                                 (am_pcunscaled128 Capsp:$Rn, simm9:$offset))]>;
defm ASTURHH : PStoreUnscaled<0b01, 0, 0b00, GPR32, "sturh",
                         [(trunccstorei16 GPR32:$Rt,
                                 (am_pcunscaled16 Capsp:$Rn, simm9:$offset))]>;
defm ASTURBB : PStoreUnscaled<0b00, 0, 0b00, GPR32, "sturb",
                         [(trunccstorei8 GPR32:$Rt,
                                  (am_pcunscaled8 Capsp:$Rn, simm9:$offset))]>;
}

// Match all store 64 bits width whose type is compatible with FPR64
let Predicates = [HasC64] in {
def : Pat<(cstore (v1f64 FPR64:$Rt), (am_pcunscaled64 Capsp:$Rn, simm9:$offset)),
          (ASTURDi FPR64:$Rt, Capsp:$Rn, simm9:$offset)>;
def : Pat<(cstore (v1i64 FPR64:$Rt), (am_pcunscaled64 Capsp:$Rn, simm9:$offset)),
          (ASTURDi FPR64:$Rt, Capsp:$Rn, simm9:$offset)>;
}

let AddedComplexity = 10 in {

let Predicates = [IsLE, HasC64] in {
  // We must use ST1 to store vectors in big-endian.
  def : Pat<(cstore (v2f32 FPR64:$Rt),
                   (am_pcunscaled64 Capsp:$Rn, simm9:$offset)),
            (ASTURDi FPR64:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v8i8 FPR64:$Rt),
                   (am_pcunscaled64 Capsp:$Rn, simm9:$offset)),
            (ASTURDi FPR64:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v4i16 FPR64:$Rt),
                   (am_pcunscaled64 Capsp:$Rn, simm9:$offset)),
            (ASTURDi FPR64:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v2i32 FPR64:$Rt),
                   (am_pcunscaled64 Capsp:$Rn, simm9:$offset)),
            (ASTURDi FPR64:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v4f16 FPR64:$Rt),
                   (am_pcunscaled64 Capsp:$Rn, simm9:$offset)),
            (ASTURDi FPR64:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(store (v4bf16 FPR64:$Rt),
                   (am_pcunscaled64 Capsp:$Rn, simm9:$offset)),
            (ASTURDi FPR64:$Rt, Capsp:$Rn, simm9:$offset)>;
}

let Predicates = [HasC64] in
// Match all store 128 bits width whose type is compatible with FPR128
def : Pat<(store (f128 FPR128:$Rt), (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
          (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;

let Predicates = [HasC64, IsLE] in {
  // We must use ST1 to store vectors in big-endian.
  def : Pat<(cstore (v4f32 FPR128:$Rt),
                   (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
            (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v2f64 FPR128:$Rt),
                   (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
            (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v16i8 FPR128:$Rt),
                   (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
            (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v8i16 FPR128:$Rt),
                   (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
            (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v4i32 FPR128:$Rt),
                   (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
            (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v2i64 FPR128:$Rt),
                   (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
            (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v2f64 FPR128:$Rt),
                   (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
            (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v8f16 FPR128:$Rt),
                   (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
            (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;
  def : Pat<(cstore (v8bf16 FPR128:$Rt),
                   (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
            (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9:$offset)>;
}

} // AddedComplexity = 10

// unscaled i64 truncating stores
let Predicates = [HasC64] in {
def : Pat<(trunccstorei32 GPR64:$Rt, (am_pcunscaled32 Capsp:$Rn, simm9:$offset)),
  (ASTURWi (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$Rn, simm9:$offset)>;
def : Pat<(trunccstorei16 GPR64:$Rt, (am_pcunscaled16 Capsp:$Rn, simm9:$offset)),
  (ASTURHHi (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$Rn, simm9:$offset)>;
def : Pat<(trunccstorei8 GPR64:$Rt, (am_pcunscaled8 Capsp:$Rn, simm9:$offset)),
  (ASTURBBi (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$Rn, simm9:$offset)>;
}
// Match stores from lane 0 to the appropriate subreg's store.
multiclass PVecStoreULane0Pat<SDPatternOperator StoreOp,
                             ValueType VTy, ValueType STy,
                             SubRegIndex SubRegIdx, Instruction STR> {
  defm : PVecStoreLane0Pat<am_pcunscaled128, StoreOp, VTy, STy, SubRegIdx, simm9, STR>;
}

let AddedComplexity = 19, Predicates = [HasC64] in {
  defm : PVecStoreULane0Pat<truncstorei16, v8i16, i32, hsub, ASTURHi>;
  defm : PVecStoreULane0Pat<store,         v8f16, f16, hsub, ASTURHi>;
  defm : PVecStoreULane0Pat<store,         v4i32, i32, ssub, ASTURSi>;
  defm : PVecStoreULane0Pat<store,         v4f32, f32, ssub, ASTURSi>;
  defm : PVecStoreULane0Pat<store,         v2i64, i64, dsub, ASTURDi>;
  defm : PVecStoreULane0Pat<store,         v2f64, f64, dsub, ASTURDi>;
}

//---
// STR mnemonics fall back to STUR for negative or unaligned offsets.
let Predicates = [HasC64] in {
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (ASTURXi GPR64:$Rt, Capsp:$Rn, simm9_offset_fb64:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (ASTURWi GPR32:$Rt, Capsp:$Rn, simm9_offset_fb32:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (ASTURBi FPR8:$Rt, Capsp:$Rn, simm9_offset_fb8:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (ASTURHi FPR16:$Rt, Capsp:$Rn, simm9_offset_fb16:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (ASTURSi FPR32:$Rt, Capsp:$Rn, simm9_offset_fb32:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (ASTURDi FPR64:$Rt, Capsp:$Rn, simm9_offset_fb64:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (ASTURQi FPR128:$Rt, Capsp:$Rn, simm9_offset_fb128:$offset), 0>;

def : InstAlias<"strb $Rt, [$Rn, $offset]",
                (ASTURBBi GPR32:$Rt, Capsp:$Rn, simm9_offset_fb8:$offset), 0>;
def : InstAlias<"strh $Rt, [$Rn, $offset]",
                (ASTURHHi GPR32:$Rt, Capsp:$Rn, simm9_offset_fb16:$offset), 0>;

//---
// (unscaled immediate, unprivileged)
defm ASTTRW : PStoreUnprivileged<0b10, 0, 0b00, GPR32, "sttr">;
defm ASTTRX : PStoreUnprivileged<0b11, 0, 0b00, GPR64, "sttr">;

defm ASTTRH : PStoreUnprivileged<0b01, 0, 0b00, GPR32, "sttrh">;
defm ASTTRB : PStoreUnprivileged<0b00, 0, 0b00, GPR32, "sttrb">;

} // Predicates = [HasC64]

//---
// (immediate pre-indexed)
let Predicates = [HasC64] in {

def ASTRWpre : PStorePreIdx<0b10, 0, 0b00, GPR32z, "str",  pre_inc_cstore, i32>;
def ASTRXpre : PStorePreIdx<0b11, 0, 0b00, GPR64z, "str",  pre_inc_cstore, i64>;
def ASTRBpre : PStorePreIdx<0b00, 1, 0b00, FPR8Op,  "str",  pre_inc_cstore, untyped>;
def ASTRHpre : PStorePreIdx<0b01, 1, 0b00, FPR16Op, "str",  pre_inc_cstore, f16>;
def ASTRSpre : PStorePreIdx<0b10, 1, 0b00, FPR32Op, "str",  pre_inc_cstore, f32>;
def ASTRDpre : PStorePreIdx<0b11, 1, 0b00, FPR64Op, "str",  pre_inc_cstore, f64>;
def ASTRQpre : PStorePreIdx<0b00, 1, 0b10, FPR128Op, "str", pre_inc_cstore, f128>;

def ASTRBBpre : PStorePreIdx<0b00, 0, 0b00, GPR32z, "strb", pre_inc_trunccsti8, i32>;
def ASTRHHpre : PStorePreIdx<0b01, 0, 0b00, GPR32z, "strh", pre_inc_trunccsti16, i32>;

def : Pat<(pre_dec_cstore (i32 GPR32:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRWpre GPR32:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (i64 GPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRXpre GPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (untyped FPR8:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRBpre FPR8:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (f16 FPR16:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRHpre FPR16:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (f32 FPR32:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRSpre FPR32:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (f64 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (f128 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, i64imm:$off)>;

def : Pat<(pre_dec_trunccsti8 (i32 GPR32:$Rt), Capsp:$addr,
                             (negsimm i64imm:$off)),
          (ASTRBBpre GPR32:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_trunccsti16 (i32 GPR32:$Rt), Capsp:$addr,
                              (negsimm i64imm:$off)),
          (ASTRHHpre GPR32:$Rt, Capsp:$addr, i64imm:$off)>;

// truncstore i64
def : Pat<(pre_inc_trunccsti32 GPR64:$Rt, Capsp:$addr, simm9:$off),
  (ASTRWpre (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
           simm9:$off)>;
def : Pat<(pre_inc_trunccsti16 GPR64:$Rt, Capsp:$addr, simm9:$off),
  (ASTRHHpre (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
            simm9:$off)>;
def : Pat<(pre_inc_trunccsti8 GPR64:$Rt, Capsp:$addr, simm9:$off),
  (ASTRBBpre (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
            simm9:$off)>;

def : Pat<(pre_dec_trunccsti32 GPR64:$Rt, Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRWpre (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
                   i64imm:$off)>;
def : Pat<(pre_dec_trunccsti16 GPR64:$Rt, Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRHHpre (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
                    i64imm:$off)>;
def : Pat<(pre_dec_trunccsti8 GPR64:$Rt, Capsp:$addr, (negsimm i64imm:$off)),
  (ASTRBBpre (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
            i64imm:$off)>;

def : Pat<(pre_inc_cstore (v8i8 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v4i16 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v2i32 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v2f32 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v1i64 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v1f64 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v4f16 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, simm9:$off)>;

def : Pat<(pre_dec_cstore (v8i8 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v4i16 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v2i32 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v2f32 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v1i64 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v1f64 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v4f16 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpre FPR64:$Rt, Capsp:$addr, i64imm:$off)>;

def : Pat<(pre_inc_cstore (v16i8 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v8i16 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v4i32 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v4f32 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v2i64 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v2f64 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(pre_inc_cstore (v8f16 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, simm9:$off)>;

def : Pat<(pre_dec_cstore (v16i8 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v8i16 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v4i32 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v4f32 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v2i64 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v2f64 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v8f16 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpre FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
} // Predicates = [HasC64]

//---
// (immediate post-indexed)
let Predicates = [HasC64] in {

def ASTRWpost : PStorePostIdx<0b10, 0, 0b00, GPR32z,  "str", post_inc_cstore, i32>;
def ASTRXpost : PStorePostIdx<0b11, 0, 0b00, GPR64z,  "str", post_inc_cstore, i64>;
def ASTRBpost : PStorePostIdx<0b00, 1, 0b00, FPR8Op,   "str", post_inc_cstore, untyped>;
def ASTRHpost : PStorePostIdx<0b01, 1, 0b00, FPR16Op,  "str", post_inc_cstore, f16>;
def ASTRSpost : PStorePostIdx<0b10, 1, 0b00, FPR32Op,  "str", post_inc_cstore, f32>;
def ASTRDpost : PStorePostIdx<0b11, 1, 0b00, FPR64Op,  "str", post_inc_cstore, f64>;
def ASTRQpost : PStorePostIdx<0b00, 1, 0b10, FPR128Op, "str", post_inc_cstore, f128>;

def ASTRBBpost : PStorePostIdx<0b00, 0, 0b00, GPR32z, "strb", post_inc_trunccsti8,
                               i32>;
def ASTRHHpost : PStorePostIdx<0b01, 0, 0b00, GPR32z, "strh", post_inc_trunccsti16,
                               i32>;

def : Pat<(post_dec_cstore (i32 GPR32:$Rt), Capsp:$addr,
			   (negsimm i64imm:$off)),
          (ASTRWpost GPR32:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (i64 GPR64:$Rt), Capsp:$addr,
                           (negsimm i64imm:$off)),
          (ASTRXpost GPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (untyped FPR8:$Rt), Capsp:$addr,
                           (negsimm i64imm:$off)),
          (ASTRBpost FPR8:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (f16 FPR16:$Rt), Capsp:$addr,
                           (negsimm i64imm:$off)),
          (ASTRHpost FPR16:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (f32 FPR32:$Rt), Capsp:$addr,
                           (negsimm i64imm:$off)),
          (ASTRSpost FPR32:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (f64 FPR64:$Rt), Capsp:$addr,
                           (negsimm i64imm:$off)),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (f128 FPR128:$Rt), Capsp:$addr,
                           (negsimm i64imm:$off)),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, i64imm:$off)>;


def : Pat<(post_dec_trunccsti8 (i32 GPR32:$Rt), Capsp:$addr,
                             (negsimm i64imm:$off)),
          (ASTRBBpost GPR32:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_trunccsti16 (i32 GPR32:$Rt), Capsp:$addr,
                              (negsimm i64imm:$off)),
          (ASTRHHpost GPR32:$Rt, Capsp:$addr, i64imm:$off)>;

// truncstore i64
def : Pat<(post_inc_trunccsti32 GPR64:$Rt, Capsp:$addr, simm9:$off),
  (ASTRWpost (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
              simm9:$off)>;
def : Pat<(post_inc_trunccsti16 GPR64:$Rt, Capsp:$addr, simm9:$off),
  (ASTRHHpost (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
               simm9:$off)>;
def : Pat<(post_inc_trunccsti8 GPR64:$Rt, Capsp:$addr, simm9:$off),
  (ASTRBBpost (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
               simm9:$off)>;

def : Pat<(post_dec_trunccsti32 GPR64:$Rt, Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRWpost (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
                   i64imm:$off)>;
def : Pat<(post_dec_trunccsti16 GPR64:$Rt, Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRHHpost (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
                    i64imm:$off)>;
def : Pat<(post_dec_trunccsti8 GPR64:$Rt, Capsp:$addr, (negsimm i64imm:$off)),
  (ASTRBBpost (EXTRACT_SUBREG GPR64:$Rt, sub_32), Capsp:$addr,
            i64imm:$off)>;

def : Pat<(post_inc_cstore (v8i8 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v4i16 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v2i32 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v2f32 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v1i64 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v1f64 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v4f16 FPR64:$Rt), Capsp:$addr, simm9:$off),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, simm9:$off)>;

def : Pat<(post_dec_cstore (v8i8 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v4i16 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v2i32 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v2f32 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v1i64 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v1f64 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(pre_dec_cstore (v4f16 FPR64:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRDpost FPR64:$Rt, Capsp:$addr, i64imm:$off)>;

def : Pat<(post_inc_cstore (v16i8 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v8i16 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v4i32 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v4f32 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v2i64 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v2f64 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, simm9:$off)>;
def : Pat<(post_inc_cstore (v8f16 FPR128:$Rt), Capsp:$addr, simm9:$off),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, simm9:$off)>;

def : Pat<(post_dec_cstore (v16i8 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v8i16 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v4i32 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v4f32 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v2i64 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v2f64 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
def : Pat<(post_dec_cstore (v8f16 FPR128:$Rt), Capsp:$addr, (negsimm i64imm:$off)),
          (ASTRQpost FPR128:$Rt, Capsp:$addr, i64imm:$off)>;
} // Predicates = [HasC64]

//===----------------------------------------------------------------------===//
// Load/store exclusive instructions.
//===----------------------------------------------------------------------===//

let Predicates = [HasC64] in {
def ALDARW  : PLoadAcquire   <0b10, 1, 1, 0, 1, GPR32, "ldar">;
def ALDARX  : PLoadAcquire   <0b11, 1, 1, 0, 1, GPR64, "ldar">;
def ALDARB  : PLoadAcquire   <0b00, 1, 1, 0, 1, GPR32, "ldarb">;
def ALDARH  : PLoadAcquire   <0b01, 1, 1, 0, 1, GPR32, "ldarh">;

def ALDAXRW : PLoadExclusive <0b10, 0, 1, 0, 1, GPR32, "ldaxr">;
def ALDAXRX : PLoadExclusive <0b11, 0, 1, 0, 1, GPR64, "ldaxr">;
def ALDAXRB : PLoadExclusive <0b00, 0, 1, 0, 1, GPR32, "ldaxrb">;
def ALDAXRH : PLoadExclusive <0b01, 0, 1, 0, 1, GPR32, "ldaxrh">;

def ALDXRW  : PLoadExclusive <0b10, 0, 1, 0, 0, GPR32, "ldxr">;
def ALDXRX  : PLoadExclusive <0b11, 0, 1, 0, 0, GPR64, "ldxr">;
def ALDXRB  : PLoadExclusive <0b00, 0, 1, 0, 0, GPR32, "ldxrb">;
def ALDXRH  : PLoadExclusive <0b01, 0, 1, 0, 0, GPR32, "ldxrh">;

def ASTLRW  : PStoreRelease  <0b10, 1, 0, 0, 1, GPR32, "stlr">;
def ASTLRX  : PStoreRelease  <0b11, 1, 0, 0, 1, GPR64, "stlr">;
def ASTLRB  : PStoreRelease  <0b00, 1, 0, 0, 1, GPR32, "stlrb">;
def ASTLRH  : PStoreRelease  <0b01, 1, 0, 0, 1, GPR32, "stlrh">;

def ASTLXRW : PStoreExclusive<0b10, 0, 0, 0, 1, GPR32, "stlxr">;
def ASTLXRX : PStoreExclusive<0b11, 0, 0, 0, 1, GPR64, "stlxr">;
def ASTLXRB : PStoreExclusive<0b00, 0, 0, 0, 1, GPR32, "stlxrb">;
def ASTLXRH : PStoreExclusive<0b01, 0, 0, 0, 1, GPR32, "stlxrh">;

def ASTXRW  : PStoreExclusive<0b10, 0, 0, 0, 0, GPR32, "stxr">;
def ASTXRX  : PStoreExclusive<0b11, 0, 0, 0, 0, GPR64, "stxr">;
def ASTXRB  : PStoreExclusive<0b00, 0, 0, 0, 0, GPR32, "stxrb">;
def ASTXRH  : PStoreExclusive<0b01, 0, 0, 0, 0, GPR32, "stxrh">;

def ALDAXPW : PLoadExclusivePair<0b10, 0, 1, 1, 1, GPR32, "ldaxp">;
def ALDAXPX : PLoadExclusivePair<0b11, 0, 1, 1, 1, GPR64, "ldaxp">;

def ALDXPW  : PLoadExclusivePair<0b10, 0, 1, 1, 0, GPR32, "ldxp">;
def ALDXPX  : PLoadExclusivePair<0b11, 0, 1, 1, 0, GPR64, "ldxp">;

def ASTLXPW : PStoreExclusivePair<0b10, 0, 0, 1, 1, GPR32, "stlxp">;
def ASTLXPX : PStoreExclusivePair<0b11, 0, 0, 1, 1, GPR64, "stlxp">;

def ASTXPW  : PStoreExclusivePair<0b10, 0, 0, 1, 0, GPR32, "stxp">;
def ASTXPX  : PStoreExclusivePair<0b11, 0, 0, 1, 0, GPR64, "stxp">;
} // Predicates = [HasC64]

let Predicates = [HasLOR, HasC64] in {
  // v8.1a "Limited Order Region" extension load-acquire instructions
  def ALDLARW  : PLoadAcquire   <0b10, 1, 1, 0, 0, GPR32, "ldlar">;
  def ALDLARX  : PLoadAcquire   <0b11, 1, 1, 0, 0, GPR64, "ldlar">;
  def ALDLARB  : PLoadAcquire   <0b00, 1, 1, 0, 0, GPR32, "ldlarb">;
  def ALDLARH  : PLoadAcquire   <0b01, 1, 1, 0, 0, GPR32, "ldlarh">;

  // v8.1a "Limited Order Region" extension store-release instructions
  def ASTLLRW  : PStoreRelease   <0b10, 1, 0, 0, 0, GPR32, "stllr">;
  def ASTLLRX  : PStoreRelease   <0b11, 1, 0, 0, 0, GPR64, "stllr">;
  def ASTLLRB  : PStoreRelease   <0b00, 1, 0, 0, 0, GPR32, "stllrb">;
  def ASTLLRH  : PStoreRelease   <0b01, 1, 0, 0, 0, GPR32, "stllrh">;
}

//===----------------------------------------------------------------------===//
// Prefetch instructions.
//===----------------------------------------------------------------------===//

let Predicates = [HasC64] in {
  def APRFMui : PPrefetchUI<0b11, 0, 0b10, "prfm",
                        [(AArch64CPrefetch imm:$Rt,
                                        (am_cindexed64 Capsp:$Rn,
                                                      uimm12s8:$offset))]>;
  defm APRFM : PPrefetchRO<0b11, 0, 0b10, "prfm">;
  defm APRFUM : PPrefetchUnscaled<0b11, 0, 0b10, "prfum",
                  [(AArch64CPrefetch imm:$Rt,
                                  (am_cunscaled64 Capsp:$Rn, simm9:$offset))]>;

  def : InstAlias<"prfm $Rt, [$Rn]", (APRFMui prfop:$Rt, Capsp:$Rn, 0)>;
}

let Predicates = [HasC64] in {
//===----------------------------------
// Atomic loads
//===----------------------------------

def : Pat<(ldxr_1 Capsp:$addr),
          (SUBREG_TO_REG (i64 0), (ALDXRB Capsp:$addr), sub_32)>;
def : Pat<(ldxr_2 Capsp:$addr),
          (SUBREG_TO_REG (i64 0), (ALDXRH Capsp:$addr), sub_32)>;
def : Pat<(ldxr_4 Capsp:$addr),
          (SUBREG_TO_REG (i64 0), (ALDXRW Capsp:$addr), sub_32)>;
def : Pat<(ldxr_8 Capsp:$addr), (ALDXRX Capsp:$addr)>;

def : Pat<(and (ldxr_1 Capsp:$addr), 0xff),
          (SUBREG_TO_REG (i64 0), (ALDXRB Capsp:$addr), sub_32)>;
def : Pat<(and (ldxr_2 Capsp:$addr), 0xffff),
          (SUBREG_TO_REG (i64 0), (ALDXRH Capsp:$addr), sub_32)>;
def : Pat<(and (ldxr_4 Capsp:$addr), 0xffffffff),
          (SUBREG_TO_REG (i64 0), (ALDXRW Capsp:$addr), sub_32)>;

def : Pat<(ldaxr_1 Capsp:$addr),
          (SUBREG_TO_REG (i64 0), (ALDAXRB Capsp:$addr), sub_32)>;
def : Pat<(ldaxr_2 Capsp:$addr),
          (SUBREG_TO_REG (i64 0), (ALDAXRH Capsp:$addr), sub_32)>;
def : Pat<(ldaxr_4 Capsp:$addr),
          (SUBREG_TO_REG (i64 0), (ALDAXRW Capsp:$addr), sub_32)>;
def : Pat<(ldaxr_8 Capsp:$addr), (ALDAXRX Capsp:$addr)>;

def : Pat<(and (ldaxr_1 Capsp:$addr), 0xff),
          (SUBREG_TO_REG (i64 0), (ALDAXRB Capsp:$addr), sub_32)>;
def : Pat<(and (ldaxr_2 Capsp:$addr), 0xffff),
          (SUBREG_TO_REG (i64 0), (ALDAXRH Capsp:$addr), sub_32)>;
def : Pat<(and (ldaxr_4 Capsp:$addr), 0xffffffff),
          (SUBREG_TO_REG (i64 0), (ALDAXRW Capsp:$addr), sub_32)>;
} // Predicates = [HasC64]

let Predicates = [HasC64] in {
// 8-bit loads
def : Pat<(acquiring_load<atomic_cload_8>  Capsp:$ptr), (ALDARB Capsp:$ptr)>;
def : Pat<(relaxed_load<atomic_cload_8> (cro_Windexed8 Capsp:$Rn, GPR32:$Rm,
                                                     ro_Wextend8:$offset)),
          (ALDRBBroW Capsp:$Rn, GPR32:$Rm, ro_Wextend8:$offset)>;
def : Pat<(relaxed_load<atomic_cload_8> (cro_Xindexed8 Capsp:$Rn, GPR64:$Rm,
                                                     ro_Xextend8:$offset)),
          (ALDRBBroX Capsp:$Rn, GPR64:$Rm, cro_Xextend8:$offset)>;
def : Pat<(relaxed_load<atomic_cload_8> (am_cindexed8 Capsp:$Rn,
                                                    uimm12s1:$offset)),
          (ALDRBBui Capsp:$Rn, uimm12s1:$offset)>;
def : Pat<(relaxed_load<atomic_cload_8>
               (am_cunscaled8 Capsp:$Rn, simm9:$offset)),
          (ALDURBBi Capsp:$Rn, simm9:$offset)>;

// 16-bit loads
def : Pat<(acquiring_load<atomic_cload_16> Capsp:$ptr), (ALDARH Capsp:$ptr)>;
def : Pat<(relaxed_load<atomic_cload_16> (cro_Windexed16 Capsp:$Rn, GPR32:$Rm,
                                                       ro_Wextend16:$extend)),
          (ALDRHHroW Capsp:$Rn, GPR32:$Rm, ro_Wextend16:$extend)>;
def : Pat<(relaxed_load<atomic_cload_16> (cro_Xindexed16 Capsp:$Rn, GPR64:$Rm,
                                                       ro_Xextend16:$extend)),
          (ALDRHHroX Capsp:$Rn, GPR64:$Rm, ro_Xextend16:$extend)>;
def : Pat<(relaxed_load<atomic_cload_16> (am_cindexed16 Capsp:$Rn,
                                                      uimm12s2:$offset)),
          (ALDRHHui Capsp:$Rn, uimm12s2:$offset)>;
def : Pat<(relaxed_load<atomic_cload_16>
               (am_cunscaled16 Capsp:$Rn, simm9:$offset)),
          (ALDURHHi Capsp:$Rn, simm9:$offset)>;

// 32-bit loads
def : Pat<(acquiring_load<atomic_cload_32> Capsp:$ptr), (ALDARW Capsp:$ptr)>;
def : Pat<(relaxed_load<atomic_cload_32> (cro_Windexed32 Capsp:$Rn, GPR32:$Rm,
                                                       ro_Wextend32:$extend)),
          (ALDRWroW Capsp:$Rn, GPR32:$Rm, ro_Wextend32:$extend)>;
def : Pat<(relaxed_load<atomic_cload_32> (cro_Xindexed32 Capsp:$Rn, GPR64:$Rm,
                                                       ro_Xextend32:$extend)),
          (ALDRWroX Capsp:$Rn, GPR64:$Rm, ro_Xextend32:$extend)>;
def : Pat<(relaxed_load<atomic_cload_32> (am_cindexed32 Capsp:$Rn,
                                                      uimm12s4:$offset)),
          (ALDRWui Capsp:$Rn, uimm12s4:$offset)>;
def : Pat<(relaxed_load<atomic_cload_32>
               (am_cunscaled32 Capsp:$Rn, simm9:$offset)),
          (ALDURWi Capsp:$Rn, simm9:$offset)>;

// 64-bit loads
def : Pat<(acquiring_load<atomic_cload_64> Capsp:$ptr), (ALDARX Capsp:$ptr)>;
def : Pat<(relaxed_load<atomic_cload_64> (cro_Windexed64 Capsp:$Rn, GPR32:$Rm,
                                                       ro_Wextend64:$extend)),
          (ALDRXroW Capsp:$Rn, GPR32:$Rm, ro_Wextend64:$extend)>;
def : Pat<(relaxed_load<atomic_cload_64> (cro_Xindexed64 Capsp:$Rn, GPR64:$Rm,
                                                       ro_Xextend64:$extend)),
          (ALDRXroX Capsp:$Rn, GPR64:$Rm, ro_Xextend64:$extend)>;
def : Pat<(relaxed_load<atomic_cload_64> (am_cindexed64 Capsp:$Rn,
                                                      uimm12s8:$offset)),
          (ALDRXui Capsp:$Rn, uimm12s8:$offset)>;
def : Pat<(relaxed_load<atomic_cload_64>
               (am_cunscaled64 Capsp:$Rn, simm9:$offset)),
          (ALDURXi Capsp:$Rn, simm9:$offset)>;
} // Predicates = [HasC64]

//===----------------------------------
// Atomic stores
//===----------------------------------

let Predicates = [HasC64] in {
def : Pat<(stxr_1 GPR64:$val, Capsp:$addr),
          (ASTXRB (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stxr_2 GPR64:$val, Capsp:$addr),
          (ASTXRH (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stxr_4 GPR64:$val, Capsp:$addr),
          (ASTXRW (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stxr_8 GPR64:$val, Capsp:$addr),
          (ASTXRX GPR64:$val, Capsp:$addr)>;

def : Pat<(stxr_1 (zext (and GPR32:$val, 0xff)), Capsp:$addr),
          (ASTXRB GPR32:$val, Capsp:$addr)>;
def : Pat<(stxr_2 (zext (and GPR32:$val, 0xffff)), Capsp:$addr),
          (ASTXRH GPR32:$val, Capsp:$addr)>;
def : Pat<(stxr_4 (zext GPR32:$val), Capsp:$addr),
          (ASTXRW GPR32:$val, Capsp:$addr)>;

def : Pat<(stxr_1 (and GPR64:$val, 0xff), Capsp:$addr),
          (ASTXRB (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stxr_2 (and GPR64:$val, 0xffff), Capsp:$addr),
          (ASTXRH (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stxr_4 (and GPR64:$val, 0xffffffff), Capsp:$addr),
          (ASTXRW (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;

def : Pat<(stlxr_1 GPR64:$val, Capsp:$addr),
          (ASTLXRB (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stlxr_2 GPR64:$val, Capsp:$addr),
          (ASTLXRH (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stlxr_4 GPR64:$val, Capsp:$addr),
          (ASTLXRW (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stlxr_8 GPR64:$val, Capsp:$addr),
          (ASTLXRX GPR64:$val, Capsp:$addr)>;

def : Pat<(stlxr_1 (zext (and GPR32:$val, 0xff)), Capsp:$addr),
          (ASTLXRB GPR32:$val, Capsp:$addr)>;
def : Pat<(stlxr_2 (zext (and GPR32:$val, 0xffff)), Capsp:$addr),
          (ASTLXRH GPR32:$val, Capsp:$addr)>;
def : Pat<(stlxr_4 (zext GPR32:$val), Capsp:$addr),
          (ASTLXRW GPR32:$val, Capsp:$addr)>;

def : Pat<(stlxr_1 (and GPR64:$val, 0xff), Capsp:$addr),
          (ASTLXRB (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stlxr_2 (and GPR64:$val, 0xffff), Capsp:$addr),
          (ASTLXRH (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
def : Pat<(stlxr_4 (and GPR64:$val, 0xffffffff), Capsp:$addr),
          (ASTLXRW (EXTRACT_SUBREG GPR64:$val, sub_32), Capsp:$addr)>;
} // Predicates = [HasC64]

let Predicates = [HasC64] in {
// 8-bit stores
def : Pat<(releasing_store<atomic_cstore_8> Capsp:$ptr, GPR32:$val),
          (ASTLRB GPR32:$val, Capsp:$ptr)>;
def : Pat<(relaxed_store<atomic_cstore_8>
               (cro_Windexed8 Capsp:$Rn, GPR32:$Rm, ro_Wextend8:$extend),
               GPR32:$val),
          (ASTRBBroW GPR32:$val, Capsp:$Rn, GPR32:$Rm, ro_Wextend8:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_8>
               (cro_Xindexed8 Capsp:$Rn, GPR64:$Rm, ro_Xextend8:$extend),
               GPR32:$val),
          (ASTRBBroX GPR32:$val, Capsp:$Rn, GPR64:$Rm, ro_Xextend8:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_8>
               (am_cindexed8 Capsp:$Rn, uimm12s1:$offset), GPR32:$val),
          (ASTRBBui GPR32:$val, Capsp:$Rn, uimm12s1:$offset)>;
def : Pat<(relaxed_store<atomic_cstore_8>
               (am_cunscaled8 Capsp:$Rn, simm9:$offset), GPR32:$val),
          (ASTURBBi GPR32:$val, Capsp:$Rn, simm9:$offset)>;

// 16-bit stores
def : Pat<(releasing_store<atomic_cstore_16> Capsp:$ptr, GPR32:$val),
          (ASTLRH GPR32:$val, Capsp:$ptr)>;
def : Pat<(relaxed_store<atomic_cstore_16> (cro_Windexed16 Capsp:$Rn, GPR32:$Rm,
                                                         ro_Wextend16:$extend),
                                          GPR32:$val),
          (ASTRHHroW GPR32:$val, Capsp:$Rn, GPR32:$Rm, ro_Wextend16:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_16> (cro_Xindexed16 Capsp:$Rn, GPR64:$Rm,
                                                         ro_Xextend16:$extend),
                                          GPR32:$val),
          (ASTRHHroX GPR32:$val, Capsp:$Rn, GPR64:$Rm, ro_Xextend16:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_16>
              (am_cindexed16 Capsp:$Rn, uimm12s2:$offset), GPR32:$val),
          (ASTRHHui GPR32:$val, Capsp:$Rn, uimm12s2:$offset)>;
def : Pat<(relaxed_store<atomic_cstore_16>
               (am_cunscaled16 Capsp:$Rn, simm9:$offset), GPR32:$val),
          (ASTURHHi GPR32:$val, Capsp:$Rn, simm9:$offset)>;

// 32-bit stores
def : Pat<(releasing_store<atomic_cstore_32> Capsp:$ptr, GPR32:$val),
          (ASTLRW GPR32:$val, Capsp:$ptr)>;
def : Pat<(relaxed_store<atomic_cstore_32> (cro_Windexed32 Capsp:$Rn, GPR32:$Rm,
                                                         ro_Wextend32:$extend),
                                          GPR32:$val),
          (ASTRWroW GPR32:$val, Capsp:$Rn, GPR32:$Rm, ro_Wextend32:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_32> (cro_Xindexed32 Capsp:$Rn, GPR64:$Rm,
                                                         ro_Xextend32:$extend),
                                          GPR32:$val),
          (ASTRWroX GPR32:$val, Capsp:$Rn, GPR64:$Rm, ro_Xextend32:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_32>
              (am_cindexed32 Capsp:$Rn, uimm12s4:$offset), GPR32:$val),
          (ASTRWui GPR32:$val, Capsp:$Rn, uimm12s4:$offset)>;
def : Pat<(relaxed_store<atomic_cstore_32>
               (am_cunscaled32 Capsp:$Rn, simm9:$offset), GPR32:$val),
          (ASTURWi GPR32:$val, Capsp:$Rn, simm9:$offset)>;

// 64-bit stores
def : Pat<(releasing_store<atomic_cstore_64> Capsp:$ptr, GPR64:$val),
          (ASTLRX GPR64:$val, Capsp:$ptr)>;
def : Pat<(relaxed_store<atomic_cstore_64> (cro_Windexed64 Capsp:$Rn, GPR32:$Rm,
                                                         ro_Wextend16:$extend),
                                          GPR64:$val),
          (ASTRXroW GPR64:$val, Capsp:$Rn, GPR32:$Rm, ro_Wextend64:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_64> (cro_Xindexed64 Capsp:$Rn, GPR64:$Rm,
                                                         ro_Xextend16:$extend),
                                          GPR64:$val),
          (ASTRXroX GPR64:$val, Capsp:$Rn, GPR64:$Rm, ro_Xextend64:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_64>
              (am_cindexed64 Capsp:$Rn, uimm12s8:$offset), GPR64:$val),
          (ASTRXui GPR64:$val, Capsp:$Rn, uimm12s8:$offset)>;
def : Pat<(relaxed_store<atomic_cstore_64>
               (am_cunscaled64 Capsp:$Rn, simm9:$offset), GPR64:$val),
          (ASTURXi GPR64:$val, Capsp:$Rn, simm9:$offset)>;
} // Predicates = [HasC64]

//----------------------------------------------------------------------------
// AdvSIMD Load-Store Structure
//----------------------------------------------------------------------------
let Predicates = [HasNEON, HasC64] in {
defm ALD1 : PSIMDLd1Multiple<"ld1">;
defm ALD2 : PSIMDLd2Multiple<"ld2">;
defm ALD3 : PSIMDLd3Multiple<"ld3">;
defm ALD4 : PSIMDLd4Multiple<"ld4">;

defm AST1 : PSIMDSt1Multiple<"st1">;
defm AST2 : PSIMDSt2Multiple<"st2">;
defm AST3 : PSIMDSt3Multiple<"st3">;
defm AST4 : PSIMDSt4Multiple<"st4">;

class ALd1Pat<ValueType ty, Instruction INST>
  : Pat<(ty (cload Capsp:$Rn)), (INST Capsp:$Rn)>,
    Requires<[HasNEON, HasC64]>;

def : ALd1Pat<v16i8, ALD1Onev16b>;
def : ALd1Pat<v8i16, ALD1Onev8h>;
def : ALd1Pat<v4i32, ALD1Onev4s>;
def : ALd1Pat<v2i64, ALD1Onev2d>;
def : ALd1Pat<v8i8,  ALD1Onev8b>;
def : ALd1Pat<v4i16, ALD1Onev4h>;
def : ALd1Pat<v2i32, ALD1Onev2s>;
def : ALd1Pat<v1i64, ALD1Onev1d>;

class ASt1Pat<ValueType ty, Instruction INST>
  : Pat<(store ty:$Vt, Capsp:$Rn),
        (INST ty:$Vt, Capsp:$Rn)>,
    Requires<[HasNEON, HasC64]>;

def : ASt1Pat<v16i8, AST1Onev16b>;
def : ASt1Pat<v8i16, AST1Onev8h>;
def : ASt1Pat<v4i32, AST1Onev4s>;
def : ASt1Pat<v2i64, AST1Onev2d>;
def : ASt1Pat<v8i8,  AST1Onev8b>;
def : ASt1Pat<v4i16, AST1Onev4h>;
def : ASt1Pat<v2i32, AST1Onev2s>;
def : ASt1Pat<v1i64, AST1Onev1d>;
}
let Predicates = [HasNEON, HasC64] in {
defm ALD1R          : PSIMDLdR<0, 0b110, 0, "ld1r", "One", 1, 2, 4, 8>;
defm ALD2R          : PSIMDLdR<1, 0b110, 0, "ld2r", "Two", 2, 4, 8, 16>;
defm ALD3R          : PSIMDLdR<0, 0b111, 0, "ld3r", "Three", 3, 6, 12, 24>;
defm ALD4R          : PSIMDLdR<1, 0b111, 0, "ld4r", "Four", 4, 8, 16, 32>;
let mayLoad = 1, hasSideEffects = 0 in {
defm ALD1 : PSIMDLdSingleBTied<0, 0b000,       "ld1", VecListOneb,   GPR64pi1>;
defm ALD1 : PSIMDLdSingleHTied<0, 0b010, 0,    "ld1", VecListOneh,   GPR64pi2>;
defm ALD1 : PSIMDLdSingleSTied<0, 0b100, 0b00, "ld1", VecListOnes,   GPR64pi4>;
defm ALD1 : PSIMDLdSingleDTied<0, 0b100, 0b01, "ld1", VecListOned,   GPR64pi8>;
defm ALD2 : PSIMDLdSingleBTied<1, 0b000,       "ld2", VecListTwob,   GPR64pi2>;
defm ALD2 : PSIMDLdSingleHTied<1, 0b010, 0,    "ld2", VecListTwoh,   GPR64pi4>;
defm ALD2 : PSIMDLdSingleSTied<1, 0b100, 0b00, "ld2", VecListTwos,   GPR64pi8>;
defm ALD2 : PSIMDLdSingleDTied<1, 0b100, 0b01, "ld2", VecListTwod,   GPR64pi16>;
defm ALD3 : PSIMDLdSingleBTied<0, 0b001,       "ld3", VecListThreeb, GPR64pi3>;
defm ALD3 : PSIMDLdSingleHTied<0, 0b011, 0,    "ld3", VecListThreeh, GPR64pi6>;
defm ALD3 : PSIMDLdSingleSTied<0, 0b101, 0b00, "ld3", VecListThrees, GPR64pi12>;
defm ALD3 : PSIMDLdSingleDTied<0, 0b101, 0b01, "ld3", VecListThreed, GPR64pi24>;
defm ALD4 : PSIMDLdSingleBTied<1, 0b001,       "ld4", VecListFourb,  GPR64pi4>;
defm ALD4 : PSIMDLdSingleHTied<1, 0b011, 0,    "ld4", VecListFourh,  GPR64pi8>;
defm ALD4 : PSIMDLdSingleSTied<1, 0b101, 0b00, "ld4", VecListFours,  GPR64pi16>;
defm ALD4 : PSIMDLdSingleDTied<1, 0b101, 0b01, "ld4", VecListFourd,  GPR64pi32>;
}
}

let Predicates = [HasNEON, HasC64] in {
def : Pat<(v8i8 (AArch64dup (i32 (extcloadi8 Capsp:$Rn)))),
          (ALD1Rv8b Capsp:$Rn)>;
def : Pat<(v16i8 (AArch64dup (i32 (extcloadi8 Capsp:$Rn)))),
          (ALD1Rv16b Capsp:$Rn)>;
def : Pat<(v4i16 (AArch64dup (i32 (extcloadi16 Capsp:$Rn)))),
          (ALD1Rv4h Capsp:$Rn)>;
def : Pat<(v8i16 (AArch64dup (i32 (extcloadi16 Capsp:$Rn)))),
          (ALD1Rv8h Capsp:$Rn)>;
def : Pat<(v2i32 (AArch64dup (i32 (cload Capsp:$Rn)))),
          (ALD1Rv2s Capsp:$Rn)>;
def : Pat<(v4i32 (AArch64dup (i32 (cload Capsp:$Rn)))),
          (ALD1Rv4s Capsp:$Rn)>;
def : Pat<(v2i64 (AArch64dup (i64 (cload Capsp:$Rn)))),
          (ALD1Rv2d Capsp:$Rn)>;
def : Pat<(v1i64 (AArch64dup (i64 (cload Capsp:$Rn)))),
          (ALD1Rv1d Capsp:$Rn)>;
// Grab the floating point version too
def : Pat<(v2f32 (AArch64dup (f32 (cload Capsp:$Rn)))),
          (ALD1Rv2s Capsp:$Rn)>;
def : Pat<(v4f32 (AArch64dup (f32 (cload Capsp:$Rn)))),
          (ALD1Rv4s Capsp:$Rn)>;
def : Pat<(v2f64 (AArch64dup (f64 (cload Capsp:$Rn)))),
          (ALD1Rv2d Capsp:$Rn)>;
def : Pat<(v1f64 (AArch64dup (f64 (cload Capsp:$Rn)))),
          (ALD1Rv1d Capsp:$Rn)>;
def : Pat<(v4f16 (AArch64dup (f16 (cload Capsp:$Rn)))),
          (ALD1Rv4h Capsp:$Rn)>;
def : Pat<(v8f16 (AArch64dup (f16 (cload Capsp:$Rn)))),
          (ALD1Rv8h Capsp:$Rn)>;
def : Pat<(v4bf16 (AArch64dup (bf16 (cload Capsp:$Rn)))),
	  (ALD1Rv4h Capsp:$Rn)>;
def : Pat<(v8bf16 (AArch64dup (bf16 (cload Capsp:$Rn)))),
	  (ALD1Rv8h Capsp:$Rn)>;
} // Predicates = [HasNEON, HasC64]

class ALd1Lane128Pat<SDPatternOperator scalar_load, Operand VecIndex,
                    ValueType VTy, ValueType STy, Instruction LD1>
  : Pat<(vector_insert (VTy VecListOne128:$Rd),
           (STy (scalar_load Capsp:$Rn)), VecIndex:$idx),
        (LD1 VecListOne128:$Rd, VecIndex:$idx, Capsp:$Rn)>,
    Requires<[HasNEON, HasC64]>;

def : ALd1Lane128Pat<extcloadi8,  VectorIndexB, v16i8, i32, ALD1i8>;
def : ALd1Lane128Pat<extcloadi16, VectorIndexH, v8i16, i32, ALD1i16>;
def : ALd1Lane128Pat<cload,       VectorIndexS, v4i32, i32, ALD1i32>;
def : ALd1Lane128Pat<cload,       VectorIndexS, v4f32, f32, ALD1i32>;
def : ALd1Lane128Pat<cload,       VectorIndexD, v2i64, i64, ALD1i64>;
def : ALd1Lane128Pat<cload,       VectorIndexD, v2f64, f64, ALD1i64>;
def : ALd1Lane128Pat<cload,       VectorIndexH, v8f16, f16, ALD1i16>;
def : ALd1Lane128Pat<cload,       VectorIndexH, v8bf16, bf16, ALD1i16>;

class ALd1Lane64Pat<SDPatternOperator scalar_load, Operand VecIndex,
                   ValueType VTy, ValueType STy, Instruction LD1>
  : Pat<(vector_insert (VTy VecListOne64:$Rd),
           (STy (scalar_load Capsp:$Rn)), VecIndex:$idx),
        (EXTRACT_SUBREG
            (LD1 (SUBREG_TO_REG (i32 0), VecListOne64:$Rd, dsub),
                          VecIndex:$idx, Capsp:$Rn),
            dsub)>,
    Requires<[HasNEON, HasC64]>;

def : ALd1Lane64Pat<extcloadi8,  VectorIndexB, v8i8,  i32, ALD1i8>;
def : ALd1Lane64Pat<extcloadi16, VectorIndexH, v4i16, i32, ALD1i16>;
def : ALd1Lane64Pat<cload,       VectorIndexS, v2i32, i32, ALD1i32>;
def : ALd1Lane64Pat<cload,       VectorIndexS, v2f32, f32, ALD1i32>;
def : ALd1Lane64Pat<cload,       VectorIndexH, v4f16, f16, ALD1i16>;
def : ALd1Lane64Pat<cload,       VectorIndexH, v4bf16, bf16, ALD1i16>;

let Predicates = [HasNEON, HasC64] in {
defm ALD1 : PSIMDLdSt1SingleAliases<"ld1">;
defm ALD2 : PSIMDLdSt2SingleAliases<"ld2">;
defm ALD3 : PSIMDLdSt3SingleAliases<"ld3">;
defm ALD4 : PSIMDLdSt4SingleAliases<"ld4">;

// Stores
defm AST1 : PSIMDStSingleB<0, 0b000,       "st1", VecListOneb, GPR64pi1>;
defm AST1 : PSIMDStSingleH<0, 0b010, 0,    "st1", VecListOneh, GPR64pi2>;
defm AST1 : PSIMDStSingleS<0, 0b100, 0b00, "st1", VecListOnes, GPR64pi4>;
defm AST1 : PSIMDStSingleD<0, 0b100, 0b01, "st1", VecListOned, GPR64pi8>;

let AddedComplexity = 19 in
class ASt1Lane128Pat<SDPatternOperator scalar_store, Operand VecIndex,
                     ValueType VTy, ValueType STy, Instruction ST1>
  : Pat<(scalar_store
             (STy (vector_extract (VTy VecListOne128:$Vt), VecIndex:$idx)),
             Capsp:$Rn),
        (ST1 VecListOne128:$Vt, VecIndex:$idx, Capsp:$Rn)>,
    Requires<[HasNEON, HasC64]>;

def : ASt1Lane128Pat<trunccstorei8,  VectorIndexB, v16i8, i32, AST1i8>;
def : ASt1Lane128Pat<trunccstorei16, VectorIndexH, v8i16, i32, AST1i16>;
def : ASt1Lane128Pat<cstore,         VectorIndexS, v4i32, i32, AST1i32>;
def : ASt1Lane128Pat<cstore,         VectorIndexS, v4f32, f32, AST1i32>;
def : ASt1Lane128Pat<cstore,         VectorIndexD, v2i64, i64, AST1i64>;
def : ASt1Lane128Pat<cstore,         VectorIndexD, v2f64, f64, AST1i64>;
def : ASt1Lane128Pat<cstore,         VectorIndexH, v8f16, f16, AST1i16>;
def : ASt1Lane128Pat<cstore,         VectorIndexH, v8bf16, bf16, AST1i16>;

let AddedComplexity = 19 in
class ASt1Lane64Pat<SDPatternOperator scalar_store, Operand VecIndex,
                    ValueType VTy, ValueType STy, Instruction ST1>
  : Pat<(scalar_store
             (STy (vector_extract (VTy VecListOne64:$Vt), VecIndex:$idx)),
             Capsp:$Rn),
        (ST1 (SUBREG_TO_REG (i32 0), VecListOne64:$Vt, dsub),
             VecIndex:$idx, Capsp:$Rn)>,
    Requires<[HasNEON, HasC64]>;

def : ASt1Lane64Pat<truncstorei8,  VectorIndexB, v8i8, i32, AST1i8>;
def : ASt1Lane64Pat<truncstorei16, VectorIndexH, v4i16, i32, AST1i16>;
def : ASt1Lane64Pat<store,         VectorIndexS, v2i32, i32, AST1i32>;
def : ASt1Lane64Pat<store,         VectorIndexS, v2f32, f32, AST1i32>;
def : ASt1Lane64Pat<store,         VectorIndexH, v4f16, f16, AST1i16>;
def : ASt1Lane64Pat<store,         VectorIndexH, v4bf16, bf16, AST1i16>;

multiclass ASt1LanePost64Pat<SDPatternOperator scalar_store, Operand VecIndex,
                             ValueType VTy, ValueType STy, Instruction ST1,
                             int offset> {
  def : Pat<(scalar_store
              (STy (vector_extract (VTy VecListOne64:$Vt), VecIndex:$idx)),
               Capsp:$Rn, offset),
        (ST1 (SUBREG_TO_REG (i32 0), VecListOne64:$Vt, dsub),
             VecIndex:$idx, Capsp:$Rn, XZR)>;

  def : Pat<(scalar_store
              (STy (vector_extract (VTy VecListOne64:$Vt), VecIndex:$idx)),
               Capsp:$Rn, GPR64:$Rm),
        (ST1 (SUBREG_TO_REG (i32 0), VecListOne64:$Vt, dsub),
             VecIndex:$idx, Capsp:$Rn, $Rm)>;
}
defm : ASt1LanePost64Pat<post_trunccsti8, VectorIndexB, v8i8, i32, AST1i8_POST, 1>;
defm : ASt1LanePost64Pat<post_trunccsti16, VectorIndexH, v4i16, i32, AST1i16_POST,
                        2>;
defm : ASt1LanePost64Pat<post_cstore, VectorIndexS, v2i32, i32, AST1i32_POST, 4>;
defm : ASt1LanePost64Pat<post_cstore, VectorIndexS, v2f32, f32, AST1i32_POST, 4>;
defm : ASt1LanePost64Pat<post_cstore, VectorIndexD, v1i64, i64, AST1i64_POST, 8>;
defm : ASt1LanePost64Pat<post_cstore, VectorIndexD, v1f64, f64, AST1i64_POST, 8>;
defm : ASt1LanePost64Pat<post_cstore, VectorIndexH, v4f16, f16, AST1i16_POST, 2>;
defm : ASt1LanePost64Pat<post_cstore, VectorIndexH, v4bf16, bf16, AST1i16_POST, 2>;

multiclass ASt1LanePost128Pat<SDPatternOperator scalar_store, Operand VecIndex,
                             ValueType VTy, ValueType STy, Instruction ST1,
                             int offset> {
  def : Pat<(scalar_store
              (STy (vector_extract (VTy VecListOne128:$Vt), VecIndex:$idx)),
               Capsp:$Rn, offset),
        (ST1 VecListOne128:$Vt, VecIndex:$idx, Capsp:$Rn, XZR)>;

  def : Pat<(scalar_store
              (STy (vector_extract (VTy VecListOne128:$Vt), VecIndex:$idx)),
              Capsp:$Rn, GPR64:$Rm),
        (ST1 VecListOne128:$Vt, VecIndex:$idx, Capsp:$Rn, $Rm)>;
}

defm : ASt1LanePost128Pat<post_trunccsti8, VectorIndexB, v16i8, i32, AST1i8_POST, 1>;
defm : ASt1LanePost128Pat<post_trunccsti16, VectorIndexH, v8i16, i32, AST1i16_POST,
                         2>;
defm : ASt1LanePost128Pat<post_cstore, VectorIndexS, v4i32, i32, AST1i32_POST, 4>;
defm : ASt1LanePost128Pat<post_cstore, VectorIndexS, v4f32, f32, AST1i32_POST, 4>;
defm : ASt1LanePost128Pat<post_cstore, VectorIndexD, v2i64, i64, AST1i64_POST, 8>;
defm : ASt1LanePost128Pat<post_cstore, VectorIndexD, v2f64, f64, AST1i64_POST, 8>;
defm : ASt1LanePost128Pat<post_cstore, VectorIndexH, v8f16, f16, AST1i16_POST, 2>;
defm : ASt1LanePost128Pat<post_cstore, VectorIndexH, v8bf16, bf16, AST1i16_POST, 2>;
} // Predicates = [HasNEON, HasC64]

let Predicates = [HasNEON, HasC64], mayStore = 1, hasSideEffects = 0 in {
defm AST2 : PSIMDStSingleB<1, 0b000,       "st2", VecListTwob,   GPR64pi2>;
defm AST2 : PSIMDStSingleH<1, 0b010, 0,    "st2", VecListTwoh,   GPR64pi4>;
defm AST2 : PSIMDStSingleS<1, 0b100, 0b00, "st2", VecListTwos,   GPR64pi8>;
defm AST2 : PSIMDStSingleD<1, 0b100, 0b01, "st2", VecListTwod,   GPR64pi16>;
defm AST3 : PSIMDStSingleB<0, 0b001,       "st3", VecListThreeb, GPR64pi3>;
defm AST3 : PSIMDStSingleH<0, 0b011, 0,    "st3", VecListThreeh, GPR64pi6>;
defm AST3 : PSIMDStSingleS<0, 0b101, 0b00, "st3", VecListThrees, GPR64pi12>;
defm AST3 : PSIMDStSingleD<0, 0b101, 0b01, "st3", VecListThreed, GPR64pi24>;
defm AST4 : PSIMDStSingleB<1, 0b001,       "st4", VecListFourb,  GPR64pi4>;
defm AST4 : PSIMDStSingleH<1, 0b011, 0,    "st4", VecListFourh,  GPR64pi8>;
defm AST4 : PSIMDStSingleS<1, 0b101, 0b00, "st4", VecListFours,  GPR64pi16>;
defm AST4 : PSIMDStSingleD<1, 0b101, 0b01, "st4", VecListFourd,  GPR64pi32>;
}

let Predicates = [HasNEON, HasC64] in {
defm AST1 : PSIMDLdSt1SingleAliases<"st1">;
defm AST2 : PSIMDLdSt2SingleAliases<"st2">;
defm AST3 : PSIMDLdSt3SingleAliases<"st3">;
defm AST4 : PSIMDLdSt4SingleAliases<"st4">;
}

// v8.1 atomics
defm ACAS   : PCompareAndSwap<0, 0, "">;
defm ACASA  : PCompareAndSwap<1, 0, "a">;
defm ACASL  : PCompareAndSwap<0, 1, "l">;
defm ACASAL : PCompareAndSwap<1, 1, "al">;

defm ACASP   : PCompareAndSwapPair<0, 0, "">;
defm ACASPA  : PCompareAndSwapPair<1, 0, "a">;
defm ACASPL  : PCompareAndSwapPair<0, 1, "l">;
defm ACASPAL : PCompareAndSwapPair<1, 1, "al">;

defm ASWP   : PSwap<0, 0, "">;
defm ASWPA  : PSwap<1, 0, "a">;
defm ASWPL  : PSwap<0, 1, "l">;
defm ASWPAL : PSwap<1, 1, "al">;

defm ALDADD   : PLDOPregister<0b000, "add", 0, 0, "">;
defm ALDADDA  : PLDOPregister<0b000, "add", 1, 0, "a">;
defm ALDADDL  : PLDOPregister<0b000, "add", 0, 1, "l">;
defm ALDADDAL : PLDOPregister<0b000, "add", 1, 1, "al">;

defm ALDCLR   : PLDOPregister<0b001, "clr", 0, 0, "">;
defm ALDCLRA  : PLDOPregister<0b001, "clr", 1, 0, "a">;
defm ALDCLRL  : PLDOPregister<0b001, "clr", 0, 1, "l">;
defm ALDCLRAL : PLDOPregister<0b001, "clr", 1, 1, "al">;

defm ALDEOR   : PLDOPregister<0b010, "eor", 0, 0, "">;
defm ALDEORA  : PLDOPregister<0b010, "eor", 1, 0, "a">;
defm ALDEORL  : PLDOPregister<0b010, "eor", 0, 1, "l">;
defm ALDEORAL : PLDOPregister<0b010, "eor", 1, 1, "al">;

defm ALDSET   : PLDOPregister<0b011, "set", 0, 0, "">;
defm ALDSETA  : PLDOPregister<0b011, "set", 1, 0, "a">;
defm ALDSETL  : PLDOPregister<0b011, "set", 0, 1, "l">;
defm ALDSETAL : PLDOPregister<0b011, "set", 1, 1, "al">;

defm ALDSMAX   : PLDOPregister<0b100, "smax", 0, 0, "">;
defm ALDSMAXA  : PLDOPregister<0b100, "smax", 1, 0, "a">;
defm ALDSMAXL  : PLDOPregister<0b100, "smax", 0, 1, "l">;
defm ALDSMAXAL : PLDOPregister<0b100, "smax", 1, 1, "al">;

defm ALDSMIN   : PLDOPregister<0b101, "smin", 0, 0, "">;
defm ALDSMINA  : PLDOPregister<0b101, "smin", 1, 0, "a">;
defm ALDSMINL  : PLDOPregister<0b101, "smin", 0, 1, "l">;
defm ALDSMINAL : PLDOPregister<0b101, "smin", 1, 1, "al">;

defm ALDUMAX   : PLDOPregister<0b110, "umax", 0, 0, "">;
defm ALDUMAXA  : PLDOPregister<0b110, "umax", 1, 0, "a">;
defm ALDUMAXL  : PLDOPregister<0b110, "umax", 0, 1, "l">;
defm ALDUMAXAL : PLDOPregister<0b110, "umax", 1, 1, "al">;

defm ALDUMIN   : PLDOPregister<0b111, "umin", 0, 0, "">;
defm ALDUMINA  : PLDOPregister<0b111, "umin", 1, 0, "a">;
defm ALDUMINL  : PLDOPregister<0b111, "umin", 0, 1, "l">;
defm ALDUMINAL : PLDOPregister<0b111, "umin", 1, 1, "al">;

defm : PSTOPregister<"stadd","ALDADD">;
defm : PSTOPregister<"stclr","ALDCLR">;
defm : PSTOPregister<"steor","ALDEOR">;
defm : PSTOPregister<"stset","ALDSET">;
defm : PSTOPregister<"stsmax","ALDSMAX">;
defm : PSTOPregister<"stsmin","ALDSMIN">;
defm : PSTOPregister<"stumax","ALDUMAX">;
defm : PSTOPregister<"stumin","ALDUMIN">;

defm : PLDOPregister_patterns<"ALDADD", "atomic_cload_add">;
defm : PLDOPregister_patterns<"ALDSET", "atomic_cload_or">;
defm : PLDOPregister_patterns<"ALDEOR", "atomic_cload_xor">;
defm : PLDOPregister_patterns<"ALDCLR", "atomic_cload_clr">;
defm : PLDOPregister_patterns<"ALDSMAX", "atomic_cload_max">;
defm : PLDOPregister_patterns<"ALDSMIN", "atomic_cload_min">;
defm : PLDOPregister_patterns<"ALDUMAX", "atomic_cload_umax">;
defm : PLDOPregister_patterns<"ALDUMIN", "atomic_cload_umin">;
defm : PLDOPregister_patterns<"ASWP", "atomic_cswap">;
defm : PCASregister_patterns<"ACAS", "atomic_cmp_cswap">;

let Predicates = [HasRCPC, HasC64] in {
  // v8.3 Release Consistent Processor Consistent support, optional in v8.2.
  def ALDAPRB  : PRCPCLoad<0b00, "ldaprb", GPR32>;
  def ALDAPRH  : PRCPCLoad<0b01, "ldaprh", GPR32>;
  def ALDAPRW  : PRCPCLoad<0b10, "ldapr", GPR32>;
  def ALDAPRX  : PRCPCLoad<0b11, "ldapr", GPR64>;
}

let Predicates = [HasC64] in {
def CMOVbaseTLS : Pseudo<(outs Cap:$dst), (ins),
                       [(set Cap:$dst, AArch64cthreadpointer)]>, Sched<[WriteSys]>;

let isCall = 1, Defs = [CLR, C0, X1], Uses = [C2], hasSideEffects = 1, Size = 20,
    isCodeGenOnly = 1 in
def TLSDESC_C64_CALLSEQ
    : Pseudo<(outs), (ins i64imm:$sym),
             [(AArch64C64tlsdesc_callseq tglobaltlsaddr:$sym)]>,
      Sched<[WriteI, WriteLD, WriteI, WriteBrReg]>;
def : Pat<(AArch64C64tlsdesc_callseq texternalsym:$sym),
          (TLSDESC_C64_CALLSEQ texternalsym:$sym)>;
}
