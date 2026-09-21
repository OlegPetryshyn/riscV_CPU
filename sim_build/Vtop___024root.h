// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_isa_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_isa_pkg* __PVT__isa_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rset_n,0,0);
        CData/*0:0*/ rv321_top__DOT__clk;
        CData/*0:0*/ rv321_top__DOT__rset_n;
        CData/*0:0*/ rv321_top__DOT__dmem_we;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__clk;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__rset_n;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__dmem_we;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__alu_sel;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__mem_to_reg;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__reg_write;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__branch;
        CData/*3:0*/ rv321_top__DOT__instancecore__DOT__op_alu;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__zero_flag;
        CData/*4:0*/ rv321_top__DOT__instancecore__DOT____Vcellinp__instancerf__rd;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancepc__DOT__clk;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancepc__DOT__rset_n;
        CData/*6:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__opcode;
        CData/*2:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct3;
        CData/*6:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct7;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch;
        CData/*3:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__clk;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__rset_n;
        CData/*4:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs1;
        CData/*4:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs2;
        CData/*4:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__rd;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_write;
        CData/*3:0*/ rv321_top__DOT__instancecore__DOT__instanceALU__DOT__ALU_op;
        CData/*0:0*/ rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero;
        CData/*0:0*/ rv321_top__DOT__instancedatamem__DOT__clk;
        CData/*0:0*/ rv321_top__DOT__instancedatamem__DOT__we;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rset_n__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ rv321_top__DOT__pc;
        IData/*31:0*/ rv321_top__DOT__inst;
        IData/*31:0*/ rv321_top__DOT__dmem_rdata;
        IData/*31:0*/ rv321_top__DOT__dmem_wdata;
        IData/*31:0*/ rv321_top__DOT__dmem_addr;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__pc;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__inst;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__dmem_rdata;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__dmem_addr;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__dmem_wdata;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__pc_next;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__pc_4;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__pc_target;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__imm_exit;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__register_wdata;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__rs1_data;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__rs2_data;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__alu_result;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__alu_src_b;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc_next;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instanceimm__DOT__inst;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm;
    };
    struct {
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__wdata;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data1;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data2;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instanceALU__DOT__a;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instanceALU__DOT__b;
        IData/*31:0*/ rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out;
        IData/*31:0*/ rv321_top__DOT__insranceinstmem__DOT__address;
        IData/*31:0*/ rv321_top__DOT__insranceinstmem__DOT__instruction;
        IData/*31:0*/ rv321_top__DOT__instancedatamem__DOT__address;
        IData/*31:0*/ rv321_top__DOT__instancedatamem__DOT__wdata;
        IData/*31:0*/ rv321_top__DOT__instancedatamem__DOT__rdata;
        IData/*31:0*/ rv321_top__DOT__instancedatamem__DOT____Vlvbound_h76cb1f0a__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> rv321_top__DOT__instancecore__DOT__instancerf__DOT__register;
        VlUnpacked<IData/*31:0*/, 100> rv321_top__DOT__insranceinstmem__DOT__memory_instruction;
        VlUnpacked<IData/*31:0*/, 100> rv321_top__DOT__instancedatamem__DOT__memory_data;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*6:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_R_TYPE = 0x33U;
    static constexpr CData/*6:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_I_TYPE = 0x13U;
    static constexpr CData/*6:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_LOAD = 3U;
    static constexpr CData/*6:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_STORE = 0x23U;
    static constexpr CData/*6:0*/ rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_BRANCH = 0x63U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
