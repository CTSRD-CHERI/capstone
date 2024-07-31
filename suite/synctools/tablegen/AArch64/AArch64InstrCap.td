//==- AArch64InstrCap.td - Capability specific definitions -*- tablegen -*--==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//==------------------------------------------------------------------------==//
//
// AArch64 Capability Specific Definitions.
//
//==------------------------------------------------------------------------==//

def AArch64desccall         : SDNode<"AArch64ISD::CCALL",
                                SDTypeProfile<0, -1, [SDTCisFatPtrTy<0>]>,
                                [SDNPHasChain, SDNPOptInGlue, SDNPOutGlue,
                                 SDNPVariadic]>;

let isCall = 1, Defs = [LR], Uses = [SP] in {
  def CBranchLinkClear : Pseudo<(outs), (ins Cap:$Cn), []>;
  def CFnDescBranchLink : Pseudo<(outs), (ins Cap:$Cn), []>;
  def CFnDescBranchLinkClear : Pseudo<(outs), (ins Cap:$Cn), []>;
}

let isBarrier = 1, isReturn = 1, isTerminator = 1 in {
  def CRET_ReallyLR : Pseudo<(outs), (ins),
                             [(AArch64cretflag)]>;
  def CRET_ReallyLRClear : Pseudo<(outs), (ins),
                                  [(AArch64cretflagclear)]>;
  def RET_ReallyLRClear : Pseudo<(outs), (ins),
                                 [(AArch64retflagclear)]>;
}

let isCall = 1, isTerminator = 1, isReturn = 1,
    isBarrier = 1, Uses = [SP] in {
  def CTCRETURNr : Pseudo<(outs), (ins tcCap:$dst, i32imm:$FPDiff), []>;
  def ClearCTCRETURNr : Pseudo<(outs), (ins tcCap:$dst, i32imm:$FPDiff), []>;

  def CTCRETURNDescr : Pseudo<(outs), (ins tcCapDesc:$dst, i32imm:$FPDiff), []>;
  def ClearCTCRETURNDescr : Pseudo<(outs), (ins tcCapDesc:$dst, i32imm:$FPDiff), []>;
}

let hasSideEffects = 1 in {
  def BaseRegSetup : Pseudo<(outs), (ins Cap:$src), []>;
  def BaseRegRestore : Pseudo<(outs), (ins), []>;
}

let isCall = 1, Defs = [LR], Uses = [SP] in {
def DescBL : Pseudo<(outs), (ins i64imm:$addr), []>;
} // isCall

// This models the case where DDC is assumed to be time invariant, like when we
// need to construct a capability from global variable address.
let mayLoad = 0, hasSideEffects = 0, mayStore = 0 in
def GetDDC : Pseudo<(outs Cap:$dst), (ins), []>;

let Predicates = [HasC64], isReMaterializable = 1, isCodeGenOnly = 1 in {
def CMOVaddr
    : Pseudo<(outs Cap:$dst), (ins i64imm:$hi, i64imm:$low),
             [(set Cap:$dst, (AArch64caddlow (AArch64cadrp tglobaladdr:$hi),
                                              tglobaladdr:$low))]>,
      Sched<[WriteAdrAdr]>;
def CMOVaddrJT
    : Pseudo<(outs Cap:$dst), (ins i64imm:$hi, i64imm:$low),
             [(set Cap:$dst, (AArch64caddlow (AArch64cadrp tjumptable:$hi),
                                               tjumptable:$low))]>,
      Sched<[WriteAdrAdr]>;
def CMOVaddrCP
    : Pseudo<(outs Cap:$dst), (ins i64imm:$hi, i64imm:$low),
             [(set Cap:$dst, (AArch64caddlow (AArch64cadrp tconstpool:$hi),
                                               tconstpool:$low))]>,
      Sched<[WriteAdrAdr]>;
def CMOVaddrBA
    : Pseudo<(outs Cap:$dst), (ins i64imm:$hi, i64imm:$low),
             [(set Cap:$dst, (AArch64caddlow (AArch64cadrp tblockaddress:$hi),
                                               tblockaddress:$low))]>,
      Sched<[WriteAdrAdr]>;
def CMOVaddrTLS
    : Pseudo<(outs Cap:$dst), (ins i64imm:$hi, i64imm:$low),
             [(set Cap:$dst, (AArch64caddlow (AArch64cadrp tglobaltlsaddr:$hi),
                                               tglobaltlsaddr:$low))]>,
      Sched<[WriteAdrAdr]>;
def CMOVaddrEXT
    : Pseudo<(outs Cap:$dst), (ins i64imm:$hi, i64imm:$low),
             [(set Cap:$dst, (AArch64caddlow (AArch64cadrp texternalsym:$hi),
                                               texternalsym:$low))]>,
      Sched<[WriteAdrAdr]>;

def CAdr : Pseudo<(outs Cap:$dst), (ins adrlabel:$label), []>;
def CAdrp : Pseudo<(outs Cap:$dst), (ins adrlabel:$label),
                   [(set Cap:$dst,(AArch64cadrp tglobaladdr:$label))]>;
}

