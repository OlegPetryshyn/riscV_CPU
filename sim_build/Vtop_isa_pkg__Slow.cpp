// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_isa_pkg.h"

// Parameter definitions for Vtop_isa_pkg
constexpr IData/*31:0*/ Vtop_isa_pkg::XLEN;
constexpr IData/*31:0*/ Vtop_isa_pkg::REG_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_isa_pkg::MEM_DEPTH;


void Vtop_isa_pkg___ctor_var_reset(Vtop_isa_pkg* vlSelf);

Vtop_isa_pkg::Vtop_isa_pkg(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_isa_pkg___ctor_var_reset(this);
}

void Vtop_isa_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_isa_pkg::~Vtop_isa_pkg() {
}
