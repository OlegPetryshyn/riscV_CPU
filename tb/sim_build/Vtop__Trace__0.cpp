// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rset_n));
    bufp->chgBit(oldp+2,(vlSelfRef.rv321_top__DOT__clk));
    bufp->chgBit(oldp+3,(vlSelfRef.rv321_top__DOT__rset_n));
    bufp->chgIData(oldp+4,(vlSelfRef.rv321_top__DOT__pc),32);
    bufp->chgIData(oldp+5,(vlSelfRef.rv321_top__DOT__inst),32);
    bufp->chgIData(oldp+6,(vlSelfRef.rv321_top__DOT__dmem_rdata),32);
    bufp->chgIData(oldp+7,(vlSelfRef.rv321_top__DOT__dmem_wdata),32);
    bufp->chgIData(oldp+8,(vlSelfRef.rv321_top__DOT__dmem_addr),32);
    bufp->chgBit(oldp+9,(vlSelfRef.rv321_top__DOT__dmem_we));
    bufp->chgIData(oldp+10,(vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__address),32);
    bufp->chgIData(oldp+11,(vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__instruction),32);
    bufp->chgBit(oldp+12,(vlSelfRef.rv321_top__DOT__instancecore__DOT__clk));
    bufp->chgBit(oldp+13,(vlSelfRef.rv321_top__DOT__instancecore__DOT__rset_n));
    bufp->chgIData(oldp+14,(vlSelfRef.rv321_top__DOT__instancecore__DOT__pc),32);
    bufp->chgIData(oldp+15,(vlSelfRef.rv321_top__DOT__instancecore__DOT__inst),32);
    bufp->chgIData(oldp+16,(vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_rdata),32);
    bufp->chgIData(oldp+17,(vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_addr),32);
    bufp->chgIData(oldp+18,(vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_wdata),32);
    bufp->chgBit(oldp+19,(vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_we));
    bufp->chgIData(oldp+20,(vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_next),32);
    bufp->chgIData(oldp+21,(vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_4),32);
    bufp->chgIData(oldp+22,(vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_target),32);
    bufp->chgIData(oldp+23,(vlSelfRef.rv321_top__DOT__instancecore__DOT__imm_exit),32);
    bufp->chgBit(oldp+24,(vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_sel));
    bufp->chgBit(oldp+25,(vlSelfRef.rv321_top__DOT__instancecore__DOT__mem_to_reg));
    bufp->chgBit(oldp+26,(vlSelfRef.rv321_top__DOT__instancecore__DOT__reg_write));
    bufp->chgBit(oldp+27,(vlSelfRef.rv321_top__DOT__instancecore__DOT__branch));
    bufp->chgCData(oldp+28,(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu),4);
    bufp->chgIData(oldp+29,(vlSelfRef.rv321_top__DOT__instancecore__DOT__register_wdata),32);
    bufp->chgIData(oldp+30,(vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data),32);
    bufp->chgIData(oldp+31,(vlSelfRef.rv321_top__DOT__instancecore__DOT__rs2_data),32);
    bufp->chgIData(oldp+32,(vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_result),32);
    bufp->chgBit(oldp+33,(vlSelfRef.rv321_top__DOT__instancecore__DOT__zero_flag));
    bufp->chgIData(oldp+34,(vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b),32);
    bufp->chgIData(oldp+35,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__a),32);
    bufp->chgIData(oldp+36,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__b),32);
    bufp->chgCData(oldp+37,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__ALU_op),4);
    bufp->chgIData(oldp+38,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out),32);
    bufp->chgBit(oldp+39,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero));
    bufp->chgCData(oldp+40,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__opcode),7);
    bufp->chgCData(oldp+41,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct3),3);
    bufp->chgCData(oldp+42,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct7),7);
    bufp->chgBit(oldp+43,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel));
    bufp->chgBit(oldp+44,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg));
    bufp->chgBit(oldp+45,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write));
    bufp->chgBit(oldp+46,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write));
    bufp->chgBit(oldp+47,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch));
    bufp->chgCData(oldp+48,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu),4);
    bufp->chgIData(oldp+49,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__inst),32);
    bufp->chgIData(oldp+50,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm),32);
    bufp->chgBit(oldp+51,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__clk));
    bufp->chgBit(oldp+52,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__rset_n));
    bufp->chgIData(oldp+53,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc_next),32);
    bufp->chgIData(oldp+54,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc),32);
    bufp->chgBit(oldp+55,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__clk));
    bufp->chgBit(oldp+56,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rset_n));
    bufp->chgCData(oldp+57,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs1),5);
    bufp->chgCData(oldp+58,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs2),5);
    bufp->chgCData(oldp+59,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rd),5);
    bufp->chgIData(oldp+60,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__wdata),32);
    bufp->chgBit(oldp+61,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_write));
    bufp->chgIData(oldp+62,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data1),32);
    bufp->chgIData(oldp+63,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data2),32);
    bufp->chgIData(oldp+64,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0]),32);
    bufp->chgIData(oldp+65,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[1]),32);
    bufp->chgIData(oldp+66,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[2]),32);
    bufp->chgIData(oldp+67,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[3]),32);
    bufp->chgIData(oldp+68,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[4]),32);
    bufp->chgIData(oldp+69,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[5]),32);
    bufp->chgIData(oldp+70,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[6]),32);
    bufp->chgIData(oldp+71,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[7]),32);
    bufp->chgIData(oldp+72,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[8]),32);
    bufp->chgIData(oldp+73,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[9]),32);
    bufp->chgIData(oldp+74,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[10]),32);
    bufp->chgIData(oldp+75,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[11]),32);
    bufp->chgIData(oldp+76,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[12]),32);
    bufp->chgIData(oldp+77,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[13]),32);
    bufp->chgIData(oldp+78,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[14]),32);
    bufp->chgIData(oldp+79,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[15]),32);
    bufp->chgIData(oldp+80,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[16]),32);
    bufp->chgIData(oldp+81,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[17]),32);
    bufp->chgIData(oldp+82,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[18]),32);
    bufp->chgIData(oldp+83,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[19]),32);
    bufp->chgIData(oldp+84,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[20]),32);
    bufp->chgIData(oldp+85,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[21]),32);
    bufp->chgIData(oldp+86,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[22]),32);
    bufp->chgIData(oldp+87,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[23]),32);
    bufp->chgIData(oldp+88,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[24]),32);
    bufp->chgIData(oldp+89,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[25]),32);
    bufp->chgIData(oldp+90,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[26]),32);
    bufp->chgIData(oldp+91,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[27]),32);
    bufp->chgIData(oldp+92,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[28]),32);
    bufp->chgIData(oldp+93,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[29]),32);
    bufp->chgIData(oldp+94,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[30]),32);
    bufp->chgIData(oldp+95,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[31]),32);
    bufp->chgIData(oldp+96,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i),32);
    bufp->chgBit(oldp+97,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__clk));
    bufp->chgBit(oldp+98,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__we));
    bufp->chgIData(oldp+99,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__address),32);
    bufp->chgIData(oldp+100,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__wdata),32);
    bufp->chgIData(oldp+101,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__rdata),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
