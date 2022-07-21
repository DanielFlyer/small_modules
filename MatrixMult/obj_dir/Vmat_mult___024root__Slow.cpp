// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmat_mult.h for the primary calling header

#include "verilated.h"

#include "Vmat_mult__Syms.h"
#include "Vmat_mult___024root.h"

void Vmat_mult___024root___ctor_var_reset(Vmat_mult___024root* vlSelf);

Vmat_mult___024root::Vmat_mult___024root(Vmat_mult__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmat_mult___024root___ctor_var_reset(this);
}

void Vmat_mult___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmat_mult___024root::~Vmat_mult___024root() {
}
