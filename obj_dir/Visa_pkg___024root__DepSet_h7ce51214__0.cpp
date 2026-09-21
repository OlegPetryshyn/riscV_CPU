// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Visa_pkg.h for the primary calling header

#include "Visa_pkg__pch.h"
#include "Visa_pkg___024root.h"

VL_INLINE_OPT void Visa_pkg___024root___ico_sequent__TOP__0(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->mem_to_reg = 0U;
    vlSelf->alu_sel = 0U;
    vlSelf->alu_sel = ((1U & (~ ((IData)(vlSelf->opcode) 
                                 >> 6U))) && ((0x20U 
                                               & (IData)(vlSelf->opcode))
                                               ? ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->opcode) 
                                                       >> 4U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->opcode) 
                                                           >> 3U))) 
                                                      && ((1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->opcode) 
                                                               >> 2U))) 
                                                          && ((1U 
                                                               & ((IData)(vlSelf->opcode) 
                                                                  >> 1U)) 
                                                              && (1U 
                                                                  & (IData)(vlSelf->opcode))))))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->opcode))
                                                   ? 
                                                  ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->opcode) 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->opcode) 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & ((IData)(vlSelf->opcode) 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & (IData)(vlSelf->opcode)))))
                                                   : 
                                                  ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->opcode) 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->opcode) 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & ((IData)(vlSelf->opcode) 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & (IData)(vlSelf->opcode))))))));
    vlSelf->reg_write = 0U;
    vlSelf->mem_write = 0U;
    vlSelf->branch = 0U;
    vlSelf->op_alu = 0U;
    if ((0x40U & (IData)(vlSelf->opcode))) {
        if ((0x20U & (IData)(vlSelf->opcode))) {
            if ((0x10U & (IData)(vlSelf->opcode))) {
                vlSelf->mem_to_reg = 0U;
                vlSelf->reg_write = 0U;
                vlSelf->mem_write = 0U;
                vlSelf->op_alu = 0U;
            } else if ((8U & (IData)(vlSelf->opcode))) {
                vlSelf->mem_to_reg = 0U;
                vlSelf->reg_write = 0U;
                vlSelf->mem_write = 0U;
                vlSelf->op_alu = 0U;
            } else if ((4U & (IData)(vlSelf->opcode))) {
                vlSelf->mem_to_reg = 0U;
                vlSelf->reg_write = 0U;
                vlSelf->mem_write = 0U;
                vlSelf->op_alu = 0U;
            } else if ((2U & (IData)(vlSelf->opcode))) {
                if ((1U & (~ (IData)(vlSelf->opcode)))) {
                    vlSelf->mem_to_reg = 0U;
                    vlSelf->reg_write = 0U;
                    vlSelf->mem_write = 0U;
                }
                vlSelf->op_alu = ((1U & (IData)(vlSelf->opcode))
                                   ? 1U : 0U);
            } else {
                vlSelf->mem_to_reg = 0U;
                vlSelf->reg_write = 0U;
                vlSelf->mem_write = 0U;
                vlSelf->op_alu = 0U;
            }
        } else {
            vlSelf->mem_to_reg = 0U;
            vlSelf->reg_write = 0U;
            vlSelf->mem_write = 0U;
            vlSelf->op_alu = 0U;
        }
        vlSelf->branch = ((1U & ((IData)(vlSelf->opcode) 
                                 >> 5U)) && ((1U & 
                                              (~ ((IData)(vlSelf->opcode) 
                                                  >> 4U))) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->opcode) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelf->opcode) 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & ((IData)(vlSelf->opcode) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelf->opcode)))))));
    } else if ((0x20U & (IData)(vlSelf->opcode))) {
        if ((0x10U & (IData)(vlSelf->opcode))) {
            if ((8U & (IData)(vlSelf->opcode))) {
                vlSelf->mem_to_reg = 0U;
                vlSelf->mem_write = 0U;
                vlSelf->branch = 0U;
                vlSelf->op_alu = 0U;
            } else if ((4U & (IData)(vlSelf->opcode))) {
                vlSelf->mem_to_reg = 0U;
                vlSelf->mem_write = 0U;
                vlSelf->branch = 0U;
                vlSelf->op_alu = 0U;
            } else if ((2U & (IData)(vlSelf->opcode))) {
                if ((1U & (~ (IData)(vlSelf->opcode)))) {
                    vlSelf->mem_to_reg = 0U;
                    vlSelf->mem_write = 0U;
                    vlSelf->branch = 0U;
                }
                vlSelf->op_alu = ((1U & (IData)(vlSelf->opcode))
                                   ? ((4U & (IData)(vlSelf->funct3))
                                       ? ((2U & (IData)(vlSelf->funct3))
                                           ? ((1U & (IData)(vlSelf->funct3))
                                               ? 2U
                                               : 3U)
                                           : ((1U & (IData)(vlSelf->funct3))
                                               ? 0U
                                               : 4U))
                                       : ((2U & (IData)(vlSelf->funct3))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->funct3))
                                                    ? 5U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->funct7))
                                                     ? 1U
                                                     : 0U))))
                                   : 0U);
            } else {
                vlSelf->mem_to_reg = 0U;
                vlSelf->mem_write = 0U;
                vlSelf->branch = 0U;
                vlSelf->op_alu = 0U;
            }
            vlSelf->reg_write = ((1U & (~ ((IData)(vlSelf->opcode) 
                                           >> 3U))) 
                                 && ((1U & (~ ((IData)(vlSelf->opcode) 
                                               >> 2U))) 
                                     && ((1U & ((IData)(vlSelf->opcode) 
                                                >> 1U)) 
                                         && (1U & (IData)(vlSelf->opcode)))));
        } else {
            if ((8U & (IData)(vlSelf->opcode))) {
                vlSelf->mem_to_reg = 0U;
                vlSelf->reg_write = 0U;
                vlSelf->branch = 0U;
            } else if ((4U & (IData)(vlSelf->opcode))) {
                vlSelf->mem_to_reg = 0U;
                vlSelf->reg_write = 0U;
                vlSelf->branch = 0U;
            } else if ((2U & (IData)(vlSelf->opcode))) {
                if ((1U & (~ (IData)(vlSelf->opcode)))) {
                    vlSelf->mem_to_reg = 0U;
                    vlSelf->reg_write = 0U;
                    vlSelf->branch = 0U;
                }
            } else {
                vlSelf->mem_to_reg = 0U;
                vlSelf->reg_write = 0U;
                vlSelf->branch = 0U;
            }
            vlSelf->mem_write = ((1U & (~ ((IData)(vlSelf->opcode) 
                                           >> 3U))) 
                                 && ((1U & (~ ((IData)(vlSelf->opcode) 
                                               >> 2U))) 
                                     && ((1U & ((IData)(vlSelf->opcode) 
                                                >> 1U)) 
                                         && (1U & (IData)(vlSelf->opcode)))));
            vlSelf->op_alu = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->opcode))) {
        if ((8U & (IData)(vlSelf->opcode))) {
            vlSelf->mem_to_reg = 0U;
            vlSelf->mem_write = 0U;
            vlSelf->branch = 0U;
            vlSelf->op_alu = 0U;
        } else if ((4U & (IData)(vlSelf->opcode))) {
            vlSelf->mem_to_reg = 0U;
            vlSelf->mem_write = 0U;
            vlSelf->branch = 0U;
            vlSelf->op_alu = 0U;
        } else if ((2U & (IData)(vlSelf->opcode))) {
            if ((1U & (~ (IData)(vlSelf->opcode)))) {
                vlSelf->mem_to_reg = 0U;
                vlSelf->mem_write = 0U;
                vlSelf->branch = 0U;
            }
            vlSelf->op_alu = ((1U & (IData)(vlSelf->opcode))
                               ? ((4U & (IData)(vlSelf->funct3))
                                   ? ((2U & (IData)(vlSelf->funct3))
                                       ? ((1U & (IData)(vlSelf->funct3))
                                           ? 2U : 3U)
                                       : ((1U & (IData)(vlSelf->funct3))
                                           ? 0U : 4U))
                                   : ((2U & (IData)(vlSelf->funct3))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->funct3))
                                                ? 5U
                                                : 0U)))
                               : 0U);
        } else {
            vlSelf->mem_to_reg = 0U;
            vlSelf->mem_write = 0U;
            vlSelf->branch = 0U;
            vlSelf->op_alu = 0U;
        }
        vlSelf->reg_write = ((1U & (~ ((IData)(vlSelf->opcode) 
                                       >> 3U))) && 
                             ((1U & (~ ((IData)(vlSelf->opcode) 
                                        >> 2U))) && 
                              ((1U & ((IData)(vlSelf->opcode) 
                                      >> 1U)) && (1U 
                                                  & (IData)(vlSelf->opcode)))));
    } else {
        vlSelf->mem_to_reg = ((1U & (~ ((IData)(vlSelf->opcode) 
                                        >> 3U))) && 
                              ((1U & (~ ((IData)(vlSelf->opcode) 
                                         >> 2U))) && 
                               ((1U & ((IData)(vlSelf->opcode) 
                                       >> 1U)) && (1U 
                                                   & (IData)(vlSelf->opcode)))));
        vlSelf->reg_write = ((1U & (~ ((IData)(vlSelf->opcode) 
                                       >> 3U))) && 
                             ((1U & (~ ((IData)(vlSelf->opcode) 
                                        >> 2U))) && 
                              ((1U & ((IData)(vlSelf->opcode) 
                                      >> 1U)) && (1U 
                                                  & (IData)(vlSelf->opcode)))));
        if ((8U & (IData)(vlSelf->opcode))) {
            vlSelf->mem_write = 0U;
            vlSelf->branch = 0U;
        } else if ((4U & (IData)(vlSelf->opcode))) {
            vlSelf->mem_write = 0U;
            vlSelf->branch = 0U;
        } else if ((2U & (IData)(vlSelf->opcode))) {
            if ((1U & (~ (IData)(vlSelf->opcode)))) {
                vlSelf->mem_write = 0U;
                vlSelf->branch = 0U;
            }
        } else {
            vlSelf->mem_write = 0U;
            vlSelf->branch = 0U;
        }
        vlSelf->op_alu = 0U;
    }
}

