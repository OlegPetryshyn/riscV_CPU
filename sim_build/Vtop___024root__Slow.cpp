// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*6:0*/ Vtop___024root::rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_R_TYPE;
constexpr CData/*6:0*/ Vtop___024root::rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_I_TYPE;
constexpr CData/*6:0*/ Vtop___024root::rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_LOAD;
constexpr CData/*6:0*/ Vtop___024root::rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_STORE;
constexpr CData/*6:0*/ Vtop___024root::rv321_top__DOT__instancecore__DOT__instancecu__DOT__OPC_BRANCH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
