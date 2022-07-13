// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvedic8x8.h for the primary calling header

#include "verilated.h"

#include "Vvedic8x8__Syms.h"
#include "Vvedic8x8___024root.h"

void Vvedic8x8___024root___ctor_var_reset(Vvedic8x8___024root* vlSelf);

Vvedic8x8___024root::Vvedic8x8___024root(Vvedic8x8__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvedic8x8___024root___ctor_var_reset(this);
}

void Vvedic8x8___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vvedic8x8___024root::~Vvedic8x8___024root() {
}
