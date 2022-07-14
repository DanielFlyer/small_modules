// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod3.h for the primary calling header

#include "verilated.h"

#include "Vmod3__Syms.h"
#include "Vmod3___024root.h"

void Vmod3___024root___ctor_var_reset(Vmod3___024root* vlSelf);

Vmod3___024root::Vmod3___024root(Vmod3__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmod3___024root___ctor_var_reset(this);
}

void Vmod3___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmod3___024root::~Vmod3___024root() {
}