let Predicates = [HasC64] in {
  def : Pat<(AArch64cadrp tjumptable:$cp), (CAdrp tjumptable:$cp)>;
  def : Pat<(AArch64cadrp tconstpool:$cp), (CAdrp tconstpool:$cp)>;
  def : Pat<(AArch64cadrp tblockaddress:$cp), (CAdrp tblockaddress:$cp)>;
  def : Pat<(AArch64cadrp tglobaltlsaddr:$cp), (CAdrp tglobaltlsaddr:$cp)>;
  def : Pat<(AArch64cadrp texternalsym:$cp), (CAdrp texternalsym:$cp)>;
}

// NB: Not adjusted for C64 - see AArch64TargetLowering::LowerBR_JT
let Size = 12, Constraints = "@earlyclobber $dst,@earlyclobber $scratch" in {
def MCJumpTableDest32 : Pseudo<(outs Cap:$dst, GPR64sp:$scratch),
                               (ins Cap:$table, GPR64:$entry, i32imm:$jti), []>,
                        Sched<[]>;
def MCJumpTableDest16 : Pseudo<(outs Cap:$dst, GPR64sp:$scratch),
                               (ins Cap:$table, GPR64:$entry, i32imm:$jti), []>,
                        Sched<[]>;
def MCJumpTableDest8 : Pseudo<(outs Cap:$dst, GPR64sp:$scratch),
                              (ins Cap:$table, GPR64:$entry, i32imm:$jti), []>,
                       Sched<[]>;
}

def ldxr_fatptr : PatFrag<(ops node:$ptr), (int_aarch64_cldxr node:$ptr), [{
  return cast<MemIntrinsicSDNode>(N)->getMemoryVT() == MVT::iFATPTR128;
}]>;

def ldaxr_fatptr : PatFrag<(ops node:$ptr), (int_aarch64_cldaxr node:$ptr), [{
  return cast<MemIntrinsicSDNode>(N)->getMemoryVT() == MVT::iFATPTR128;
}]>;

def stxr_fatptr : PatFrag<(ops node:$val, node:$ptr),
                     (int_aarch64_cstxr node:$val, node:$ptr), [{
  return cast<MemIntrinsicSDNode>(N)->getMemoryVT() == MVT::iFATPTR128;
}]>;

def stlxr_fatptr : PatFrag<(ops node:$val, node:$ptr),
                     (int_aarch64_cstlxr node:$val, node:$ptr), [{
  return cast<MemIntrinsicSDNode>(N)->getMemoryVT() == MVT::iFATPTR128;
}]>;

//===------------------------------------
// Atomic infrastructure for capabilities
//===------------------------------------

