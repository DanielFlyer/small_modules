// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfht.h for the primary calling header

#include "verilated.h"

#include "Vfht__Syms.h"
#include "Vfht___024root.h"

void Vfht___024root___ctor_var_reset(Vfht___024root* vlSelf);

Vfht___024root::Vfht___024root(Vfht__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfht___024root___ctor_var_reset(this);
}

void Vfht___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfht___024root::~Vfht___024root() {
}
