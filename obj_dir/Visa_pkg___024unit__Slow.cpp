// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Visa_pkg.h for the primary calling header

#include "Visa_pkg__pch.h"
#include "Visa_pkg__Syms.h"
#include "Visa_pkg___024unit.h"

void Visa_pkg___024unit___ctor_var_reset(Visa_pkg___024unit* vlSelf);

Visa_pkg___024unit::Visa_pkg___024unit(Visa_pkg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Visa_pkg___024unit___ctor_var_reset(this);
}

void Visa_pkg___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Visa_pkg___024unit::~Visa_pkg___024unit() {
}
