// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Visa_pkg__Syms.h"


void Visa_pkg___024root__trace_chg_0_sub_0(Visa_pkg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Visa_pkg___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root__trace_chg_0\n"); );
    // Init
    Visa_pkg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Visa_pkg___024root*>(voidSelf);
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Visa_pkg___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Visa_pkg___024root__trace_chg_0_sub_0(Visa_pkg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->opcode),7);
    bufp->chgCData(oldp+1,(vlSelf->funct3),3);
    bufp->chgCData(oldp+2,(vlSelf->funct7),7);
    bufp->chgBit(oldp+3,(vlSelf->alu_sel));
    bufp->chgBit(oldp+4,(vlSelf->mem_to_reg));
    bufp->chgBit(oldp+5,(vlSelf->reg_write));
    bufp->chgBit(oldp+6,(vlSelf->mem_write));
    bufp->chgBit(oldp+7,(vlSelf->branch));
    bufp->chgCData(oldp+8,(vlSelf->op_alu),4);
}

void Visa_pkg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visa_pkg___024root__trace_cleanup\n"); );
    // Init
    Visa_pkg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Visa_pkg___024root*>(voidSelf);
    Visa_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
