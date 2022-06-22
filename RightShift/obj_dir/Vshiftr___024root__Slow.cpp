// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftr.h for the primary calling header

#include "verilated.h"

#include "Vshiftr__Syms.h"
#include "Vshiftr___024root.h"

void Vshiftr___024root___ctor_var_reset(Vshiftr___024root* vlSelf);

Vshiftr___024root::Vshiftr___024root(Vshiftr__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vshiftr___024root___ctor_var_reset(this);
}

void Vshiftr___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vshiftr___024root::~Vshiftr___024root() {
}
