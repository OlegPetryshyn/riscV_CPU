// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Visa_pkg.h for the primary calling header

#ifndef VERILATED_VISA_PKG___024UNIT_H_
#define VERILATED_VISA_PKG___024UNIT_H_  // guard

#include "verilated.h"


class Visa_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Visa_pkg___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Visa_pkg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Visa_pkg___024unit(Visa_pkg__Syms* symsp, const char* v__name);
    ~Visa_pkg___024unit();
    VL_UNCOPYABLE(Visa_pkg___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
