// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvedic8x8.h for the primary calling header

#include "verilated.h"

#include "Vvedic8x8___024root.h"

VL_ATTR_COLD void Vvedic8x8___024root___eval_initial(Vvedic8x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvedic8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvedic8x8___024root___eval_initial\n"); );
}

void Vvedic8x8___024root___combo__TOP__0(Vvedic8x8___024root* vlSelf);

VL_ATTR_COLD void Vvedic8x8___024root___eval_settle(Vvedic8x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvedic8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvedic8x8___024root___eval_settle\n"); );
    // Body
    Vvedic8x8___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vvedic8x8___024root___final(Vvedic8x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvedic8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvedic8x8___024root___final\n"); );
}

VL_ATTR_COLD void Vvedic8x8___024root___ctor_var_reset(Vvedic8x8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvedic8x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvedic8x8___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->prod = VL_RAND_RESET_I(16);
    vlSelf->vedic8x8__DOT__VD0__DOT__sum0 = VL_RAND_RESET_I(4);
    vlSelf->vedic8x8__DOT__VD0__DOT__sum1 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__VD0__DOT__sum2 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__VD1__DOT__sum0 = VL_RAND_RESET_I(4);
    vlSelf->vedic8x8__DOT__VD1__DOT__sum1 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__VD1__DOT__sum2 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__VD2__DOT__sum0 = VL_RAND_RESET_I(4);
    vlSelf->vedic8x8__DOT__VD2__DOT__sum1 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__VD2__DOT__sum2 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__VD3__DOT__sum0 = VL_RAND_RESET_I(4);
    vlSelf->vedic8x8__DOT__VD3__DOT__sum1 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__VD3__DOT__sum2 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA0____pinNumber4 = VL_RAND_RESET_I(4);
    vlSelf->vedic8x8__DOT__RA0__DOT____Vcellout__RA1____pinNumber4 = VL_RAND_RESET_I(4);
    vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA0____pinNumber4 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__RA1__DOT____Vcellout__RA1____pinNumber4 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA0____pinNumber4 = VL_RAND_RESET_I(6);
    vlSelf->vedic8x8__DOT__RA2__DOT____Vcellout__RA1____pinNumber4 = VL_RAND_RESET_I(6);
}
