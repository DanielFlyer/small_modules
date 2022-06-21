// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftl.h for the primary calling header

#include "verilated.h"

#include "Vshiftl___024root.h"

VL_ATTR_COLD void Vshiftl___024root___eval_initial(Vshiftl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftl___024root___eval_initial\n"); );
}

void Vshiftl___024root___combo__TOP__0(Vshiftl___024root* vlSelf);

VL_ATTR_COLD void Vshiftl___024root___eval_settle(Vshiftl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftl___024root___eval_settle\n"); );
    // Body
    Vshiftl___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vshiftl___024root___final(Vshiftl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftl___024root___final\n"); );
}

VL_ATTR_COLD void Vshiftl___024root___ctor_var_reset(Vshiftl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->alu_op_i = VL_RAND_RESET_I(4);
    vlSelf->alu_a_i = VL_RAND_RESET_I(32);
    vlSelf->alu_b_i = VL_RAND_RESET_I(32);
    vlSelf->alu_p_o = VL_RAND_RESET_I(32);
}
