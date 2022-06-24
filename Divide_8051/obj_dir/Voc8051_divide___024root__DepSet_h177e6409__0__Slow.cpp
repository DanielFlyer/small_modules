// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Voc8051_divide.h for the primary calling header

#include "verilated.h"

#include "Voc8051_divide___024root.h"

VL_ATTR_COLD void Voc8051_divide___024root___settle__TOP__0(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___settle__TOP__0\n"); );
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
    vlSelf->desOv = (0U == (IData)(vlSelf->src2));
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

VL_ATTR_COLD void Voc8051_divide___024root___eval_initial(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Voc8051_divide___024root___eval_settle(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___eval_settle\n"); );
    // Body
    Voc8051_divide___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Voc8051_divide___024root___final(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___final\n"); );
}

VL_ATTR_COLD void Voc8051_divide___024root___ctor_var_reset(Voc8051_divide___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Voc8051_divide__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Voc8051_divide___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->src1 = VL_RAND_RESET_I(8);
    vlSelf->src2 = VL_RAND_RESET_I(8);
    vlSelf->desOv = VL_RAND_RESET_I(1);
    vlSelf->des1 = VL_RAND_RESET_I(8);
    vlSelf->des2 = VL_RAND_RESET_I(8);
    vlSelf->oc8051_divide__DOT__rem0 = VL_RAND_RESET_I(8);
    vlSelf->oc8051_divide__DOT__div_out = VL_RAND_RESET_I(8);
    vlSelf->oc8051_divide__DOT__cycle = VL_RAND_RESET_I(2);
    vlSelf->oc8051_divide__DOT__tmp_div = VL_RAND_RESET_I(6);
    vlSelf->oc8051_divide__DOT__tmp_rem = VL_RAND_RESET_I(8);
}
