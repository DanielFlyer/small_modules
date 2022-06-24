// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivider.h for the primary calling header

#include "verilated.h"

#include "Vdivider___024root.h"

VL_INLINE_OPT void Vdivider___024root___combo__TOP__0(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->desOv = (0U == (IData)(vlSelf->src2));
}

VL_INLINE_OPT void Vdivider___024root___sequent__TOP__0(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__divider__DOT__cycle;
    // Body
    __Vdly__divider__DOT__cycle = vlSelf->divider__DOT__cycle;
    if (vlSelf->rst) {
        vlSelf->divider__DOT__tmp_div = 0U;
        vlSelf->divider__DOT__tmp_rem = 0U;
        __Vdly__divider__DOT__cycle = 0U;
    } else {
        vlSelf->divider__DOT__tmp_div = (0x3fU & (IData)(vlSelf->divider__DOT__div_out));
        vlSelf->divider__DOT__tmp_rem = vlSelf->divider__DOT__rem0;
        if (vlSelf->enable) {
            __Vdly__divider__DOT__cycle = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelf->divider__DOT__cycle)));
        }
    }
    vlSelf->divider__DOT__cycle = __Vdly__divider__DOT__cycle;
}

VL_INLINE_OPT void Vdivider___024root___combo__TOP__1(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___combo__TOP__1\n"); );
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

void Vdivider___024root___eval(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval\n"); );
    // Body
    Vdivider___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vdivider___024root___sequent__TOP__0(vlSelf);
    }
    Vdivider___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vdivider___024root___eval_debug_assertions(Vdivider___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
