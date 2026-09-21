// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rset_n__0 = vlSelfRef.rset_n;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 100, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__memory_instruction)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/oleg/projects/riscv_cpu/tb/../rtl/top_level/rv321_top.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rset_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rset_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rset_n = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__rset_n = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__dmem_we = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__rset_n = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__dmem_we = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__pc_4 = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__imm_exit = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__alu_sel = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__op_alu = VL_RAND_RESET_I(4);
    vlSelf->rv321_top__DOT__instancecore__DOT__register_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__zero_flag = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__alu_src_b = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd = VL_RAND_RESET_I(5);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancepc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancepc__DOT__rset_n = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancecu__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu = VL_RAND_RESET_I(4);
    vlSelf->rv321_top__DOT__instancecore__DOT__instanceimm__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__rset_n = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data1 = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->rv321_top__DOT__instancecore__DOT__instanceALU__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__instanceALU__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__instanceALU__DOT__ALU_op = VL_RAND_RESET_I(4);
    vlSelf->rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__insranceinstmem__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__insranceinstmem__DOT__instruction = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->rv321_top__DOT__insranceinstmem__DOT__memory_instruction[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv321_top__DOT__instancedatamem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancedatamem__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->rv321_top__DOT__instancedatamem__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancedatamem__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->rv321_top__DOT__instancedatamem__DOT__rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->rv321_top__DOT__instancedatamem__DOT__memory_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv321_top__DOT__instancedatamem__DOT____Vlvbound_h76cb1f0a__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rset_n__0 = VL_RAND_RESET_I(1);
}
