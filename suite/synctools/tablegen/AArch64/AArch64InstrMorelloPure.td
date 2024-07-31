//=- AArch64InstrC64MorelloPure.td - Morello C64 Instructions -*- tablegen -*-//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=---------------------------------------------------------------------------//
//
// AArch64 C64 Instruction definitions for Morello added instructions.
//
//=---------------------------------------------------------------------------//

let Predicates = [HasMorello, HasC64], DecoderNamespace = "AArch64MorelloC64" in {
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltCapLoadAcq : AltCapLoadAcqFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn), "ldar", "\t$Ct, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltCapStoreRel : AltCapStoreRelFmt<(outs), (ins Cap:$Ct, GPR64sp:$Rn), "stlr", "\t$Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadByteAcq : AltLoadByteAcqFmt<(outs GPR32:$Rt), (ins GPR64sp:$Rn), "ldarb", "\t$Rt, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadByteImmPre : AltLoadByteImmPreFmt<(outs GPR32:$Rt), (ins GPR64sp:$Rn, uimm9:$imm9), "ldrb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadByteImmUnscaled : AltLoadByteImmUnscaledFmt<(outs GPR32:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldurb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadCapImmPre : AltLoadCapImmPreFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn, uimm9s16:$imm9), "ldr", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadCapabilityImmUnscaled : AltLoadCapabilityImmUnscaledFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn, simm9:$imm9), "ldur", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadDWordImmPre : AltLoadDWordImmPreFmt<(outs GPR64:$Rt), (ins GPR64sp:$Rn, uimm9s8:$imm9), "ldr", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadDWordImmUnscaled : AltLoadDWordImmUnscaledFmt<(outs GPR64:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadFPByteImmUnscaled : AltLoadFPByteImmUnscaledFmt<(outs FPR8:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadFPDoubleImmUnscaled : AltLoadFPDoubleImmUnscaledFmt<(outs FPR64:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadFPHalfImmUnscaled : AltLoadFPHalfImmUnscaledFmt<(outs FPR16:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadFPQuadImmUnscaled : AltLoadFPQuadImmUnscaledFmt<(outs FPR128:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadFPSingleImmUnscaled : AltLoadFPSingleImmUnscaledFmt<(outs FPR32:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadHalfImmUnscaled : AltLoadHalfImmUnscaledFmt<(outs GPR32:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldurh", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadSignedByteToDWordImmUnscaled : AltLoadSignedByteToDWordImmUnscaledFmt<(outs GPR64:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldursb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadSignedByteToWordImmUnscaled : AltLoadSignedByteToWordImmUnscaledFmt<(outs GPR32:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldursb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadSignedHalfToDWordImmUnscaled : AltLoadSignedHalfToDWordImmUnscaledFmt<(outs GPR64:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldursh", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadSignedHalfToWordImmUnscaled : AltLoadSignedHalfToWordImmUnscaledFmt<(outs GPR32:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldursh", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadSignedWordToDWordImmUnscaled : AltLoadSignedWordToDWordImmUnscaledFmt<(outs GPR64:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldursw", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadWordAcq : AltLoadWordAcqFmt<(outs GPR32:$Rt), (ins GPR64sp:$Rn), "ldar", "\t$Rt, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadWordImmPre : AltLoadWordImmPreFmt<(outs GPR32:$Rt), (ins GPR64sp:$Rn, uimm9s4:$imm9), "ldr", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PAltLoadWordImmUnscaled : AltLoadWordImmUnscaledFmt<(outs GPR32:$Rt), (ins GPR64sp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreByteImmPre : AltStoreByteImmPreFmt<(outs), (ins GPR32:$Rt, GPR64sp:$Rn, uimm9:$imm9), "strb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreByteImmUnscaled : AltStoreByteImmUnscaledFmt<(outs), (ins GPR32:$Rt, GPR64sp:$Rn, simm9:$imm9), "sturb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreByteRel : AltStoreByteRelFmt<(outs), (ins GPR32:$Rt, GPR64sp:$Rn), "stlrb", "\t$Rt, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreCapImmPre : AltStoreCapImmPreFmt<(outs), (ins Cap:$Ct, GPR64sp:$Rn, uimm9s16:$imm9), "str", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreCapabilityImmUnscaled : AltStoreCapabilityImmUnscaledFmt<(outs), (ins Cap:$Ct, GPR64sp:$Rn, simm9:$imm9), "stur", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreDWordImmPre : AltStoreDWordImmPreFmt<(outs), (ins GPR64:$Rt, GPR64sp:$Rn, uimm9s8:$imm9), "str", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreDWordImmUnscaled : AltStoreDWordImmUnscaledFmt<(outs), (ins GPR64:$Rt, GPR64sp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreFPByteImmUnscaled : AltStoreFPByteImmUnscaledFmt<(outs), (ins FPR8:$Rt, GPR64sp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreFPDoubleImmUnscaled : AltStoreFPDoubleImmUnscaledFmt<(outs), (ins FPR64:$Rt, GPR64sp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreFPHalfImmUnscaled : AltStoreFPHalfImmUnscaledFmt<(outs), (ins FPR16:$Rt, GPR64sp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreFPQuadImmUnscaled : AltStoreFPQuadImmUnscaledFmt<(outs), (ins FPR128:$Rt, GPR64sp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreFPSingleImmUnscaled : AltStoreFPSingleImmUnscaledFmt<(outs), (ins FPR32:$Rt, GPR64sp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreHalfImmUnscaled : AltStoreHalfImmUnscaledFmt<(outs), (ins GPR32:$Rt, GPR64sp:$Rn, simm9:$imm9), "sturh", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreWordImmPre : AltStoreWordImmPreFmt<(outs), (ins GPR32:$Rt, GPR64sp:$Rn, uimm9s4:$imm9), "str", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreWordImmUnscaled : AltStoreWordImmUnscaledFmt<(outs), (ins GPR32:$Rt, GPR64sp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PAltStoreWordRel : AltStoreWordRelFmt<(outs), (ins GPR32:$Rt, GPR64sp:$Rn), "stlr", "\t$Rt, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "$out = $Cs" in
  def PCapCompareSwap : CapCompareSwapFmt<(outs Cap:$out), (ins Cap:$Cs, Cap:$Ct, Capsp:$Rn), "cas", "\t$Cs, $Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "$out = $Cs" in
  def PCapCompareSwapAcq : CapCompareSwapAcqFmt<(outs Cap:$out), (ins Cap:$Cs, Cap:$Ct, Capsp:$Rn), "casa", "\t$Cs, $Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "$out = $Cs" in
  def PCapCompareSwapAcqRel : CapCompareSwapAcqRelFmt<(outs Cap:$out), (ins Cap:$Cs, Cap:$Ct, Capsp:$Rn), "casal", "\t$Cs, $Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "$out = $Cs" in
  def PCapCompareSwapRel : CapCompareSwapRelFmt<(outs Cap:$out), (ins Cap:$Cs, Cap:$Ct, Capsp:$Rn), "casl", "\t$Cs, $Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PCapLoadAcq : CapLoadAcqFmt<(outs Cap:$Ct), (ins Capsp:$Rn), "ldar", "\t$Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PCapLoadAcqPR : CapLoadAcqPRFmt<(outs Cap:$Ct), (ins Capsp:$Rn), "ldapr", "\t$Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1 in
  def PCapLoadEx : CapLoadExFmt<(outs Cap:$Ct), (ins Capsp:$Rn), "ldxr", "\t$Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1 in
  def PCapLoadExAcq : CapLoadExAcqFmt<(outs Cap:$Ct), (ins Capsp:$Rn), "ldaxr", "\t$Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1 in
  def PCapLoadExPair : CapLoadExPairFmt<(outs Cap:$Ct, Cap:$Ct2), (ins Capsp:$Rn), "ldxp", "\t$Ct, $Ct2, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1 in
  def PCapLoadExPairAcq : CapLoadExPairAcqFmt<(outs Cap:$Ct, Cap:$Ct2), (ins Capsp:$Rn), "ldaxp", "\t$Ct, $Ct2, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0, Constraints = "@earlyclobber $out, $out = $Rn" in
  def PCapLoadImmPost : CapLoadImmPostFmt<(outs Capsp:$out, Cap:$Ct), (ins Capsp:$Rn, simm9s16:$imm9), "ldr", "\t$Ct, [$Rn], $imm9", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PCapLoadImmPre : CapLoadImmPreFmt<(outs Cap:$Ct), (ins Capsp:$Rn, uimm12s16:$imm12), "ldr", "\t$Ct, [$Rn, $imm12]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0, Constraints = "@earlyclobber $out, $out = $Rn" in
  def PCapLoadImmPreW : CapLoadImmPreWFmt<(outs Capsp:$out, Cap:$Ct), (ins Capsp:$Rn, simm9s16:$imm9), "ldr", "\t$Ct, [$Rn, $imm9]!", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0, Constraints = "@earlyclobber $out, $out = $Rn" in
  def PCapLoadPairImmPost : CapLoadPairImmPostFmt<(outs Capsp:$out, Cap:$Ct, Cap:$Ct2), (ins Capsp:$Rn, simm7s16:$imm7), "ldp", "\t$Ct, $Ct2, [$Rn], $imm7", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PCapLoadPairImmPre : CapLoadPairImmPreFmt<(outs Cap:$Ct, Cap:$Ct2), (ins Capsp:$Rn, simm7s16:$imm7), "ldp", "\t$Ct, $Ct2, [$Rn, $imm7]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0, Constraints = "@earlyclobber $out, $out = $Rn" in
  def PCapLoadPairImmPreW : CapLoadPairImmPreWFmt<(outs Capsp:$out, Cap:$Ct, Cap:$Ct2), (ins Capsp:$Rn, simm7s16:$imm7), "ldp", "\t$Ct, $Ct2, [$Rn, $imm7]!", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PCapLoadPairNonTemporal : CapLoadPairNonTemporalFmt<(outs Cap:$Ct, Cap:$Ct2), (ins Capsp:$Rn, simm7s16:$imm7), "ldnp", "\t$Ct, $Ct2, [$Rn, $imm7]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PCapLoadTags : CapLoadTagsFmt<(outs GPR64:$Rt), (ins Capsp:$Rn), "ldct", "\t$Rt, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PCapLoadUnpriv : CapLoadUnprivFmt<(outs Cap:$Ct), (ins Capsp:$Rn, simm9s16:$imm9), "ldtr", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def PCapLoadUnscaledImm : CapLoadUnscaledImmFmt<(outs Cap:$Ct), (ins Capsp:$Rn, simm9:$imm9), "ldur", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "@earlyclobber $Rs" in
  def PCapStoreEx : CapStoreExFmt<(outs GPR32:$Rs), (ins Cap:$Ct, Capsp:$Rn), "stxr", "\t$Rs, $Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "@earlyclobber $Rs" in
  def PCapStoreExPair : CapStoreExPairFmt<(outs GPR32:$Rs), (ins Cap:$Ct, Cap:$Ct2, Capsp:$Rn), "stxp", "\t$Rs, $Ct, $Ct2, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "@earlyclobber $Rs" in
  def PCapStoreExPairRel : CapStoreExPairRelFmt<(outs GPR32:$Rs), (ins Cap:$Ct, Cap:$Ct2, Capsp:$Rn), "stlxp", "\t$Rs, $Ct, $Ct2, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "@earlyclobber $Rs" in
  def PCapStoreExRel : CapStoreExRelFmt<(outs GPR32:$Rs), (ins Cap:$Ct, Capsp:$Rn), "stlxr", "\t$Rs, $Ct, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1, Constraints = "@earlyclobber $out, $out = $Rn" in
  def PCapStoreImmPost : CapStoreImmPostFmt<(outs Capsp:$out), (ins Cap:$Ct, Capsp:$Rn, simm9s16:$imm9), "str", "\t$Ct, [$Rn], $imm9", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PCapStoreImmPre : CapStoreImmPreFmt<(outs), (ins Cap:$Ct, Capsp:$Rn, uimm12s16:$imm12), "str", "\t$Ct, [$Rn, $imm12]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1, Constraints = "@earlyclobber $out, $out = $Rn" in
  def PCapStoreImmPreW : CapStoreImmPreWFmt<(outs Capsp:$out), (ins Cap:$Ct, Capsp:$Rn, simm9s16:$imm9), "str", "\t$Ct, [$Rn, $imm9]!", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1, Constraints = "@earlyclobber $out, $out = $Rn" in
  def PCapStorePairImmPost : CapStorePairImmPostFmt<(outs Capsp:$out), (ins Cap:$Ct, Cap:$Ct2, Capsp:$Rn, simm7s16:$imm7), "stp", "\t$Ct, $Ct2, [$Rn], $imm7", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PCapStorePairImmPre : CapStorePairImmPreFmt<(outs), (ins Cap:$Ct, Cap:$Ct2, Capsp:$Rn, simm7s16:$imm7), "stp", "\t$Ct, $Ct2, [$Rn, $imm7]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1, Constraints = "@earlyclobber $out, $out = $Rn" in
  def PCapStorePairImmPreW : CapStorePairImmPreWFmt<(outs Capsp:$out), (ins Cap:$Ct, Cap:$Ct2, Capsp:$Rn, simm7s16:$imm7), "stp", "\t$Ct, $Ct2, [$Rn, $imm7]!", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PCapStorePairNonTemporal : CapStorePairNonTemporalFmt<(outs), (ins Cap:$Ct, Cap:$Ct2, Capsp:$Rn, simm7s16:$imm7), "stnp", "\t$Ct, $Ct2, [$Rn, $imm7]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PCapStoreRel : CapStoreRelFmt<(outs), (ins Cap:$Ct, Capsp:$Rn), "stlr", "\t$Ct, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PCapStoreTagsPriv : CapStoreTagsPrivFmt<(outs), (ins GPR64:$Rt, Capsp:$Rn), "stct", "\t$Rt, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PCapStoreUnpriv : CapStoreUnprivFmt<(outs), (ins Cap:$Ct, Capsp:$Rn, simm9s16:$imm9), "sttr", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def PCapStoreUnscaledImm : CapStoreUnscaledImmFmt<(outs), (ins Cap:$Ct, Capsp:$Rn, simm9:$imm9), "stur", "\t$Ct, [$Rn, $imm9]", []>;
def PCapSwap : CapSwapFmt<(outs Cap:$Ct), (ins Cap:$Cs, Capsp:$Rn), "swp", "\t$Cs, $Ct, [$Rn]", []>;
def PCapSwapAcq : CapSwapAcqFmt<(outs Cap:$Ct), (ins Cap:$Cs, Capsp:$Rn), "swpa", "\t$Cs, $Ct, [$Rn]", []>;
def PCapSwapAcqRel : CapSwapAcqRelFmt<(outs Cap:$Ct), (ins Cap:$Cs, Capsp:$Rn), "swpal", "\t$Cs, $Ct, [$Rn]", []>;
def PCapSwapRel : CapSwapRelFmt<(outs Cap:$Ct), (ins Cap:$Cs, Capsp:$Rn), "swpl", "\t$Cs, $Ct, [$Rn]", []>;
}

// ======================= Manually added instructions =======================

let Predicates = [HasMorello, HasC64], DecoderNamespace = "AArch64MorelloC64" in {
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in {
  def PCapLoadRegExtW : CapLoadRegExtWFmt<Capsp, "ldr", []>;
  def PCapLoadRegExtX : CapLoadRegExtXFmt<Capsp, "ldr", []>;

  def PAltLoadCapRegExtW : AltLoadCapRegExtWFmt<GPR64sp, "ldr", []>;
  def PAltLoadCapRegExtX : AltLoadCapRegExtXFmt<GPR64sp, "ldr", []>;
  def PAltLoadSWordRegExtW : AltLoadSWordRegExtWFmt<GPR64sp, "ldr", []>;
  def PAltLoadSWordRegExtX : AltLoadSWordRegExtXFmt<GPR64sp, "ldr", []>;
  def PAltLoadDWordRegExtW : AltLoadDWordRegExtWFmt<GPR64sp, "ldr", []>;
  def PAltLoadDWordRegExtX : AltLoadDWordRegExtXFmt<GPR64sp, "ldr", []>;
  def PAltLoadByteRegExtW : AltLoadByteRegExtWFmt<GPR64sp, "ldrb", []>;
  def PAltLoadByteRegExtX : AltLoadByteRegExtXFmt<GPR64sp, "ldrb", []>;
  def PAltLoadHalfwordRegExtW : AltLoadHalfwordRegExtWFmt<GPR64sp, "ldrh", []>;
  def PAltLoadHalfwordRegExtX : AltLoadHalfwordRegExtXFmt<GPR64sp, "ldrh", []>;
  def PAltLoadSignedByteDRegExtW : AltLoadSignedByteDRegExtWFmt<GPR64sp, "ldrsb", []>;
  def PAltLoadSignedByteDRegExtX : AltLoadSignedByteDRegExtXFmt<GPR64sp, "ldrsb", []>;
  def PAltLoadSignedByteSRegExtW : AltLoadSignedByteSRegExtWFmt<GPR64sp, "ldrsb", []>;
  def PAltLoadSignedByteSRegExtX : AltLoadSignedByteSRegExtXFmt<GPR64sp, "ldrsb", []>;
  def PAltLoadSignedHalfwordDRegExtW : AltLoadSignedHalfwordDRegExtWFmt<GPR64sp, "ldrsh", []>;
  def PAltLoadSignedHalfwordDRegExtX : AltLoadSignedHalfwordDRegExtXFmt<GPR64sp, "ldrsh", []>;
  def PAltLoadSignedHalfwordSRegExtW : AltLoadSignedHalfwordSRegExtWFmt<GPR64sp, "ldrsh", []>;
  def PAltLoadSignedHalfwordSRegExtX : AltLoadSignedHalfwordSRegExtXFmt<GPR64sp, "ldrsh", []>;
  def PAltLoadDFPRegExtW : AltLoadDFPRegExtWFmt<GPR64sp, "ldr", []>;
  def PAltLoadDFPRegExtX : AltLoadDFPRegExtXFmt<GPR64sp, "ldr", []>;
  def PAltLoadSFPRegExtW : AltLoadSFPRegExtWFmt<GPR64sp, "ldr", []>;
  def PAltLoadSFPRegExtX : AltLoadSFPRegExtXFmt<GPR64sp, "ldr", []>;
}
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in {
  def PCapStoreRegExtW : CapStoreRegExtWFmt<Capsp, "str", []>;
  def PCapStoreRegExtX : CapStoreRegExtXFmt<Capsp, "str", []>;

  def PAltStoreCapRegExtW : AltStoreCapRegExtWFmt<GPR64sp, "str", []>;
  def PAltStoreCapRegExtX : AltStoreCapRegExtXFmt<GPR64sp, "str", []>;
  def PAltStoreSWordRegExtW : AltStoreSWordRegExtWFmt<GPR64sp, "str", []>;
  def PAltStoreSWordRegExtX : AltStoreSWordRegExtXFmt<GPR64sp, "str", []>;
  def PAltStoreDWordRegExtW : AltStoreDWordRegExtWFmt<GPR64sp, "str", []>;
  def PAltStoreDWordRegExtX : AltStoreDWordRegExtXFmt<GPR64sp, "str", []>;
  def PAltStoreByteRegExtW : AltStoreByteRegExtWFmt<GPR64sp, "strb", []>;
  def PAltStoreByteRegExtX : AltStoreByteRegExtXFmt<GPR64sp, "strb", []>;
  def PAltStoreHalfwordRegExtW : AltStoreHalfwordRegExtWFmt<GPR64sp, "strh", []>;
  def PAltStoreHalfwordRegExtX : AltStoreHalfwordRegExtXFmt<GPR64sp, "strh", []>;
  def PAltStoreDFPRegExtW : AltStoreDFPRegExtWFmt<GPR64sp, "str", []>;
  def PAltStoreDFPRegExtX : AltStoreDFPRegExtXFmt<GPR64sp, "str", []>;
  def PAltStoreSFPRegExtW : AltStoreSFPRegExtWFmt<GPR64sp, "str", []>;
  def PAltStoreSFPRegExtX : AltStoreSFPRegExtXFmt<GPR64sp, "str", []>;
}
}

let Predicates = [HasMorello, HasC64] in {
def : InstAlias<"str\t$Ct, [$Rn, $Rm]",
                (PCapStoreRegExtX Cap:$Ct, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldr\t$Ct, [$Rn, $Rm]",
                (PCapLoadRegExtX Cap:$Ct, Capsp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store capability (register) via alternate base.
def : InstAlias<"ldr\t$Ct, [$Rn, $Rm]", (PAltLoadCapRegExtX Cap:$Ct, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Ct, [$Rn, $Rm]", (PAltStoreCapRegExtX Cap:$Ct, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store Register (register) via alternate base.
def : InstAlias<"ldr\t$Rt, [$Rn, $Rm]", (PAltLoadSWordRegExtX GPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldr\t$Rt, [$Rn, $Rm]", (PAltLoadDWordRegExtX GPR64:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Rt, [$Rn, $Rm]", (PAltStoreSWordRegExtX GPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Rt, [$Rn, $Rm]", (PAltStoreDWordRegExtX GPR64:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store Register Byte (register) via alternate base.
def : InstAlias<"ldrb\t$Rt, [$Rn, $Rm]", (PAltLoadByteRegExtX GPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"strb\t$Rt, [$Rn, $Rm]", (PAltStoreByteRegExtX GPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store Register Halfword (register) via alternate base.
def : InstAlias<"ldrh\t$Rt, [$Rn, $Rm]", (PAltLoadHalfwordRegExtX GPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"strh\t$Rt, [$Rn, $Rm]", (PAltStoreHalfwordRegExtX GPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;

// Load Register Signed Byte (register) via alternate base.
def : InstAlias<"ldrsb\t$Rt, [$Rn, $Rm]", (PAltLoadSignedByteDRegExtX GPR64:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldrsb\t$Rt, [$Rn, $Rm]", (PAltLoadSignedByteSRegExtX GPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;

// Load Register Signed Halfword (register) via alternate base.
def : InstAlias<"ldrsh\t$Rt, [$Rn, $Rm]", (PAltLoadSignedHalfwordDRegExtX GPR64:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldrsh\t$Rt, [$Rn, $Rm]", (PAltLoadSignedHalfwordSRegExtX GPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store SIMD&FP Register (register) via alternate base.
def : InstAlias<"ldr\t$Rt, [$Rn, $Rm]", (PAltLoadDFPRegExtX FPR64:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldr\t$Rt, [$Rn, $Rm]", (PAltLoadSFPRegExtX FPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Rt, [$Rn, $Rm]", (PAltStoreDFPRegExtX FPR64:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Rt, [$Rn, $Rm]", (PAltStoreSFPRegExtX FPR32:$Rt, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
}

let Predicates = [HasMorello, HasC64], isReMaterializable = 1,
    DecoderNamespace = "AArch64MorelloC64" in {
def PADRP : CapADRI<1, 1, "adrp", adrplabel_simm20, []>;
def PADRDP : CapADRI<1, 0, "adrdp", adrdplabel_uimm20, []>;
}

let Predicates = [HasC64, HasMorello] in {

def : InstAlias<"ret", (CapReturn CLR), 0>;

// Alias the immediate offset ldr/str instructions from AArch64 with ldur/stur
// as much as possible.
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (PAltLoadDWordImmUnscaled GPR64:$Rt, GPR64sp:$Rn,
                                        simm9_offset_fb64:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (PAltLoadWordImmUnscaled GPR32:$Rt, GPR64sp:$Rn,
                                       simm9_offset_fb32:$offset), 0>;
def : InstAlias<"ldrsw $Rt, [$Rn, $offset]",
                (PAltLoadSignedWordToDWordImmUnscaled GPR64:$Rt, GPR64sp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldrb $Rt, [$Rn, $offset]",
                (PAltLoadByteImmUnscaled GPR32:$Rt, GPR64sp:$Rn,
                                       simm9_offset_fb8:$offset), 0>;
def : InstAlias<"ldrh $Rt, [$Rn, $offset]",
                (PAltLoadHalfImmUnscaled GPR32:$Rt, GPR64sp:$Rn,
                                       simm9:$offset), 0>;
def : InstAlias<"ldrsb $Rt, [$Rn, $offset]",
                (PAltLoadSignedByteToWordImmUnscaled GPR32:$Rt, GPR64sp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldrsh $Rt, [$Rn, $offset]",
                (PAltLoadSignedHalfToWordImmUnscaled GPR32:$Rt, GPR64sp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldrsb $Rt, [$Rn, $offset]",
                (PAltLoadSignedByteToDWordImmUnscaled GPR64:$Rt, GPR64sp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldrsh $Rt, [$Rn, $offset]",
                (PAltLoadSignedHalfToDWordImmUnscaled GPR64:$Rt, GPR64sp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (PAltLoadFPByteImmUnscaled FPR8:$Rt, GPR64sp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (PAltLoadFPHalfImmUnscaled FPR16:$Rt, GPR64sp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (PAltLoadFPSingleImmUnscaled FPR32:$Rt, GPR64sp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (PAltLoadFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (PAltLoadFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Rn,
                                         simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (PAltLoadCapabilityImmUnscaled Cap:$Rt, GPR64sp:$Rn,
                                         simm9_offset_fb128:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (PCapLoadUnscaledImm Cap:$Rt, Capsp:$Rn,
                                          simm9_offset_fb128:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (PAltStoreDWordImmUnscaled GPR64:$Rt, GPR64sp:$Rn,
                                         simm9_offset_fb64:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (PAltStoreWordImmUnscaled GPR32:$Rt, GPR64sp:$Rn,
                                        simm9_offset_fb32:$offset), 0>;
def : InstAlias<"strb $Rt, [$Rn, $offset]",
                (PAltStoreByteImmUnscaled GPR32:$Rt, GPR64sp:$Rn,
                                        simm9_offset_fb8:$offset), 0>;
def : InstAlias<"strh $Rt, [$Rn, $offset]",
                (PAltStoreHalfImmUnscaled GPR32:$Rt, GPR64sp:$Rn,
                                        simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (PAltStoreFPByteImmUnscaled FPR8:$Rt, GPR64sp:$Rn,
                                          simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (PAltStoreFPHalfImmUnscaled FPR16:$Rt, GPR64sp:$Rn,
                                          simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (PAltStoreFPSingleImmUnscaled FPR32:$Rt, GPR64sp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Rn,
                                          simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (PAltStoreCapabilityImmUnscaled Cap:$Rt, GPR64sp:$Rn,
                                          simm9_offset_fb128:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (PCapStoreUnscaledImm Cap:$Rt, Capsp:$Rn,
                                          simm9_offset_fb128:$offset), 0>;

// GPR loads
// Byte
def : InstAlias<"ldurb\t$Rt, [$Cn]",
                (PAltLoadByteImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldrb\t$Rt, [$Cn]",
                (PAltLoadByteImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldursb\t$Rt, [$Cn]",
                (PAltLoadSignedByteToDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldrsb\t$Rt, [$Cn]",
                (PAltLoadSignedByteToDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldursb\t$Rt, [$Cn]",
                (PAltLoadSignedByteToWordImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldrsb\t$Rt, [$Cn]",
                (PAltLoadSignedByteToWordImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;

// Half
def : InstAlias<"ldurh\t$Rt, [$Cn]",
                (PAltLoadHalfImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldrh\t$Rt, [$Cn]",
                (PAltLoadHalfImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldursh\t$Rt, [$Cn]",
                (PAltLoadSignedHalfToDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldrsh\t$Rt, [$Cn]",
                (PAltLoadSignedHalfToDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldursh\t$Rt, [$Cn]",
                (PAltLoadSignedHalfToWordImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldrsh\t$Rt, [$Cn]",
                (PAltLoadSignedHalfToWordImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;

// Word
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (PAltLoadWordImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (PAltLoadWordImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldursw\t$Rt, [$Cn]",
                (PAltLoadSignedWordToDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldrsw\t$Rt, [$Cn]",
                (PAltLoadSignedWordToDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;

// DWord
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (PAltLoadDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (PAltLoadDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;

// FPR loads.
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (PAltLoadFPByteImmUnscaled FPR8:$Rt, GPR64sp:$Cn, 0)>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (PAltLoadFPByteImmUnscaled FPR8:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (PAltLoadFPHalfImmUnscaled FPR16:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (PAltLoadFPHalfImmUnscaled FPR16:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (PAltLoadFPSingleImmUnscaled FPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (PAltLoadFPSingleImmUnscaled FPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (PAltLoadFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (PAltLoadFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (PAltLoadFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (PAltLoadFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Cn, 0), 0>;

// Capability loads.
def : InstAlias<"ldur\t$Ct, [$Cn]",
                (PAltLoadCapabilityImmUnscaled Cap:$Ct, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Ct, [$Cn]",
                (PAltLoadCapImmPre Cap:$Ct, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Ct, [$Rn]",
                (PCapLoadImmPre Cap:$Ct, Capsp:$Rn, 0), 0>;
def : InstAlias<"ldur\t$Ct, [$Rn]",
                (PCapLoadUnscaledImm Cap:$Ct, Capsp:$Rn, 0), 0>;
def : InstAlias<"ldp\t$Ct, $Ct2, [$Rn]",
                (PCapLoadPairImmPre Cap:$Ct, Cap:$Ct2, Capsp:$Rn, 0), 0>;
def : InstAlias<"ldtr\t$Ct, [$Rn]",
                (PCapLoadUnpriv Cap:$Ct, Capsp:$Rn, 0), 0>;

// GPR Stores
// Byte
def : InstAlias<"sturb\t$Rt, [$Cn]",
                (PAltStoreByteImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"strb\t$Rt, [$Cn]",
                (PAltStoreByteImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;

// Half
def : InstAlias<"sturh\t$Rt, [$Cn]",
                (PAltStoreHalfImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"strh\t$Rt, [$Cn]",
                (PAltStoreHalfImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;

// Word
def : InstAlias<"stur\t$Rt, [$Cn]",
                (PAltStoreWordImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (PAltStoreWordImmUnscaled GPR32:$Rt, GPR64sp:$Cn, 0), 0>;

// DWord
def : InstAlias<"stur\t$Rt, [$Cn]",
                (PAltStoreDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (PAltStoreDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, 0), 0>;


// FPR Stores
def : InstAlias<"stur\t$Rt, [$Cn]",
                (PAltStoreFPByteImmUnscaled FPR8:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (PAltStoreFPByteImmUnscaled FPR8:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Rt, [$Cn]",
                (PAltStoreFPHalfImmUnscaled FPR16:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (PAltStoreFPHalfImmUnscaled FPR16:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Rt, [$Cn]",
                (PAltStoreFPSingleImmUnscaled FPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (PAltStoreFPSingleImmUnscaled FPR32:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Rt, [$Cn]",
                (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Rt, [$Cn]",
                (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Cn, 0), 0>;

// Capabilities
def : InstAlias<"str\t$Ct, [$Cn]",
                (PAltStoreCapImmPre Cap:$Ct, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Ct, [$Cn]",
                (PAltStoreCapabilityImmUnscaled Cap:$Ct, GPR64sp:$Cn, 0), 0>;
def : InstAlias<"str\t$Ct, [$Rn]",
                (PCapStoreImmPre Cap:$Ct, Capsp:$Rn, 0), 0>;
def : InstAlias<"stur\t$Ct, [$Rn]",
                (PCapStoreUnscaledImm Cap:$Ct, Capsp:$Rn, 0), 0>;
def : InstAlias<"stp\t$Ct, $Ct2, [$Rn]",
                (PCapStorePairImmPre Cap:$Ct, Cap:$Ct2, Capsp:$Rn, 0), 0>;

// Unpriviledged stores.
def : InstAlias<"sttr\t$Ct, [$Rn]",
                (PCapStoreUnpriv Cap:$Ct, Capsp:$Rn, 0), 0>;
}

let Predicates = [HasMorello, HasC64] in {

// Load/store intrinsics
def : Pat<(int_cheri_cap_load_tags Capsp:$Rn), (PCapLoadTags Capsp:$Rn)>;
def : Pat<(i32 (int_cheri_cap_load_tags Capsp:$Rn)),
          (EXTRACT_SUBREG (PCapLoadTags Capsp:$Rn), sub_32)>;

// Alternate base loads.

// Capabilties
def : Pat<(load (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltLoadCapabilityImmUnscaled GPR64sp:$Cn, simm9:$imm)>;

// i8
def : Pat<(i32 (zextloadi8 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadByteImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(i32 (extloadi8 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadByteImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(i64 (zextloadi8 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (PAltLoadByteImmUnscaled GPR64sp:$Cn,
                                                           simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (extloadi8 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (PAltLoadByteImmUnscaled GPR64sp:$Cn,
                                                           simm9:$imm),
                          sub_32)>;
def : Pat<(i32 (extloadi1 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadByteImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(i32 (zextloadi1 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadByteImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(i64 (extloadi1 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (PAltLoadByteImmUnscaled GPR64sp:$Cn,
                                                           simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (zextloadi1 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (PAltLoadByteImmUnscaled GPR64sp:$Cn,
                                                          simm9:$imm),
                         sub_32)>;
def : Pat<(i32 (sextloadi8 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadSignedByteToWordImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(i64 (sextloadi8 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadSignedByteToDWordImmUnscaled GPR64sp:$Cn, simm9:$imm)>;

// i16
def : Pat<(i32 (zextloadi16 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadHalfImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(i32 (extloadi16 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadHalfImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(i64 (zextloadi16 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (PAltLoadHalfImmUnscaled GPR64sp:$Cn,
                                                           simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (extloadi16 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (PAltLoadHalfImmUnscaled GPR64sp:$Cn,
                                                           simm9:$imm),
                         sub_32)>;
def : Pat<(i32 (sextloadi16 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadSignedHalfToWordImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(i64 (sextloadi16 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadSignedHalfToDWordImmUnscaled GPR64sp:$Cn, simm9:$imm)>;

// i32
def : Pat<(i32 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadWordImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(i64 (zextloadi32 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (PAltLoadWordImmUnscaled GPR64sp:$Cn,
                                                           simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (extloadi32 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (PAltLoadWordImmUnscaled GPR64sp:$Cn,
                                                           simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (sextloadi32 (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadSignedWordToDWordImmUnscaled GPR64sp:$Cn, simm9:$imm)>;

// i64
def : Pat<(i64 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadDWordImmUnscaled GPR64sp:$Cn, simm9:$imm)>;

// f16
def : Pat<(f16 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPHalfImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
// f32
def : Pat<(f32 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPSingleImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
// f64
def : Pat<(f64 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPDoubleImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
// f128
def : Pat<(f128 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPQuadImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
} // Predicates = [HasMorello, HasC64]

let Predicates = [IsLE, HasMorello, HasC64] in {
// Quad patterns
def : Pat<(v8f16 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPQuadImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v4f32 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPQuadImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v2f64 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPQuadImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v16i8 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPQuadImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v8i16 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPQuadImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v4i32 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPQuadImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v2i64 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPQuadImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
// Double patterns
def : Pat<(v4f16 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPDoubleImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v2f32 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPDoubleImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v1f64 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPDoubleImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v8i8 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPDoubleImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v4i16 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPDoubleImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v2i32 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPDoubleImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
def : Pat<(v1i64 (load (am_punscaled GPR64sp:$Cn, simm9:$imm))),
          (PAltLoadFPDoubleImmUnscaled GPR64sp:$Cn, simm9:$imm)>;
}

let Predicates = [HasMorello, HasC64] in {
// Alternate base stores.

// Capabilties
def : Pat<(store Cap:$Ct, (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreCapabilityImmUnscaled Cap:$Ct, GPR64sp:$Cn, simm9:$imm)>;

// i8
let AddedComplexity = 5 in
def : Pat<(truncstorei8 GPR32:$Rt, (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreByteImmUnscaled GPR32:$Rt, GPR64sp:$Cn, simm9:$imm)>;
let AddedComplexity = 10 in
def : Pat<(truncstorei8 GPR64:$Rt, (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreByteImmUnscaled (EXTRACT_SUBREG GPR64:$Rt, sub_32),
                                    GPR64sp:$Cn, simm9:$imm)>;

// i16
let AddedComplexity = 5 in
def : Pat<(truncstorei16 GPR32:$Rt, (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreHalfImmUnscaled GPR32:$Rt, GPR64sp:$Cn, simm9:$imm)>;
let AddedComplexity = 10 in
def : Pat<(truncstorei16 GPR64:$Rt, (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreHalfImmUnscaled (EXTRACT_SUBREG GPR64:$Rt, sub_32),
                                   GPR64sp:$Cn, simm9:$imm)>;

// i32
let AddedComplexity = 5 in
def : Pat<(store GPR32:$Rt, (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreWordImmUnscaled GPR32:$Rt, GPR64sp:$Cn, simm9:$imm)>;
let AddedComplexity = 10 in
def : Pat<(truncstorei32 GPR64:$Rt, (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreWordImmUnscaled (EXTRACT_SUBREG GPR64:$Rt, sub_32),
                                    GPR64sp:$Cn, simm9:$imm)>;

// i64
let AddedComplexity = 5 in
def : Pat<(store GPR64:$Rt, (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreDWordImmUnscaled GPR64:$Rt, GPR64sp:$Cn, simm9:$imm)>;

// f16
let AddedComplexity = 5 in
def : Pat<(store (f16 FPR16:$Rt), (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreFPHalfImmUnscaled FPR16:$Rt, GPR64sp:$Cn, simm9:$imm)>;

// f32
let AddedComplexity = 5 in
def : Pat<(store (f32 FPR32:$Rt), (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreFPSingleImmUnscaled FPR32:$Rt, GPR64sp:$Cn, simm9:$imm)>;

// f64
let AddedComplexity = 5 in
def : Pat<(store (f64 FPR64:$Rt), (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Cn, simm9:$imm)>;

// f128
let AddedComplexity = 5 in
def : Pat<(store (f128 FPR128:$Rt), (am_punscaled GPR64sp:$Cn, simm9:$imm)),
          (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Cn, simm9:$imm)>;
} // Predicates = [HasMorello, HasC64]

let Predicates = [IsLE, HasMorello, HasC64] in {
// Quad patterns
def : Pat<(store (v8f16 FPR128:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v4f32 FPR128:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v2f64 FPR128:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v16i8 FPR128:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v8i16 FPR128:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v4i32 FPR128:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v2i64 FPR128:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPQuadImmUnscaled FPR128:$Rt, GPR64sp:$Rn, simm9:$imm)>;
// Double patterns
def : Pat<(store (v4f16 FPR64:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v2f32 FPR64:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v1f64 FPR64:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v8i8 FPR64:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v4i16 FPR64:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v2i32 FPR64:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store (v1i64 FPR64:$Rt), (am_punscaled GPR64sp:$Rn, simm9:$imm)),
          (PAltStoreFPDoubleImmUnscaled FPR64:$Rt, GPR64sp:$Rn, simm9:$imm)>;
} // Predicates = [IsLE, HasMorello, HasC64]

let Predicates = [HasMorello, HasC64] in {
// Capability loads.
def : Pat<(cload (am_cindexed128 Capsp:$Rn, uimm12s16:$imm)),
          (PCapLoadImmPre Capsp:$Rn, uimm12s16:$imm)>;
def : Pat<(cload (am_pcunscaled128 Capsp:$Rn, simm9:$imm)),
          (PCapLoadUnscaledImm Capsp:$Rn, simm9:$imm)>;
def : Pat<(cload (cro_Windexed128 Capsp:$Rn, GPR32:$Rm, ro_Wextend128:$extend)),
          (PCapLoadRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend128:$extend)>;
def : Pat<(cload (cro_Xindexed128 Capsp:$Rn, GPR64:$Rm, ro_Xextend128:$extend)),
          (PCapLoadRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend128:$extend)>;

// Capability stores.
def : Pat<(cstore Cap:$Ct, (am_cindexed128 Capsp:$Rn, uimm12s16:$imm)),
          (PCapStoreImmPre Cap:$Ct, Capsp:$Rn, uimm12s16:$imm)>;
def : Pat<(cstore Cap:$Ct, (am_pcunscaled128 Capsp:$Rn, simm9:$imm)),
          (PCapStoreUnscaledImm Cap:$Ct, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore Cap:$Ct, (cro_Windexed128 Capsp:$Rn, GPR32:$Rm,
                                          ro_Wextend128:$extend)),
          (PCapStoreRegExtW Cap:$Ct, Capsp:$Rn, GPR32:$Rm,
                           ro_Wextend128:$extend)>;
def : Pat<(cstore Cap:$Ct, (cro_Xindexed128 Capsp:$Rn, GPR64:$Rm,
                                           ro_Xextend128:$extend)),
          (PCapStoreRegExtX Cap:$Ct, Capsp:$Rn, GPR64:$Rm,
                           ro_Xextend128:$extend)>;
}

//===----------------------------------
// Atomic loads
//===----------------------------------

let Predicates = [HasMorello, HasC64] in {
def : Pat<(ldxr_fatptr Capsp:$addr), (PCapLoadEx Capsp:$addr)>;
def : Pat<(ldaxr_fatptr Capsp:$addr), (PCapLoadExAcq Capsp:$addr)>;
def : Pat<(relaxed_load<atomic_cload_cap>
               (am_cindexed128 Capsp:$Cn, uimm12s16:$offset)),
          (PCapLoadImmPre Capsp:$Cn, uimm12s16:$offset)>;
def : Pat<(relaxed_load<atomic_cload_cap> (cro_Windexed128 Capsp:$Rn, GPR32:$Rm,
                                                       ro_Wextend128:$extend)),
          (PCapLoadRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend128:$extend)>;
def : Pat<(relaxed_load<atomic_cload_cap> (cro_Xindexed128 Capsp:$Rn, GPR64:$Rm,
                                                       ro_Xextend128:$extend)),
          (PCapLoadRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend128:$extend)>;
def : Pat<(relaxed_load<atomic_cload_cap>
               (am_pcunscaled128 Capsp:$Rn, simm9:$offset)),
          (PCapLoadUnscaledImm Capsp:$Rn, simm9:$offset)>;
def : Pat<(acquiring_load<atomic_cload_cap>  Capsp:$ptr),
          (PCapLoadAcq Capsp:$ptr)>;
}

//===----------------------------------
// Atomic stores
//===----------------------------------

let Predicates = [HasMorello, HasC64] in {
def : Pat<(stxr_fatptr Cap:$val, Capsp:$addr),
          (PCapStoreEx Cap:$val, Capsp:$addr)>;
def : Pat<(stlxr_fatptr Cap:$val, Capsp:$addr),
          (PCapStoreExRel Cap:$val, Capsp:$addr)>;
def : Pat<(relaxed_store<atomic_cstore_cap>
               (am_cindexed128 Capsp:$Cn, uimm12s16:$offset), Cap:$val),
          (PCapStoreImmPre Cap:$val, Capsp:$Cn, uimm12s16:$offset)>;
def : Pat<(relaxed_store<atomic_cstore_cap> (cro_Windexed128 Capsp:$Rn, GPR32:$Rm,
                                                ro_Wextend128:$extend), Cap:$val),
          (PCapStoreRegExtW Cap:$val, Capsp:$Rn, GPR32:$Rm, ro_Wextend128:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_cap> (cro_Xindexed128 Capsp:$Rn, GPR64:$Rm,
                                                ro_Xextend128:$extend), Cap:$val),
          (PCapStoreRegExtX Cap:$val, Capsp:$Rn, GPR64:$Rm, ro_Xextend128:$extend)>;
def : Pat<(relaxed_store<atomic_cstore_cap>
               (am_pcunscaled128 Capsp:$Rn, simm9:$offset), Cap:$val),
          (PCapStoreUnscaledImm Cap:$val, Capsp:$Rn, simm9:$offset)>;
def : Pat<(releasing_store<atomic_cstore_cap> Capsp:$ptr, Cap:$val),
          (PCapStoreRel Cap:$val, Capsp:$ptr)>;

defm : CapCASPatterns<"PCapCompareSwap", "atomic_cmp_cswap_cap", Capsp>;
defm : CapSWPPatterns<"PCapSwap", "atomic_cswap_cap", Capsp>;
}
