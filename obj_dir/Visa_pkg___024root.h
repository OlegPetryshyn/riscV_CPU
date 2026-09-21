// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Visa_pkg.h for the primary calling header

#ifndef VERILATED_VISA_PKG___024ROOT_H_
#define VERILATED_VISA_PKG___024ROOT_H_  // guard

#include "verilated.h"


class Visa_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Visa_pkg___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(opcode,6,0);
    VL_IN8(funct3,2,0);
    VL_IN8(funct7,6,0);
    VL_OUT8(alu_sel,0,0);
    VL_OUT8(mem_to_reg,0,0);
    VL_OUT8(reg_write,0,0);
    VL_OUT8(mem_write,0,0);
    VL_OUT8(branch,0,0);
    VL_OUT8(op_alu,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Visa_pkg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Visa_pkg___024root(Visa_pkg__Syms* symsp, const char* v__name);
    ~Visa_pkg___024root();
    VL_UNCOPYABLE(Visa_pkg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
