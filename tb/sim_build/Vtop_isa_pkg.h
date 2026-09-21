// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_ISA_PKG_H_
#define VERILATED_VTOP_ISA_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_isa_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ XLEN = 0x00000020U;
    static constexpr IData/*31:0*/ REG_ADDR_WIDTH = 5U;
    static constexpr IData/*31:0*/ MEM_DEPTH = 0x00000064U;

    // CONSTRUCTORS
    Vtop_isa_pkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_isa_pkg();
    VL_UNCOPYABLE(Vtop_isa_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
