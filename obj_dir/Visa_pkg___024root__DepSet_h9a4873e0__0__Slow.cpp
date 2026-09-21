// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Visa_pkg.h for the primary calling header

#include "Visa_pkg__pch.h"
#include "Visa_pkg__Syms.h"
#include "Visa_pkg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Visa_pkg___024root___dump_triggers__stl(Visa_pkg___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Visa_pkg___024root___eval_triggers__stl(Visa_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Visa_pkg___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
