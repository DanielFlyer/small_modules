// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Voc8051_divide.h for the primary calling header

#include "verilated.h"

#include "Voc8051_divide___024root.h"

VL_INLINE_OPT void Voc8051_divide___024root___combo__TOP__0(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->desOv = (0U == (IData)(vlSelf->src2));
}

VL_INLINE_OPT void Voc8051_divide___024root___sequent__TOP__0(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__oc8051_divide__DOT__cycle;
    // Body
    __Vdly__oc8051_divide__DOT__cycle = vlSelf->oc8051_divide__DOT__cycle;
    if (vlSelf->rst) {
        vlSelf->oc8051_divide__DOT__tmp_div = 0U;
        vlSelf->oc8051_divide__DOT__tmp_rem = 0U;
        __Vdly__oc8051_divide__DOT__cycle = 0U;
    } else {
        vlSelf->oc8051_divide__DOT__tmp_div = (0x3fU 
                                               & (IData)(vlSelf->oc8051_divide__DOT__div_out));
        vlSelf->oc8051_divide__DOT__tmp_rem = vlSelf->oc8051_divide__DOT__rem0;
        if (vlSelf->enable) {
            __Vdly__oc8051_divide__DOT__cycle = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->oc8051_divide__DOT__cycle)));
        }
    }
    vlSelf->oc8051_divide__DOT__cycle = __Vdly__oc8051_divide__DOT__cycle;
}

VL_INLINE_OPT void Voc8051_divide___024root___combo__TOP__1(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___combo__TOP__1\n"); );
    // Init
    CData/*0:0*/ oc8051_divide__DOT__div0;
    CData/*0:0*/ oc8051_divide__DOT__div1;
    CData/*7:0*/ oc8051_divide__DOT__rem1;
    CData/*7:0*/ oc8051_divide__DOT__rem2;
    SData/*8:0*/ oc8051_divide__DOT__sub0;
    SData/*8:0*/ oc8051_divide__DOT__sub1;
    SData/*15:0*/ oc8051_divide__DOT__cmp0;
    SData/*15:0*/ oc8051_divide__DOT__cmp1;
    // Body
    oc8051_divide__DOT__cmp0 = (0xffffU & ((IData)(vlSelf->src2) 
                                           << (6U & 
                                               (((IData)(3U) 
                                                 - (IData)(vlSelf->oc8051_divide__DOT__cycle)) 
                                                << 1U))));
    oc8051_divide__DOT__rem2 = ((0U != (IData)(vlSelf->oc8051_divide__DOT__cycle))
                                 ? (IData)(vlSelf->oc8051_divide__DOT__tmp_rem)
                                 : (IData)(vlSelf->src1));
    oc8051_divide__DOT__cmp1 = (0xffffU & ((IData)(vlSelf->src2) 
                                           << (7U & 
                                               ((IData)(1U) 
                                                + (6U 
                                                   & (((IData)(3U) 
                                                       - (IData)(vlSelf->oc8051_divide__DOT__cycle)) 
                                                      << 1U))))));
    oc8051_divide__DOT__sub1 = (0x1ffU & ((IData)(oc8051_divide__DOT__rem2) 
                                          - (0xffU 
                                             & (IData)(oc8051_divide__DOT__cmp1))));
    oc8051_divide__DOT__div1 = (1U & ((~ (IData)((0U 
                                                  != 
                                                  (0xffU 
                                                   & ((IData)(oc8051_divide__DOT__cmp1) 
                                                      >> 8U))))) 
                                      & (~ ((IData)(oc8051_divide__DOT__sub1) 
                                            >> 8U))));
    oc8051_divide__DOT__rem1 = (0xffU & ((IData)(oc8051_divide__DOT__div1)
                                          ? (IData)(oc8051_divide__DOT__sub1)
                                          : (IData)(oc8051_divide__DOT__rem2)));
    oc8051_divide__DOT__sub0 = (0x1ffU & ((IData)(oc8051_divide__DOT__rem1) 
                                          - (0xffU 
                                             & (IData)(oc8051_divide__DOT__cmp0))));
    oc8051_divide__DOT__div0 = (1U & ((~ (IData)((0U 
                                                  != 
                                                  (0xffU 
                                                   & ((IData)(oc8051_divide__DOT__cmp0) 
                                                      >> 8U))))) 
                                      & (~ ((IData)(oc8051_divide__DOT__sub0) 
                                            >> 8U))));
    vlSelf->oc8051_divide__DOT__rem0 = (0xffU & ((IData)(oc8051_divide__DOT__div0)
                                                  ? (IData)(oc8051_divide__DOT__sub0)
                                                  : (IData)(oc8051_divide__DOT__rem1)));
    vlSelf->oc8051_divide__DOT__div_out = (((IData)(vlSelf->oc8051_divide__DOT__tmp_div) 
                                            << 2U) 
                                           | (((IData)(oc8051_divide__DOT__div1) 
                                               << 1U) 
                                              | (IData)(oc8051_divide__DOT__div0)));
    vlSelf->des1 = vlSelf->oc8051_divide__DOT__rem0;
    vlSelf->des2 = vlSelf->oc8051_divide__DOT__div_out;
}

void Voc8051_divide___024root___eval(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___eval\n"); );
    // Body
    Voc8051_divide___024root___combo__TOP__0(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Voc8051_divide___024root___sequent__TOP__0(vlSelf);
    }
    Voc8051_divide___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Voc8051_divide___024root___eval_debug_assertions(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
