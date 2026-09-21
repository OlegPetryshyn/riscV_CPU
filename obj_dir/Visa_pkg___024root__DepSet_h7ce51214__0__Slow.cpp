// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Visa_pkg.h for the primary calling header

#include "Visa_pkg__pch.h"
#include "Visa_pkg___024root.h"

VL_ATTR_COLD void Visa_pkg___024root___eval_static(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_static\n"); );
}

VL_ATTR_COLD void Visa_pkg___024root___eval_initial(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Visa_pkg___024root___eval_final(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Visa_pkg___024root___dump_triggers__stl(Visa_pkg___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Visa_pkg___024root___eval_phase__stl(Visa_pkg___024root* vlSelf);

VL_ATTR_COLD void Visa_pkg___024root___eval_settle(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Visa_pkg___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/control_unit.sv", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Visa_pkg___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Visa_pkg___024root___dump_triggers__stl(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Visa_pkg___024root___ico_sequent__TOP__0(Visa_pkg___024root* vlSelf);

VL_ATTR_COLD void Visa_pkg___024root___eval_stl(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Visa_pkg___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Visa_pkg___024root___eval_triggers__stl(Visa_pkg___024root* vlSelf);

VL_ATTR_COLD bool Visa_pkg___024root___eval_phase__stl(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Visa_pkg___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Visa_pkg___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Visa_pkg___024root___dump_triggers__ico(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Visa_pkg___024root___dump_triggers__act(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Visa_pkg___024root___dump_triggers__nba(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Visa_pkg___024root___ctor_var_reset(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->alu_sel = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->reg_write = VL_RAND_RESET_I(1);
    vlSelf->mem_write = VL_RAND_RESET_I(1);
    vlSelf->branch = VL_RAND_RESET_I(1);
    vlSelf->op_alu = VL_RAND_RESET_I(4);
}
