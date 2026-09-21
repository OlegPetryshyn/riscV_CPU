// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__isa_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("isa_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__isa_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rv321_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+3,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"dmem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"dmem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"dmem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"dmem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("insranceinstmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instancecore", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"dmem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"pc_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"pc_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"imm_exit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"alu_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"op_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"register_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"alu_src_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("instanceALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"ALU_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("instancecu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+43,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+44,0,"alu_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"op_alu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+103,0,"OPC_R_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+104,0,"OPC_I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+105,0,"OPC_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+106,0,"OPC_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+107,0,"OPC_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("instanceimm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+50,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instancepc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"pc_next",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instancerf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"rset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"reg_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"reg_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instancedatamem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__isa_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__isa_pkg__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+108,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+109,0,"REG_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+110,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+103,(0x33U),7);
    bufp->fullCData(oldp+104,(0x13U),7);
    bufp->fullCData(oldp+105,(3U),7);
    bufp->fullCData(oldp+106,(0x23U),7);
    bufp->fullCData(oldp+107,(0x63U),7);
    bufp->fullIData(oldp+108,(0x20U),32);
    bufp->fullIData(oldp+109,(5U),32);
    bufp->fullIData(oldp+110,(0x64U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rset_n));
    bufp->fullBit(oldp+3,(vlSelfRef.rv321_top__DOT__clk));
    bufp->fullBit(oldp+4,(vlSelfRef.rv321_top__DOT__rset_n));
    bufp->fullIData(oldp+5,(vlSelfRef.rv321_top__DOT__pc),32);
    bufp->fullIData(oldp+6,(vlSelfRef.rv321_top__DOT__inst),32);
    bufp->fullIData(oldp+7,(vlSelfRef.rv321_top__DOT__dmem_rdata),32);
    bufp->fullIData(oldp+8,(vlSelfRef.rv321_top__DOT__dmem_wdata),32);
    bufp->fullIData(oldp+9,(vlSelfRef.rv321_top__DOT__dmem_addr),32);
    bufp->fullBit(oldp+10,(vlSelfRef.rv321_top__DOT__dmem_we));
    bufp->fullIData(oldp+11,(vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__address),32);
    bufp->fullIData(oldp+12,(vlSelfRef.rv321_top__DOT__insranceinstmem__DOT__instruction),32);
    bufp->fullBit(oldp+13,(vlSelfRef.rv321_top__DOT__instancecore__DOT__clk));
    bufp->fullBit(oldp+14,(vlSelfRef.rv321_top__DOT__instancecore__DOT__rset_n));
    bufp->fullIData(oldp+15,(vlSelfRef.rv321_top__DOT__instancecore__DOT__pc),32);
    bufp->fullIData(oldp+16,(vlSelfRef.rv321_top__DOT__instancecore__DOT__inst),32);
    bufp->fullIData(oldp+17,(vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_rdata),32);
    bufp->fullIData(oldp+18,(vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_addr),32);
    bufp->fullIData(oldp+19,(vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_wdata),32);
    bufp->fullBit(oldp+20,(vlSelfRef.rv321_top__DOT__instancecore__DOT__dmem_we));
    bufp->fullIData(oldp+21,(vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_next),32);
    bufp->fullIData(oldp+22,(vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_4),32);
    bufp->fullIData(oldp+23,(vlSelfRef.rv321_top__DOT__instancecore__DOT__pc_target),32);
    bufp->fullIData(oldp+24,(vlSelfRef.rv321_top__DOT__instancecore__DOT__imm_exit),32);
    bufp->fullBit(oldp+25,(vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_sel));
    bufp->fullBit(oldp+26,(vlSelfRef.rv321_top__DOT__instancecore__DOT__mem_to_reg));
    bufp->fullBit(oldp+27,(vlSelfRef.rv321_top__DOT__instancecore__DOT__reg_write));
    bufp->fullBit(oldp+28,(vlSelfRef.rv321_top__DOT__instancecore__DOT__branch));
    bufp->fullCData(oldp+29,(vlSelfRef.rv321_top__DOT__instancecore__DOT__op_alu),4);
    bufp->fullIData(oldp+30,(vlSelfRef.rv321_top__DOT__instancecore__DOT__register_wdata),32);
    bufp->fullIData(oldp+31,(vlSelfRef.rv321_top__DOT__instancecore__DOT__rs1_data),32);
    bufp->fullIData(oldp+32,(vlSelfRef.rv321_top__DOT__instancecore__DOT__rs2_data),32);
    bufp->fullIData(oldp+33,(vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_result),32);
    bufp->fullBit(oldp+34,(vlSelfRef.rv321_top__DOT__instancecore__DOT__zero_flag));
    bufp->fullIData(oldp+35,(vlSelfRef.rv321_top__DOT__instancecore__DOT__alu_src_b),32);
    bufp->fullIData(oldp+36,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__a),32);
    bufp->fullIData(oldp+37,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__b),32);
    bufp->fullCData(oldp+38,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__ALU_op),4);
    bufp->fullIData(oldp+39,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out),32);
    bufp->fullBit(oldp+40,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero));
    bufp->fullCData(oldp+41,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__opcode),7);
    bufp->fullCData(oldp+42,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct3),3);
    bufp->fullCData(oldp+43,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct7),7);
    bufp->fullBit(oldp+44,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel));
    bufp->fullBit(oldp+45,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg));
    bufp->fullBit(oldp+46,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write));
    bufp->fullBit(oldp+47,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write));
    bufp->fullBit(oldp+48,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch));
    bufp->fullCData(oldp+49,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu),4);
    bufp->fullIData(oldp+50,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__inst),32);
    bufp->fullIData(oldp+51,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm),32);
    bufp->fullBit(oldp+52,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__clk));
    bufp->fullBit(oldp+53,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__rset_n));
    bufp->fullIData(oldp+54,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc_next),32);
    bufp->fullIData(oldp+55,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc),32);
    bufp->fullBit(oldp+56,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__clk));
    bufp->fullBit(oldp+57,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rset_n));
    bufp->fullCData(oldp+58,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs1),5);
    bufp->fullCData(oldp+59,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs2),5);
    bufp->fullCData(oldp+60,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rd),5);
    bufp->fullIData(oldp+61,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__wdata),32);
    bufp->fullBit(oldp+62,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_write));
    bufp->fullIData(oldp+63,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data1),32);
    bufp->fullIData(oldp+64,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data2),32);
    bufp->fullIData(oldp+65,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[0]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[1]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[2]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[3]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[4]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[5]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[6]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[7]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[8]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[9]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[10]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[11]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[12]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[13]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[14]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[15]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[16]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[17]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[18]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[19]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[20]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[21]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[22]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[23]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[24]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[25]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[26]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[27]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[28]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[29]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[30]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register[31]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+98,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__clk));
    bufp->fullBit(oldp+99,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__we));
    bufp->fullIData(oldp+100,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__address),32);
    bufp->fullIData(oldp+101,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__wdata),32);
    bufp->fullIData(oldp+102,(vlSelfRef.rv321_top__DOT__instancedatamem__DOT__rdata),32);
}
