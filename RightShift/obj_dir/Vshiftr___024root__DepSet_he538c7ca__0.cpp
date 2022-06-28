// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshiftr.h for the primary calling header

#include "verilated.h"

#include "Vshiftr___024root.h"

VL_INLINE_OPT void Vshiftr___024root___combo__TOP__0__PROF__shiftr__l22(Vshiftr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftr___024root___combo__TOP__0__PROF__shiftr__l22\n"); );
    // Init
    SData/*15:0*/ shiftr__DOT__shift_right_fill_r;
    IData/*31:0*/ shiftr__DOT__shift_right_1_r;
    IData/*31:0*/ shiftr__DOT__shift_right_2_r;
    IData/*31:0*/ shiftr__DOT__shift_right_4_r;
    IData/*31:0*/ shiftr__DOT__shift_right_8_r;
    // Body
    shiftr__DOT__shift_right_fill_r = (((vlSelf->alu_a_i 
                                         >> 0x1fU) 
                                        & (3U == (IData)(vlSelf->alu_op_i)))
                                        ? 0xffffU : 0U);
    shiftr__DOT__shift_right_1_r = ((1U & vlSelf->alu_b_i)
                                     ? ((0x80000000U 
                                         & ((IData)(shiftr__DOT__shift_right_fill_r) 
                                            << 0x10U)) 
                                        | (vlSelf->alu_a_i 
                                           >> 1U)) : vlSelf->alu_a_i);
    shiftr__DOT__shift_right_2_r = ((2U & vlSelf->alu_b_i)
                                     ? ((0xc0000000U 
                                         & ((IData)(shiftr__DOT__shift_right_fill_r) 
                                            << 0x10U)) 
                                        | (shiftr__DOT__shift_right_1_r 
                                           >> 2U)) : shiftr__DOT__shift_right_1_r);
    shiftr__DOT__shift_right_4_r = ((4U & vlSelf->alu_b_i)
                                     ? ((0xf0000000U 
                                         & ((IData)(shiftr__DOT__shift_right_fill_r) 
                                            << 0x10U)) 
                                        | (shiftr__DOT__shift_right_2_r 
                                           >> 4U)) : shiftr__DOT__shift_right_2_r);
    shiftr__DOT__shift_right_8_r = ((8U & vlSelf->alu_b_i)
                                     ? ((0xff000000U 
                                         & ((IData)(shiftr__DOT__shift_right_fill_r) 
                                            << 0x10U)) 
                                        | (shiftr__DOT__shift_right_4_r 
                                           >> 8U)) : shiftr__DOT__shift_right_4_r);
    vlSelf->shiftr__DOT__result_r = ((0x10U & vlSelf->alu_b_i)
                                      ? (((IData)(shiftr__DOT__shift_right_fill_r) 
                                          << 0x10U) 
                                         | (shiftr__DOT__shift_right_8_r 
                                            >> 0x10U))
                                      : shiftr__DOT__shift_right_8_r);
}

VL_INLINE_OPT void Vshiftr___024root___combo__TOP__1__PROF__shiftr__l59(Vshiftr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftr___024root___combo__TOP__1__PROF__shiftr__l59\n"); );
    // Body
    vlSelf->alu_p_o = vlSelf->shiftr__DOT__result_r;
}

void Vshiftr___024root___eval(Vshiftr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftr___024root___eval\n"); );
    // Body
    Vshiftr___024root___combo__TOP__0__PROF__shiftr__l22(vlSelf);
    Vshiftr___024root___combo__TOP__1__PROF__shiftr__l59(vlSelf);
}

#ifdef VL_DEBUG
void Vshiftr___024root___eval_debug_assertions(Vshiftr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshiftr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshiftr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->alu_op_i & 0xf0U))) {
        Verilated::overWidthError("alu_op_i");}
}
#endif  // VL_DEBUG
