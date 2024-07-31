//=- AArch64InstrMorello.td - Describes Morello Instructions -*- tablegen -*--=//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=--------------------------------------------------------------------------=//
//
// AArch64 Morello Instruction definitions.
//
//=--------------------------------------------------------------------------=//

let Predicates = [HasMorello, HasNotC64], DecoderNamespace = "AArch64Morello" in {
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltCapLoadAcq : AltCapLoadAcqFmt<(outs Cap:$Ct), (ins Capsp:$Rn), "ldar", "\t$Ct, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltCapStoreRel : AltCapStoreRelFmt<(outs), (ins Cap:$Ct, Capsp:$Rn), "stlr", "\t$Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadByteAcq : AltLoadByteAcqFmt<(outs GPR32:$Rt), (ins Capsp:$Rn), "ldarb", "\t$Rt, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadByteImmPre : AltLoadByteImmPreFmt<(outs GPR32:$Rt), (ins Capsp:$Rn, uimm9:$imm9), "ldrb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadByteImmUnscaled : AltLoadByteImmUnscaledFmt<(outs GPR32:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldurb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadCapImmPre : AltLoadCapImmPreFmt<(outs Cap:$Ct), (ins Capsp:$Rn, uimm9s16:$imm9), "ldr", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadCapabilityImmUnscaled : AltLoadCapabilityImmUnscaledFmt<(outs Cap:$Ct), (ins Capsp:$Rn, simm9:$imm9), "ldur", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadDWordImmPre : AltLoadDWordImmPreFmt<(outs GPR64:$Rt), (ins Capsp:$Rn, uimm9s8:$imm9), "ldr", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadDWordImmUnscaled : AltLoadDWordImmUnscaledFmt<(outs GPR64:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadFPByteImmUnscaled : AltLoadFPByteImmUnscaledFmt<(outs FPR8:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadFPDoubleImmUnscaled : AltLoadFPDoubleImmUnscaledFmt<(outs FPR64:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadFPHalfImmUnscaled : AltLoadFPHalfImmUnscaledFmt<(outs FPR16:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadFPQuadImmUnscaled : AltLoadFPQuadImmUnscaledFmt<(outs FPR128:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadFPSingleImmUnscaled : AltLoadFPSingleImmUnscaledFmt<(outs FPR32:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadHalfImmUnscaled : AltLoadHalfImmUnscaledFmt<(outs GPR32:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldurh", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadSignedByteToDWordImmUnscaled : AltLoadSignedByteToDWordImmUnscaledFmt<(outs GPR64:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldursb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadSignedByteToWordImmUnscaled : AltLoadSignedByteToWordImmUnscaledFmt<(outs GPR32:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldursb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadSignedHalfToDWordImmUnscaled : AltLoadSignedHalfToDWordImmUnscaledFmt<(outs GPR64:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldursh", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadSignedHalfToWordImmUnscaled : AltLoadSignedHalfToWordImmUnscaledFmt<(outs GPR32:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldursh", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadSignedWordToDWordImmUnscaled : AltLoadSignedWordToDWordImmUnscaledFmt<(outs GPR64:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldursw", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadWordAcq : AltLoadWordAcqFmt<(outs GPR32:$Rt), (ins Capsp:$Rn), "ldar", "\t$Rt, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadWordImmPre : AltLoadWordImmPreFmt<(outs GPR32:$Rt), (ins Capsp:$Rn, uimm9s4:$imm9), "ldr", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def AltLoadWordImmUnscaled : AltLoadWordImmUnscaledFmt<(outs GPR32:$Rt), (ins Capsp:$Rn, simm9:$imm9), "ldur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreByteImmPre : AltStoreByteImmPreFmt<(outs), (ins GPR32:$Rt, Capsp:$Rn, uimm9:$imm9), "strb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreByteImmUnscaled : AltStoreByteImmUnscaledFmt<(outs), (ins GPR32:$Rt, Capsp:$Rn, simm9:$imm9), "sturb", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreByteRel : AltStoreByteRelFmt<(outs), (ins GPR32:$Rt, Capsp:$Rn), "stlrb", "\t$Rt, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreCapImmPre : AltStoreCapImmPreFmt<(outs), (ins Cap:$Ct, Capsp:$Rn, uimm9s16:$imm9), "str", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreCapabilityImmUnscaled : AltStoreCapabilityImmUnscaledFmt<(outs), (ins Cap:$Ct, Capsp:$Rn, simm9:$imm9), "stur", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreDWordImmPre : AltStoreDWordImmPreFmt<(outs), (ins GPR64:$Rt, Capsp:$Rn, uimm9s8:$imm9), "str", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreDWordImmUnscaled : AltStoreDWordImmUnscaledFmt<(outs), (ins GPR64:$Rt, Capsp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreFPByteImmUnscaled : AltStoreFPByteImmUnscaledFmt<(outs), (ins FPR8:$Rt, Capsp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreFPDoubleImmUnscaled : AltStoreFPDoubleImmUnscaledFmt<(outs), (ins FPR64:$Rt, Capsp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreFPHalfImmUnscaled : AltStoreFPHalfImmUnscaledFmt<(outs), (ins FPR16:$Rt, Capsp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreFPQuadImmUnscaled : AltStoreFPQuadImmUnscaledFmt<(outs), (ins FPR128:$Rt, Capsp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreFPSingleImmUnscaled : AltStoreFPSingleImmUnscaledFmt<(outs), (ins FPR32:$Rt, Capsp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreHalfImmUnscaled : AltStoreHalfImmUnscaledFmt<(outs), (ins GPR32:$Rt, Capsp:$Rn, simm9:$imm9), "sturh", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreWordImmPre : AltStoreWordImmPreFmt<(outs), (ins GPR32:$Rt, Capsp:$Rn, uimm9s4:$imm9), "str", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreWordImmUnscaled : AltStoreWordImmUnscaledFmt<(outs), (ins GPR32:$Rt, Capsp:$Rn, simm9:$imm9), "stur", "\t$Rt, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def AltStoreWordRel : AltStoreWordRelFmt<(outs), (ins GPR32:$Rt, Capsp:$Rn), "stlr", "\t$Rt, [$Rn]", []>;
}
let Predicates = [HasMorello], DecoderNamespace = "AArch64Morello" in {
def CapAlignDown : CapAlignDownFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, uimm6:$imm6), "alignd", "\t$Cd, $Cn, $imm6", []>;
def CapAlignUp : CapAlignUpFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, uimm6:$imm6), "alignu", "\t$Cd, $Cn, $imm6", []>;
def CapBicImm : CapBicImmFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, uimm8:$imm8), "bicflgs", "\t$Cd, $Cn, $imm8", []>;
def CapBicReg : CapBicRegFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "bicflgs", "\t$Cd, $Cn, $Rm", []>;
let isBranch = 1, isBarrier = 1, isIndirectBranch = 1, isTerminator = 1 in
  def CapBranch : CapBranchFmt<(outs), (ins Cap:$Cn), "br", "\t$Cn", []>;
let isBranch = 1, isBarrier = 1, isIndirectBranch = 1, isTerminator = 1 in
  def CapBranchDirect : CapBranchDirectFmt<(outs), (ins Cap:$Cn), "brs", "\t$Cn", []>;
def CapBranchExchange4 : CapBranchExchange4Fmt<(outs), (ins), " bx #4", "", []>;
let isCall = 1, Defs = [LR], Uses = [SP] in {
  def CapBranchLink : CapBranchLinkFmt<(outs), (ins Cap:$Cn), "blr", "\t$Cn", []>;
  def CapBranchLinkDirect : CapBranchLinkDirectFmt<(outs), (ins Cap:$Cn), "blrs", "\t$Cn", []>;
  def CapBranchLinkRestricted : CapBranchLinkRestrictedFmt<(outs), (ins Cap:$Cn), "blrr", "\t$Cn", []>;
}
let isCall = 1, Defs = [LR], Uses = [SP] in
  def FakeCapBranchLink : Pseudo<(outs), (ins Cap:$Cn), []>;
let isCall = 1, Defs = [LR, CFP], Uses = [SP] in
  def CapBranchLinkSealed : CapBranchLinkSealedFmt<(outs), (ins Cap:$Cn, Cap:$Cm), "blrs", "\tc29, $Cn, $Cm", []>;
let isBranch = 1, isBarrier = 1, isIndirectBranch = 1, isTerminator = 1 in
  def CapBranchRestricted : CapBranchRestrictedFmt<(outs), (ins Cap:$Cn), "brr", "\t$Cn", []>;
let isBranch = 1, Defs = [CFP], isBarrier = 1, isIndirectBranch = 1, isTerminator = 1 in
  def CapBranchSealed : CapBranchSealedFmt<(outs), (ins Cap:$Cn, Cap:$Cm), "brs", "\tc29, $Cn, $Cm", []>;
def CapBuildCap : CapBuildCapFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, Capsp:$Cm), "build", "\t$Cd, $Cn, $Cm", []>;
let Defs = [NZCV] in {
def CapCheckEquals : CapCheckEqualsFmt<(outs), (ins Capsp:$Cn, Cap:$Cm), "chkeq", "\t$Cn, $Cm", []>;
def CapCheckSealed : CapCheckSealedFmt<(outs), (ins Capsp:$Cn), "chksld", "\t$Cn", []>;
def CapCheckSubset : CapCheckSubsetFmt<(outs), (ins Capsp:$Cn, Capsp:$Cm), "chkss", "\t$Cn, $Cm", []>;
def CapCheckSubsetUnseal : CapCheckSubsetUnsealFmt<(outs Cap:$Cd), (ins Capsp:$Cn, Capsp:$Cm), "chkssu", "\t$Cd, $Cn, $Cm", []>;
def CapCheckTagged : CapCheckTaggedFmt<(outs), (ins Capsp:$Cn), "chktgd", "\t$Cn", []>;
}
def CapClearPerm : CapClearPermFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "clrperm", "\t$Cd, $Cn, $Rm", []>;
def CapClearPermImm : CapClearPermImmFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, clrperm:$perm), "clrperm", "\t$Cd, $Cn, $perm", []>;
def CapClearTag : CapClearTagFmt<(outs Capsp:$Cd), (ins Capsp:$Cn), "clrtag", "\t$Cd, $Cn", []>;
}
let Predicates = [HasMorello, HasNotC64], DecoderNamespace = "AArch64Morello" in {
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "$out = $Cs" in
  def CapCompareSwap : CapCompareSwapFmt<(outs Cap:$out), (ins Cap:$Cs, Cap:$Ct, GPR64sp:$Rn), "cas", "\t$Cs, $Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "$out = $Cs" in
  def CapCompareSwapAcq : CapCompareSwapAcqFmt<(outs Cap:$out), (ins Cap:$Cs, Cap:$Ct, GPR64sp:$Rn), "casa", "\t$Cs, $Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "$out = $Cs" in
  def CapCompareSwapAcqRel : CapCompareSwapAcqRelFmt<(outs Cap:$out), (ins Cap:$Cs, Cap:$Ct, GPR64sp:$Rn), "casal", "\t$Cs, $Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "$out = $Cs" in
  def CapCompareSwapRel : CapCompareSwapRelFmt<(outs Cap:$out), (ins Cap:$Cs, Cap:$Ct, GPR64sp:$Rn), "casl", "\t$Cs, $Ct, [$Rn]", []>;
}
let Predicates = [HasMorello], DecoderNamespace = "AArch64Morello" in {
def CapConvert64ToCapDDC : CapConvert64ToCapDDCFmt<(outs Cap:$Cd), (ins GPR64:$Rn), "cvtd", "\t$Cd, $Rn", []>;
def CapConvert64ToCapDDCNullCheck : CapConvert64ToCapDDCNullCheckFmt<(outs Cap:$Cd), (ins GPR64:$Rn), "cvtdz", "\t$Cd, $Rn", []>;
def CapConvert64ToCapPCC : CapConvert64ToCapPCCFmt<(outs Cap:$Cd), (ins GPR64:$Rn), "cvtp", "\t$Cd, $Rn", []>;
def CapConvert64ToCapPCCNullCheck : CapConvert64ToCapPCCNullCheckFmt<(outs Cap:$Cd), (ins GPR64:$Rn), "cvtpz", "\t$Cd, $Rn", []>;
def CapConvert64toCap : CapConvert64toCapFmt<(outs Cap:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "cvt", "\t$Cd, $Cn, $Rm", []>;
def CapConvert64toCapNullCheck : CapConvert64toCapNullCheckFmt<(outs Cap:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "cvtz", "\t$Cd, $Cn, $Rm", []>;
let Defs = [NZCV] in {
def CapConvertCapTo64 : CapConvertCapTo64Fmt<(outs GPR64:$Rd), (ins Capsp:$Cn, Cap:$Cm), "cvt", "\t$Rd, $Cn, $Cm", []>;
def CapConvertCapTo64DDC : CapConvertCapTo64DDCFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "cvtd", "\t$Rd, $Cn", []>;
def CapConvertCapTo64PCC : CapConvertCapTo64PCCFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "cvtp", "\t$Rd, $Cn", []>;
} // defs = [NZCV]
let hasSideEffects = 0, isAsCheapAsAMove = 1 in
  def CapCopy : CapCopyFmt<(outs Capsp:$Cd), (ins Capsp:$Cn), "cpy", "\t$Cd, $Cn", []>;
def CapCopyFromHigh : CapCopyFromHighFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "cfhi", "\t$Rd, $Cn", []>;
def CapCopyToHigh : CapCopyToHighFmt<(outs Capsp:$Cd), (ins Cap:$Cn, GPR64:$Rm), "cthi", "\t$Cd, $Cn, $Rm", []>;
def CapEorImm : CapEorImmFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, uimm8:$imm8), "eorflgs", "\t$Cd, $Cn, $imm8", []>;
def CapEorReg : CapEorRegFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "eorflgs", "\t$Cd, $Cn, $Rm", []>;
def CapGetBase : CapGetBaseFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gcbase", "\t$Rd, $Cn", []>;
def CapGetFlags : CapGetFlagsFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gcflgs", "\t$Rd, $Cn", []>;
def CapGetLen : CapGetLenFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gclen", "\t$Rd, $Cn", []>;
def CapGetLimit : CapGetLimitFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gclim", "\t$Rd, $Cn", []>;
def CapGetOffset : CapGetOffsetFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gcoff", "\t$Rd, $Cn", []>;
def CapGetPerm : CapGetPermFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gcperm", "\t$Rd, $Cn", []>;
def CapGetSeal : CapGetSealFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gcseal", "\t$Rd, $Cn", []>;
let mayLoad = 0, hasSideEffects = 1, mayStore = 0 in
  def CapGetSys : CapGetSysFmt<(outs Cap:$Ct), (ins cap_sysreg_op:$csreg), "mrs", "\t$Ct, $csreg", []>;
def CapGetTag : CapGetTagFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gctag", "\t$Rd, $Cn", []>;
def CapGetType : CapGetTypeFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gctype", "\t$Rd, $Cn", []>;
let hasSideEffects = 0, isReMaterializable = 1, isAsCheapAsAMove = 1 in
  def CapGetValue : CapGetValueFmt<(outs GPR64:$Rd), (ins Capsp:$Cn), "gcvalue", "\t$Rd, $Cn", []>;
}
let Predicates = [HasMorello, HasNotC64], DecoderNamespace = "AArch64Morello" in {
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def CapLoadAcq : CapLoadAcqFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn), "ldar", "\t$Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def CapLoadAcqPR : CapLoadAcqPRFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn), "ldapr", "\t$Ct, [$Rn]", []>;
}
let Predicates = [HasMorello], DecoderNamespace = "AArch64Morello" in {
let isBranch = 1, isBarrier = 1, isIndirectBranch = 1, isTerminator = 1 in
  def CapLoadBranchIndirect : CapLoadBranchIndirectFmt<(outs), (ins Capsp:$Cn, simm7s16:$imm7), "br", "\t[$Cn, $imm7]", []>;
let isCall = 1 in
  def CapLoadBranchLinkIndirect : CapLoadBranchLinkIndirectFmt<(outs), (ins Capsp:$Cn, simm7s16:$imm7), "blr", "\t[$Cn, $imm7]", []>;
}
let Predicates = [HasMorello, HasNotC64], DecoderNamespace = "AArch64Morello" in {
let mayLoad = 1, hasSideEffects = 1, mayStore = 1 in
  def CapLoadEx : CapLoadExFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn), "ldxr", "\t$Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1 in
  def CapLoadExAcq : CapLoadExAcqFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn), "ldaxr", "\t$Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1 in
  def CapLoadExPair : CapLoadExPairFmt<(outs Cap:$Ct, Cap:$Ct2), (ins GPR64sp:$Rn), "ldxp", "\t$Ct, $Ct2, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1 in
  def CapLoadExPairAcq : CapLoadExPairAcqFmt<(outs Cap:$Ct, Cap:$Ct2), (ins GPR64sp:$Rn), "ldaxp", "\t$Ct, $Ct2, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0, Constraints = "@earlyclobber $out, $out = $Rn" in
  def CapLoadImmPost : CapLoadImmPostFmt<(outs GPR64sp:$out, Cap:$Ct), (ins GPR64sp:$Rn, simm9s16:$imm9), "ldr", "\t$Ct, [$Rn], $imm9", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def CapLoadImmPre : CapLoadImmPreFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn, uimm12s16:$imm12), "ldr", "\t$Ct, [$Rn, $imm12]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0, Constraints = "@earlyclobber $out, $out = $Rn" in
  def CapLoadImmPreW : CapLoadImmPreWFmt<(outs GPR64sp:$out, Cap:$Ct), (ins GPR64sp:$Rn, simm9s16:$imm9), "ldr", "\t$Ct, [$Rn, $imm9]!", []>;
}
let Predicates = [HasMorello], DecoderNamespace = "AArch64Morello" in {
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def CapLoadLiteral : CapLoadLiteralFmt<(outs Cap:$Ct), (ins am_ldrlit_aligned16:$imm17), "ldr", "\t$Ct, $imm17", []>;
let isBranch = 1, isBarrier = 1, isIndirectBranch = 1, isTerminator = 1 in
def CapLoadPairBranch : CapLoadPairBranchFmt<(outs Cap:$Ct), (ins Capsp:$Cn), "ldpbr", "\t$Ct, [$Cn]", []>;
let isCall = 1, Defs = [LR], Uses = [SP] in
def CapLoadPairBranchLink : CapLoadPairBranchLinkFmt<(outs Cap:$Ct), (ins Capsp:$Cn), "ldpblr", "\t$Ct, [$Cn]", []>;
}
let Predicates = [HasMorello, HasNotC64], DecoderNamespace = "AArch64Morello" in {
let mayLoad = 1, hasSideEffects = 0, mayStore = 0, Constraints = "@earlyclobber $out, $out = $Rn" in
  def CapLoadPairImmPost : CapLoadPairImmPostFmt<(outs GPR64sp:$out, Cap:$Ct, Cap:$Ct2), (ins GPR64sp:$Rn, simm7s16:$imm7), "ldp", "\t$Ct, $Ct2, [$Rn], $imm7", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def CapLoadPairImmPre : CapLoadPairImmPreFmt<(outs Cap:$Ct, Cap:$Ct2), (ins GPR64sp:$Rn, simm7s16:$imm7), "ldp", "\t$Ct, $Ct2, [$Rn, $imm7]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0, Constraints = "@earlyclobber $out, $out = $Rn" in
  def CapLoadPairImmPreW : CapLoadPairImmPreWFmt<(outs GPR64sp:$out, Cap:$Ct, Cap:$Ct2), (ins GPR64sp:$Rn, simm7s16:$imm7), "ldp", "\t$Ct, $Ct2, [$Rn, $imm7]!", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def CapLoadPairNonTemporal : CapLoadPairNonTemporalFmt<(outs Cap:$Ct, Cap:$Ct2), (ins GPR64sp:$Rn, simm7s16:$imm7), "ldnp", "\t$Ct, $Ct2, [$Rn, $imm7]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def CapLoadTags : CapLoadTagsFmt<(outs GPR64:$Rt), (ins GPR64sp:$Rn), "ldct", "\t$Rt, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def CapLoadUnpriv : CapLoadUnprivFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn, simm9s16:$imm9), "ldtr", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in
  def CapLoadUnscaledImm : CapLoadUnscaledImmFmt<(outs Cap:$Ct), (ins GPR64sp:$Rn, simm9:$imm9), "ldur", "\t$Ct, [$Rn, $imm9]", []>;
}
let Predicates = [HasMorello], DecoderNamespace = "AArch64Morello" in {
def CapOrImm : CapOrImmFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, uimm8:$imm8), "orrflgs", "\t$Cd, $Cn, $imm8", []>;
def CapOrrReg : CapOrrRegFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "orrflgs", "\t$Cd, $Cn, $Rm", []>;
let isBarrier = 1, isReturn = 1, isTerminator = 1 in
  def CapReturn : CapReturnFmt<(outs), (ins Cap:$Cn), "ret", "\t$Cn", []>;
let isBarrier = 1, isReturn = 1, isTerminator = 1, Size = 8 in
  def FakeCapReturn : Pseudo<(outs), (ins Cap:$Cn), []>;
let isBarrier = 1, isReturn = 1, isTerminator = 1 in
  def CapReturnDirect : CapReturnDirectFmt<(outs), (ins Cap:$Cn), "rets", "\t$Cn", []>;
let isBarrier = 1, isReturn = 1, isTerminator = 1 in
  def CapReturnRestricted : CapReturnRestrictedFmt<(outs), (ins Cap:$Cn), "retr", "\t$Cn", []>;
let isBarrier = 1, Defs = [CFP], isReturn = 1, isTerminator = 1 in
  def CapReturnSealed : CapReturnSealedFmt<(outs), (ins Cap:$Cn, Cap:$Cm), "rets", "\tc29, $Cn, $Cm", []>;
def CapRoundRepresentableLength : CapRoundRepresentableLengthFmt<(outs GPR64:$Rd), (ins GPR64:$Rn), "rrlen", "\t$Rd, $Rn", []>;
def CapRoundRepresentableMask : CapRoundRepresentableMaskFmt<(outs GPR64:$Rd), (ins GPR64:$Rn), "rrmask", "\t$Rd, $Rn", []>;
def CapSeal : CapSealFmt<(outs Cap:$Cd), (ins Cap:$Cn, Cap:$Cm), "seal", "\t$Cd, $Cn, $Cm", []>;
let Defs = [NZCV] in
def CapSealCond : CapSealCondFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, Capsp:$Cm), "cseal", "\t$Cd, $Cn, $Cm", []>;
def CapSealImm : CapSealImmFmt<(outs Cap:$Cd), (ins Cap:$Cn, sealform:$form), "seal", "\t$Cd, $Cn, $form", []>;
def CapSetBounds : CapSetBoundsFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "scbnds", "\t$Cd, $Cn, $Rm", []>;
def CapSetBoundsExact : CapSetBoundsExactFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "scbndse", "\t$Cd, $Cn, $Rm", []>;
def CapSetFlags : CapSetFlagsFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "scflgs", "\t$Cd, $Cn, $Rm", []>;
def CapSetOffset : CapSetOffsetFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "scoff", "\t$Cd, $Cn, $Rm", []>;
let mayLoad = 0, hasSideEffects = 1, mayStore = 0 in
  def CapSetSys : CapSetSysFmt<(outs), (ins cap_sysreg_op:$csreg, Cap:$Ct), "msr", "\t$csreg, $Ct", []>;
def CapSetTagPriv : CapSetTagPrivFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "sctag", "\t$Cd, $Cn, $Rm", []>;
def CapSetValue : CapSetValueFmt<(outs Capsp:$Cd), (ins Capsp:$Cn, GPR64:$Rm), "scvalue", "\t$Cd, $Cn, $Rm", []>;
def CapSetValueFromType : CapSetValueFromTypeFmt<(outs Cap:$Cd), (ins Cap:$Cn, Cap:$Cm), "cpytype", "\t$Cd, $Cn, $Cm", []>;
def CapSetValueFromValue : CapSetValueFromValueFmt<(outs Cap:$Cd), (ins Cap:$Cn, Cap:$Cm), "cpyvalue", "\t$Cd, $Cn, $Cm", []>;
}
let Predicates = [HasMorello, HasNotC64], DecoderNamespace = "AArch64Morello" in {
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "@earlyclobber $Rs" in
  def CapStoreEx : CapStoreExFmt<(outs GPR32:$Rs), (ins Cap:$Ct, GPR64sp:$Rn), "stxr", "\t$Rs, $Ct, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "@earlyclobber $Rs" in
  def CapStoreExPair : CapStoreExPairFmt<(outs GPR32:$Rs), (ins Cap:$Ct, Cap:$Ct2, GPR64sp:$Rn), "stxp", "\t$Rs, $Ct, $Ct2, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "@earlyclobber $Rs" in
  def CapStoreExPairRel : CapStoreExPairRelFmt<(outs GPR32:$Rs), (ins Cap:$Ct, Cap:$Ct2, GPR64sp:$Rn), "stlxp", "\t$Rs, $Ct, $Ct2, [$Rn]", []>;
let mayLoad = 1, hasSideEffects = 1, mayStore = 1, Constraints = "@earlyclobber $Rs" in
  def CapStoreExRel : CapStoreExRelFmt<(outs GPR32:$Rs), (ins Cap:$Ct, GPR64sp:$Rn), "stlxr", "\t$Rs, $Ct, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1, Constraints = "@earlyclobber $out, $out = $Rn" in
  def CapStoreImmPost : CapStoreImmPostFmt<(outs GPR64sp:$out), (ins Cap:$Ct, GPR64sp:$Rn, simm9s16:$imm9), "str", "\t$Ct, [$Rn], $imm9", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def CapStoreImmPre : CapStoreImmPreFmt<(outs), (ins Cap:$Ct, GPR64sp:$Rn, uimm12s16:$imm12), "str", "\t$Ct, [$Rn, $imm12]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1, Constraints = "@earlyclobber $out, $out = $Rn" in
  def CapStoreImmPreW : CapStoreImmPreWFmt<(outs GPR64sp:$out), (ins Cap:$Ct, GPR64sp:$Rn, simm9s16:$imm9), "str", "\t$Ct, [$Rn, $imm9]!", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1, Constraints = "@earlyclobber $out, $out = $Rn" in
  def CapStorePairImmPost : CapStorePairImmPostFmt<(outs GPR64sp:$out), (ins Cap:$Ct, Cap:$Ct2, GPR64sp:$Rn, simm7s16:$imm7), "stp", "\t$Ct, $Ct2, [$Rn], $imm7", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def CapStorePairImmPre : CapStorePairImmPreFmt<(outs), (ins Cap:$Ct, Cap:$Ct2, GPR64sp:$Rn, simm7s16:$imm7), "stp", "\t$Ct, $Ct2, [$Rn, $imm7]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1, Constraints = "@earlyclobber $out, $out = $Rn" in
  def CapStorePairImmPreW : CapStorePairImmPreWFmt<(outs GPR64sp:$out), (ins Cap:$Ct, Cap:$Ct2, GPR64sp:$Rn, simm7s16:$imm7), "stp", "\t$Ct, $Ct2, [$Rn, $imm7]!", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def CapStorePairNonTemporal : CapStorePairNonTemporalFmt<(outs), (ins Cap:$Ct, Cap:$Ct2, GPR64sp:$Rn, simm7s16:$imm7), "stnp", "\t$Ct, $Ct2, [$Rn, $imm7]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def CapStoreRel : CapStoreRelFmt<(outs), (ins Cap:$Ct, GPR64sp:$Rn), "stlr", "\t$Ct, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def CapStoreTagsPriv : CapStoreTagsPrivFmt<(outs), (ins GPR64:$Rt, GPR64sp:$Rn), "stct", "\t$Rt, [$Rn]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def CapStoreUnpriv : CapStoreUnprivFmt<(outs), (ins Cap:$Ct, GPR64sp:$Rn, simm9s16:$imm9), "sttr", "\t$Ct, [$Rn, $imm9]", []>;
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in
  def CapStoreUnscaledImm : CapStoreUnscaledImmFmt<(outs), (ins Cap:$Ct, GPR64sp:$Rn, simm9:$imm9), "stur", "\t$Ct, [$Rn, $imm9]", []>;
}
let Predicates = [HasMorello], DecoderNamespace = "AArch64Morello",
    isCompare = 1, Defs = [NZCV] in {
def CapSubSetFlags : CapSubSetFlagsFmt<(outs GPR64:$Rd), (ins Cap:$Cn, Cap:$Cm), "subs", "\t$Rd, $Cn, $Cm", []>;
}
let Predicates = [HasMorello, HasNotC64], DecoderNamespace = "AArch64Morello" in {
def CapSwap : CapSwapFmt<(outs Cap:$Ct), (ins Cap:$Cs, GPR64sp:$Rn), "swp", "\t$Cs, $Ct, [$Rn]", []>;
def CapSwapAcq : CapSwapAcqFmt<(outs Cap:$Ct), (ins Cap:$Cs, GPR64sp:$Rn), "swpa", "\t$Cs, $Ct, [$Rn]", []>;
def CapSwapAcqRel : CapSwapAcqRelFmt<(outs Cap:$Ct), (ins Cap:$Cs, GPR64sp:$Rn), "swpal", "\t$Cs, $Ct, [$Rn]", []>;
def CapSwapRel : CapSwapRelFmt<(outs Cap:$Ct), (ins Cap:$Cs, GPR64sp:$Rn), "swpl", "\t$Cs, $Ct, [$Rn]", []>;
}
let Predicates = [HasMorello], DecoderNamespace = "AArch64Morello" in {
def CapUnseal : CapUnsealFmt<(outs Cap:$Cd), (ins Cap:$Cn, Cap:$Cm), "unseal", "\t$Cd, $Cn, $Cm", []>;
}

let Predicates = [HasMorello] in {
  def : InstAlias<"mov $Cd, $Cn", (CapCopy Capsp:$Cd, Capsp:$Cn)>;
}

// ======================= Manually added instructions =======================

let Predicates = [HasMorello] in {
  def : InstAlias<"retr", (CapReturnRestricted CLR), 0>;
  def : InstAlias<"rets", (CapReturnDirect CLR), 0>;
}

let Predicates = [HasMorello], DecoderNamespace = "AArch64Morello" in {
let isSelect = 1, Uses = [NZCV] in
  def CapCondSel : CapCondSelFmt<(outs Cap:$Cd), (ins Cap:$Cn, Cap:$Cm, ccode:$cond),
                                 "csel", "\t$Cd, $Cn, $Cm, $cond",
                                 [(set Cap:$Cd, (AArch64csel Cap:$Cn, Cap:$Cm, (i32 imm:$cond), NZCV))]>;

  // Add/Sub Immediate
  let hasSideEffects = 0, isReMaterializable = 1, isAsCheapAsAMove = 1 in {
    def CapAddImm : CapAddImmFmt<(outs Capsp:$Cd),
                                 (ins Capsp:$Cn, addsub_shifted_imm64:$imm),
                                 "add", "\t$Cd, $Cn, $imm", []>;
    def CapSubImm : CapSubImmFmt<(outs Capsp:$Cd),
                                 (ins Capsp:$Cn, neg_addsub_shifted_imm64:$imm),
                                 "sub", "\t$Cd, $Cn, $imm", []>;
  }

  // Add/Sub register extended
  def CapAddRegX : CapAddRegBaseXFmt<(outs Capsp:$Cd),
                                     (ins Capsp:$Cn, GPR64:$Rm,
                                          arith_extendlsl64:$ext),
                                     "add", "\t$Cd, $Cn, $Rm$ext", []>;
  def CapAddRegW : CapAddRegBaseWFmt<(outs Capsp:$R1),
                                     (ins Capsp:$R2,
                                          arith_extended_reg32to64_i64:$R3),
                                     "add", "\t$R1, $R2, $R3", []>;

  // Capability set bounds (immediate)
  def CapSetBoundsImm : CapSetBoundsImmFmt<(outs Capsp:$Cd),
                                           (ins Capsp:$Cn, scbnds_imm:$imm),
                                           "scbnds", "\t$Cd, $Cn, $imm", []>;
}

let Predicates = [HasMorello, HasNotC64], DecoderNamespace = "AArch64Morello" in {
let mayLoad = 1, hasSideEffects = 0, mayStore = 0 in {
  def CapLoadRegExtW : CapLoadRegExtWFmt<GPR64sp, "ldr", []>;
  def CapLoadRegExtX : CapLoadRegExtXFmt<GPR64sp, "ldr", []>;

  def AltLoadCapRegExtW : AltLoadCapRegExtWFmt<Capsp, "ldr", []>;
  def AltLoadCapRegExtX : AltLoadCapRegExtXFmt<Capsp, "ldr", []>;
  def AltLoadSWordRegExtW : AltLoadSWordRegExtWFmt<Capsp, "ldr", []>;
  def AltLoadSWordRegExtX : AltLoadSWordRegExtXFmt<Capsp, "ldr", []>;
  def AltLoadDWordRegExtW : AltLoadDWordRegExtWFmt<Capsp, "ldr", []>;
  def AltLoadDWordRegExtX : AltLoadDWordRegExtXFmt<Capsp, "ldr", []>;
  def AltLoadByteRegExtW : AltLoadByteRegExtWFmt<Capsp, "ldrb", []>;
  def AltLoadByteRegExtX : AltLoadByteRegExtXFmt<Capsp, "ldrb", []>;
  def AltLoadHalfwordRegExtW : AltLoadHalfwordRegExtWFmt<Capsp, "ldrh", []>;
  def AltLoadHalfwordRegExtX : AltLoadHalfwordRegExtXFmt<Capsp, "ldrh", []>;
  def AltLoadSignedByteDRegExtW : AltLoadSignedByteDRegExtWFmt<Capsp, "ldrsb", []>;
  def AltLoadSignedByteDRegExtX : AltLoadSignedByteDRegExtXFmt<Capsp, "ldrsb", []>;
  def AltLoadSignedByteSRegExtW : AltLoadSignedByteSRegExtWFmt<Capsp, "ldrsb", []>;
  def AltLoadSignedByteSRegExtX : AltLoadSignedByteSRegExtXFmt<Capsp, "ldrsb", []>;
  def AltLoadSignedHalfwordDRegExtW : AltLoadSignedHalfwordDRegExtWFmt<Capsp, "ldrsh", []>;
  def AltLoadSignedHalfwordDRegExtX : AltLoadSignedHalfwordDRegExtXFmt<Capsp, "ldrsh", []>;
  def AltLoadSignedHalfwordSRegExtW : AltLoadSignedHalfwordSRegExtWFmt<Capsp, "ldrsh", []>;
  def AltLoadSignedHalfwordSRegExtX : AltLoadSignedHalfwordSRegExtXFmt<Capsp, "ldrsh", []>;
  def AltLoadDFPRegExtW : AltLoadDFPRegExtWFmt<Capsp, "ldr", []>;
  def AltLoadDFPRegExtX : AltLoadDFPRegExtXFmt<Capsp, "ldr", []>;
  def AltLoadSFPRegExtW : AltLoadSFPRegExtWFmt<Capsp, "ldr", []>;
  def AltLoadSFPRegExtX : AltLoadSFPRegExtXFmt<Capsp, "ldr", []>;
}
let mayLoad = 0, hasSideEffects = 0, mayStore = 1 in {
  def CapStoreRegExtW : CapStoreRegExtWFmt<GPR64sp, "str", []>;
  def CapStoreRegExtX : CapStoreRegExtXFmt<GPR64sp, "str", []>;

  def AltStoreCapRegExtW : AltStoreCapRegExtWFmt<Capsp, "str", []>;
  def AltStoreCapRegExtX : AltStoreCapRegExtXFmt<Capsp, "str", []>;
  def AltStoreSWordRegExtW : AltStoreSWordRegExtWFmt<Capsp, "str", []>;
  def AltStoreSWordRegExtX : AltStoreSWordRegExtXFmt<Capsp, "str", []>;
  def AltStoreDWordRegExtW : AltStoreDWordRegExtWFmt<Capsp, "str", []>;
  def AltStoreDWordRegExtX : AltStoreDWordRegExtXFmt<Capsp, "str", []>;
  def AltStoreByteRegExtW : AltStoreByteRegExtWFmt<Capsp, "strb", []>;
  def AltStoreByteRegExtX : AltStoreByteRegExtXFmt<Capsp, "strb", []>;
  def AltStoreHalfwordRegExtW : AltStoreHalfwordRegExtWFmt<Capsp, "strh", []>;
  def AltStoreHalfwordRegExtX : AltStoreHalfwordRegExtXFmt<Capsp, "strh", []>;
  def AltStoreDFPRegExtW : AltStoreDFPRegExtWFmt<Capsp, "str", []>;
  def AltStoreDFPRegExtX : AltStoreDFPRegExtXFmt<Capsp, "str", []>;
  def AltStoreSFPRegExtW : AltStoreSFPRegExtWFmt<Capsp, "str", []>;
  def AltStoreSFPRegExtX : AltStoreSFPRegExtXFmt<Capsp, "str", []>;
}
}

// Be helpful and allow add Cd, Cn, Xm as an alias for add Cd, Cn, Xm, uxtx #0.
// However, don't use this alias when printing instructions.
let Predicates = [HasMorello], EmitPriority = 0 in
def : InstAlias<"add $Cd, $Cn, $Rm",
                (CapAddRegX Capsp:$Cd, Capsp:$Cn, GPR64:$Rm, 24)>;

let Predicates = [HasMorello] in
def : InstAlias<"cmp\t$Cn, $Cm",
                (CapSubSetFlags XZR, Cap:$Cn, Cap:$Cm)>;

let Predicates = [HasMorello, HasNotC64] in {
def : InstAlias<"str\t$Ct, [$Rn, $Rm]",
                (CapStoreRegExtX Cap:$Ct, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldr\t$Ct, [$Rn, $Rm]",
                (CapLoadRegExtX Cap:$Ct, GPR64sp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store capability (register) via alternate base.
def : InstAlias<"ldr\t$Ct, [$Rn, $Rm]", (AltLoadCapRegExtX Cap:$Ct, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Ct, [$Rn, $Rm]", (AltStoreCapRegExtX Cap:$Ct, Capsp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store Register (register) via alternate base.
def : InstAlias<"ldr\t$Rt, [$Rn, $Rm]", (AltLoadSWordRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldr\t$Rt, [$Rn, $Rm]", (AltLoadDWordRegExtX GPR64:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Rt, [$Rn, $Rm]", (AltStoreSWordRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Rt, [$Rn, $Rm]", (AltStoreDWordRegExtX GPR64:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store Register Byte (register) via alternate base.
def : InstAlias<"ldrb\t$Rt, [$Rn, $Rm]", (AltLoadByteRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"strb\t$Rt, [$Rn, $Rm]", (AltStoreByteRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store Register Halfword (register) via alternate base.
def : InstAlias<"ldrh\t$Rt, [$Rn, $Rm]", (AltLoadHalfwordRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"strh\t$Rt, [$Rn, $Rm]", (AltStoreHalfwordRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;

// Load Register Signed Byte (register) via alternate base.
def : InstAlias<"ldrsb\t$Rt, [$Rn, $Rm]", (AltLoadSignedByteDRegExtX GPR64:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldrsb\t$Rt, [$Rn, $Rm]", (AltLoadSignedByteSRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;

// Load Register Signed Halfword (register) via alternate base.
def : InstAlias<"ldrsh\t$Rt, [$Rn, $Rm]", (AltLoadSignedHalfwordDRegExtX GPR64:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldrsh\t$Rt, [$Rn, $Rm]", (AltLoadSignedHalfwordSRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;

// Load/Store SIMD&FP Register (register) via alternate base.
def : InstAlias<"ldr\t$Rt, [$Rn, $Rm]", (AltLoadDFPRegExtX FPR64:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"ldr\t$Rt, [$Rn, $Rm]", (AltLoadSFPRegExtX FPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Rt, [$Rn, $Rm]", (AltStoreDFPRegExtX FPR64:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;
def : InstAlias<"str\t$Rt, [$Rn, $Rm]", (AltStoreSFPRegExtX FPR32:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;

// Alias the immediate offset ldr/str instructions from AArch64 with ldur/stur
// as much as possible.
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (AltLoadDWordImmUnscaled GPR64:$Rt, Capsp:$Rn,
                                        simm9_offset_fb64:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (AltLoadWordImmUnscaled GPR32:$Rt, Capsp:$Rn,
                                       simm9_offset_fb32:$offset), 0>;
def : InstAlias<"ldrsw $Rt, [$Rn, $offset]",
                (AltLoadSignedWordToDWordImmUnscaled GPR64:$Rt, Capsp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldrb $Rt, [$Rn, $offset]",
                (AltLoadByteImmUnscaled GPR32:$Rt, Capsp:$Rn,
                                       simm9_offset_fb8:$offset), 0>;
def : InstAlias<"ldrh $Rt, [$Rn, $offset]",
                (AltLoadHalfImmUnscaled GPR32:$Rt, Capsp:$Rn,
                                       simm9:$offset), 0>;
def : InstAlias<"ldrsb $Rt, [$Rn, $offset]",
                (AltLoadSignedByteToWordImmUnscaled GPR32:$Rt, Capsp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldrsh $Rt, [$Rn, $offset]",
                (AltLoadSignedHalfToWordImmUnscaled GPR32:$Rt, Capsp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldrsb $Rt, [$Rn, $offset]",
                (AltLoadSignedByteToDWordImmUnscaled GPR64:$Rt, Capsp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldrsh $Rt, [$Rn, $offset]",
                (AltLoadSignedHalfToDWordImmUnscaled GPR64:$Rt, Capsp:$Rn,
                                                   simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (AltLoadFPByteImmUnscaled FPR8:$Rt, Capsp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (AltLoadFPHalfImmUnscaled FPR16:$Rt, Capsp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (AltLoadFPSingleImmUnscaled FPR32:$Rt, Capsp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (AltLoadFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (AltLoadFPQuadImmUnscaled FPR128:$Rt, Capsp:$Rn,
                                         simm9:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (AltLoadCapabilityImmUnscaled Cap:$Rt, Capsp:$Rn,
                                         simm9_offset_fb128:$offset), 0>;
def : InstAlias<"ldr $Rt, [$Rn, $offset]",
                (CapLoadUnscaledImm Cap:$Rt, GPR64sp:$Rn,
                                          simm9_offset_fb128:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (AltStoreDWordImmUnscaled GPR64:$Rt, Capsp:$Rn,
                                         simm9_offset_fb64:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (AltStoreWordImmUnscaled GPR32:$Rt, Capsp:$Rn,
                                        simm9_offset_fb32:$offset), 0>;
def : InstAlias<"strb $Rt, [$Rn, $offset]",
                (AltStoreByteImmUnscaled GPR32:$Rt, Capsp:$Rn,
                                        simm9_offset_fb8:$offset), 0>;
def : InstAlias<"strh $Rt, [$Rn, $offset]",
                (AltStoreHalfImmUnscaled GPR32:$Rt, Capsp:$Rn,
                                        simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (AltStoreFPByteImmUnscaled FPR8:$Rt, Capsp:$Rn,
                                          simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (AltStoreFPHalfImmUnscaled FPR16:$Rt, Capsp:$Rn,
                                          simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (AltStoreFPSingleImmUnscaled FPR32:$Rt, Capsp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Rn,
                                           simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Rn,
                                          simm9:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (AltStoreCapabilityImmUnscaled Cap:$Rt, Capsp:$Rn,
                                          simm9_offset_fb128:$offset), 0>;
def : InstAlias<"str $Rt, [$Rn, $offset]",
                (CapStoreUnscaledImm Cap:$Rt, GPR64sp:$Rn,
                                          simm9_offset_fb128:$offset), 0>;

// GPR loads
// Byte
def : InstAlias<"ldurb\t$Rt, [$Cn]",
                (AltLoadByteImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldrb\t$Rt, [$Cn]",
                (AltLoadByteImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldursb\t$Rt, [$Cn]",
                (AltLoadSignedByteToDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldrsb\t$Rt, [$Cn]",
                (AltLoadSignedByteToDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldursb\t$Rt, [$Cn]",
                (AltLoadSignedByteToWordImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldrsb\t$Rt, [$Cn]",
                (AltLoadSignedByteToWordImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;

// Half
def : InstAlias<"ldurh\t$Rt, [$Cn]",
                (AltLoadHalfImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldrh\t$Rt, [$Cn]",
                (AltLoadHalfImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldursh\t$Rt, [$Cn]",
                (AltLoadSignedHalfToDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldrsh\t$Rt, [$Cn]",
                (AltLoadSignedHalfToDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldursh\t$Rt, [$Cn]",
                (AltLoadSignedHalfToWordImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldrsh\t$Rt, [$Cn]",
                (AltLoadSignedHalfToWordImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;

// Word
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (AltLoadWordImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (AltLoadWordImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldursw\t$Rt, [$Cn]",
                (AltLoadSignedWordToDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldrsw\t$Rt, [$Cn]",
                (AltLoadSignedWordToDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;

// DWord
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (AltLoadDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (AltLoadDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;

// FPR loads.
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (AltLoadFPByteImmUnscaled FPR8:$Rt, Capsp:$Cn, 0)>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (AltLoadFPByteImmUnscaled FPR8:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (AltLoadFPHalfImmUnscaled FPR16:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (AltLoadFPHalfImmUnscaled FPR16:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (AltLoadFPSingleImmUnscaled FPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (AltLoadFPSingleImmUnscaled FPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (AltLoadFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (AltLoadFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldur\t$Rt, [$Cn]",
                (AltLoadFPQuadImmUnscaled FPR128:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Rt, [$Cn]",
                (AltLoadFPQuadImmUnscaled FPR128:$Rt, Capsp:$Cn, 0), 0>;

// Capability loads.
def : InstAlias<"ldur\t$Ct, [$Cn]",
                (AltLoadCapabilityImmUnscaled Cap:$Ct, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Ct, [$Cn]",
                (AltLoadCapImmPre Cap:$Ct, Capsp:$Cn, 0), 0>;
def : InstAlias<"ldr\t$Ct, [$Rn]",
                (CapLoadImmPre Cap:$Ct, GPR64sp:$Rn, 0), 0>;
def : InstAlias<"ldur\t$Ct, [$Rn]",
                (CapLoadUnscaledImm Cap:$Ct, GPR64sp:$Rn, 0), 0>;
def : InstAlias<"ldp\t$Ct, $Ct2, [$Rn]",
                (CapLoadPairImmPre Cap:$Ct, Cap:$Ct2, GPR64sp:$Rn, 0), 0>;
def : InstAlias<"ldtr\t$Ct, [$Rn]",
                (CapLoadUnpriv Cap:$Ct, GPR64sp:$Rn, 0), 0>;

// GPR Stores
// Byte
def : InstAlias<"sturb\t$Rt, [$Cn]",
                (AltStoreByteImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"strb\t$Rt, [$Cn]",
                (AltStoreByteImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;

// Half
def : InstAlias<"sturh\t$Rt, [$Cn]",
                (AltStoreHalfImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"strh\t$Rt, [$Cn]",
                (AltStoreHalfImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;

// Word
def : InstAlias<"stur\t$Rt, [$Cn]",
                (AltStoreWordImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (AltStoreWordImmUnscaled GPR32:$Rt, Capsp:$Cn, 0), 0>;

// DWord
def : InstAlias<"stur\t$Rt, [$Cn]",
                (AltStoreDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (AltStoreDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, 0), 0>;

// FPR Stores
def : InstAlias<"stur\t$Rt, [$Cn]",
                (AltStoreFPByteImmUnscaled FPR8:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (AltStoreFPByteImmUnscaled FPR8:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Rt, [$Cn]",
                (AltStoreFPHalfImmUnscaled FPR16:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (AltStoreFPHalfImmUnscaled FPR16:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Rt, [$Cn]",
                (AltStoreFPSingleImmUnscaled FPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (AltStoreFPSingleImmUnscaled FPR32:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Rt, [$Cn]",
                (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Rt, [$Cn]",
                (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Cn, 0), 0>;
def : InstAlias<"str\t$Rt, [$Cn]",
                (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Cn, 0), 0>;

// Capabilities
def : InstAlias<"str\t$Ct, [$Cn]",
                (AltStoreCapImmPre Cap:$Ct, Capsp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Ct, [$Cn]",
                (AltStoreCapabilityImmUnscaled Cap:$Ct, Capsp:$Cn, 0), 0>;
def : InstAlias<"stur\t$Ct, [$Rn]",
                (CapStoreUnscaledImm Cap:$Ct, GPR64sp:$Rn, 0), 0>;
def : InstAlias<"str\t$Ct, [$Rn]",
                (CapStoreImmPre Cap:$Ct, GPR64sp:$Rn, 0), 0>;
def : InstAlias<"stp\t$Ct, $Ct2, [$Rn]",
                (CapStorePairImmPre Cap:$Ct, Cap:$Ct2, GPR64sp:$Rn, 0), 0>;

// Unpriviledged stores.
def : InstAlias<"sttr\t$Ct, [$Rn]",
                (CapStoreUnpriv Cap:$Ct, GPR64sp:$Rn, 0), 0>;
}

// Morello-specific patterns common with both A64 and C64

let Predicates = [HasMorello] in {
// Add/Sub instructions.
let AddedComplexity = 5 in
def : Pat<(ptradd Capsp:$Cn, addsub_shifted_imm64:$imm),
          (CapAddImm Capsp:$Cn, addsub_shifted_imm64:$imm)>;
def : Pat<(ptradd Capsp:$Cn, neg_addsub_shifted_imm64:$imm),
          (CapSubImm Capsp:$Cn, neg_addsub_shifted_imm64:$imm)>;
def : Pat<(ptradd Capsp:$Cn, arith_extended_reg32to64_i64:$R3),
          (CapAddRegW Capsp:$Cn, arith_extended_reg32to64_i64:$R3)>;
def : Pat<(ptradd Capsp:$Cn, GPR64:$Rm),
          (CapAddRegX Capsp:$Cn, GPR64:$Rm, (i32 24))>;
def : Pat<(ptradd Capsp:$Cn, (i64 (shl GPR64:$Rm, (i64 1)))),
          (CapAddRegX Capsp:$Cn, GPR64:$Rm, (i32 25))>;
def : Pat<(ptradd Capsp:$Cn, (i64 (shl GPR64:$Rm, (i64 2)))),
          (CapAddRegX Capsp:$Cn, GPR64:$Rm, (i32 26))>;
def : Pat<(ptradd Capsp:$Cn, (i64 (shl GPR64:$Rm, (i64 3)))),
          (CapAddRegX Capsp:$Cn, GPR64:$Rm, (i32 27))>;
def : Pat<(ptradd Capsp:$Cn, (i64 (shl GPR64:$Rm, (i64 4)))),
          (CapAddRegX Capsp:$Cn, GPR64:$Rm, (i32 28))>;

def : Pat<(ptrtoint Capsp:$Cn), (CapGetValue Capsp:$Cn)>;
def : Pat<(i32 (ptrtoint Capsp:$Cn)),
           (EXTRACT_SUBREG (CapGetValue Capsp:$Cn), sub_32)>;
def : Pat<(cbrind Cap:$Cn), (CapBranch Cap:$Cn)>;

def : Pat<(AArch64chkequals Capsp:$Cn, Capsp:$Cm),
          (CapCheckEquals Capsp:$Cn, Capsp:$Cm)>;
def : Pat<(AArch64chksubset Capsp:$Cn, Capsp:$Cm),
          (CapCheckSubset Capsp:$Cn, Capsp:$Cm)>;
def : Pat<(AArch64chksubsetunseal Capsp:$Cn, Capsp:$Cm),
          (CapCheckSubsetUnseal Capsp:$Cn, Capsp:$Cm)>;
def : Pat<(AArch64sealimm Cap:$Cd, sealform:$form),
          (CapSealImm Cap:$Cd, sealform:$form)>;

// Intrinsics
// FIXME: Some of these are missing the immediate form,
// so this is sub-optimal for now.
def : Pat<(int_morello_round_representable_length_inexact GPR64:$Rn),
          (CapRoundRepresentableLength GPR64:$Rn)>;
def : Pat<(int_morello_representable_alignment_mask_inexact GPR64:$Rn),
          (CapRoundRepresentableMask GPR64:$Rn)>;
def : Pat<(int_cheri_cap_copy_from_high Capsp:$Rn),
          (CapCopyFromHigh Capsp:$Rn)>;
def : Pat<(int_cheri_cap_copy_to_high Cap:$Rn, GPR64:$Rm),
          (CapCopyToHigh Cap:$Rn, GPR64:$Rm)>;
let AddedComplexity = 5 in
def : Pat<(int_cheri_cap_bounds_set Capsp:$Cn, scbnds_imm:$imm),
          (CapSetBoundsImm Capsp:$Cn, scbnds_imm:$imm)>;
let AddedComplexity = 5 in
def : Pat<(int_cheri_cap_bounds_set_exact Capsp:$Cn, scbnds_imm:$imm),
          (CapSetBoundsImm Capsp:$Cn, scbnds_imm:$imm)>;
def : Pat<(int_cheri_cap_bounds_set Capsp:$Cn, GPR64:$Rm),
          (CapSetBounds Capsp:$Cn, GPR64:$Rm)>;
let AddedComplexity = 5 in
def : Pat<(int_cheri_bounded_stack_cap Capsp:$Cn, scbnds_imm:$imm),
          (CapSetBoundsImm Capsp:$Cn, scbnds_imm:$imm)>;
def : Pat<(int_cheri_bounded_stack_cap Capsp:$Cn, GPR64:$Rm),
          (CapSetBounds Capsp:$Cn, GPR64:$Rm)>;
def : Pat<(int_cheri_bounded_stack_cap_dynamic Capsp:$Cn, scbnds_imm:$imm),
          (CapSetBoundsImm Capsp:$Cn, scbnds_imm:$imm)>;
def : Pat<(int_cheri_bounded_stack_cap_dynamic Capsp:$Cn, GPR64:$Rm),
          (CapSetBounds Capsp:$Cn, GPR64:$Rm)>;
def : Pat<(int_cheri_cap_build Capsp:$Cn, Capsp:$Cm),
          (CapBuildCap Capsp:$Cm, Capsp:$Cn)>;
def : Pat<(int_cheri_cap_bounds_set_exact Capsp:$Cn, GPR64:$Rm),
          (CapSetBoundsExact Capsp:$Cn, GPR64:$Rm)>;
def : Pat<(int_cheri_cap_offset_set Capsp:$Cn, GPR64:$Rm),
          (CapSetOffset Capsp:$Cn, GPR64:$Rm)>;
def : Pat<(int_cheri_cap_offset_get Capsp:$Cn),
          (CapGetOffset Capsp:$Cn)>;
def : Pat<(int_cheri_cap_base_get Capsp:$Cn),
          (CapGetBase Capsp:$Cn)>;
def : Pat<(int_cheri_cap_length_get Capsp:$Cn),
          (CapGetLen Capsp:$Cn)>;
def : Pat<(int_cheri_cap_perms_get Capsp:$Cn),
          (CapGetPerm Capsp:$Cn)>;
def : Pat<(int_cheri_cap_type_get Capsp:$Cn),
          (CapGetType Capsp:$Cn)>;
def : Pat<(int_cheri_cap_unseal Cap:$Cn, Cap:$Cm),
          (CapUnseal Cap:$Cn, Cap:$Cm)>;
def : Pat<(int_cheri_cap_seal Cap:$Cn, Cap:$Cm),
          (CapSeal Cap:$Cn, Cap:$Cm)>;
def : Pat<(int_cheri_cap_conditional_seal Capsp:$Cn, Capsp:$Cm),
          (CapSealCond Capsp:$Cn, Capsp:$Cm)>;
def : Pat<(int_cheri_cap_type_copy Cap:$Cn, Cap:$Cm),
          (CapSetValueFromType Cap:$Cn, Cap:$Cm)>;
def : Pat<(int_cheri_cap_tag_clear Capsp:$Cn),
          (CapClearTag Capsp:$Cn)>;
def : Pat<(ClearPerms Capsp:$Cn, GPR64:$Rm),
          (CapClearPerm Capsp:$Cn, GPR64:$Rm)>;
def : Pat<(ClearPerms Capsp:$Cn, clrperm:$imm),
          (CapClearPermImm Capsp:$Cn, clrperm:$imm)>;
def : Pat<(CapTagGet Capsp:$Cn), (CapGetTag Capsp:$Cn)>;
def : Pat<(CapSealedGet Capsp:$Cn), (CapGetSeal Capsp:$Cn)>;
def : Pat<(int_morello_convert_to_ptr Capsp:$Cn, Cap:$Cm),
          (CapConvertCapTo64 Capsp:$Cn, Cap:$Cm)>;
def : Pat<(int_morello_convert_to_offset_null_cap_zero_semantics Capsp:$Cn, GPR64:$Xm),
          (CapConvert64toCapNullCheck Capsp:$Cn, GPR64:$Xm)>;
def : Pat<(int_cheri_cap_address_get Capsp:$Cm),
          (CapGetValue Capsp:$Cm)>;
def : Pat<(int_cheri_cap_address_set Capsp:$Cm, GPR64:$Rt),
          (CapSetValue Capsp:$Cm, GPR64:$Rt)>;
def : Pat<(int_cheri_cap_to_pointer Cap:$Cn, Capsp:$Cm),
          (CapConvertCapTo64 Capsp:$Cm, Cap:$Cn)>;
def : Pat<(int_cheri_cap_from_pointer Capsp:$Cm, GPR64:$Rt),
          (CapConvert64toCapNullCheck Capsp:$Cm, GPR64:$Rt)>;
def : Pat<(int_cheri_cap_from_pointer_nonnull_zero Capsp:$Cm, GPR64:$Rt),
          (CapConvert64toCap Capsp:$Cm, GPR64:$Rt)>;
def : Pat<(int_cheri_cap_from_pointer (iFATPTR128 (int_cheri_ddc_get)),
                                      GPR64:$Rt),
          (CapConvert64ToCapDDCNullCheck GPR64:$Rt)>;
def : Pat<(int_cheri_cap_from_pointer (iFATPTR128 (int_cheri_pcc_get)),
                                      GPR64:$Rt),
          (CapConvert64ToCapPCCNullCheck GPR64:$Rt)>;
def : Pat<(int_cheri_cap_from_pointer_nonnull_zero
              (iFATPTR128 (int_cheri_ddc_get)), GPR64:$Rt),
          (CapConvert64ToCapDDC GPR64:$Rt)>;
def : Pat<(int_cheri_cap_from_pointer_nonnull_zero
              (iFATPTR128 (int_cheri_pcc_get)), GPR64:$Rt),
          (CapConvert64ToCapPCC GPR64:$Rt)>;
def : Pat<(int_cheri_cap_to_pointer (iFATPTR128 (int_cheri_ddc_get)),
                                    Capsp:$Cm),
          (CapConvertCapTo64DDC Capsp:$Cm)>;
def : Pat<(int_cheri_cap_to_pointer (iFATPTR128 (int_cheri_pcc_get)),
                                    Capsp:$Cm),
          (CapConvertCapTo64PCC Capsp:$Cm)>;
def : Pat<(i64 (int_cheri_cap_diff Cap:$Cn, Cap:$Cm)),
          (SUBXrr (EXTRACT_SUBREG Cap:$Cn, sub_64),
                  (EXTRACT_SUBREG Cap:$Cm, sub_64))>;
} // Predicates = [HasMorello]

let Predicates = [HasMorello, HasNotC64] in {

// Load/store intrinsics
def : Pat<(int_cheri_cap_load_tags GPR64sp:$Rn), (CapLoadTags GPR64sp:$Rn)>;
def : Pat<(i32 (int_cheri_cap_load_tags GPR64sp:$Rn)),
          (EXTRACT_SUBREG (CapLoadTags GPR64sp:$Rn), sub_32)>;

// Alternate base loads.

// Capabilties
def : Pat<(cload (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltLoadCapabilityImmUnscaled Capsp:$Cn, simm9:$imm)>;

// i8
def : Pat<(i32 (zextcloadi8 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadByteImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(i32 (extcloadi8 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadByteImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(i64 (zextcloadi8 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (AltLoadByteImmUnscaled Capsp:$Cn,
                                                          simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (extcloadi8 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (AltLoadByteImmUnscaled Capsp:$Cn,
                                                          simm9:$imm),
                          sub_32)>;
def : Pat<(i32 (extcloadi1 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadByteImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(i32 (zextcloadi1 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadByteImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(i64 (extcloadi1 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (AltLoadByteImmUnscaled Capsp:$Cn,
                                                          simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (zextcloadi1 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (AltLoadByteImmUnscaled Capsp:$Cn,
                                                          simm9:$imm),
                         sub_32)>;
def : Pat<(i32 (sextcloadi8 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadSignedByteToWordImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(i64 (sextcloadi8 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadSignedByteToDWordImmUnscaled Capsp:$Cn, simm9:$imm)>;

// i16
def : Pat<(i32 (zextcloadi16 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadHalfImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(i32 (extcloadi16 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadHalfImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(i64 (zextcloadi16 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (AltLoadHalfImmUnscaled Capsp:$Cn,
                                                          simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (extcloadi16 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (AltLoadHalfImmUnscaled Capsp:$Cn,
                                                          simm9:$imm),
                         sub_32)>;
def : Pat<(i32 (sextcloadi16 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadSignedHalfToWordImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(i64 (sextcloadi16 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadSignedHalfToDWordImmUnscaled Capsp:$Cn, simm9:$imm)>;

// i32
def : Pat<(i32 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadWordImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(i64 (zextcloadi32 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (AltLoadWordImmUnscaled Capsp:$Cn,
                                                          simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (extcloadi32 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (SUBREG_TO_REG (i64 0), (AltLoadWordImmUnscaled Capsp:$Cn,
                                                          simm9:$imm),
                         sub_32)>;
def : Pat<(i64 (sextcloadi32 (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadSignedWordToDWordImmUnscaled Capsp:$Cn, simm9:$imm)>;

// i64
def : Pat<(i64 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadDWordImmUnscaled Capsp:$Cn, simm9:$imm)>;

// f16
def : Pat<(f16 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPHalfImmUnscaled Capsp:$Cn, simm9:$imm)>;
// f32
def : Pat<(f32 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPSingleImmUnscaled Capsp:$Cn, simm9:$imm)>;
// f64
def : Pat<(f64 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPDoubleImmUnscaled Capsp:$Cn, simm9:$imm)>;
// f128
def : Pat<(f128 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPQuadImmUnscaled Capsp:$Cn, simm9:$imm)>;
} // Predicates = [HasMorello, HasNotC64]

let Predicates = [IsLE, HasMorello, HasNotC64] in {
// Quad patterns
def : Pat<(v8f16 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPQuadImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v4f32 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPQuadImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v2f64 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPQuadImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v16i8 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPQuadImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v8i16 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPQuadImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v4i32 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPQuadImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v2i64 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPQuadImmUnscaled Capsp:$Cn, simm9:$imm)>;
// Double patterns
def : Pat<(v4f16 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPDoubleImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v2f32 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPDoubleImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v1f64 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPDoubleImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v8i8 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPDoubleImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v4i16 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPDoubleImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v2i32 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPDoubleImmUnscaled Capsp:$Cn, simm9:$imm)>;
def : Pat<(v1i64 (cload (am_cunscaled Capsp:$Cn, simm9:$imm))),
          (AltLoadFPDoubleImmUnscaled Capsp:$Cn, simm9:$imm)>;
}

let Predicates = [HasMorello, HasNotC64] in {
// Alternate base stores.

// Capabilties
def : Pat<(cstore Cap:$Ct, (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreCapabilityImmUnscaled Cap:$Ct, Capsp:$Cn, simm9:$imm)>;

// i8
let AddedComplexity = 5 in
def : Pat<(trunccstorei8 GPR32:$Rt, (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreByteImmUnscaled GPR32:$Rt, Capsp:$Cn, simm9:$imm)>;
let AddedComplexity = 10 in
def : Pat<(trunccstorei8 GPR64:$Rt, (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreByteImmUnscaled (EXTRACT_SUBREG GPR64:$Rt, sub_32),
                                   Capsp:$Cn, simm9:$imm)>;

// i16
let AddedComplexity = 5 in
def : Pat<(trunccstorei16 GPR32:$Rt, (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreHalfImmUnscaled GPR32:$Rt, Capsp:$Cn, simm9:$imm)>;
let AddedComplexity = 10 in
def : Pat<(trunccstorei16 GPR64:$Rt, (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreHalfImmUnscaled (EXTRACT_SUBREG GPR64:$Rt, sub_32),
                                   Capsp:$Cn, simm9:$imm)>;

// i32
let AddedComplexity = 5 in
def : Pat<(cstore GPR32:$Rt, (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreWordImmUnscaled GPR32:$Rt, Capsp:$Cn, simm9:$imm)>;
let AddedComplexity = 10 in
def : Pat<(trunccstorei32 GPR64:$Rt, (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreWordImmUnscaled (EXTRACT_SUBREG GPR64:$Rt, sub_32),
                                   Capsp:$Cn, simm9:$imm)>;

// i64
let AddedComplexity = 5 in
def : Pat<(cstore GPR64:$Rt, (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreDWordImmUnscaled GPR64:$Rt, Capsp:$Cn, simm9:$imm)>;

// f16
let AddedComplexity = 5 in
def : Pat<(cstore (f16 FPR16:$Rt), (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreFPHalfImmUnscaled FPR16:$Rt, Capsp:$Cn, simm9:$imm)>;

// f32
let AddedComplexity = 5 in
def : Pat<(cstore (f32 FPR32:$Rt), (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreFPSingleImmUnscaled FPR32:$Rt, Capsp:$Cn, simm9:$imm)>;

// f64
let AddedComplexity = 5 in
def : Pat<(cstore (f64 FPR64:$Rt), (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Cn, simm9:$imm)>;

// f128
let AddedComplexity = 5 in
def : Pat<(cstore (f128 FPR128:$Rt), (am_cunscaled Capsp:$Cn, simm9:$imm)),
          (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Cn, simm9:$imm)>;
} // Predicates = [HasMorello, HasNotC64]

let Predicates = [IsLE, HasMorello, HasNotC64] in {
// Quad patterns
def : Pat<(cstore (v8f16 FPR128:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v4f32 FPR128:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v2f64 FPR128:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v16i8 FPR128:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v8i16 FPR128:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v4i32 FPR128:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v2i64 FPR128:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPQuadImmUnscaled FPR128:$Rt, Capsp:$Rn, simm9:$imm)>;
// Double patterns
def : Pat<(cstore (v4f16 FPR64:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v2f32 FPR64:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v1f64 FPR64:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v8i8 FPR64:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v4i16 FPR64:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v2i32 FPR64:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Rn, simm9:$imm)>;
def : Pat<(cstore (v1i64 FPR64:$Rt), (am_cunscaled Capsp:$Rn, simm9:$imm)),
          (AltStoreFPDoubleImmUnscaled FPR64:$Rt, Capsp:$Rn, simm9:$imm)>;
} // Predicates = [IsLE, HasMorello, HasNotC64]

let Predicates = [HasMorello, HasNotC64] in {
// Capability loads.
def : Pat<(load (am_indexed128 GPR64sp:$Rn, uimm12s16:$imm)),
          (CapLoadImmPre GPR64sp:$Rn, uimm12s16:$imm)>;
def : Pat<(load (am_unscaled128 GPR64sp:$Rn, simm9:$imm)),
          (CapLoadUnscaledImm GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(load (ro_Windexed128 GPR64sp:$Rn, GPR32:$Rm, ro_Wextend128:$extend)),
          (CapLoadRegExtW GPR64sp:$Rn, GPR32:$Rm, ro_Wextend128:$extend)>;
def : Pat<(load (ro_Xindexed128 GPR64sp:$Rn, GPR64:$Rm, ro_Xextend128:$extend)),
          (CapLoadRegExtX GPR64sp:$Rn, GPR64:$Rm, ro_Xextend128:$extend)>;

// Capability stores.
def : Pat<(store Cap:$Ct, (am_indexed128 GPR64sp:$Rn, uimm12s16:$imm)),
          (CapStoreImmPre Cap:$Ct, GPR64sp:$Rn, uimm12s16:$imm)>;
def : Pat<(store Cap:$Ct, (am_unscaled128 GPR64sp:$Rn, simm9:$imm)),
          (CapStoreUnscaledImm Cap:$Ct, GPR64sp:$Rn, simm9:$imm)>;
def : Pat<(store Cap:$Ct, (ro_Windexed128 GPR64sp:$Rn, GPR32:$Rm,
                                          ro_Wextend128:$extend)),
          (CapStoreRegExtW Cap:$Ct, GPR64sp:$Rn, GPR32:$Rm,
                           ro_Wextend128:$extend)>;
def : Pat<(store Cap:$Ct, (ro_Xindexed128 GPR64sp:$Rn, GPR64:$Rm,
                                          ro_Xextend128:$extend)),
          (CapStoreRegExtX Cap:$Ct, GPR64sp:$Rn, GPR64:$Rm,
                           ro_Xextend128:$extend)>;
let AddedComplexity = 3 in {
// Alternate base register offset loads
// Capability loads
def : Pat<(cload (cro_Windexed128 Capsp:$Rn, GPR32:$Rm,
                                  ro_Wextend128:$extend)),
          (AltLoadCapRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend128:$extend)>;
def : Pat<(cload (cro_Xindexed128 Capsp:$Rn, GPR64:$Rm,
                                  ro_Xextend128:$extend)),
          (AltLoadCapRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend128:$extend)>;
// Integer loads
def : Pat<(cload (cro_Windexed32 Capsp:$Rn, GPR32:$Rm,
                                              ro_Wextend32:$extend)),
          (AltLoadSWordRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend32:$extend)>;
def : Pat<(cload (cro_Xindexed32 Capsp:$Rn, GPR64:$Rm,
                                             ro_Xextend32:$extend)),
          (AltLoadSWordRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend32:$extend)>;
def : Pat<(cload (cro_Windexed64 Capsp:$Rn, GPR32:$Rm,
                                 ro_Wextend64:$extend)),
          (AltLoadDWordRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend64:$extend)>;
def : Pat<(cload (cro_Xindexed64 Capsp:$Rn, GPR64:$Rm,
                                 ro_Xextend64:$extend)),
          (AltLoadDWordRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend64:$extend)>;
// Single FP loads
def : Pat<(f32 (cload (cro_Windexed32 Capsp:$Rn, GPR32:$Rm,
                                      ro_Wextend32:$extend))),
          (AltLoadSFPRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend32:$extend)>;
def : Pat<(f32 (cload (cro_Xindexed32 Capsp:$Rn, GPR64:$Rm,
                                      ro_Xextend32:$extend))),
          (AltLoadSFPRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend32:$extend)>;
// Sign extending loads
// i8
def : Pat<(i64 (sextcloadi8 (cro_Windexed8 Capsp:$Rn, GPR32:$Rm,
                                           ro_Wextend8:$extend))),
          (AltLoadSignedByteDRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend8:$extend)>;
def : Pat<(i64 (sextcloadi8 (cro_Xindexed8 Capsp:$Rn, GPR64:$Rm,
                                           ro_Xextend8:$extend))),
          (AltLoadSignedByteDRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend8:$extend)>;
def : Pat<(i32 (sextcloadi8 (cro_Windexed8 Capsp:$Rn, GPR32:$Rm,
                                           ro_Wextend8:$extend))),
          (AltLoadSignedByteSRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend8:$extend)>;
def : Pat<(i32 (sextcloadi8 (cro_Xindexed8 Capsp:$Rn, GPR64:$Rm,
                                           ro_Xextend8:$extend))),
          (AltLoadSignedByteSRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend8:$extend)>;
// i16
def : Pat<(i64 (sextcloadi16 (cro_Windexed16 Capsp:$Rn, GPR32:$Rm,
                                             ro_Wextend16:$extend))),
          (AltLoadSignedHalfwordDRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend16:$extend)>;
def : Pat<(i64 (sextcloadi16 (cro_Xindexed16 Capsp:$Rn, GPR64:$Rm,
                                             ro_Xextend16:$extend))),
          (AltLoadSignedHalfwordDRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend16:$extend)>;
def : Pat<(i32 (sextcloadi16 (cro_Windexed16 Capsp:$Rn, GPR32:$Rm,
                                             ro_Wextend16:$extend))),
          (AltLoadSignedHalfwordSRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend16:$extend)>;
def : Pat<(i32 (sextcloadi16 (cro_Xindexed16 Capsp:$Rn, GPR64:$Rm,
                                             ro_Xextend16:$extend))),
          (AltLoadSignedHalfwordSRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend16:$extend)>;
// Zero extending loads
// i8
def : Pat<(zextcloadi8 (cro_Windexed8 Capsp:$Rn, GPR32:$Rm,
                                      ro_Wextend8:$extend)),
          (AltLoadByteRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend8:$extend)>;
def : Pat<(zextcloadi8 (cro_Xindexed8 Capsp:$Rn, GPR64:$Rm,
                                           ro_Xextend8:$extend)),
          (AltLoadByteRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend8:$extend)>;
// i16
def : Pat<(zextcloadi16 (cro_Windexed16 Capsp:$Rn, GPR32:$Rm,
                                        ro_Wextend16:$extend)),
          (AltLoadHalfwordRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend16:$extend)>;
def : Pat<(zextcloadi16 (cro_Xindexed16 Capsp:$Rn, GPR64:$Rm,
                                        ro_Xextend16:$extend)),
          (AltLoadHalfwordRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend16:$extend)>;
// Ext loads
// i8
def : Pat<(extcloadi8 (cro_Windexed8 Capsp:$Rn, GPR32:$Rm,
                                     ro_Wextend8:$extend)),
          (AltLoadByteRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend8:$extend)>;
def : Pat<(extcloadi8 (cro_Xindexed8 Capsp:$Rn, GPR64:$Rm,
                                           ro_Xextend8:$extend)),
          (AltLoadByteRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend8:$extend)>;
// i16
def : Pat<(extcloadi16 (cro_Windexed16 Capsp:$Rn, GPR32:$Rm,
                                       ro_Wextend16:$extend)),
          (AltLoadHalfwordRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend16:$extend)>;
def : Pat<(extcloadi16 (cro_Xindexed16 Capsp:$Rn, GPR64:$Rm,
                                       ro_Xextend16:$extend)),
          (AltLoadHalfwordRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend16:$extend)>;

// Alternate base register offset stores
// Capability stores
def : Pat<(cstore Cap:$Ct, (cro_Windexed128 Capsp:$Rn, GPR32:$Rm,
                                            ro_Wextend128:$extend)),
          (AltStoreCapRegExtW Cap:$Ct, Capsp:$Rn, GPR32:$Rm,
                              ro_Wextend128:$extend)>;
def : Pat<(cstore Cap:$Ct, (cro_Xindexed128 Capsp:$Rn, GPR64:$Rm,
                                            ro_Xextend128:$extend)),
          (AltStoreCapRegExtX Cap:$Ct, Capsp:$Rn, GPR64:$Rm,
                              ro_Xextend128:$extend)>;
// Integer stores
def : Pat<(cstore GPR32:$Rt, (cro_Windexed32 Capsp:$Rn, GPR32:$Rm,
                                              ro_Wextend32:$extend)),
          (AltStoreSWordRegExtW GPR32:$Rt, Capsp:$Rn, GPR32:$Rm,
                                ro_Wextend32:$extend)>;
def : Pat<(cstore GPR32:$Rt, (cro_Xindexed32 Capsp:$Rn, GPR64:$Rm,
                                             ro_Xextend32:$extend)),
          (AltStoreSWordRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm,
                                ro_Xextend32:$extend)>;
def : Pat<(cstore GPR64:$Rt, (cro_Windexed64 Capsp:$Rn, GPR32:$Rm,
                                              ro_Wextend64:$extend)),
          (AltStoreDWordRegExtW GPR64:$Rt, Capsp:$Rn, GPR32:$Rm,
                                ro_Wextend64:$extend)>;
def : Pat<(cstore GPR64:$Rt, (cro_Xindexed64 Capsp:$Rn, GPR64:$Rm,
                                             ro_Xextend64:$extend)),
          (AltStoreDWordRegExtX GPR64:$Rt, Capsp:$Rn, GPR64:$Rm,
                                ro_Xextend64:$extend)>;
// Single FP stores
def : Pat<(cstore (f32 FPR32:$Rt), (cro_Windexed32 Capsp:$Rn, GPR32:$Rm,
                                                    ro_Wextend32:$extend)),
          (AltStoreSFPRegExtW FPR32:$Rt, Capsp:$Rn, GPR32:$Rm,
                              ro_Wextend32:$extend)>;
def : Pat<(cstore (f32 FPR32:$Rt), (cro_Xindexed32 Capsp:$Rn, GPR64:$Rm,
                                                    ro_Xextend32:$extend)),
          (AltStoreSFPRegExtX FPR32:$Rt, Capsp:$Rn, GPR64:$Rm,
                              ro_Xextend32:$extend)>;
// Truncating stores
def : Pat<(trunccstorei8 GPR32:$Rt, (cro_Windexed8 Capsp:$Rn, GPR32:$Rm,
                                              ro_Wextend8:$extend)),
          (AltStoreByteRegExtW GPR32:$Rt, Capsp:$Rn, GPR32:$Rm,
                                ro_Wextend8:$extend)>;
def : Pat<(trunccstorei8 GPR32:$Rt, (cro_Xindexed8 Capsp:$Rn, GPR64:$Rm,
                                             ro_Xextend8:$extend)),
          (AltStoreByteRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm,
                                ro_Xextend8:$extend)>;
def : Pat<(trunccstorei16 GPR32:$Rt, (cro_Windexed16 Capsp:$Rn, GPR32:$Rm,
                                      ro_Wextend16:$extend)),
          (AltStoreHalfwordRegExtW GPR32:$Rt, Capsp:$Rn, GPR32:$Rm,
                                   ro_Wextend16:$extend)>;
def : Pat<(trunccstorei16 GPR32:$Rt, (cro_Xindexed16 Capsp:$Rn, GPR64:$Rm,
                                             ro_Xextend16:$extend)),
          (AltStoreHalfwordRegExtX GPR32:$Rt, Capsp:$Rn, GPR64:$Rm,
                                   ro_Xextend16:$extend)>;
} // AddedComplexity = 3
} // Predicates = [HasMorello, HasNotC64]

// Double FP loads and stores
multiclass AltRegExtDoubleFPPat<ValueType type> {
  def : Pat<(type (cload (cro_Windexed64 Capsp:$Rn, GPR32:$Rm,
                                         ro_Wextend64:$extend))),
            (AltLoadDFPRegExtW Capsp:$Rn, GPR32:$Rm, ro_Wextend64:$extend)>;
  def : Pat<(type (cload (cro_Xindexed64 Capsp:$Rn, GPR64:$Rm,
                                         ro_Xextend64:$extend))),
            (AltLoadDFPRegExtX Capsp:$Rn, GPR64:$Rm, ro_Xextend64:$extend)>;
  def : Pat<(cstore (type FPR64:$Rt), (cro_Windexed64 Capsp:$Rn, GPR32:$Rm,
                                               ro_Wextend64:$extend)),
            (AltStoreDFPRegExtW FPR64:$Rt, Capsp:$Rn, GPR32:$Rm,
                                ro_Wextend64:$extend)>;
  def : Pat<(cstore (type FPR64:$Rt), (cro_Xindexed64 Capsp:$Rn, GPR64:$Rm,
                                               ro_Xextend64:$extend)),
            (AltStoreDFPRegExtX FPR64:$Rt, Capsp:$Rn, GPR64:$Rm,
                                ro_Xextend64:$extend)>;
}

let Predicates = [HasMorello, HasNotC64] in {
  defm vf32DoublePats  : AltRegExtDoubleFPPat<v2f32>;
  defm v8i8DoublePats  : AltRegExtDoubleFPPat<v8i8>;
  defm v4i16DoublePats : AltRegExtDoubleFPPat<v4i16>;
  defm v2i32DoublePats : AltRegExtDoubleFPPat<v2i32>;
  defm f64DoublePats   : AltRegExtDoubleFPPat<f64>;
}

def SDT_AArch64CapAlign : SDTypeProfile<1, 2,
                                             [SDTCisFatPtrTy<0>,
                                              SDTCisFatPtrTy<1>,
                                              SDTCisVT<2, i64>]>;

def AArch64aligndown : SDNode<"AArch64ISD::CapAlignDown", SDT_AArch64CapAlign>;
def AArch64alignup : SDNode<"AArch64ISD::CapAlignUp", SDT_AArch64CapAlign>;

let Predicates = [HasMorello] in {
def : Pat<(AArch64aligndown Capsp:$Cn, uimm6:$imm),
          (CapAlignDown Capsp:$Cn, uimm6:$imm)>;
def : Pat<(AArch64alignup Capsp:$Cn, uimm6:$imm),
          (CapAlignUp Capsp:$Cn, uimm6:$imm)>;
}

//===----------------------------------
// Atomic loads
//===----------------------------------

let Predicates = [HasMorello, HasNotC64] in {
def : Pat<(relaxed_load<atomic_load_cap>
               (am_indexed128 GPR64sp:$Rn, uimm12s16:$offset)),
          (CapLoadImmPre GPR64sp:$Rn, uimm12s16:$offset)>;
def : Pat<(ldxr_fatptr GPR64sp:$addr), (CapLoadEx GPR64sp:$addr)>;
def : Pat<(ldaxr_fatptr GPR64sp:$addr), (CapLoadExAcq GPR64sp:$addr)>;
def : Pat<(acquiring_load<atomic_load_cap>  GPR64sp:$ptr),
          (CapLoadAcq GPR64sp:$ptr)>;

// Alternate base patterns.
def : Pat<(acquiring_load<atomic_cload_8>  Capsp:$ptr),
          (AltLoadByteAcq Capsp:$ptr)>;
def : Pat<(relaxed_load<atomic_cload_8>
               (am_cunscaled Capsp:$Cn, simm9:$offset)),
          (AltLoadByteImmUnscaled Capsp:$Cn, simm9:$offset)>;

def : Pat<(relaxed_load<atomic_cload_16>
               (am_cunscaled Capsp:$Cn, simm9:$offset)),
          (AltLoadHalfImmUnscaled Capsp:$Cn, simm9:$offset)>;

def : Pat<(acquiring_load<atomic_cload_32> Capsp:$ptr),
          (AltLoadWordAcq Capsp:$ptr)>;
def : Pat<(relaxed_load<atomic_cload_32>
               (am_cunscaled Capsp:$Cn, simm9:$offset)),
          (AltLoadWordImmUnscaled Capsp:$Cn, simm9:$offset)>;

def : Pat<(relaxed_load<atomic_cload_64>
               (am_cunscaled Capsp:$Cn, simm9:$offset)),
          (AltLoadDWordImmUnscaled Capsp:$Cn, simm9:$offset)>;

def : Pat<(acquiring_load<atomic_cload_cap> Capsp:$ptr), (AltCapLoadAcq Capsp:$ptr)>;
def : Pat<(relaxed_load<atomic_cload_cap>
               (am_cunscaled128_8 Capsp:$Cn, simm9:$offset)),
          (AltLoadCapabilityImmUnscaled Capsp:$Cn, simm9:$offset)>;
}

//===----------------------------------
// Atomic stores
//===----------------------------------

let Predicates = [HasMorello, HasNotC64] in {
def : Pat<(stxr_fatptr Cap:$val, GPR64sp:$addr),
          (CapStoreEx Cap:$val, GPR64sp:$addr)>;
def : Pat<(stlxr_fatptr Cap:$val, GPR64sp:$addr),
          (CapStoreExRel Cap:$val, GPR64sp:$addr)>;
def : Pat<(relaxed_store<atomic_store_cap>
               (am_indexed128 GPR64sp:$Rn, uimm12s16:$offset), Cap:$val),
          (CapStoreImmPre Cap:$val, GPR64sp:$Rn, uimm12s16:$offset)>;
def : Pat<(releasing_store<atomic_store_cap> GPR64sp:$ptr, Cap:$val),
          (CapStoreRel Cap:$val, GPR64sp:$ptr)>;

def : Pat<(relaxed_store<atomic_cstore_8>
               (am_cunscaled Capsp:$Cn, simm9:$offset), GPR32:$val),
          (AltStoreByteImmUnscaled GPR32:$val, Capsp:$Cn, simm9:$offset)>;
def : Pat<(releasing_store<atomic_cstore_8> Capsp:$ptr, GPR32:$val),
          (AltStoreByteRel GPR32:$val, Capsp:$ptr)>;

def : Pat<(relaxed_store<atomic_cstore_16>
               (am_cunscaled Capsp:$Cn, simm9:$offset), GPR32:$val),
          (AltStoreHalfImmUnscaled GPR32:$val, Capsp:$Cn, simm9:$offset)>;

def : Pat<(releasing_store<atomic_cstore_32> Capsp:$ptr, GPR32:$val),
          (AltStoreWordRel GPR32:$val, Capsp:$ptr)>;
def : Pat<(relaxed_store<atomic_cstore_32>
               (am_cunscaled Capsp:$Cn, simm9:$offset), GPR32:$val),
          (AltStoreWordImmUnscaled GPR32:$val, Capsp:$Cn, simm9:$offset)>;

def : Pat<(relaxed_store<atomic_cstore_64>
               (am_cunscaled Capsp:$Cn, simm9:$offset), GPR64:$val),
          (AltStoreDWordImmUnscaled GPR64:$val, Capsp:$Cn, simm9:$offset)>;

def : Pat<(releasing_store<atomic_cstore_cap> Capsp:$ptr, Capsp:$val),
          (AltCapStoreRel Capsp:$val, Capsp:$ptr)>;
def : Pat<(relaxed_store<atomic_cstore_cap>
               (am_cunscaled Capsp:$Cn, simm9:$offset), Capsp:$val),
          (AltStoreCapabilityImmUnscaled Capsp:$val, Capsp:$Cn,
                                         simm9:$offset)>;
}

let Predicates = [HasMorello, HasNotC64] in {
  defm : CapCASPatterns<"CapCompareSwap", "atomic_cmp_swap_cap", GPR64sp>;
  defm : CapSWPPatterns<"CapSwap", "atomic_swap_cap", GPR64sp>;
}
