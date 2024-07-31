//===- AArch64InstrFormatsC64.td - C64 Instruction Formats -*- tablegen -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// Some capability-specific SDNodes. These are in fact CHERI-specific,
// so we should share them at some point.
def CapTagGet    : SDNode<"AArch64ISD::CapTagGet",    SDTFatPtrToInt>;
def CapSealedGet : SDNode<"AArch64ISD::CapSealedGet", SDTFatPtrToInt>;

def SDTCapUnary : SDTypeProfile<1, 2, [
  SDTCisFatPtrTy<0>, SDTCisFatPtrTy<1>, SDTCisInt<2>
]>;

def ClearPerms  : SDNode<"AArch64ISD::ClearPerms",    SDTCapUnary>;

let Predicates = [HasC64] in {

multiclass PLoadUI<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                  Operand indextype, string asm, list<dag> pattern> {
  let AddedComplexity = 10, mayLoad = 1, mayStore = 0, hasSideEffects = 0 in
  def ui : BaseLoadStoreUI<sz, V, opc, (outs regtype:$Rt),
                           (ins Capsp:$Rn, indextype:$offset),
                           asm, pattern>,
           Sched<[WriteLD]>{
      let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, [$Rn]",
                  (!cast<Instruction>(NAME # "ui") regtype:$Rt, Capsp:$Rn, 0)>;

}
multiclass PStoreUI<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
             Operand indextype, string asm, list<dag> pattern> {
  let AddedComplexity = 10, mayLoad = 0, mayStore = 1, hasSideEffects = 0 in
  def ui : BaseLoadStoreUI<sz, V, opc, (outs),
                           (ins regtype:$Rt, Capsp:$Rn, indextype:$offset),
                           asm, pattern>,
           Sched<[WriteST]> {
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, [$Rn]",
                  (!cast<Instruction>(NAME # "ui") regtype:$Rt, Capsp:$Rn, 0)>,
        Requires<[HasC64]>;
}

let mayLoad = 0, mayStore = 0, hasSideEffects = 1 in
class PPrefetchUI<bits<2> sz, bit V, bits<2> opc, string asm, list<dag> pat>
    : BaseLoadStoreUI<sz, V, opc,
                      (outs), (ins prfop:$Rt, Capsp:$Rn, uimm12s8:$offset),
                      asm, pat>,
      Sched<[WriteLD]> {
  let DecoderNamespace = "AArch64C64";
}

class PROInstAlias<string asm, DAGOperand regtype, Instruction INST>
  : InstAlias<asm # "\t$Rt, [$Rn, $Rm]",
              (INST regtype:$Rt, Capsp:$Rn, GPR64:$Rm, 0, 0)>;

multiclass PLoad8RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                   string asm, ValueType Ty, SDPatternOperator loadop> {
  let AddedComplexity = 10 in
  def roW : LoadStore8RO<sz, V, opc, asm,
                 (outs regtype:$Rt),
                 (ins Capsp:$Rn, GPR32:$Rm, ro_Wextend8:$extend),
                 [(set (Ty regtype:$Rt),
                       (loadop (cro_Windexed8 Capsp:$Rn, GPR32:$Rm,
                                              ro_Wextend8:$extend)))]>,
           Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10 in
  def roX : LoadStore8RO<sz, V, opc, asm,
                 (outs regtype:$Rt),
                 (ins Capsp:$Rn, GPR64:$Rm, ro_Xextend8:$extend),
                 [(set (Ty regtype:$Rt),
                       (loadop (cro_Xindexed8 Capsp:$Rn, GPR64:$Rm,
                                              ro_Xextend8:$extend)))]>,
           Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}

multiclass PStore8RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                     string asm, ValueType Ty, SDPatternOperator storeop> {
  let AddedComplexity = 10 in
  def roW : LoadStore8RO<sz, V, opc, asm, (outs),
                 (ins regtype:$Rt, Capsp:$Rn, GPR32:$Rm, ro_Wextend8:$extend),
                 [(storeop (Ty regtype:$Rt),
                           (cro_Windexed8 Capsp:$Rn, GPR32:$Rm,
                                         ro_Wextend8:$extend))]>,
            Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10 in
  def roX : LoadStore8RO<sz, V, opc, asm, (outs),
                 (ins regtype:$Rt, Capsp:$Rn, GPR64:$Rm, ro_Xextend8:$extend),
                 [(storeop (Ty regtype:$Rt),
                           (cro_Xindexed8 Capsp:$Rn, GPR64:$Rm,
                                         ro_Xextend8:$extend))]>,
            Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}

multiclass PLoad16RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                     string asm, ValueType Ty, SDPatternOperator loadop> {
  let AddedComplexity = 10 in
  def roW : LoadStore16RO<sz, V, opc, asm, (outs regtype:$Rt),
                 (ins Capsp:$Rn, GPR32:$Rm, ro_Wextend16:$extend),
                 [(set (Ty regtype:$Rt),
                       (loadop (cro_Windexed16 Capsp:$Rn, GPR32:$Rm,
                                               ro_Wextend16:$extend)))]>,
            Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10 in
  def roX : LoadStore16RO<sz, V, opc, asm, (outs regtype:$Rt),
                 (ins Capsp:$Rn, GPR64:$Rm, ro_Xextend16:$extend),
                 [(set (Ty regtype:$Rt),
                       (loadop (cro_Xindexed16 Capsp:$Rn, GPR64:$Rm,
                                               ro_Xextend16:$extend)))]>,
            Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}

multiclass PStore16RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                      string asm, ValueType Ty, SDPatternOperator storeop> {
  let AddedComplexity = 10 in
  def roW : LoadStore16RO<sz, V, opc,  asm, (outs),
                (ins regtype:$Rt, Capsp:$Rn, GPR32:$Rm, ro_Wextend16:$extend),
                [(storeop (Ty regtype:$Rt),
                          (cro_Windexed16 Capsp:$Rn, GPR32:$Rm,
                                          ro_Wextend16:$extend))]>,
           Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10 in
  def roX : LoadStore16RO<sz, V, opc, asm, (outs),
                (ins regtype:$Rt, Capsp:$Rn, GPR64:$Rm, ro_Xextend16:$extend),
                [(storeop (Ty regtype:$Rt),
                          (cro_Xindexed16 Capsp:$Rn, GPR64:$Rm,
                                          ro_Xextend16:$extend))]>,
           Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}
multiclass PLoad32RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                     string asm, ValueType Ty, SDPatternOperator loadop> {
  let AddedComplexity = 10 in
  def roW : LoadStore32RO<sz, V, opc, asm, (outs regtype:$Rt),
                 (ins Capsp:$Rn, GPR32:$Rm, ro_Wextend32:$extend),
                 [(set (Ty regtype:$Rt),
                       (loadop (cro_Windexed32 Capsp:$Rn, GPR32:$Rm,
                                               ro_Wextend32:$extend)))]>,
           Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10 in
  def roX : LoadStore32RO<sz, V, opc, asm, (outs regtype:$Rt),
                 (ins Capsp:$Rn, GPR64:$Rm, ro_Xextend32:$extend),
                 [(set (Ty regtype:$Rt),
                       (loadop (cro_Xindexed32 Capsp:$Rn, GPR64:$Rm,
                                               ro_Xextend32:$extend)))]>,
           Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}
multiclass PStore32RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                      string asm, ValueType Ty, SDPatternOperator storeop> {
  let AddedComplexity = 10 in
  def roW : LoadStore32RO<sz, V, opc, asm, (outs),
                (ins regtype:$Rt, Capsp:$Rn, GPR32:$Rm, ro_Wextend32:$extend),
                [(storeop (Ty regtype:$Rt),
                          (cro_Windexed32 Capsp:$Rn, GPR32:$Rm,
                                          ro_Wextend32:$extend))]>,
            Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10 in
  def roX : LoadStore32RO<sz, V, opc, asm, (outs),
                (ins regtype:$Rt, Capsp:$Rn, GPR64:$Rm, ro_Xextend32:$extend),
                [(storeop (Ty regtype:$Rt),
                          (cro_Xindexed32 Capsp:$Rn, GPR64:$Rm,
                                          ro_Xextend32:$extend))]>,
            Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}

multiclass PLoad64RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                     string asm, ValueType Ty, SDPatternOperator loadop> {
  let AddedComplexity = 10, mayLoad = 1, mayStore = 0, hasSideEffects = 0 in
  def roW : LoadStore64RO<sz, V, opc, asm, (outs regtype:$Rt),
                (ins Capsp:$Rn, GPR32:$Rm, ro_Wextend64:$extend),
                [(set (Ty regtype:$Rt),
                      (loadop (cro_Windexed64 Capsp:$Rn, GPR32:$Rm,
                                              ro_Wextend64:$extend)))]>,
           Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10, mayLoad = 1, mayStore = 0, hasSideEffects = 0 in
  def roX : LoadStore64RO<sz, V, opc, asm, (outs regtype:$Rt),
                (ins Capsp:$Rn, GPR64:$Rm, ro_Xextend64:$extend),
                 [(set (Ty regtype:$Rt),
                       (loadop (cro_Xindexed64 Capsp:$Rn, GPR64:$Rm,
                                               ro_Xextend64:$extend)))]>,
           Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}

multiclass PStore64RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                     string asm, ValueType Ty, SDPatternOperator storeop> {
  let AddedComplexity = 10, mayLoad = 0, mayStore = 1, hasSideEffects = 0 in
  def roW : LoadStore64RO<sz, V, opc, asm, (outs),
                (ins regtype:$Rt, Capsp:$Rn, GPR32:$Rm, ro_Wextend64:$extend),
                [(storeop (Ty regtype:$Rt),
                          (cro_Windexed64 Capsp:$Rn, GPR32:$Rm,
                                         ro_Wextend64:$extend))]>,
            Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10, mayLoad = 0, mayStore = 1, hasSideEffects = 0 in
  def roX : LoadStore64RO<sz, V, opc, asm, (outs),
                (ins regtype:$Rt, Capsp:$Rn, GPR64:$Rm, ro_Xextend64:$extend),
                [(storeop (Ty regtype:$Rt),
                          (cro_Xindexed64 Capsp:$Rn, GPR64:$Rm,
                                          ro_Xextend64:$extend))]>,
            Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}

multiclass PLoad128RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                      string asm, ValueType Ty, SDPatternOperator loadop> {
  let AddedComplexity = 10, mayLoad = 1, mayStore = 0, hasSideEffects = 0 in
  def roW : LoadStore128RO<sz, V, opc, asm, (outs regtype:$Rt),
                (ins Capsp:$Rn, GPR32:$Rm, ro_Wextend128:$extend),
                 [(set (Ty regtype:$Rt),
                       (loadop (cro_Windexed128 Capsp:$Rn, GPR32:$Rm,
                                                ro_Wextend128:$extend)))]>,
            Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10, mayLoad = 1, mayStore = 0, hasSideEffects = 0 in
  def roX : LoadStore128RO<sz, V, opc, asm, (outs regtype:$Rt),
                (ins Capsp:$Rn, GPR64:$Rm, ro_Xextend128:$extend),
                 [(set (Ty regtype:$Rt),
                       (loadop (cro_Xindexed128 Capsp:$Rn, GPR64:$Rm,
                                                ro_Xextend128:$extend)))]>,
            Sched<[WriteLDIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}
multiclass PStore128RO<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                       string asm, ValueType Ty, SDPatternOperator storeop> {
  let AddedComplexity = 10, mayLoad = 0, mayStore = 1, hasSideEffects = 0 in
  def roW : LoadStore128RO<sz, V, opc, asm, (outs),
               (ins regtype:$Rt, Capsp:$Rn, GPR32:$Rm, ro_Wextend128:$extend),
                [(storeop (Ty regtype:$Rt),
                          (cro_Windexed128 Capsp:$Rn, GPR32:$Rm,
                                           ro_Wextend128:$extend))]>,
            Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  let AddedComplexity = 10, mayLoad = 0, mayStore = 1, hasSideEffects = 0 in
  def roX : LoadStore128RO<sz, V, opc, asm, (outs),
               (ins regtype:$Rt, Capsp:$Rn, GPR64:$Rm, ro_Xextend128:$extend),
                [(storeop (Ty regtype:$Rt),
                          (cro_Xindexed128 Capsp:$Rn, GPR64:$Rm,
                                           ro_Xextend128:$extend))]>,
            Sched<[WriteSTIdx, ReadAdrBase]> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : PROInstAlias<asm, regtype, !cast<Instruction>(NAME # "roX")>;
}

multiclass PPrefetchRO<bits<2> sz, bit V, bits<2> opc, string asm> {
  def roW : BasePrefetchRO<sz, V, opc, (outs),
                (ins prfop:$Rt, Capsp:$Rn, GPR32:$Rm, ro_Wextend64:$extend),
                asm, []> {
    let Inst{13} = 0b0;
    let DecoderNamespace = "AArch64C64";
  }

  def roX : BasePrefetchRO<sz, V, opc, (outs),
                (ins prfop:$Rt, Capsp:$Rn, GPR64:$Rm, ro_Xextend64:$extend),
                asm,  []> {
    let Inst{13} = 0b1;
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<"prfm $Rt, [$Rn, $Rm]",
               (!cast<Instruction>(NAME # "roX") prfop:$Rt,
                                                 Capsp:$Rn, GPR64:$Rm, 0, 0)>;
}

multiclass PLoadUnscaled<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                         string asm, list<dag> pattern> {
  let AddedComplexity = 1 in // try this before LoadUI
  def i : BaseLoadStoreUnscale<sz, V, opc, (outs regtype:$Rt),
                               (ins Capsp:$Rn, simm9:$offset), asm, pattern>,
          Sched<[WriteLD]> {
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, [$Rn]",
                  (!cast<Instruction>(NAME # "i") regtype:$Rt, Capsp:$Rn, 0)>;
}
multiclass PStoreUnscaled<bits<2> sz, bit V, bits<2> opc, DAGOperand regtype,
                          string asm, list<dag> pattern> {
  let AddedComplexity = 1 in // try this before StoreUI
  def i : BaseLoadStoreUnscale<sz, V, opc, (outs),
                               (ins regtype:$Rt, Capsp:$Rn, simm9:$offset),
                               asm, pattern>,
          Sched<[WriteST]> {
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, [$Rn]",
                  (!cast<Instruction>(NAME # "i") regtype:$Rt, Capsp:$Rn, 0)>;
}

multiclass PPrefetchUnscaled<bits<2> sz, bit V, bits<2> opc, string asm,
                             list<dag> pat> {
  let mayLoad = 0, mayStore = 0, hasSideEffects = 1 in
  def i : BaseLoadStoreUnscale<sz, V, opc, (outs),
                               (ins prfop:$Rt, Capsp:$Rn, simm9:$offset),
                               asm, pat>,
          Sched<[WriteLD]> {
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, [$Rn]",
                  (!cast<Instruction>(NAME # "i") prfop:$Rt, Capsp:$Rn, 0)>;
}

multiclass PLoadUnprivileged<bits<2> sz, bit V, bits<2> opc,
                            RegisterClass regtype, string asm> {
  let mayStore = 0, mayLoad = 1, hasSideEffects = 0 in
  def i : BaseLoadStoreUnprivileged<sz, V, opc, (outs regtype:$Rt),
                                    (ins Capsp:$Rn, simm9:$offset), asm>,
          Sched<[WriteLD]> {
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, [$Rn]",
                  (!cast<Instruction>(NAME # "i") regtype:$Rt, Capsp:$Rn, 0)>;
}

multiclass PStoreUnprivileged<bits<2> sz, bit V, bits<2> opc,
                             RegisterClass regtype, string asm> {
  let mayStore = 1, mayLoad = 0, hasSideEffects = 0 in
  def i : BaseLoadStoreUnprivileged<sz, V, opc, (outs),
                                 (ins regtype:$Rt, Capsp:$Rn, simm9:$offset),
                                 asm>,
          Sched<[WriteST]> {
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, [$Rn]",
                  (!cast<Instruction>(NAME # "i") regtype:$Rt, Capsp:$Rn, 0)>;
}

let hasSideEffects = 0 in {
let mayStore = 0, mayLoad = 1 in
class PLoadPreIdx<bits<2> sz, bit V, bits<2> opc, RegisterOperand regtype,
             string asm>
    : BaseLoadStorePreIdx<sz, V, opc,
                     (outs Capsp:$wback, regtype:$Rt),
                     (ins Capsp:$Rn, simm9:$offset), asm,
                     "$Rn = $wback,@earlyclobber $wback", []>,
      Sched<[WriteLD, WriteAdr]> {
  let DecoderNamespace = "AArch64C64";
}

let mayStore = 1, mayLoad = 0 in
class PStorePreIdx<bits<2> sz, bit V, bits<2> opc, RegisterOperand regtype,
                  string asm, SDPatternOperator storeop, ValueType Ty>
    : BaseLoadStorePreIdx<sz, V, opc,
                      (outs Capsp:$wback),
                      (ins regtype:$Rt, Capsp:$Rn, simm9:$offset),
                      asm, "$Rn = $wback,@earlyclobber $wback",
      [(set Capsp:$wback,
            (storeop (Ty regtype:$Rt), Capsp:$Rn, simm9:$offset))]>,
      Sched<[WriteAdr, WriteST]> {
  let DecoderNamespace = "AArch64C64";
}

let mayStore = 0, mayLoad = 1 in
class PLoadPostIdx<bits<2> sz, bit V, bits<2> opc, RegisterOperand regtype,
             string asm>
    : BaseLoadStorePostIdx<sz, V, opc,
                      (outs Capsp:$wback, regtype:$Rt),
                      (ins Capsp:$Rn, simm9:$offset),
                      asm, "$Rn = $wback,@earlyclobber $wback", []>,
      Sched<[WriteLD, WriteI]> {
  let DecoderNamespace = "AArch64C64";
}

let mayStore = 1, mayLoad = 0 in
class PStorePostIdx<bits<2> sz, bit V, bits<2> opc, RegisterOperand regtype,
                   string asm, SDPatternOperator storeop, ValueType Ty>
    : BaseLoadStorePostIdx<sz, V, opc,
                      (outs Capsp:$wback),
                      (ins regtype:$Rt, Capsp:$Rn, simm9:$offset),
                       asm, "$Rn = $wback,@earlyclobber $wback",
      [(set Capsp:$wback,
            (storeop (Ty regtype:$Rt), Capsp:$Rn, simm9:$offset))]>,
    Sched<[WriteAdr, WriteST, ReadAdrBase]> {
  let DecoderNamespace = "AArch64C64";
}

} // hasSideEffects = 0

multiclass PLoadPairOffset<bits<2> opc, bit V, RegisterOperand regtype,
                          Operand indextype, string asm> {
  let hasSideEffects = 0, mayStore = 0, mayLoad = 1 in
  def i : BaseLoadStorePairOffset<opc, V, 1,
                                  (outs regtype:$Rt, regtype:$Rt2),
                                  (ins Capsp:$Rn, indextype:$offset), asm>,
          Sched<[WriteLD, WriteLDHi]> {
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, $Rt2, [$Rn]",
                  (!cast<Instruction>(NAME # "i") regtype:$Rt, regtype:$Rt2,
                                                  Capsp:$Rn, 0)>;
}

multiclass PStorePairOffset<bits<2> opc, bit V, RegisterOperand regtype,
                           Operand indextype, string asm> {
  let hasSideEffects = 0, mayLoad = 0, mayStore = 1 in
  def i : BaseLoadStorePairOffset<opc, V, 0, (outs),
                                  (ins regtype:$Rt, regtype:$Rt2,
                                       Capsp:$Rn, indextype:$offset),
                                  asm>,
          Sched<[WriteSTP]> {
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, $Rt2, [$Rn]",
                  (!cast<Instruction>(NAME # "i") regtype:$Rt, regtype:$Rt2,
                                                  Capsp:$Rn, 0)>;
}

let hasSideEffects = 0, mayStore = 0, mayLoad = 1 in
class PLoadPairPreIdx<bits<2> opc, bit V, RegisterOperand regtype,
                     Operand indextype, string asm>
    : BaseLoadStorePairPreIdx<opc, V, 1,
                              (outs Capsp:$wback, regtype:$Rt, regtype:$Rt2),
                              (ins Capsp:$Rn, indextype:$offset), asm>,
      Sched<[WriteLD, WriteLDHi, WriteAdr]> {
  let DecoderNamespace = "AArch64C64";
}

let hasSideEffects = 0, mayStore = 1, mayLoad = 0 in
class PStorePairPreIdx<bits<2> opc, bit V, RegisterOperand regtype,
                      Operand indextype, string asm>
    : BaseLoadStorePairPreIdx<opc, V, 0, (outs Capsp:$wback),
                             (ins regtype:$Rt, regtype:$Rt2,
                                  Capsp:$Rn, indextype:$offset),
                             asm>,
      Sched<[WriteAdr, WriteSTP]>{
  let DecoderNamespace = "AArch64C64";
}

let hasSideEffects = 0, mayStore = 0, mayLoad = 1 in
class PLoadPairPostIdx<bits<2> opc, bit V, RegisterOperand regtype,
                       Operand idxtype, string asm>
    : BaseLoadStorePairPostIdx<opc, V, 1,
                              (outs Capsp:$wback, regtype:$Rt, regtype:$Rt2),
                              (ins Capsp:$Rn, idxtype:$offset), asm>,
      Sched<[WriteLD, WriteLDHi, WriteAdr]> {
  let DecoderNamespace = "AArch64C64";
}

let hasSideEffects = 0, mayStore = 1, mayLoad = 0 in
class PStorePairPostIdx<bits<2> opc, bit V, RegisterOperand regtype,
                        Operand idxtype, string asm>
    : BaseLoadStorePairPostIdx<opc, V, 0, (outs Capsp:$wback),
                             (ins regtype:$Rt, regtype:$Rt2,
                                  Capsp:$Rn, idxtype:$offset),
                             asm>,
      Sched<[WriteAdr, WriteSTP]>{
  let DecoderNamespace = "AArch64C64";
}

multiclass PLoadPairNoAlloc<bits<2> opc, bit V, DAGOperand regtype,
                            Operand indextype, string asm> {
  let hasSideEffects = 0, mayStore = 0, mayLoad = 1 in
  def i : BaseLoadStorePairNoAlloc<opc, V, 1,
                                   (outs regtype:$Rt, regtype:$Rt2),
                                   (ins Capsp:$Rn, indextype:$offset), asm>,
          Sched<[WriteLD, WriteLDHi]> {
    let DecoderNamespace = "AArch64C64";
  }


  def : InstAlias<asm # "\t$Rt, $Rt2, [$Rn]",
                  (!cast<Instruction>(NAME # "i") regtype:$Rt, regtype:$Rt2,
                                                  Capsp:$Rn, 0)>;
}

multiclass PStorePairNoAlloc<bits<2> opc, bit V, DAGOperand regtype,
                             Operand indextype, string asm> {
  let hasSideEffects = 0, mayStore = 1, mayLoad = 0 in
  def i : BaseLoadStorePairNoAlloc<opc, V, 0, (outs),
                                   (ins regtype:$Rt, regtype:$Rt2,
                                        Capsp:$Rn, indextype:$offset),
                                   asm>,
          Sched<[WriteSTP]>{
    let DecoderNamespace = "AArch64C64";
  }

  def : InstAlias<asm # "\t$Rt, $Rt2, [$Rn]",
                  (!cast<Instruction>(NAME # "i") regtype:$Rt, regtype:$Rt2,
                                                  Capsp:$Rn, 0)>;
}

// FIXME: should we have a Capsp0?
let mayLoad = 1, mayStore = 0 in
class PLoadAcquire<bits<2> sz, bit o2, bit L, bit o1, bit o0,
                  RegisterClass regtype, string asm>
    : LoadStoreExclusiveSimple<sz, o2, L, o1, o0, (outs regtype:$Rt),
                               (ins Capsp:$Rn), asm, "\t$Rt, [$Rn]">,
      Sched<[WriteLD]> {
  let DecoderNamespace = "AArch64C64";
}

class PLoadExclusive<bits<2> sz, bit o2, bit L, bit o1, bit o0,
                    RegisterClass regtype, string asm>
    : LoadStoreExclusiveSimple<sz, o2, L, o1, o0, (outs regtype:$Rt),
                               (ins Capsp:$Rn), asm, "\t$Rt, [$Rn]">,
      Sched<[WriteLD]> {
  let DecoderNamespace = "AArch64C64";
}

class PLoadExclusivePair<bits<2> sz, bit o2, bit L, bit o1, bit o0,
                        RegisterClass regtype, string asm>
    : BaseLoadStoreExclusive<sz, o2, L, o1, o0,
                             (outs regtype:$Rt, regtype:$Rt2),
                             (ins Capsp:$Rn), asm,
                             "\t$Rt, $Rt2, [$Rn]">,
      Sched<[WriteLD, WriteLDHi]> {
  bits<5> Rt;
  bits<5> Rt2;
  bits<5> Rn;
  let Inst{14-10} = Rt2;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;

  let PostEncoderMethod = "fixLoadStoreExclusive<0,1>";
  let DecoderNamespace = "AArch64C64";
}

// Simple store release operations do not check the exclusive monitor.
let mayLoad = 0, mayStore = 1 in
class PStoreRelease<bits<2> sz, bit o2, bit L, bit o1, bit o0,
                    RegisterClass regtype, string asm>
    : LoadStoreExclusiveSimple<sz, o2, L, o1, o0, (outs),
                               (ins regtype:$Rt, Capsp:$Rn),
                               asm, "\t$Rt, [$Rn]">,
      Sched<[WriteST]> {
  let DecoderNamespace = "AArch64C64";
}

let mayLoad = 1, mayStore = 1 in
class PStoreExclusive<bits<2> sz, bit o2, bit L, bit o1, bit o0,
                      RegisterClass regtype, string asm>
    : BaseLoadStoreExclusive<sz, o2, L, o1, o0, (outs GPR32:$Ws),
                             (ins regtype:$Rt, Capsp:$Rn),
                             asm, "\t$Ws, $Rt, [$Rn]">,
      Sched<[WriteSTX]> {
  bits<5> Ws;
  bits<5> Rt;
  bits<5> Rn;
  let Inst{20-16} = Ws;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;

  let Constraints = "@earlyclobber $Ws";
  let PostEncoderMethod = "fixLoadStoreExclusive<1,0>";
  let DecoderNamespace = "AArch64C64";
}

class PStoreExclusivePair<bits<2> sz, bit o2, bit L, bit o1, bit o0,
                          RegisterClass regtype, string asm>
    : BaseLoadStoreExclusive<sz, o2, L, o1, o0,
                             (outs GPR32:$Ws),
                             (ins regtype:$Rt, regtype:$Rt2, Capsp:$Rn),
                              asm, "\t$Ws, $Rt, $Rt2, [$Rn]">,
      Sched<[WriteSTX]> {
  bits<5> Ws;
  bits<5> Rt;
  bits<5> Rt2;
  bits<5> Rn;
  let Inst{20-16} = Ws;
  let Inst{14-10} = Rt2;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;

  let Constraints = "@earlyclobber $Ws";
  let DecoderNamespace = "AArch64C64";
}

}

// Advanced SIMD Instruction Formats

class PBaseSIMDLdSt<bit Q, bit L, bits<4> opcode, bits<2> size,
                   string asm, dag oops, dag iops, list<dag> pattern>
  : BaseSIMDLdSt<Q, L, opcode, size, asm, oops, iops, pattern> {
  let DecoderNamespace = "AArch64C64";
}

class PBaseSIMDLdStPost<bit Q, bit L, bits<4> opcode, bits<2> size,
                       string asm, dag oops, dag iops>
  : BaseSIMDLdStPost<Q, L, opcode, size, asm, oops, iops> {
  let DecoderNamespace = "AArch64C64";
}

// The immediate form of AdvSIMD post-indexed addressing is encoded with
// register post-index addressing from the zero register.
multiclass PSIMDLdStAliases<string BaseName, string asm, string layout, string Count,
                           int Offset, int Size> {
  // E.g. "ld1 { v0.8b, v1.8b }, [c1], #16"
  //      "ld1\t$Vt, [$Rn], #16"
  // may get mapped to
  //      (ALD1Twov8b_POST VecListTwo8b:$Vt, Capsp:$Rn, CZR)
  def : InstAlias<asm # "\t$Vt, [$Rn], #" # Offset,
                  (!cast<Instruction>(BaseName # Count # "v" # layout # "_POST")
                      Capsp:$Rn,
                      !cast<RegisterOperand>("VecList" # Count # layout):$Vt,
                      XZR), 1>;

  // E.g. "ld1.8b { v0, v1 }, [c1], #16"
  //      "ld1.8b\t$Vt, [$Rn], #16"
  // may get mapped to
  //      (ALD1Twov8b_POST VecListTwo64:$Vt, Capsp:$Rn, XZR)
  def : InstAlias<asm # "." # layout # "\t$Vt, [$Rn], #" # Offset,
                  (!cast<Instruction>(BaseName # Count # "v" # layout # "_POST")
                      Capsp:$Rn,
                      !cast<RegisterOperand>("VecList" # Count # Size):$Vt,
                      XZR), 0>;

  // E.g. "ld1.8b { v0, v1 }, [c1]"
  //      "ld1\t$Vt, [$Rn]"
  // may get mapped to
  //      (ALD1Twov8b VecListTwo64:$Vt, Capsp:$Rn)
  def : InstAlias<asm # "." # layout # "\t$Vt, [$Rn]",
                  (!cast<Instruction>(BaseName # Count # "v" # layout)
                      !cast<RegisterOperand>("VecList" # Count # Size):$Vt,
                      Capsp:$Rn), 0>;

  // E.g. "ld1.8b { v0, v1 }, [c1], x2"
  //      "ld1\t$Vt, [$Rn], $Xm"
  // may get mapped to
  //      (ALD1Twov8b_POST VecListTwo64:$Vt, Capsp:$Rn, GPR64pi8:$Xm)
  def : InstAlias<asm # "." # layout # "\t$Vt, [$Rn], $Xm",
                  (!cast<Instruction>(BaseName # Count # "v" # layout # "_POST")
                      Capsp:$Rn,
                      !cast<RegisterOperand>("VecList" # Count # Size):$Vt,
                      !cast<RegisterOperand>("GPR64pi" # Offset):$Xm), 0>;
}

multiclass PBaseSIMDLdN<string BaseName, string Count, string asm, string veclist,
                        int Offset128, int Offset64, bits<4> opcode> {
  let hasSideEffects = 0, mayLoad = 1,
      mayStore = 0 in {
    def v16b: PBaseSIMDLdSt<1, 1, opcode, 0b00, asm,
                           (outs !cast<RegisterOperand>(veclist # "16b"):$Vt),
                           (ins Capsp:$Rn), []>;
    def v8h : PBaseSIMDLdSt<1, 1, opcode, 0b01, asm,
                           (outs !cast<RegisterOperand>(veclist # "8h"):$Vt),
                           (ins Capsp:$Rn), []>;
    def v4s : PBaseSIMDLdSt<1, 1, opcode, 0b10, asm,
                           (outs !cast<RegisterOperand>(veclist # "4s"):$Vt),
                           (ins Capsp:$Rn), []>;
    def v2d : PBaseSIMDLdSt<1, 1, opcode, 0b11, asm,
                           (outs !cast<RegisterOperand>(veclist # "2d"):$Vt),
                           (ins Capsp:$Rn), []>;
    def v8b : PBaseSIMDLdSt<0, 1, opcode, 0b00, asm,
                           (outs !cast<RegisterOperand>(veclist # "8b"):$Vt),
                           (ins Capsp:$Rn), []>;
    def v4h : PBaseSIMDLdSt<0, 1, opcode, 0b01, asm,
                           (outs !cast<RegisterOperand>(veclist # "4h"):$Vt),
                           (ins Capsp:$Rn), []>;
    def v2s : PBaseSIMDLdSt<0, 1, opcode, 0b10, asm,
                           (outs !cast<RegisterOperand>(veclist # "2s"):$Vt),
                           (ins Capsp:$Rn), []>;


    def v16b_POST: PBaseSIMDLdStPost<1, 1, opcode, 0b00, asm,
                       (outs Capsp:$wback,
                             !cast<RegisterOperand>(veclist # "16b"):$Vt),
                       (ins Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset128):$Xm)>;
    def v8h_POST : PBaseSIMDLdStPost<1, 1, opcode, 0b01, asm,
                       (outs Capsp:$wback,
                             !cast<RegisterOperand>(veclist # "8h"):$Vt),
                       (ins Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset128):$Xm)>;
    def v4s_POST : PBaseSIMDLdStPost<1, 1, opcode, 0b10, asm,
                       (outs Capsp:$wback,
                             !cast<RegisterOperand>(veclist # "4s"):$Vt),
                       (ins Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset128):$Xm)>;
    def v2d_POST : PBaseSIMDLdStPost<1, 1, opcode, 0b11, asm,
                       (outs Capsp:$wback,
                             !cast<RegisterOperand>(veclist # "2d"):$Vt),
                       (ins Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset128):$Xm)>;
    def v8b_POST : PBaseSIMDLdStPost<0, 1, opcode, 0b00, asm,
                       (outs Capsp:$wback,
                             !cast<RegisterOperand>(veclist # "8b"):$Vt),
                       (ins Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset64):$Xm)>;
    def v4h_POST : PBaseSIMDLdStPost<0, 1, opcode, 0b01, asm,
                       (outs Capsp:$wback,
                             !cast<RegisterOperand>(veclist # "4h"):$Vt),
                       (ins Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset64):$Xm)>;
    def v2s_POST : PBaseSIMDLdStPost<0, 1, opcode, 0b10, asm,
                       (outs Capsp:$wback,
                             !cast<RegisterOperand>(veclist # "2s"):$Vt),
                       (ins Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset64):$Xm)>;
  }

  defm : PSIMDLdStAliases<BaseName, asm, "16b", Count, Offset128, 128>;
  defm : PSIMDLdStAliases<BaseName, asm, "8h", Count, Offset128, 128>;
  defm : PSIMDLdStAliases<BaseName, asm, "4s", Count, Offset128, 128>;
  defm : PSIMDLdStAliases<BaseName, asm, "2d", Count, Offset128, 128>;
  defm : PSIMDLdStAliases<BaseName, asm, "8b", Count, Offset64, 64>;
  defm : PSIMDLdStAliases<BaseName, asm, "4h", Count, Offset64, 64>;
  defm : PSIMDLdStAliases<BaseName, asm, "2s", Count, Offset64, 64>;
}

// Only ld1/st1 has a v1d version.
multiclass PBaseSIMDStN<string BaseName, string Count, string asm, string veclist,
                        int Offset128, int Offset64, bits<4> opcode> {
  let hasSideEffects = 0, mayStore = 1, mayLoad = 0 in {
    def v16b : PBaseSIMDLdSt<1, 0, opcode, 0b00, asm, (outs),
                            (ins !cast<RegisterOperand>(veclist # "16b"):$Vt,
                                 Capsp:$Rn), []>;
    def v8h : PBaseSIMDLdSt<1, 0, opcode, 0b01, asm, (outs),
                           (ins !cast<RegisterOperand>(veclist # "8h"):$Vt,
                                Capsp:$Rn), []>;
    def v4s : PBaseSIMDLdSt<1, 0, opcode, 0b10, asm, (outs),
                           (ins !cast<RegisterOperand>(veclist # "4s"):$Vt,
                                Capsp:$Rn), []>;
    def v2d : PBaseSIMDLdSt<1, 0, opcode, 0b11, asm, (outs),
                           (ins !cast<RegisterOperand>(veclist # "2d"):$Vt,
                                Capsp:$Rn), []>;
    def v8b : PBaseSIMDLdSt<0, 0, opcode, 0b00, asm, (outs),
                           (ins !cast<RegisterOperand>(veclist # "8b"):$Vt,
                                Capsp:$Rn), []>;
    def v4h : PBaseSIMDLdSt<0, 0, opcode, 0b01, asm, (outs),
                           (ins !cast<RegisterOperand>(veclist # "4h"):$Vt,
                                Capsp:$Rn), []>;
    def v2s : PBaseSIMDLdSt<0, 0, opcode, 0b10, asm, (outs),
                           (ins !cast<RegisterOperand>(veclist # "2s"):$Vt,
                                Capsp:$Rn), []>;

    def v16b_POST : PBaseSIMDLdStPost<1, 0, opcode, 0b00, asm,
                       (outs Capsp:$wback),
                       (ins !cast<RegisterOperand>(veclist # "16b"):$Vt,
                            Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset128):$Xm)>;
    def v8h_POST : PBaseSIMDLdStPost<1, 0, opcode, 0b01, asm,
                       (outs Capsp:$wback),
                       (ins !cast<RegisterOperand>(veclist # "8h"):$Vt,
                            Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset128):$Xm)>;
    def v4s_POST : PBaseSIMDLdStPost<1, 0, opcode, 0b10, asm,
                       (outs Capsp:$wback),
                       (ins !cast<RegisterOperand>(veclist # "4s"):$Vt,
                            Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset128):$Xm)>;
    def v2d_POST : PBaseSIMDLdStPost<1, 0, opcode, 0b11, asm,
                       (outs Capsp:$wback),
                       (ins !cast<RegisterOperand>(veclist # "2d"):$Vt,
                            Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset128):$Xm)>;
    def v8b_POST : PBaseSIMDLdStPost<0, 0, opcode, 0b00, asm,
                       (outs Capsp:$wback),
                       (ins !cast<RegisterOperand>(veclist # "8b"):$Vt,
                            Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset64):$Xm)>;
    def v4h_POST : PBaseSIMDLdStPost<0, 0, opcode, 0b01, asm,
                       (outs Capsp:$wback),
                       (ins !cast<RegisterOperand>(veclist # "4h"):$Vt,
                            Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset64):$Xm)>;
    def v2s_POST : PBaseSIMDLdStPost<0, 0, opcode, 0b10, asm,
                       (outs Capsp:$wback),
                       (ins !cast<RegisterOperand>(veclist # "2s"):$Vt,
                            Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset64):$Xm)>;
  }

  defm : PSIMDLdStAliases<BaseName, asm, "16b", Count, Offset128, 128>;
  defm : PSIMDLdStAliases<BaseName, asm, "8h", Count, Offset128, 128>;
  defm : PSIMDLdStAliases<BaseName, asm, "4s", Count, Offset128, 128>;
  defm : PSIMDLdStAliases<BaseName, asm, "2d", Count, Offset128, 128>;
  defm : PSIMDLdStAliases<BaseName, asm, "8b", Count, Offset64, 64>;
  defm : PSIMDLdStAliases<BaseName, asm, "4h", Count, Offset64, 64>;
  defm : PSIMDLdStAliases<BaseName, asm, "2s", Count, Offset64, 64>;
}

multiclass PBaseSIMDLd1<string BaseName, string Count, string asm, string veclist,
                       int Offset128, int Offset64, bits<4> opcode>
  : PBaseSIMDLdN<BaseName, Count, asm, veclist, Offset128, Offset64, opcode> {

  // LD1 instructions have extra "1d" variants.
  let hasSideEffects = 0, mayLoad = 1, mayStore = 0 in {
    def v1d : PBaseSIMDLdSt<0, 1, opcode, 0b11, asm,
                           (outs !cast<RegisterOperand>(veclist # "1d"):$Vt),
                           (ins Capsp:$Rn), []>;

    def v1d_POST : PBaseSIMDLdStPost<0, 1, opcode, 0b11, asm,
                       (outs Capsp:$wback,
                             !cast<RegisterOperand>(veclist # "1d"):$Vt),
                       (ins Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset64):$Xm)>;
  }

  defm : PSIMDLdStAliases<BaseName, asm, "1d", Count, Offset64, 64>;
}

multiclass PBaseSIMDSt1<string BaseName, string Count, string asm, string veclist,
                       int Offset128, int Offset64, bits<4> opcode>
  : PBaseSIMDStN<BaseName, Count, asm, veclist, Offset128, Offset64, opcode> {

  // ST1 instructions have extra "1d" variants.
  let hasSideEffects = 0, mayLoad = 0, mayStore = 1 in {
    def v1d : PBaseSIMDLdSt<0, 0, opcode, 0b11, asm, (outs),
                           (ins !cast<RegisterOperand>(veclist # "1d"):$Vt,
                                Capsp:$Rn), []>;

    def v1d_POST : PBaseSIMDLdStPost<0, 0, opcode, 0b11, asm,
                       (outs Capsp:$wback),
                       (ins !cast<RegisterOperand>(veclist # "1d"):$Vt,
                            Capsp:$Rn,
                            !cast<RegisterOperand>("GPR64pi" # Offset64):$Xm)>;
  }

  defm : PSIMDLdStAliases<BaseName, asm, "1d", Count, Offset64, 64>;
}

multiclass PSIMDLd1Multiple<string asm> {
  defm One   : PBaseSIMDLd1<NAME, "One", asm, "VecListOne", 16, 8,  0b0111>;
  defm Two   : PBaseSIMDLd1<NAME, "Two", asm, "VecListTwo", 32, 16, 0b1010>;
  defm Three : PBaseSIMDLd1<NAME, "Three", asm, "VecListThree", 48, 24, 0b0110>;
  defm Four  : PBaseSIMDLd1<NAME, "Four", asm, "VecListFour", 64, 32, 0b0010>;
}

multiclass PSIMDSt1Multiple<string asm> {
  defm One   : PBaseSIMDSt1<NAME, "One", asm, "VecListOne", 16, 8,  0b0111>;
  defm Two   : PBaseSIMDSt1<NAME, "Two", asm, "VecListTwo", 32, 16, 0b1010>;
  defm Three : PBaseSIMDSt1<NAME, "Three", asm, "VecListThree", 48, 24, 0b0110>;
  defm Four  : PBaseSIMDSt1<NAME, "Four", asm, "VecListFour", 64, 32, 0b0010>;
}

multiclass PSIMDLd2Multiple<string asm> {
  defm Two : PBaseSIMDLdN<NAME, "Two", asm, "VecListTwo", 32, 16, 0b1000>;
}

multiclass PSIMDSt2Multiple<string asm> {
  defm Two : PBaseSIMDStN<NAME, "Two", asm, "VecListTwo", 32, 16, 0b1000>;
}

multiclass PSIMDLd3Multiple<string asm> {
  defm Three : PBaseSIMDLdN<NAME, "Three", asm, "VecListThree", 48, 24, 0b0100>;
}

multiclass PSIMDSt3Multiple<string asm> {
  defm Three : PBaseSIMDStN<NAME, "Three", asm, "VecListThree", 48, 24, 0b0100>;
}

multiclass PSIMDLd4Multiple<string asm> {
  defm Four : PBaseSIMDLdN<NAME, "Four", asm, "VecListFour", 64, 32, 0b0000>;
}

multiclass PSIMDSt4Multiple<string asm> {
  defm Four : PBaseSIMDStN<NAME, "Four", asm, "VecListFour", 64, 32, 0b0000>;
}

let mayLoad = 1, mayStore = 0, hasSideEffects = 0 in
class PBaseSIMDLdR<bit Q, bit R, bits<3> opcode, bit S, bits<2> size, string asm,
                  DAGOperand listtype>
  : BaseSIMDLdStSingle<1, R, opcode, asm, "\t$Vt, [$Rn]", "",
                       (outs listtype:$Vt), (ins Capsp:$Rn),
                       []> {
  let Inst{30} = Q;
  let Inst{23} = 0;
  let Inst{20-16} = 0b00000;
  let Inst{12} = S;
  let Inst{11-10} = size;
  let DecoderNamespace = "AArch64C64";
}
let mayLoad = 1, mayStore = 0, hasSideEffects = 0 in
class PBaseSIMDLdRPost<bit Q, bit R, bits<3> opcode, bit S, bits<2> size,
                      string asm, DAGOperand listtype, DAGOperand GPR64pi>
  : BaseSIMDLdStSingle<1, R, opcode, asm, "\t$Vt, [$Rn], $Xm",
                       "$Rn = $wback",
                       (outs Capsp:$wback, listtype:$Vt),
                       (ins Capsp:$Rn, GPR64pi:$Xm), []> {
  bits<5> Xm;
  let Inst{30} = Q;
  let Inst{23} = 1;
  let Inst{20-16} = Xm;
  let Inst{12} = S;
  let Inst{11-10} = size;
  let DecoderNamespace = "AArch64C64";
}

multiclass PSIMDLdrAliases<string BaseName, string asm, string layout, string Count,
                          int Offset, int Size> {
  // E.g. "ld1r { v0.8b }, [c1], #1"
  //      "ld1r.8b\t$Vt, [$Rn], #1"
  // may get mapped to
  //      (ALD1Rv8b_POST VecListOne8b:$Vt, Capsp:$Rn, XZR)
  def : InstAlias<asm # "\t$Vt, [$Rn], #" # Offset,
                  (!cast<Instruction>(BaseName # "v" # layout # "_POST")
                      Capsp:$Rn,
                      !cast<RegisterOperand>("VecList" # Count # layout):$Vt,
                      XZR), 1>;

  // E.g. "ld1r.8b { v0 }, [c1], #1"
  //      "ld1r.8b\t$Vt, [$Rn], #1"
  // may get mapped to
  //      (ALD1Rv8b_POST VecListOne64:$Vt, Capsp:$Rn, XZR)
  def : InstAlias<asm # "." # layout # "\t$Vt, [$Rn], #" # Offset,
                  (!cast<Instruction>(BaseName # "v" # layout # "_POST")
                      Capsp:$Rn,
                      !cast<RegisterOperand>("VecList" # Count # Size):$Vt,
                      XZR), 0>;

  // E.g. "ld1r.8b { v0 }, [c1]"
  //      "ld1r.8b\t$Vt, [$Rn]"
  // may get mapped to
  //      (ALD1Rv8b VecListOne64:$Vt, Capsp:$Rn)
  def : InstAlias<asm # "." # layout # "\t$Vt, [$Rn]",
                  (!cast<Instruction>(BaseName # "v" # layout)
                      !cast<RegisterOperand>("VecList" # Count # Size):$Vt,
                      Capsp:$Rn), 0>;

  // E.g. "ld1r.8b { v0 }, [c1], x2"
  //      "ld1r.8b\t$Vt, [$Rn], $Xm"
  // may get mapped to
  //      (ALD1Rv8b_POST VecListOne64:$Vt, Capsp:$Rn, GPR64pi1:$Xm)
  def : InstAlias<asm # "." # layout # "\t$Vt, [$Rn], $Xm",
                  (!cast<Instruction>(BaseName # "v" # layout # "_POST")
                      Capsp:$Rn,
                      !cast<RegisterOperand>("VecList" # Count # Size):$Vt,
                      !cast<RegisterOperand>("GPR64pi" # Offset):$Xm), 0>;
}

multiclass PSIMDLdR<bit R, bits<3> opcode, bit S, string asm, string Count,
  int Offset1, int Offset2, int Offset4, int Offset8> {
  def v8b : PBaseSIMDLdR<0, R, opcode, S, 0b00, asm,
                         !cast<DAGOperand>("VecList" # Count # "8b")>;
  def v16b: PBaseSIMDLdR<1, R, opcode, S, 0b00, asm,
                         !cast<DAGOperand>("VecList" # Count #"16b")>;
  def v4h : PBaseSIMDLdR<0, R, opcode, S, 0b01, asm,
                         !cast<DAGOperand>("VecList" # Count #"4h")>;
  def v8h : PBaseSIMDLdR<1, R, opcode, S, 0b01, asm,
                         !cast<DAGOperand>("VecList" # Count #"8h")>;
  def v2s : PBaseSIMDLdR<0, R, opcode, S, 0b10, asm,
                         !cast<DAGOperand>("VecList" # Count #"2s")>;
  def v4s : PBaseSIMDLdR<1, R, opcode, S, 0b10, asm,
                         !cast<DAGOperand>("VecList" # Count #"4s")>;
  def v1d : PBaseSIMDLdR<0, R, opcode, S, 0b11, asm,
                         !cast<DAGOperand>("VecList" # Count #"1d")>;
  def v2d : PBaseSIMDLdR<1, R, opcode, S, 0b11, asm,
                         !cast<DAGOperand>("VecList" # Count #"2d")>;

  def v8b_POST : PBaseSIMDLdRPost<0, R, opcode, S, 0b00, asm,
                                  !cast<DAGOperand>("VecList" # Count # "8b"),
                                  !cast<DAGOperand>("GPR64pi" # Offset1)>;
  def v16b_POST: PBaseSIMDLdRPost<1, R, opcode, S, 0b00, asm,
                                  !cast<DAGOperand>("VecList" # Count # "16b"),
                                  !cast<DAGOperand>("GPR64pi" # Offset1)>;
  def v4h_POST : PBaseSIMDLdRPost<0, R, opcode, S, 0b01, asm,
                                  !cast<DAGOperand>("VecList" # Count # "4h"),
                                  !cast<DAGOperand>("GPR64pi" # Offset2)>;
  def v8h_POST : PBaseSIMDLdRPost<1, R, opcode, S, 0b01, asm,
                                  !cast<DAGOperand>("VecList" # Count # "8h"),
                                  !cast<DAGOperand>("GPR64pi" # Offset2)>;
  def v2s_POST : PBaseSIMDLdRPost<0, R, opcode, S, 0b10, asm,
                                  !cast<DAGOperand>("VecList" # Count # "2s"),
                                  !cast<DAGOperand>("GPR64pi" # Offset4)>;
  def v4s_POST : PBaseSIMDLdRPost<1, R, opcode, S, 0b10, asm,
                                  !cast<DAGOperand>("VecList" # Count # "4s"),
                                  !cast<DAGOperand>("GPR64pi" # Offset4)>;
  def v1d_POST : PBaseSIMDLdRPost<0, R, opcode, S, 0b11, asm,
                                  !cast<DAGOperand>("VecList" # Count # "1d"),
                                  !cast<DAGOperand>("GPR64pi" # Offset8)>;
  def v2d_POST : PBaseSIMDLdRPost<1, R, opcode, S, 0b11, asm,
                                  !cast<DAGOperand>("VecList" # Count # "2d"),
                                  !cast<DAGOperand>("GPR64pi" # Offset8)>;

  defm : PSIMDLdrAliases<NAME, asm, "8b",  Count, Offset1,  64>;
  defm : PSIMDLdrAliases<NAME, asm, "16b", Count, Offset1, 128>;
  defm : PSIMDLdrAliases<NAME, asm, "4h",  Count, Offset2,  64>;
  defm : PSIMDLdrAliases<NAME, asm, "8h",  Count, Offset2, 128>;
  defm : PSIMDLdrAliases<NAME, asm, "2s",  Count, Offset4,  64>;
  defm : PSIMDLdrAliases<NAME, asm, "4s",  Count, Offset4, 128>;
  defm : PSIMDLdrAliases<NAME, asm, "1d",  Count, Offset8,  64>;
  defm : PSIMDLdrAliases<NAME, asm, "2d",  Count, Offset8, 128>;
}

let mayLoad = 1, mayStore = 0, hasSideEffects = 0,
    DecoderNamespace = "AArch64C64" in
multiclass PSIMDLdSingleBTied<bit R, bits<3> opcode, string asm,
                         RegisterOperand listtype,
                         RegisterOperand GPR64pi> {
  def i8 : SIMDLdStSingleBTied<1, R, opcode, asm,
                           (outs listtype:$dst),
                           (ins listtype:$Vt, VectorIndexB:$idx,
                                Capsp:$Rn), []>;

  def i8_POST : SIMDLdStSingleBTiedPost<1, R, opcode, asm,
                            (outs Capsp:$wback, listtype:$dst),
                            (ins listtype:$Vt, VectorIndexB:$idx,
                                 Capsp:$Rn, GPR64pi:$Xm)>;
}
let mayLoad = 1, mayStore = 0, hasSideEffects = 0,
    DecoderNamespace = "AArch64C64" in
multiclass PSIMDLdSingleHTied<bit R, bits<3> opcode, bit size, string asm,
                         RegisterOperand listtype,
                         RegisterOperand GPR64pi> {
  def i16 : SIMDLdStSingleHTied<1, R, opcode, size, asm,
                            (outs listtype:$dst),
                            (ins listtype:$Vt, VectorIndexH:$idx,
                                 Capsp:$Rn), []>;

  def i16_POST : SIMDLdStSingleHTiedPost<1, R, opcode, size, asm,
                            (outs Capsp:$wback, listtype:$dst),
                            (ins listtype:$Vt, VectorIndexH:$idx,
                                 Capsp:$Rn, GPR64pi:$Xm)>;
}
let mayLoad = 1, mayStore = 0, hasSideEffects = 0,
    DecoderNamespace = "AArch64C64" in
multiclass PSIMDLdSingleSTied<bit R, bits<3> opcode, bits<2> size,string asm,
                         RegisterOperand listtype,
                         RegisterOperand GPR64pi> {
  def i32 : SIMDLdStSingleSTied<1, R, opcode, size, asm,
                            (outs listtype:$dst),
                            (ins listtype:$Vt, VectorIndexS:$idx,
                                 Capsp:$Rn), []>;

  def i32_POST : SIMDLdStSingleSTiedPost<1, R, opcode, size, asm,
                            (outs Capsp:$wback, listtype:$dst),
                            (ins listtype:$Vt, VectorIndexS:$idx,
                                 Capsp:$Rn, GPR64pi:$Xm)>;
}
let mayLoad = 1, mayStore = 0, hasSideEffects = 0,
    DecoderNamespace = "AArch64C64" in
multiclass PSIMDLdSingleDTied<bit R, bits<3> opcode, bits<2> size, string asm,
                         RegisterOperand listtype, RegisterOperand GPR64pi> {
  def i64 : SIMDLdStSingleDTied<1, R, opcode, size, asm,
                            (outs listtype:$dst),
                            (ins listtype:$Vt, VectorIndexD:$idx,
                                 Capsp:$Rn), []>;

  def i64_POST : SIMDLdStSingleDTiedPost<1, R, opcode, size, asm,
                            (outs Capsp:$wback, listtype:$dst),
                            (ins listtype:$Vt, VectorIndexD:$idx,
                                 Capsp:$Rn, GPR64pi:$Xm)>;
}
let mayLoad = 0, mayStore = 1, hasSideEffects = 0,
    DecoderNamespace = "AArch64C64" in
multiclass PSIMDStSingleB<bit R, bits<3> opcode, string asm,
                         RegisterOperand listtype, RegisterOperand GPR64pi> {
  def i8 : SIMDLdStSingleB<0, R, opcode, asm,
                           (outs), (ins listtype:$Vt, VectorIndexB:$idx,
                                        Capsp:$Rn), []>;

  def i8_POST : SIMDLdStSingleBPost<0, R, opcode, asm,
                                    (outs Capsp:$wback),
                                    (ins listtype:$Vt, VectorIndexB:$idx,
                                         Capsp:$Rn, GPR64pi:$Xm)>;
}
let mayLoad = 0, mayStore = 1, hasSideEffects = 0,
    DecoderNamespace = "AArch64C64" in
multiclass PSIMDStSingleH<bit R, bits<3> opcode, bit size, string asm,
                         RegisterOperand listtype, RegisterOperand GPR64pi> {
  def i16 : SIMDLdStSingleH<0, R, opcode, size, asm,
                            (outs), (ins listtype:$Vt, VectorIndexH:$idx,
                                         Capsp:$Rn), []>;

  def i16_POST : SIMDLdStSingleHPost<0, R, opcode, size, asm,
                            (outs Capsp:$wback),
                            (ins listtype:$Vt, VectorIndexH:$idx,
                                 Capsp:$Rn, GPR64pi:$Xm)>;
}
let mayLoad = 0, mayStore = 1, hasSideEffects = 0,
    DecoderNamespace = "AArch64C64" in
multiclass PSIMDStSingleS<bit R, bits<3> opcode, bits<2> size,string asm,
                         RegisterOperand listtype, RegisterOperand GPR64pi> {
  def i32 : SIMDLdStSingleS<0, R, opcode, size, asm,
                            (outs), (ins listtype:$Vt, VectorIndexS:$idx,
                                         Capsp:$Rn), []>;

  def i32_POST : SIMDLdStSingleSPost<0, R, opcode, size, asm,
                            (outs Capsp:$wback),
                            (ins listtype:$Vt, VectorIndexS:$idx,
                                 Capsp:$Rn, GPR64pi:$Xm)>;
}
let mayLoad = 0, mayStore = 1, hasSideEffects = 0,
    DecoderNamespace = "AArch64C64" in
multiclass PSIMDStSingleD<bit R, bits<3> opcode, bits<2> size, string asm,
                         RegisterOperand listtype, RegisterOperand GPR64pi> {
  def i64 : SIMDLdStSingleD<0, R, opcode, size, asm,
                            (outs), (ins listtype:$Vt, VectorIndexD:$idx,
                                         Capsp:$Rn), []>;

  def i64_POST : SIMDLdStSingleDPost<0, R, opcode, size, asm,
                            (outs Capsp:$wback),
                            (ins listtype:$Vt, VectorIndexD:$idx,
                                 Capsp:$Rn, GPR64pi:$Xm)>;
}

multiclass PSIMDLdStSingleAliases<string asm, string layout, string Type,
                                  string Count, int Offset, Operand idxtype> {
  // E.g. "ld1 { v0.8b }[0], [c1], #1"
  //      "ld1\t$Vt, [$Rn], #1"
  // may get mapped to
  //      (ALD1Rv8b_POST VecListOne8b:$Vt, Capsp:$Rn, XZR)
  def : InstAlias<asm # "\t$Vt$idx, [$Rn], #" # Offset,
                  (!cast<Instruction>(NAME # Type  # "_POST")
                      Capsp:$Rn,
                      !cast<RegisterOperand>("VecList" # Count # layout):$Vt,
                      idxtype:$idx, XZR), 1>;

  // E.g. "ld1.8b { v0 }[0], [c1], #1"
  //      "ld1.8b\t$Vt, [$Rn], #1"
  // may get mapped to
  //      (ALD1Rv8b_POST VecListOne64:$Vt, Capsp:$Rn, XZR)
  def : InstAlias<asm # "." # layout # "\t$Vt$idx, [$Rn], #" # Offset,
                  (!cast<Instruction>(NAME # Type # "_POST")
                      Capsp:$Rn,
                      !cast<RegisterOperand>("VecList" # Count # "128"):$Vt,
                      idxtype:$idx, XZR), 0>;

  // E.g. "ld1.8b { v0 }[0], [c1]"
  //      "ld1.8b\t$Vt, [$Rn]"
  // may get mapped to
  //      (ALD1Rv8b VecListOne64:$Vt, Capsp:$Rn)
  def : InstAlias<asm # "." # layout # "\t$Vt$idx, [$Rn]",
                      (!cast<Instruction>(NAME # Type)
                         !cast<RegisterOperand>("VecList" # Count # "128"):$Vt,
                         idxtype:$idx, Capsp:$Rn), 0>;

  // E.g. "ld1.8b { v0 }[0], [c1], x2"
  //      "ld1.8b\t$Vt, [$Rn], $Xm"
  // may get mapped to
  //      (ALD1Rv8b_POST VecListOne64:$Vt, Capsp:$Rn, GPR64pi1:$Xm)
  def : InstAlias<asm # "." # layout # "\t$Vt$idx, [$Rn], $Xm",
                      (!cast<Instruction>(NAME # Type # "_POST")
                         Capsp:$Rn,
                         !cast<RegisterOperand>("VecList" # Count # "128"):$Vt,
                         idxtype:$idx,
                         !cast<RegisterOperand>("GPR64pi" # Offset):$Xm), 0>;
}
multiclass PSIMDLdSt1SingleAliases<string asm> {
  defm "" : PSIMDLdStSingleAliases<asm, "b", "i8",  "One", 1, VectorIndexB>;
  defm "" : PSIMDLdStSingleAliases<asm, "h", "i16", "One", 2, VectorIndexH>;
  defm "" : PSIMDLdStSingleAliases<asm, "s", "i32", "One", 4, VectorIndexS>;
  defm "" : PSIMDLdStSingleAliases<asm, "d", "i64", "One", 8, VectorIndexD>;
}

multiclass PSIMDLdSt2SingleAliases<string asm> {
  defm "" : PSIMDLdStSingleAliases<asm, "b", "i8",  "Two", 2,  VectorIndexB>;
  defm "" : PSIMDLdStSingleAliases<asm, "h", "i16", "Two", 4,  VectorIndexH>;
  defm "" : PSIMDLdStSingleAliases<asm, "s", "i32", "Two", 8,  VectorIndexS>;
  defm "" : PSIMDLdStSingleAliases<asm, "d", "i64", "Two", 16, VectorIndexD>;
}

multiclass PSIMDLdSt3SingleAliases<string asm> {
  defm "" : PSIMDLdStSingleAliases<asm, "b", "i8",  "Three", 3,  VectorIndexB>;
  defm "" : PSIMDLdStSingleAliases<asm, "h", "i16", "Three", 6,  VectorIndexH>;
  defm "" : PSIMDLdStSingleAliases<asm, "s", "i32", "Three", 12, VectorIndexS>;
  defm "" : PSIMDLdStSingleAliases<asm, "d", "i64", "Three", 24, VectorIndexD>;
}

multiclass PSIMDLdSt4SingleAliases<string asm> {
  defm "" : PSIMDLdStSingleAliases<asm, "b", "i8",  "Four", 4,  VectorIndexB>;
  defm "" : PSIMDLdStSingleAliases<asm, "h", "i16", "Four", 8,  VectorIndexH>;
  defm "" : PSIMDLdStSingleAliases<asm, "s", "i32", "Four", 16, VectorIndexS>;
  defm "" : PSIMDLdStSingleAliases<asm, "d", "i64", "Four", 32, VectorIndexD>;
}

let Predicates = [HasLSE, HasC64] in
class PBaseCAS<string order, string size, RegisterClass RC>
      : BaseCASEncoding<(outs RC:$out),(ins RC:$Rs, RC:$Rt, Capsp:$Rn),
                        "cas" # order # size, "\t$Rs, $Rt, [$Rn]",
                        "$out = $Rs",[]>,
        Sched<[WriteAtomic]> {
  let NP = 1;
  let DecoderNamespace = "AArch64C64";
}

multiclass PCompareAndSwap<bits<1> Acq, bits<1> Rel, string order> {
  let Sz = 0b00, Acq = Acq, Rel = Rel in
    def B : PBaseCAS<order, "b", GPR32>;
  let Sz = 0b01, Acq = Acq, Rel = Rel in
    def H : PBaseCAS<order, "h", GPR32>;
  let Sz = 0b10, Acq = Acq, Rel = Rel in
    def W : PBaseCAS<order, "", GPR32>;
  let Sz = 0b11, Acq = Acq, Rel = Rel in
    def X : PBaseCAS<order, "", GPR64>;
}

let Predicates = [HasLSE, HasC64] in
class PBaseCASP<string order, string size, RegisterOperand RC>
      : BaseCASEncoding<(outs RC:$out),(ins RC:$Rs, RC:$Rt, Capsp:$Rn),
                        "casp" # order # size, "\t$Rs, $Rt, [$Rn]",
                        "$out = $Rs",[]>,
        Sched<[WriteAtomic]> {
  let NP = 0;
  let DecoderNamespace = "AArch64C64";
}

multiclass PCompareAndSwapPair<bits<1> Acq, bits<1> Rel, string order> {
  let Sz = 0b00, Acq = Acq, Rel = Rel in
    def W : PBaseCASP<order, "", WSeqPairClassOperand>;
  let Sz = 0b01, Acq = Acq, Rel = Rel in
    def X : PBaseCASP<order, "", XSeqPairClassOperand>;
}

let Predicates = [HasLSE, HasC64] in
class PBaseSWP<string order, string size, RegisterClass RC>
      : I<(outs RC:$Rt),(ins RC:$Rs, Capsp:$Rn), "swp" # order # size,
          "\t$Rs, $Rt, [$Rn]","",[]>,
        Sched<[WriteAtomic]> {
  bits<2> Sz;
  bit Acq;
  bit Rel;
  bits<5> Rs;
  bits<3> opc = 0b000;
  bits<5> Rn;
  bits<5> Rt;
  let Inst{31-30} = Sz;
  let Inst{29-24} = 0b111000;
  let Inst{23} = Acq;
  let Inst{22} = Rel;
  let Inst{21} = 0b1;
  let Inst{20-16} = Rs;
  let Inst{15} = 0b1;
  let Inst{14-12} = opc;
  let Inst{11-10} = 0b00;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;
  let Predicates = [HasLSE, HasC64];
  let DecoderNamespace = "AArch64C64";
}

multiclass PSwap<bits<1> Acq, bits<1> Rel, string order> {
  let Sz = 0b00, Acq = Acq, Rel = Rel in def B : PBaseSWP<order, "b", GPR32>;
  let Sz = 0b01, Acq = Acq, Rel = Rel in def H : PBaseSWP<order, "h", GPR32>;
  let Sz = 0b10, Acq = Acq, Rel = Rel in def W : PBaseSWP<order, "", GPR32>;
  let Sz = 0b11, Acq = Acq, Rel = Rel in def X : PBaseSWP<order, "", GPR64>;
}

let Predicates = [HasLSE, HasC64], mayLoad = 1, mayStore = 1, hasSideEffects = 1 in
class PBaseLDOPregister<string op, string order, string size, RegisterClass RC>
      : I<(outs RC:$Rt),(ins RC:$Rs, Capsp:$Rn), "ld" # op # order # size,
          "\t$Rs, $Rt, [$Rn]","",[]>,
        Sched<[WriteAtomic]> {
  bits<2> Sz;
  bit Acq;
  bit Rel;
  bits<5> Rs;
  bits<3> opc;
  bits<5> Rn;
  bits<5> Rt;
  let Inst{31-30} = Sz;
  let Inst{29-24} = 0b111000;
  let Inst{23} = Acq;
  let Inst{22} = Rel;
  let Inst{21} = 0b1;
  let Inst{20-16} = Rs;
  let Inst{15} = 0b0;
  let Inst{14-12} = opc;
  let Inst{11-10} = 0b00;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;
  let Predicates = [HasLSE, HasC64];
  let DecoderNamespace = "AArch64C64";
}

multiclass PLDOPregister<bits<3> opc, string op, bits<1> Acq, bits<1> Rel,
                         string order> {
  let Sz = 0b00, Acq = Acq, Rel = Rel, opc = opc in
    def B : PBaseLDOPregister<op, order, "b", GPR32>;
  let Sz = 0b01, Acq = Acq, Rel = Rel, opc = opc in
    def H : PBaseLDOPregister<op, order, "h", GPR32>;
  let Sz = 0b10, Acq = Acq, Rel = Rel, opc = opc in
    def W : PBaseLDOPregister<op, order, "", GPR32>;
  let Sz = 0b11, Acq = Acq, Rel = Rel, opc = opc in
    def X : PBaseLDOPregister<op, order, "", GPR64>;
}

let Predicates = [HasLSE, HasC64] in
class PBaseSTOPregister<string asm, RegisterClass OP, Register Reg,
                        Instruction inst> :
      InstAlias<asm # "\t$Rs, [$Rn]", (inst Reg, OP:$Rs, Capsp:$Rn)>;

multiclass PSTOPregister<string asm, string instr> {
  def : PBaseSTOPregister<asm # "lb", GPR32, WZR,
                    !cast<Instruction>(instr # "LB")>;
  def : PBaseSTOPregister<asm # "lh", GPR32, WZR,
                    !cast<Instruction>(instr # "LH")>;
  def : PBaseSTOPregister<asm # "l",  GPR32, WZR,
                    !cast<Instruction>(instr # "LW")>;
  def : PBaseSTOPregister<asm # "l",  GPR64, XZR,
                    !cast<Instruction>(instr # "LX")>;
  def : PBaseSTOPregister<asm # "b",  GPR32, WZR,
                    !cast<Instruction>(instr # "B")>;
  def : PBaseSTOPregister<asm # "h",  GPR32, WZR,
                    !cast<Instruction>(instr # "H")>;
  def : PBaseSTOPregister<asm,        GPR32, WZR,
                    !cast<Instruction>(instr # "W")>;
  def : PBaseSTOPregister<asm,        GPR64, XZR,
                    !cast<Instruction>(instr # "X")>;
}

// Differing SrcRHS and DstRHS allow you to cover CLR & SUB by giving a more
// complex DAG for DstRHS.
let Predicates = [HasLSE, HasC64] in
multiclass PLDOPregister_patterns_ord_dag<string inst, string suffix, string op,
                                         string size, dag SrcRHS, dag DstRHS> {
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_monotonic") Capsp:$Rn, SrcRHS),
            (!cast<Instruction>(inst # suffix) DstRHS, Capsp:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_acquire") Capsp:$Rn, SrcRHS),
            (!cast<Instruction>(inst # "A" # suffix) DstRHS, Capsp:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_release") Capsp:$Rn, SrcRHS),
            (!cast<Instruction>(inst # "L" # suffix) DstRHS, Capsp:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_acq_rel") Capsp:$Rn, SrcRHS),
            (!cast<Instruction>(inst # "AL" # suffix) DstRHS, Capsp:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_seq_cst") Capsp:$Rn, SrcRHS),
            (!cast<Instruction>(inst # "AL" # suffix) DstRHS, Capsp:$Rn)>;
}

multiclass PLDOPregister_patterns_ord<string inst, string suffix, string op,
                                     string size, dag RHS> {
  defm : PLDOPregister_patterns_ord_dag<inst, suffix, op, size, RHS, RHS>;
}

multiclass PLDOPregister_patterns_ord_mod<string inst, string suffix, string op,
                                         string size, dag LHS, dag RHS> {
  defm : PLDOPregister_patterns_ord_dag<inst, suffix, op, size, LHS, RHS>;
}

multiclass PLDOPregister_patterns<string inst, string op> {
  defm : PLDOPregister_patterns_ord<inst, "X", op, "64", (i64 GPR64:$Rm)>;
  defm : PLDOPregister_patterns_ord<inst, "W", op, "32", (i32 GPR32:$Rm)>;
  defm : PLDOPregister_patterns_ord<inst, "H", op, "16", (i32 GPR32:$Rm)>;
  defm : PLDOPregister_patterns_ord<inst, "B", op, "8",  (i32 GPR32:$Rm)>;
}

multiclass PLDOPregister_patterns_mod<string inst, string op, string mod> {
  defm : PLDOPregister_patterns_ord_mod<inst, "X", op, "64",
                        (i64 GPR64:$Rm),
                        (i64 (!cast<Instruction>(mod#Xrr) XZR, GPR64:$Rm))>;
  defm : PLDOPregister_patterns_ord_mod<inst, "W", op, "32",
                        (i32 GPR32:$Rm),
                        (i32 (!cast<Instruction>(mod#Wrr) WZR, GPR32:$Rm))>;
  defm : PLDOPregister_patterns_ord_mod<inst, "H", op, "16",
                        (i32 GPR32:$Rm),
                        (i32 (!cast<Instruction>(mod#Wrr) WZR, GPR32:$Rm))>;
  defm : PLDOPregister_patterns_ord_mod<inst, "B", op, "8",
                        (i32 GPR32:$Rm),
                        (i32 (!cast<Instruction>(mod#Wrr) WZR, GPR32:$Rm))>;
}

let Predicates = [HasLSE, HasC64] in
multiclass PCASregister_patterns_ord_dag<string inst, string suffix, string op,
                                         string size, dag OLD, dag NEW> {
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_monotonic") Capsp:$Rn, OLD, NEW),
            (!cast<Instruction>(inst # suffix) OLD, NEW, Capsp:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_acquire") Capsp:$Rn, OLD, NEW),
            (!cast<Instruction>(inst # "A" # suffix) OLD, NEW, Capsp:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_release") Capsp:$Rn, OLD, NEW),
            (!cast<Instruction>(inst # "L" # suffix) OLD, NEW, Capsp:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_acq_rel") Capsp:$Rn, OLD, NEW),
            (!cast<Instruction>(inst # "AL" # suffix) OLD, NEW, Capsp:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_"#size#"_seq_cst") Capsp:$Rn, OLD, NEW),
            (!cast<Instruction>(inst # "AL" # suffix) OLD, NEW, Capsp:$Rn)>;
}

multiclass PCASregister_patterns_ord<string inst, string suffix, string op,
                                     string size, dag OLD, dag NEW> {
  defm : PCASregister_patterns_ord_dag<inst, suffix, op, size, OLD, NEW>;
}

multiclass PCASregister_patterns<string inst, string op> {
  defm : PCASregister_patterns_ord<inst, "X", op, "64",
                        (i64 GPR64:$Rold), (i64 GPR64:$Rnew)>;
  defm : PCASregister_patterns_ord<inst, "W", op, "32",
                        (i32 GPR32:$Rold), (i32 GPR32:$Rnew)>;
  defm : PCASregister_patterns_ord<inst, "H", op, "16",
                        (i32 GPR32:$Rold), (i32 GPR32:$Rnew)>;
  defm : PCASregister_patterns_ord<inst, "B", op, "8",
                        (i32 GPR32:$Rold), (i32 GPR32:$Rnew)>;
}

multiclass CapCASPatterns<string inst, string op, RegisterClass reg> {
  def : Pat<(!cast<PatFrag>(op#"_monotonic") reg:$Rn, Cap:$Cs, Cap:$Ct),
            (!cast<Instruction>(inst) Cap:$Cs, Cap:$Ct, reg:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_acquire") reg:$Rn, Cap:$Cs, Cap:$Ct),
            (!cast<Instruction>(inst#"Acq") Cap:$Cs, Cap:$Ct, reg:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_release") reg:$Rn, Cap:$Cs, Cap:$Ct),
            (!cast<Instruction>(inst#"Rel") Cap:$Cs, Cap:$Ct, reg:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_acq_rel") reg:$Rn, Cap:$Cs, Cap:$Ct),
            (!cast<Instruction>(inst#"AcqRel") Cap:$Cs, Cap:$Ct, reg:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_seq_cst") reg:$Rn, Cap:$Cs, Cap:$Ct),
            (!cast<Instruction>(inst#"AcqRel") Cap:$Cs, Cap:$Ct, reg:$Rn)>;
}

multiclass CapSWPPatterns<string inst, string op, RegisterClass reg> {
  def : Pat<(!cast<PatFrag>(op#"_monotonic") reg:$Rn, Cap:$Cs),
            (!cast<Instruction>(inst) Cap:$Cs, reg:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_acquire") reg:$Rn, Cap:$Cs),
            (!cast<Instruction>(inst#"Acq") Cap:$Cs, reg:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_release") reg:$Rn, Cap:$Cs),
            (!cast<Instruction>(inst#"Rel") Cap:$Cs, reg:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_acq_rel") reg:$Rn, Cap:$Cs),
            (!cast<Instruction>(inst#"AcqRel") Cap:$Cs, reg:$Rn)>;
  def : Pat<(!cast<PatFrag>(op#"_seq_cst") reg:$Rn, Cap:$Cs),
            (!cast<Instruction>(inst#"AcqRel") Cap:$Cs, reg:$Rn)>;
}

let mayLoad = 1 in
class PRCPCLoad<bits<2> sz, string asm, RegisterClass RC>
  : I<(outs RC:$Rt), (ins Capsp:$Rn), asm, "\t$Rt, [$Rn]", "", []>,
  Sched<[]> {
  bits<5> Rn;
  bits<5> Rt;
  let Inst{31-30} = sz;
  let Inst{29-10} = 0b11100010111111110000;
  let Inst{9-5} = Rn;
  let Inst{4-0} = Rt;
  let DecoderNamespace = "AArch64C64";
}
