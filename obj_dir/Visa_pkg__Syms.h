// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VISA_PKG__SYMS_H_
#define VERILATED_VISA_PKG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Visa_pkg.h"

// INCLUDE MODULE CLASSES
#include "Visa_pkg___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Visa_pkg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Visa_pkg* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Visa_pkg___024root             TOP;

    // CONSTRUCTORS
    Visa_pkg__Syms(VerilatedContext* contextp, const char* namep, Visa_pkg* modelp);
    ~Visa_pkg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
