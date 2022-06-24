// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivider.h for the primary calling header

#include "verilated.h"

#include "Vdivider___024root.h"

VL_ATTR_COLD void Vdivider___024root___settle__TOP__0(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ divider__DOT__div0;
    CData/*0:0*/ divider__DOT__div1;
    CData/*7:0*/ divider__DOT__rem1;
    CData/*7:0*/ divider__DOT__rem2;
    SData/*8:0*/ divider__DOT__sub0;
    SData/*8:0*/ divider__DOT__sub1;
    SData/*15:0*/ divider__DOT__cmp0;
    SData/*15:0*/ divider__DOT__cmp1;
    // Body
    vlSelf->desOv = (0U == (IData)(vlSelf->src2));
    divider__DOT__cmp0 = (0xffffU & ((IData)(vlSelf->src2) 
                                     << (6U & (((IData)(3U) 
                                                - (IData)(vlSelf->divider__DOT__cycle)) 
                                               << 1U))));
    divider__DOT__rem2 = ((0U != (IData)(vlSelf->divider__DOT__cycle))
                           ? (IData)(vlSelf->divider__DOT__tmp_rem)
                           : (IData)(vlSelf->src1));
    divider__DOT__cmp1 = (0xffffU & ((IData)(vlSelf->src2) 
                                     << (7U & ((IData)(1U) 
                                               + (6U 
                                                  & (((IData)(3U) 
                                                      - (IData)(vlSelf->divider__DOT__cycle)) 
                                                     << 1U))))));
    divider__DOT__sub1 = (0x1ffU & ((IData)(divider__DOT__rem2) 
                                    - (0xffU & (IData)(divider__DOT__cmp1))));
    divider__DOT__div1 = (1U & ((~ (IData)((0U != (0xffU 
                                                   & ((IData)(divider__DOT__cmp1) 
                                                      >> 8U))))) 
                                & (~ ((IData)(divider__DOT__sub1) 
                                      >> 8U))));
    divider__DOT__rem1 = (0xffU & ((IData)(divider__DOT__div1)
                                    ? (IData)(divider__DOT__sub1)
                                    : (IData)(divider__DOT__rem2)));
    divider__DOT__sub0 = (0x1ffU & ((IData)(divider__DOT__rem1) 
                                    - (0xffU & (IData)(divider__DOT__cmp0))));
    divider__DOT__div0 = (1U & ((~ (IData)((0U != (0xffU 
                                                   & ((IData)(divider__DOT__cmp0) 
                                                      >> 8U))))) 
                                & (~ ((IData)(divider__DOT__sub0) 
                                      >> 8U))));
    vlSelf->divider__DOT__rem0 = (0xffU & ((IData)(divider__DOT__div0)
                                            ? (IData)(divider__DOT__sub0)
                                            : (IData)(divider__DOT__rem1)));
    vlSelf->divider__DOT__div_out = (((IData)(vlSelf->divider__DOT__tmp_div) 
                                      << 2U) | (((IData)(divider__DOT__div1) 
                                                 << 1U) 
                                                | (IData)(divider__DOT__div0)));
    vlSelf->des1 = vlSelf->divider__DOT__rem0;
    vlSelf->des2 = vlSelf->divider__DOT__div_out;
}

VL_ATTR_COLD void Vdivider___024root___eval_initial(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vdivider___024root___eval_settle(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_settle\n"); );
    // Body
    Vdivider___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdivider___024root___final(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___final\n"); );
}

VL_ATTR_COLD void Vdivider___024root___ctor_var_reset(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->src1 = VL_RAND_RESET_I(8);
    vlSelf->src2 = VL_RAND_RESET_I(8);
    vlSelf->desOv = VL_RAND_RESET_I(1);
    vlSelf->des1 = VL_RAND_RESET_I(8);
    vlSelf->des2 = VL_RAND_RESET_I(8);
    vlSelf->divider__DOT__rem0 = VL_RAND_RESET_I(8);
    vlSelf->divider__DOT__div_out = VL_RAND_RESET_I(8);
    vlSelf->divider__DOT__cycle = VL_RAND_RESET_I(2);
    vlSelf->divider__DOT__tmp_div = VL_RAND_RESET_I(6);
    vlSelf->divider__DOT__tmp_rem = VL_RAND_RESET_I(8);
}
