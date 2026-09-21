// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_isa_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_isa_pkg                   TOP__isa_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_isa_pkg;
    VerilatedScope __Vscope_rv321_top;
    VerilatedScope __Vscope_rv321_top__insranceinstmem;
    VerilatedScope __Vscope_rv321_top__instancecore;
    VerilatedScope __Vscope_rv321_top__instancecore__instanceALU;
    VerilatedScope __Vscope_rv321_top__instancecore__instancecu;
    VerilatedScope __Vscope_rv321_top__instancecore__instanceimm;
    VerilatedScope __Vscope_rv321_top__instancecore__instancepc;
    VerilatedScope __Vscope_rv321_top__instancecore__instancerf;
    VerilatedScope __Vscope_rv321_top__instancecore__instancerf__unnamedblk1;
    VerilatedScope __Vscope_rv321_top__instancedatamem;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