void Visa_pkg___024root___eval_ico(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Visa_pkg___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Visa_pkg___024root___eval_triggers__ico(Visa_pkg___024root* vlSelf);

bool Visa_pkg___024root___eval_phase__ico(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Visa_pkg___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Visa_pkg___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Visa_pkg___024root___eval_act(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_act\n"); );
}

void Visa_pkg___024root___eval_nba(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_nba\n"); );
}

void Visa_pkg___024root___eval_triggers__act(Visa_pkg___024root* vlSelf);

bool Visa_pkg___024root___eval_phase__act(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Visa_pkg___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Visa_pkg___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Visa_pkg___024root___eval_phase__nba(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Visa_pkg___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Visa_pkg___024root___dump_triggers__ico(Visa_pkg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Visa_pkg___024root___dump_triggers__nba(Visa_pkg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Visa_pkg___024root___dump_triggers__act(Visa_pkg___024root* vlSelf);
#endif  // VL_DEBUG

void Visa_pkg___024root___eval(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Visa_pkg___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/control_unit.sv", 9, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Visa_pkg___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Visa_pkg___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/control_unit.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Visa_pkg___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/control_unit.sv", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Visa_pkg___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Visa_pkg___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Visa_pkg___024root___eval_debug_assertions(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->opcode & 0x80U))) {
        Verilated::overWidthError("opcode");}
    if (VL_UNLIKELY((vlSelf->funct3 & 0xf8U))) {
        Verilated::overWidthError("funct3");}
    if (VL_UNLIKELY((vlSelf->funct7 & 0x80U))) {
        Verilated::overWidthError("funct7");}
}
#endif  // VL_DEBUG
