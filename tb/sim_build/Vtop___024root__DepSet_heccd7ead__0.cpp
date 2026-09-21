// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7 = 0;
    CData/*2:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3 = 0;
    CData/*6:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode = 0;
    CData/*4:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2 = 0;
    CData/*4:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1 = 0;
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    // Body
    vlSelfRef.rv321_top__DOT__instancecore__DOT__pc 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc;
    vlSelfRef.rv321_top__DOT__pc = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc;
    vlSelfRef.rv321_top__DOT__rset_n = vlSelfRef.rset_n;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_4 
        = ((IData)(4U) + vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc);
    vlSelfRef.rv321_top__DOT__clk = vlSelfRef.clk;
    __VdfgRegularize_hd87f99a1_0_1 = ((0x63U >= (0x7fU 
                                                 & (vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc 
                                                    >> 2U)))
                                       ? vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__memory_instruction
                                      [(0x7fU & (vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc 
                                                 >> 2U))]
                                       : 0U);
    vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__address 
        = vlSelfRef.rv321_top__DOT__pc;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__rset_n 
        = vlSelfRef.rv321_top__DOT__rset_n;
    vlSelfRef.rv321_top__DOT__instancedatamem__DOT__clk 
        = vlSelfRef.rv321_top__DOT__clk;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__clk 
        = vlSelfRef.rv321_top__DOT__clk;
    if ((0x64U > VL_SHIFTR_III(32,32,32, vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc, 2U))) {
        vlSelfRef.rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_1 
                        >> 7U));
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_1 
                        >> 0xfU));
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3 
            = (7U & (__VdfgRegularize_hd87f99a1_0_1 
                     >> 0xcU));
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7 
            = (__VdfgRegularize_hd87f99a1_0_1 >> 0x19U);
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_1 
                        >> 0x14U));
        vlSelfRef.rv321_top__DOT__inst = __VdfgRegularize_hd87f99a1_0_1;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode 
            = (0x7fU & __VdfgRegularize_hd87f99a1_0_1);
    } else {
        vlSelfRef.rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd = 0U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1 = 0U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3 = 0U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7 = 0U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2 = 0U;
        vlSelfRef.rv321_top__DOT__inst = 0x13U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode = 0x13U;
    }
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__rset_n 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__rset_n;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rset_n 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__rset_n;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__clk 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__clk;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__clk 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__clk;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rd 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs1 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
        = ((0U == (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1))
            ? 0U : vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register
           [rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1]);
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct3 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct7 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs2 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2;
    vlSelfRef.rv321_top__DOT__dmem_wdata = ((0U == (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2))
                                             ? 0U : 
                                            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register
                                            [rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2]);
    vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__instruction 
        = vlSelfRef.rv321_top__DOT__inst;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__inst 
        = vlSelfRef.rv321_top__DOT__inst;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm 
        = ((0x40U & vlSelfRef.rv321_top__DOT__inst)
            ? ((0x20U & vlSelfRef.rv321_top__DOT__inst)
                ? ((0x10U & vlSelfRef.rv321_top__DOT__inst)
                    ? 0U : ((8U & vlSelfRef.rv321_top__DOT__inst)
                             ? ((4U & vlSelfRef.rv321_top__DOT__inst)
                                 ? ((2U & vlSelfRef.rv321_top__DOT__inst)
                                     ? ((1U & vlSelfRef.rv321_top__DOT__inst)
                                         ? (((- (IData)(
                                                        (vlSelfRef.rv321_top__DOT__inst 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | (((0xff000U 
                                                 & vlSelfRef.rv321_top__DOT__inst) 
                                                | (0x800U 
                                                   & (vlSelfRef.rv321_top__DOT__inst 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.rv321_top__DOT__inst 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & vlSelfRef.rv321_top__DOT__inst)
                                           ? ((2U & vlSelfRef.rv321_top__DOT__inst)
                                               ? ((1U 
                                                   & vlSelfRef.rv321_top__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.rv321_top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.rv321_top__DOT__inst 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelfRef.rv321_top__DOT__inst)
                                               ? ((1U 
                                                   & vlSelfRef.rv321_top__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.rv321_top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.rv321_top__DOT__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.rv321_top__DOT__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.rv321_top__DOT__inst 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & vlSelfRef.rv321_top__DOT__inst)
                          ? ((0x10U & vlSelfRef.rv321_top__DOT__inst)
                              ? ((8U & vlSelfRef.rv321_top__DOT__inst)
                                  ? 0U : ((4U & vlSelfRef.rv321_top__DOT__inst)
                                           ? ((2U & vlSelfRef.rv321_top__DOT__inst)
                                               ? ((1U 
                                                   & vlSelfRef.rv321_top__DOT__inst)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.rv321_top__DOT__inst)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & vlSelfRef.rv321_top__DOT__inst)
                               ? 0U : ((4U & vlSelfRef.rv321_top__DOT__inst)
                                        ? 0U : ((2U 
                                                 & vlSelfRef.rv321_top__DOT__inst)
                                                 ? 
                                                ((1U 
                                                  & vlSelfRef.rv321_top__DOT__inst)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.rv321_top__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.rv321_top__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.rv321_top__DOT__inst 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((8U & vlSelfRef.rv321_top__DOT__inst)
                              ? 0U : ((4U & vlSelfRef.rv321_top__DOT__inst)
                                       ? 0U : ((2U 
                                                & vlSelfRef.rv321_top__DOT__inst)
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.rv321_top__DOT__inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.rv321_top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.rv321_top__DOT__inst 
                                                       >> 0x14U))
                                                    : 0U)
                                                : 0U)))));
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__opcode 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
    if ((0x40U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
        if ((0x20U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            if ((0x10U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                }
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu 
                    = ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                        ? 1U : 0U);
            } else {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            }
        } else {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        }
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch 
            = ((1U & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                      >> 5U)) && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                            >> 4U))) 
                                  && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 3U))) 
                                      && ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))))));
    } else if ((0x20U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
        if ((0x10U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write 
                = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
            if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                }
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu 
                    = ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                        ? ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                            ? ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                ? ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                                   ? 0U
                                                   : 4U))
                            : ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                ? 0U : ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                         ? 5U : ((0x20U 
                                                  & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7))
                                                  ? 1U
                                                  : 0U))))
                        : 0U);
            } else {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            }
        } else {
            if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                }
            } else {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            }
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write 
                = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        }
    } else if ((0x10U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write 
            = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                         >> 3U))) && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 2U))) 
                                      && ((1U & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
        if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            }
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu 
                = ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                    ? ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                        ? ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                            ? ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                ? 2U : 3U) : ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                               ? 0U
                                               : 4U))
                        : ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                            ? 0U : ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                     ? 5U : 0U))) : 0U);
        } else {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        }
    } else {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write 
            = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                         >> 3U))) && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 2U))) 
                                      && ((1U & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
        if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
        } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
        } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            }
        } else {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
        }
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg 
            = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                         >> 3U))) && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 2U))) 
                                      && ((1U & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
    }
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel 
        = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                     >> 6U))) && ((0x20U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                                   ? ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 4U))) 
                                      && ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))))))
                                   : ((0x10U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                                       ? ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))))
                                       : ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))))))));
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__a 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data1 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data;
    vlSelfRef.rv321_top__DOT__instancedatamem__DOT__wdata 
        = vlSelfRef.rv321_top__DOT__dmem_wdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_wdata 
        = vlSelfRef.rv321_top__DOT__dmem_wdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__rs2_data 
        = vlSelfRef.rv321_top__DOT__dmem_wdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data2 
        = vlSelfRef.rv321_top__DOT__dmem_wdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__inst 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__inst;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__imm_exit 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_target 
        = (vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm 
           + vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc);
    vlSelfRef.rv321_top__DOT__instancecore__DOT__reg_write 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_we 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write;
    vlSelfRef.rv321_top__DOT__dmem_we = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__mem_to_reg 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__branch 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu;
    if (vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel) {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_sel = 1U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b 
            = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm;
    } else {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_sel = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b 
            = vlSelfRef.rv321_top__DOT__dmem_wdata;
    }
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_write 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__reg_write;
    vlSelfRef.rv321_top__DOT__instancedatamem__DOT__we 
        = vlSelfRef.rv321_top__DOT__dmem_we;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__ALU_op 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__b 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out 
        = ((8U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
            ? 0U : ((4U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                     ? ((2U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                         ? 0U : ((1U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                                  ? (VL_LTS_III(32, vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data, vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)
                                      ? 1U : 0U) : 
                                 (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                  ^ vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)))
                     : ((2U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                         ? ((1U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                             ? (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                | vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)
                             : (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                & vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b))
                         : ((1U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                             ? (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                - vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)
                             : (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                + vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)))));
    vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_addr 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_result 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out;
    vlSelfRef.rv321_top__DOT__dmem_addr = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero 
        = (0U == vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out);
    vlSelfRef.rv321_top__DOT__dmem_rdata = ((0x63U 
                                             >= (0x7fU 
                                                 & (vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out 
                                                    >> 2U)))
                                             ? vlSelfRef.rv321_top__DOT__instancedatamem__DOT__memory_data
                                            [(0x7fU 
                                              & (vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out 
                                                 >> 2U))]
                                             : 0U);
    vlSelfRef.rv321_top__DOT__instancedatamem__DOT__address 
        = vlSelfRef.rv321_top__DOT__dmem_addr;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__zero_flag 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_next 
        = (((IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch) 
            & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero))
            ? vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_target
            : vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_4);
    vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_rdata 
        = vlSelfRef.rv321_top__DOT__dmem_rdata;
    vlSelfRef.rv321_top__DOT__instancedatamem__DOT__rdata 
        = vlSelfRef.rv321_top__DOT__dmem_rdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__register_wdata 
        = ((IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg)
            ? vlSelfRef.rv321_top__DOT__dmem_rdata : vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out);
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc_next 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_next;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__wdata 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__register_wdata;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__rv321_top__DOT__instancedatamem__DOT__memory_data__v0;
    __VdlyVal__rv321_top__DOT__instancedatamem__DOT__memory_data__v0 = 0;
    CData/*6:0*/ __VdlyDim0__rv321_top__DOT__instancedatamem__DOT__memory_data__v0;
    __VdlyDim0__rv321_top__DOT__instancedatamem__DOT__memory_data__v0 = 0;
    CData/*0:0*/ __VdlySet__rv321_top__DOT__instancedatamem__DOT__memory_data__v0;
    __VdlySet__rv321_top__DOT__instancedatamem__DOT__memory_data__v0 = 0;
    // Body
    __VdlySet__rv321_top__DOT__instancedatamem__DOT__memory_data__v0 = 0U;
    if (vlSelfRef.rv321_top__DOT__dmem_we) {
        vlSelfRef.rv321_top__DOT__instancedatamem__DOT____Vlvbound_h76cb1f0a__0 
            = vlSelfRef.rv321_top__DOT__dmem_wdata;
        if ((0x63U >= (0x7fU & (vlSelfRef.rv321_top__DOT__dmem_addr 
                                >> 2U)))) {
            __VdlyVal__rv321_top__DOT__instancedatamem__DOT__memory_data__v0 
                = vlSelfRef.rv321_top__DOT__instancedatamem__DOT____Vlvbound_h76cb1f0a__0;
            __VdlyDim0__rv321_top__DOT__instancedatamem__DOT__memory_data__v0 
                = (0x7fU & (vlSelfRef.rv321_top__DOT__dmem_addr 
                            >> 2U));
            __VdlySet__rv321_top__DOT__instancedatamem__DOT__memory_data__v0 = 1U;
        }
    }
    if (__VdlySet__rv321_top__DOT__instancedatamem__DOT__memory_data__v0) {
        vlSelfRef.rv321_top__DOT__instancedatamem__DOT__memory_data[__VdlyDim0__rv321_top__DOT__instancedatamem__DOT__memory_data__v0] 
            = __VdlyVal__rv321_top__DOT__instancedatamem__DOT__memory_data__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7 = 0;
    CData/*2:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3 = 0;
    CData/*6:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode = 0;
    CData/*4:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2 = 0;
    CData/*4:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1;
    rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1 = 0;
    IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    IData/*31:0*/ __VdlyVal__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0;
    __VdlyVal__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0 = 0;
    CData/*4:0*/ __VdlyDim0__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0;
    __VdlyDim0__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0 = 0;
    CData/*0:0*/ __VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0;
    __VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0 = 0;
    CData/*0:0*/ __VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v1;
    __VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v1 = 0;
    // Body
    __VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0 = 0U;
    __VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rset_n)))) {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelfRef.rset_n) {
        if (((IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__reg_write) 
             & (0U != (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd)))) {
            __VdlyVal__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0 
                = vlSelfRef.rv321_top__DOT__instancecore__DOT__register_wdata;
            __VdlyDim0__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0 
                = vlSelfRef.rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd;
            __VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0 = 1U;
        }
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc 
            = vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_next;
    } else {
        __VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v1 = 1U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc = 0U;
    }
    if (__VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0) {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[__VdlyDim0__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0] 
            = __VdlyVal__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v0;
    }
    if (__VdlySet__rv321_top__DOT__instancecore__DOT__instancerf__DOT__register__v1) {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[1U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[2U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[3U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[4U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[5U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[6U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[7U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[8U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[9U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0xaU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0xbU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0xcU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0xdU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0xeU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0xfU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x10U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x11U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x12U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x13U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x14U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x15U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x16U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x17U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x18U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x19U] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x1aU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x1bU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x1cU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x1dU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x1eU] = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0x1fU] = 0U;
    }
    vlSelfRef.rv321_top__DOT__instancecore__DOT__pc 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc;
    vlSelfRef.rv321_top__DOT__pc = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_4 
        = ((IData)(4U) + vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc);
    __VdfgRegularize_hd87f99a1_0_1 = ((0x63U >= (0x7fU 
                                                 & (vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc 
                                                    >> 2U)))
                                       ? vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__memory_instruction
                                      [(0x7fU & (vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc 
                                                 >> 2U))]
                                       : 0U);
    vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__address 
        = vlSelfRef.rv321_top__DOT__pc;
    if ((0x64U > VL_SHIFTR_III(32,32,32, vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc, 2U))) {
        vlSelfRef.rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_1 
                        >> 7U));
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_1 
                        >> 0xfU));
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3 
            = (7U & (__VdfgRegularize_hd87f99a1_0_1 
                     >> 0xcU));
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7 
            = (__VdfgRegularize_hd87f99a1_0_1 >> 0x19U);
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2 
            = (0x1fU & (__VdfgRegularize_hd87f99a1_0_1 
                        >> 0x14U));
        vlSelfRef.rv321_top__DOT__inst = __VdfgRegularize_hd87f99a1_0_1;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode 
            = (0x7fU & __VdfgRegularize_hd87f99a1_0_1);
    } else {
        vlSelfRef.rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd = 0U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1 = 0U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3 = 0U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7 = 0U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2 = 0U;
        vlSelfRef.rv321_top__DOT__inst = 0x13U;
        rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode = 0x13U;
    }
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rd 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs1 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
        = ((0U == (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1))
            ? 0U : vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register
           [rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs1]);
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct3 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct7 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs2 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2;
    vlSelfRef.rv321_top__DOT__dmem_wdata = ((0U == (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2))
                                             ? 0U : 
                                            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register
                                            [rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rs2]);
    vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__instruction 
        = vlSelfRef.rv321_top__DOT__inst;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__inst 
        = vlSelfRef.rv321_top__DOT__inst;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm 
        = ((0x40U & vlSelfRef.rv321_top__DOT__inst)
            ? ((0x20U & vlSelfRef.rv321_top__DOT__inst)
                ? ((0x10U & vlSelfRef.rv321_top__DOT__inst)
                    ? 0U : ((8U & vlSelfRef.rv321_top__DOT__inst)
                             ? ((4U & vlSelfRef.rv321_top__DOT__inst)
                                 ? ((2U & vlSelfRef.rv321_top__DOT__inst)
                                     ? ((1U & vlSelfRef.rv321_top__DOT__inst)
                                         ? (((- (IData)(
                                                        (vlSelfRef.rv321_top__DOT__inst 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | (((0xff000U 
                                                 & vlSelfRef.rv321_top__DOT__inst) 
                                                | (0x800U 
                                                   & (vlSelfRef.rv321_top__DOT__inst 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.rv321_top__DOT__inst 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & vlSelfRef.rv321_top__DOT__inst)
                                           ? ((2U & vlSelfRef.rv321_top__DOT__inst)
                                               ? ((1U 
                                                   & vlSelfRef.rv321_top__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.rv321_top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.rv321_top__DOT__inst 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelfRef.rv321_top__DOT__inst)
                                               ? ((1U 
                                                   & vlSelfRef.rv321_top__DOT__inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.rv321_top__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.rv321_top__DOT__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.rv321_top__DOT__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.rv321_top__DOT__inst 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & vlSelfRef.rv321_top__DOT__inst)
                          ? ((0x10U & vlSelfRef.rv321_top__DOT__inst)
                              ? ((8U & vlSelfRef.rv321_top__DOT__inst)
                                  ? 0U : ((4U & vlSelfRef.rv321_top__DOT__inst)
                                           ? ((2U & vlSelfRef.rv321_top__DOT__inst)
                                               ? ((1U 
                                                   & vlSelfRef.rv321_top__DOT__inst)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.rv321_top__DOT__inst)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & vlSelfRef.rv321_top__DOT__inst)
                               ? 0U : ((4U & vlSelfRef.rv321_top__DOT__inst)
                                        ? 0U : ((2U 
                                                 & vlSelfRef.rv321_top__DOT__inst)
                                                 ? 
                                                ((1U 
                                                  & vlSelfRef.rv321_top__DOT__inst)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.rv321_top__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.rv321_top__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.rv321_top__DOT__inst 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((8U & vlSelfRef.rv321_top__DOT__inst)
                              ? 0U : ((4U & vlSelfRef.rv321_top__DOT__inst)
                                       ? 0U : ((2U 
                                                & vlSelfRef.rv321_top__DOT__inst)
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.rv321_top__DOT__inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.rv321_top__DOT__inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.rv321_top__DOT__inst 
                                                       >> 0x14U))
                                                    : 0U)
                                                : 0U)))));
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__opcode 
        = rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
    if ((0x40U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
        if ((0x20U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            if ((0x10U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                }
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu 
                    = ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                        ? 1U : 0U);
            } else {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            }
        } else {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        }
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch 
            = ((1U & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                      >> 5U)) && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                            >> 4U))) 
                                  && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 3U))) 
                                      && ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))))));
    } else if ((0x20U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
        if ((0x10U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write 
                = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
            if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                }
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu 
                    = ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                        ? ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                            ? ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                ? ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                                   ? 0U
                                                   : 4U))
                            : ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                ? 0U : ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                         ? 5U : ((0x20U 
                                                  & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct7))
                                                  ? 1U
                                                  : 0U))))
                        : 0U);
            } else {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
            }
        } else {
            if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
                if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
                }
            } else {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            }
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write 
                = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        }
    } else if ((0x10U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write 
            = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                         >> 3U))) && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 2U))) 
                                      && ((1U & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
        if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            }
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu 
                = ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                    ? ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                        ? ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                            ? ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                ? 2U : 3U) : ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                               ? 0U
                                               : 4U))
                        : ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                            ? 0U : ((1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__funct3))
                                     ? 5U : 0U))) : 0U);
        } else {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
        }
    } else {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write 
            = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                         >> 3U))) && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 2U))) 
                                      && ((1U & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
        if ((8U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
        } else if ((4U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
        } else if ((2U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))) {
            if ((1U & (~ (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))) {
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
                vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
            }
        } else {
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = 0U;
            vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = 0U;
        }
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg 
            = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                         >> 3U))) && ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 2U))) 
                                      && ((1U & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))));
        vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = 0U;
    }
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel = 0U;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel 
        = ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                     >> 6U))) && ((0x20U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                                   ? ((1U & (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                >> 4U))) 
                                      && ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))))))
                                   : ((0x10U & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))
                                       ? ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode)))))
                                       : ((1U & (~ 
                                                 ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(rv321_top__DOT__instancecore__DOT____Vcellinp__instancecu__opcode))))))));
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__a 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data1 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data;
    vlSelfRef.rv321_top__DOT__instancedatamem__DOT__wdata 
        = vlSelfRef.rv321_top__DOT__dmem_wdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_wdata 
        = vlSelfRef.rv321_top__DOT__dmem_wdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__rs2_data 
        = vlSelfRef.rv321_top__DOT__dmem_wdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data2 
        = vlSelfRef.rv321_top__DOT__dmem_wdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__inst 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__inst;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__imm_exit 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_target 
        = (vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm 
           + vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc);
    vlSelfRef.rv321_top__DOT__instancecore__DOT__reg_write 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_we 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write;
    vlSelfRef.rv321_top__DOT__dmem_we = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__mem_to_reg 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__branch 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu;
    if (vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel) {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_sel = 1U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b 
            = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm;
    } else {
        vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_sel = 0U;
        vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b 
            = vlSelfRef.rv321_top__DOT__dmem_wdata;
    }
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_write 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__reg_write;
    vlSelfRef.rv321_top__DOT__instancedatamem__DOT__we 
        = vlSelfRef.rv321_top__DOT__dmem_we;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__ALU_op 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__b 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out 
        = ((8U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
            ? 0U : ((4U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                     ? ((2U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                         ? 0U : ((1U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                                  ? (VL_LTS_III(32, vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data, vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)
                                      ? 1U : 0U) : 
                                 (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                  ^ vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)))
                     : ((2U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                         ? ((1U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                             ? (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                | vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)
                             : (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                & vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b))
                         : ((1U & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu))
                             ? (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                - vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)
                             : (vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data 
                                + vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b)))));
    vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_addr 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_result 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out;
    vlSelfRef.rv321_top__DOT__dmem_addr = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero 
        = (0U == vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out);
    vlSelfRef.rv321_top__DOT__instancedatamem__DOT__address 
        = vlSelfRef.rv321_top__DOT__dmem_addr;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__zero_flag 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_next 
        = (((IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch) 
            & (IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero))
            ? vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_target
            : vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_4);
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc_next 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_next;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv321_top__DOT__dmem_rdata = ((0x63U 
                                             >= (0x7fU 
                                                 & (vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out 
                                                    >> 2U)))
                                             ? vlSelfRef.rv321_top__DOT__instancedatamem__DOT__memory_data
                                            [(0x7fU 
                                              & (vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out 
                                                 >> 2U))]
                                             : 0U);
    vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_rdata 
        = vlSelfRef.rv321_top__DOT__dmem_rdata;
    vlSelfRef.rv321_top__DOT__instancedatamem__DOT__rdata 
        = vlSelfRef.rv321_top__DOT__dmem_rdata;
    vlSelfRef.rv321_top__DOT__instancecore__DOT__register_wdata 
        = ((IData)(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg)
            ? vlSelfRef.rv321_top__DOT__dmem_rdata : vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out);
    vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__wdata 
        = vlSelfRef.rv321_top__DOT__instancecore__DOT__register_wdata;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/oleg/projects/riscv_cpu/tb/../rtl/top_level/rv321_top.sv", 7, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/oleg/projects/riscv_cpu/tb/../rtl/top_level/rv321_top.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/oleg/projects/riscv_cpu/tb/../rtl/top_level/rv321_top.sv", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rset_n & 0xfeU)))) {
        Verilated::overWidthError("rset_n");}
}
#endif  // VL_DEBUG
