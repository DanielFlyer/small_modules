// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmat_mult.h for the primary calling header

#include "verilated.h"

#include "Vmat_mult___024root.h"

VL_ATTR_COLD void Vmat_mult___024root___eval_initial(Vmat_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmat_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmat_mult___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_80 = vlSelf->clk_80;
    vlSelf->__Vclklast__TOP__rst_80 = vlSelf->rst_80;
}

void Vmat_mult___024root___combo__TOP__0(Vmat_mult___024root* vlSelf);

VL_ATTR_COLD void Vmat_mult___024root___eval_settle(Vmat_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmat_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmat_mult___024root___eval_settle\n"); );
    // Body
    Vmat_mult___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vmat_mult___024root___final(Vmat_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmat_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmat_mult___024root___final\n"); );
}

VL_ATTR_COLD void Vmat_mult___024root___ctor_var_reset(Vmat_mult___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmat_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmat_mult___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_80 = VL_RAND_RESET_I(1);
    vlSelf->rst_80 = VL_RAND_RESET_I(1);
    vlSelf->A00_80 = VL_RAND_RESET_I(9);
    vlSelf->A01_80 = VL_RAND_RESET_I(9);
    vlSelf->A02_80 = VL_RAND_RESET_I(9);
    vlSelf->A03_80 = VL_RAND_RESET_I(9);
    vlSelf->B00_80 = VL_RAND_RESET_I(8);
    vlSelf->B01_80 = VL_RAND_RESET_I(8);
    vlSelf->B02_80 = VL_RAND_RESET_I(8);
    vlSelf->B03_80 = VL_RAND_RESET_I(8);
    vlSelf->AB00_80 = VL_RAND_RESET_I(11);
    vlSelf->mat_mult__DOT__a2_in_80 = VL_RAND_RESET_I(11);
}