def SDTCAtomicCap3 : SDTypeProfile<1, 3, [
  SDTCisSameAs<0,2>,  SDTCisSameAs<0,3>, SDTCisFatPtrTy<0>, SDTCisFatPtrTy<1>
]>;
def SDTCAtomicCap2 : SDTypeProfile<1, 2, [
  SDTCisSameAs<0,2>, SDTCisFatPtrTy<0>, SDTCisFatPtrTy<1>
]>;

def atomic_cload_add : SDNode<"ISD::ATOMIC_LOAD_ADD" , SDTCAtomic2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cload_or  : SDNode<"ISD::ATOMIC_LOAD_OR" , SDTCAtomic2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cload_clr : SDNode<"ISD::ATOMIC_LOAD_CLR" , SDTCAtomic2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cload_xor : SDNode<"ISD::ATOMIC_LOAD_XOR" , SDTCAtomic2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cload_min : SDNode<"ISD::ATOMIC_LOAD_MIN", SDTCAtomic2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cload_max : SDNode<"ISD::ATOMIC_LOAD_MAX", SDTCAtomic2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cload_umin : SDNode<"ISD::ATOMIC_LOAD_UMIN", SDTCAtomic2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cload_umax : SDNode<"ISD::ATOMIC_LOAD_UMAX", SDTCAtomic2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cswap     : SDNode<"ISD::ATOMIC_SWAP", SDTCAtomic2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cmp_cswap : SDNode<"ISD::ATOMIC_CMP_SWAP" , SDTCAtomic3,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cload     : SDNode<"ISD::ATOMIC_LOAD", SDTCAtomicLoad,
                    [SDNPHasChain, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cstore    : SDNode<"ISD::ATOMIC_STORE", SDTCAtomicStore,
                    [SDNPHasChain, SDNPMayStore, SDNPMemOperand]>;
def atomic_cap_cload     : SDNode<"ISD::ATOMIC_LOAD", SDTCAtomicCLoad,
                    [SDNPHasChain, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cap_load     : SDNode<"ISD::ATOMIC_LOAD", SDTCCAtomicLoad,
                    [SDNPHasChain, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cap_cstore    : SDNode<"ISD::ATOMIC_STORE", SDTCAtomicCStore,
                    [SDNPHasChain, SDNPMayStore, SDNPMemOperand]>;
def atomic_cap_store    : SDNode<"ISD::ATOMIC_STORE", SDTCCAtomicStore,
                    [SDNPHasChain, SDNPMayStore, SDNPMemOperand]>;
def atomic_cmp_cswap_cap : SDNode<"ISD::ATOMIC_CMP_SWAP" , SDTCAtomicCap3,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;
def atomic_cswap_cap     : SDNode<"ISD::ATOMIC_SWAP", SDTCAtomicCap2,
                    [SDNPHasChain, SDNPMayStore, SDNPMayLoad, SDNPMemOperand]>;

def atomic_cload_8 :
  PatFrag<(ops node:$ptr),
          (atomic_cload node:$ptr), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
}]>;
def atomic_cload_16 :
  PatFrag<(ops node:$ptr),
          (atomic_cload node:$ptr), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
}]>;
def atomic_cload_32 :
  PatFrag<(ops node:$ptr),
          (atomic_cload node:$ptr), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
}]>;
def atomic_cload_64 :
  PatFrag<(ops node:$ptr),
          (atomic_cload node:$ptr), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
}]>;

def atomic_cload_cap :
  PatFrag<(ops node:$ptr),
          (atomic_cap_cload node:$ptr), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT().isFatPointer();
}]>;

def atomic_cstore_8 :
  PatFrag<(ops node:$ptr, node:$val),
          (atomic_cstore node:$ptr, node:$val), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
}]>;
def atomic_cstore_16 :
  PatFrag<(ops node:$ptr, node:$val),
          (atomic_cstore node:$ptr, node:$val), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
}]>;
def atomic_cstore_32 :
  PatFrag<(ops node:$ptr, node:$val),
          (atomic_cstore node:$ptr, node:$val), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
}]>;
def atomic_cstore_64 :
  PatFrag<(ops node:$ptr, node:$val),
          (atomic_cstore node:$ptr, node:$val), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
}]>;

