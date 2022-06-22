// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftl.h for the primary calling header

#include "verilated.h"

#include "Vshiftl___024root.h"

VL_INLINE_OPT void Vshiftl___024root___combo__TOP__0(Vshiftl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftl___024root___combo__TOP__0\n"); );
    // Init
    IData/*31:0*/ shiftl__DOT__shift_left_1_r;
    IData/*31:0*/ shiftl__DOT__shift_left_2_r;
    IData/*31:0*/ shiftl__DOT__shift_left_4_r;
    IData/*31:0*/ shiftl__DOT__shift_left_8_r;
    IData/*31:0*/ shiftl__DOT__result_r;
    // Body
    shiftl__DOT__shift_left_1_r = ((1U & vlSelf->alu_b_i)
                                    ? (vlSelf->alu_a_i 
                                       << 1U) : vlSelf->alu_a_i);
    shiftl__DOT__shift_left_2_r = ((2U & vlSelf->alu_b_i)
                                    ? (shiftl__DOT__shift_left_1_r 
                                       << 2U) : shiftl__DOT__shift_left_1_r);
    shiftl__DOT__shift_left_4_r = ((4U & vlSelf->alu_b_i)
                                    ? (shiftl__DOT__shift_left_2_r 
                                       << 4U) : shiftl__DOT__shift_left_2_r);
    shiftl__DOT__shift_left_8_r = ((8U & vlSelf->alu_b_i)
                                    ? (shiftl__DOT__shift_left_4_r 
                                       << 8U) : shiftl__DOT__shift_left_4_r);
    shiftl__DOT__result_r = ((0x10U & vlSelf->alu_b_i)
                              ? (shiftl__DOT__shift_left_8_r 
                                 << 0x10U) : shiftl__DOT__shift_left_8_r);
    vlSelf->alu_p_o = shiftl__DOT__result_r;
}

void Vshiftl___024root___eval(Vshiftl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftl___024root___eval\n"); );
    // Body
    Vshiftl___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vshiftl___024root___eval_debug_assertions(Vshiftl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->alu_op_i & 0xf0U))) {
        Verilated::overWidthError("alu_op_i");}
}
#endif  // VL_DEBUG
