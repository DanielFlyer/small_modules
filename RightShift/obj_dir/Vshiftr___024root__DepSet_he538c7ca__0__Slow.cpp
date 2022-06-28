// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftr.h for the primary calling header

#include "verilated.h"

#include "Vshiftr___024root.h"

VL_ATTR_COLD void Vshiftr___024root___eval_initial(Vshiftr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftr___024root___eval_initial\n"); );
}

void Vshiftr___024root___combo__TOP__0__PROF__shiftr__l22(Vshiftr___024root* vlSelf);
void Vshiftr___024root___combo__TOP__1__PROF__shiftr__l59(Vshiftr___024root* vlSelf);

VL_ATTR_COLD void Vshiftr___024root___eval_settle(Vshiftr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftr___024root___eval_settle\n"); );
    // Body
    Vshiftr___024root___combo__TOP__0__PROF__shiftr__l22(vlSelf);
    Vshiftr___024root___combo__TOP__1__PROF__shiftr__l59(vlSelf);
}

VL_ATTR_COLD void Vshiftr___024root___final(Vshiftr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftr___024root___final\n"); );
}

VL_ATTR_COLD void Vshiftr___024root___ctor_var_reset(Vshiftr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftr___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->alu_op_i = VL_RAND_RESET_I(4);
    vlSelf->alu_a_i = VL_RAND_RESET_I(32);
    vlSelf->alu_b_i = VL_RAND_RESET_I(32);
    vlSelf->alu_p_o = VL_RAND_RESET_I(32);
    vlSelf->shiftr__DOT__result_r = VL_RAND_RESET_I(32);
}