def atomic_cstore_cap :
  PatFrag<(ops node:$ptr, node:$val),
          (atomic_cap_cstore node:$ptr, node:$val), [{
  return accessesMemoryViaCapability(N) &&
         cast<AtomicSDNode>(N)->getMemoryVT().isFatPointer();
}]>;

defm atomic_cload_add  : binary_atomic_op<atomic_cload_add>;
defm atomic_cload_or   : binary_atomic_op<atomic_cload_or>;
defm atomic_cload_xor  : binary_atomic_op<atomic_cload_xor>;
defm atomic_cload_clr  : binary_atomic_op<atomic_cload_clr>;
defm atomic_cload_max  : binary_atomic_op<atomic_cload_max>;
defm atomic_cload_min  : binary_atomic_op<atomic_cload_min>;
defm atomic_cload_umax : binary_atomic_op<atomic_cload_umax>;
defm atomic_cload_umin : binary_atomic_op<atomic_cload_umin>;
defm atomic_cswap      : binary_atomic_op<atomic_cswap>;
defm atomic_cmp_cswap  : ternary_atomic_op<atomic_cmp_cswap>;
defm atomic_cmp_cswap_cap  : ternary_atomic_op_ord;
defm atomic_cswap_cap  : binary_atomic_op_ord;

//===----------------------------------
// Atomic cmpxchg for -O0
//===----------------------------------

let Constraints = "@earlyclobber $Rd,@earlyclobber $scratch",
    mayLoad = 1, mayStore = 1 in {
def CMP_SWAP_CAP_8 : Pseudo<(outs GPR32:$Rd, GPR32:$scratch),
                            (ins Cap:$addr, GPR32:$desired, GPR32:$new), []>,
                     Sched<[WriteAtomic]>;

def CMP_SWAP_CAP_16 : Pseudo<(outs GPR32:$Rd, GPR32:$scratch),
                             (ins Cap:$addr, GPR32:$desired, GPR32:$new), []>,
                      Sched<[WriteAtomic]>;

def CMP_SWAP_CAP_32 : Pseudo<(outs GPR32:$Rd, GPR32:$scratch),
                             (ins Cap:$addr, GPR32:$desired, GPR32:$new), []>,
                      Sched<[WriteAtomic]>;

def CMP_SWAP_CAP_64 : Pseudo<(outs GPR64:$Rd, GPR32:$scratch),
                             (ins Cap:$addr, GPR64:$desired, GPR64:$new), []>,
                      Sched<[WriteAtomic]>;

def CMP_SWAP_FATPTR : Pseudo<(outs Cap:$Rd, GPR32:$scratch),
                             (ins GPR64:$addr, Cap:$desired, Cap:$new), []>,
                      Sched<[WriteAtomic]>;

def CMP_SWAP_CAP_FATPTR : Pseudo<(outs Cap:$Rd, GPR32:$scratch),
                                 (ins Cap:$addr, Cap:$desired, Cap:$new), []>,
                          Sched<[WriteAtomic]>;
}

let Constraints = "@earlyclobber $RdLo,@earlyclobber $RdHi,@earlyclobber $scratch",
    mayLoad = 1, mayStore = 1 in {
class cmp_swap_cap_128 : Pseudo<(outs GPR64:$RdLo, GPR64:$RdHi, GPR32common:$scratch),
                                (ins Cap:$addr, GPR64:$desiredLo, GPR64:$desiredHi,
                                     GPR64:$newLo, GPR64:$newHi), []>,
                       Sched<[WriteAtomic]>;
def CMP_SWAP_CAP_128 : cmp_swap_cap_128;
def CMP_SWAP_CAP_128_RELEASE : cmp_swap_cap_128;
def CMP_SWAP_CAP_128_ACQUIRE : cmp_swap_cap_128;
def CMP_SWAP_CAP_128_MONOTONIC : cmp_swap_cap_128;
}
