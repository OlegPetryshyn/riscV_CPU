// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_isa_pkg.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_isa_pkg);
    __Vhier.remove(0, &__Vscope_rv321_top);
    __Vhier.remove(&__Vscope_rv321_top, &__Vscope_rv321_top__insranceinstmem);
    __Vhier.remove(&__Vscope_rv321_top, &__Vscope_rv321_top__instancecore);
    __Vhier.remove(&__Vscope_rv321_top, &__Vscope_rv321_top__instancedatamem);
    __Vhier.remove(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instanceALU);
    __Vhier.remove(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instancecu);
    __Vhier.remove(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instanceimm);
    __Vhier.remove(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instancepc);
    __Vhier.remove(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instancerf);
    __Vhier.remove(&__Vscope_rv321_top__instancecore__instancerf, &__Vscope_rv321_top__instancecore__instancerf__unnamedblk1);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__isa_pkg{this, Verilated::catName(namep, "isa_pkg")}
{
        // Check resources
        Verilated::stackCheck(117);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__isa_pkg = &TOP__isa_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__isa_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_isa_pkg.configure(this, name(), "isa_pkg", "isa_pkg", "isa_pkg", -9, VerilatedScope::SCOPE_PACKAGE);
    __Vscope_rv321_top.configure(this, name(), "rv321_top", "rv321_top", "rv321_top", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv321_top__insranceinstmem.configure(this, name(), "rv321_top.insranceinstmem", "insranceinstmem", "instruction_memory", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv321_top__instancecore.configure(this, name(), "rv321_top.instancecore", "instancecore", "rv321_core", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv321_top__instancecore__instanceALU.configure(this, name(), "rv321_top.instancecore.instanceALU", "instanceALU", "ALU_32bit", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv321_top__instancecore__instancecu.configure(this, name(), "rv321_top.instancecore.instancecu", "instancecu", "control_unit", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv321_top__instancecore__instanceimm.configure(this, name(), "rv321_top.instancecore.instanceimm", "instanceimm", "imm_gen", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv321_top__instancecore__instancepc.configure(this, name(), "rv321_top.instancecore.instancepc", "instancepc", "program_counter", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv321_top__instancecore__instancerf.configure(this, name(), "rv321_top.instancecore.instancerf", "instancerf", "register_file", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv321_top__instancecore__instancerf__unnamedblk1.configure(this, name(), "rv321_top.instancecore.instancerf.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_rv321_top__instancedatamem.configure(this, name(), "rv321_top.instancedatamem", "instancedatamem", "data_memory", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_isa_pkg);
    __Vhier.add(0, &__Vscope_rv321_top);
    __Vhier.add(&__Vscope_rv321_top, &__Vscope_rv321_top__insranceinstmem);
    __Vhier.add(&__Vscope_rv321_top, &__Vscope_rv321_top__instancecore);
    __Vhier.add(&__Vscope_rv321_top, &__Vscope_rv321_top__instancedatamem);
    __Vhier.add(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instanceALU);
    __Vhier.add(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instancecu);
    __Vhier.add(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instanceimm);
    __Vhier.add(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instancepc);
    __Vhier.add(&__Vscope_rv321_top__instancecore, &__Vscope_rv321_top__instancecore__instancerf);
    __Vhier.add(&__Vscope_rv321_top__instancecore__instancerf, &__Vscope_rv321_top__instancecore__instancerf__unnamedblk1);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rset_n", &(TOP.rset_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_isa_pkg.varInsert(__Vfinal,"MEM_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP__isa_pkg.MEM_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_isa_pkg.varInsert(__Vfinal,"REG_ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP__isa_pkg.REG_ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_isa_pkg.varInsert(__Vfinal,"XLEN", const_cast<void*>(static_cast<const void*>(&(TOP__isa_pkg.XLEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_rv321_top.varInsert(__Vfinal,"clk", &(TOP.rv321_top__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top.varInsert(__Vfinal,"dmem_addr", &(TOP.rv321_top__DOT__dmem_addr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top.varInsert(__Vfinal,"dmem_rdata", &(TOP.rv321_top__DOT__dmem_rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top.varInsert(__Vfinal,"dmem_wdata", &(TOP.rv321_top__DOT__dmem_wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top.varInsert(__Vfinal,"dmem_we", &(TOP.rv321_top__DOT__dmem_we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top.varInsert(__Vfinal,"inst", &(TOP.rv321_top__DOT__inst), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top.varInsert(__Vfinal,"pc", &(TOP.rv321_top__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top.varInsert(__Vfinal,"rset_n", &(TOP.rv321_top__DOT__rset_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__insranceinstmem.varInsert(__Vfinal,"address", &(TOP.rv321_top__DOT__insranceinstmem__DOT__address), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__insranceinstmem.varInsert(__Vfinal,"instruction", &(TOP.rv321_top__DOT__insranceinstmem__DOT__instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__insranceinstmem.varInsert(__Vfinal,"memory_instruction", &(TOP.rv321_top__DOT__insranceinstmem__DOT__memory_instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,99 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"alu_result", &(TOP.rv321_top__DOT__instancecore__DOT__alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"alu_sel", &(TOP.rv321_top__DOT__instancecore__DOT__alu_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"alu_src_b", &(TOP.rv321_top__DOT__instancecore__DOT__alu_src_b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"branch", &(TOP.rv321_top__DOT__instancecore__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"clk", &(TOP.rv321_top__DOT__instancecore__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"dmem_addr", &(TOP.rv321_top__DOT__instancecore__DOT__dmem_addr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"dmem_rdata", &(TOP.rv321_top__DOT__instancecore__DOT__dmem_rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"dmem_wdata", &(TOP.rv321_top__DOT__instancecore__DOT__dmem_wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"dmem_we", &(TOP.rv321_top__DOT__instancecore__DOT__dmem_we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"imm_exit", &(TOP.rv321_top__DOT__instancecore__DOT__imm_exit), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"inst", &(TOP.rv321_top__DOT__instancecore__DOT__inst), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"mem_to_reg", &(TOP.rv321_top__DOT__instancecore__DOT__mem_to_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"op_alu", &(TOP.rv321_top__DOT__instancecore__DOT__op_alu), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"pc", &(TOP.rv321_top__DOT__instancecore__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"pc_4", &(TOP.rv321_top__DOT__instancecore__DOT__pc_4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"pc_next", &(TOP.rv321_top__DOT__instancecore__DOT__pc_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"pc_target", &(TOP.rv321_top__DOT__instancecore__DOT__pc_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"reg_write", &(TOP.rv321_top__DOT__instancecore__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"register_wdata", &(TOP.rv321_top__DOT__instancecore__DOT__register_wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"rs1_data", &(TOP.rv321_top__DOT__instancecore__DOT__rs1_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"rs2_data", &(TOP.rv321_top__DOT__instancecore__DOT__rs2_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"rset_n", &(TOP.rv321_top__DOT__instancecore__DOT__rset_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore.varInsert(__Vfinal,"zero_flag", &(TOP.rv321_top__DOT__instancecore__DOT__zero_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instanceALU.varInsert(__Vfinal,"ALU_op", &(TOP.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__ALU_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_rv321_top__instancecore__instanceALU.varInsert(__Vfinal,"a", &(TOP.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instanceALU.varInsert(__Vfinal,"b", &(TOP.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instanceALU.varInsert(__Vfinal,"out", &(TOP.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instanceALU.varInsert(__Vfinal,"zero", &(TOP.rv321_top__DOT__instancecore__DOT__instanceALU__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"OPC_BRANCH", const_cast<void*>(static_cast<const void*>(&(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_BRANCH))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"OPC_I_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_I_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"OPC_LOAD", const_cast<void*>(static_cast<const void*>(&(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_LOAD))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"OPC_R_TYPE", const_cast<void*>(static_cast<const void*>(&(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_R_TYPE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"OPC_STORE", const_cast<void*>(static_cast<const void*>(&(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_STORE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"alu_sel", &(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__alu_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"branch", &(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"funct3", &(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"funct7", &(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"mem_to_reg", &(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_to_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"mem_write", &(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"op_alu", &(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__op_alu), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"opcode", &(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_rv321_top__instancecore__instancecu.varInsert(__Vfinal,"reg_write", &(TOP.rv321_top__DOT__instancecore__DOT__instancecu__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instanceimm.varInsert(__Vfinal,"imm", &(TOP.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instanceimm.varInsert(__Vfinal,"inst", &(TOP.rv321_top__DOT__instancecore__DOT__instanceimm__DOT__inst), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instancepc.varInsert(__Vfinal,"clk", &(TOP.rv321_top__DOT__instancecore__DOT__instancepc__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancepc.varInsert(__Vfinal,"pc", &(TOP.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instancepc.varInsert(__Vfinal,"pc_next", &(TOP.rv321_top__DOT__instancecore__DOT__instancepc__DOT__pc_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instancepc.varInsert(__Vfinal,"rset_n", &(TOP.rv321_top__DOT__instancecore__DOT__instancepc__DOT__rset_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"clk", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"rd", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"reg_data1", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"reg_data2", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_data2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"reg_write", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"register", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__register), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,31 ,31,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"rs1", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"rs2", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"rset_n", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__rset_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancecore__instancerf.varInsert(__Vfinal,"wdata", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancecore__instancerf__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.rv321_top__DOT__instancecore__DOT__instancerf__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_rv321_top__instancedatamem.varInsert(__Vfinal,"address", &(TOP.rv321_top__DOT__instancedatamem__DOT__address), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancedatamem.varInsert(__Vfinal,"clk", &(TOP.rv321_top__DOT__instancedatamem__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_rv321_top__instancedatamem.varInsert(__Vfinal,"memory_data", &(TOP.rv321_top__DOT__instancedatamem__DOT__memory_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,99 ,31,0);
        __Vscope_rv321_top__instancedatamem.varInsert(__Vfinal,"rdata", &(TOP.rv321_top__DOT__instancedatamem__DOT__rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancedatamem.varInsert(__Vfinal,"wdata", &(TOP.rv321_top__DOT__instancedatamem__DOT__wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_rv321_top__instancedatamem.varInsert(__Vfinal,"we", &(TOP.rv321_top__DOT__instancedatamem__DOT__we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
