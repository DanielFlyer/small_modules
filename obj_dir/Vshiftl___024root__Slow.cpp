// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftl.h for the primary calling header

#include "verilated.h"

#include "Vshiftl__Syms.h"
#include "Vshiftl___024root.h"

void Vshiftl___024root___ctor_var_reset(Vshiftl___024root* vlSelf);

Vshiftl___024root::Vshiftl___024root(Vshiftl__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vshiftl___024root___ctor_var_reset(this);
}

void Vshiftl___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vshiftl___024root::~Vshiftl___024root() {
}
