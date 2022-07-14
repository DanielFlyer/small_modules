// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod3.h for the primary calling header

#include "verilated.h"

#include "Vmod3___024root.h"

VL_ATTR_COLD void Vmod3___024root___eval_initial(Vmod3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmod3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod3___024root___eval_initial\n"); );
}

void Vmod3___024root___combo__TOP__0(Vmod3___024root* vlSelf);

VL_ATTR_COLD void Vmod3___024root___eval_settle(Vmod3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmod3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod3___024root___eval_settle\n"); );
    // Body
    Vmod3___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vmod3___024root___final(Vmod3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmod3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod3___024root___final\n"); );
}

VL_ATTR_COLD void Vmod3___024root___ctor_var_reset(Vmod3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmod3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod3___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->dat_i = VL_RAND_RESET_I(8);
    vlSelf->reminder = VL_RAND_RESET_I(2);
}
