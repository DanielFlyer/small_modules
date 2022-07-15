// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfht.h for the primary calling header

#include "verilated.h"

#include "Vfht___024root.h"

VL_ATTR_COLD void Vfht___024root___settle__TOP__0(Vfht___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfht__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfht___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->fht__DOT__data_valid = ((0U != (IData)(vlSelf->fht__DOT__cnt)) 
                                    & ((1U != (IData)(vlSelf->fht__DOT__cnt)) 
                                       & (2U == (IData)(vlSelf->fht__DOT__cnt))));
    vlSelf->fht__DOT__temp = ((0U == (IData)(vlSelf->fht__DOT__cnt))
                               ? (IData)(vlSelf->fht__DOT__data_d)
                               : ((1U == (IData)(vlSelf->fht__DOT__cnt))
                                   ? (IData)(vlSelf->fht__DOT__comp_d)
                                   : ((2U == (IData)(vlSelf->fht__DOT__cnt))
                                       ? (IData)(vlSelf->fht__DOT__comp_d)
                                       : (IData)(vlSelf->fht__DOT__temp_d))));
}

VL_ATTR_COLD void Vfht___024root___eval_initial(Vfht___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfht__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfht___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vfht___024root___eval_settle(Vfht___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfht__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfht___024root___eval_settle\n"); );
    // Body
    Vfht___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vfht___024root___final(Vfht___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfht__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfht___024root___final\n"); );
}

VL_ATTR_COLD void Vfht___024root___ctor_var_reset(Vfht___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfht__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfht___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->data_i = VL_RAND_RESET_I(8);
    vlSelf->data_o = VL_RAND_RESET_I(8);
    vlSelf->fht__DOT__data_d = VL_RAND_RESET_I(8);
    vlSelf->fht__DOT__comp_d = VL_RAND_RESET_I(8);
    vlSelf->fht__DOT__temp_d = VL_RAND_RESET_I(8);
    vlSelf->fht__DOT__temp = VL_RAND_RESET_I(8);
    vlSelf->fht__DOT__cnt = VL_RAND_RESET_I(2);
    vlSelf->fht__DOT__data_valid = VL_RAND_RESET_I(1);
}
