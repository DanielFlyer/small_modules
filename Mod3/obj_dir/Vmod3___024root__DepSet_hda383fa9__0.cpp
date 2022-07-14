// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod3.h for the primary calling header

#include "verilated.h"

#include "Vmod3___024root.h"

extern const VlUnpacked<CData/*1:0*/, 16> Vmod3__ConstPool__TABLE_h1e27e3cc_0;

VL_INLINE_OPT void Vmod3___024root___combo__TOP__0(Vmod3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmod3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod3___024root___combo__TOP__0\n"); );
    // Init
    CData/*1:0*/ mod3__DOT__dat_5;
    CData/*1:0*/ mod3__DOT__dat_6;
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    // Body
    __Vtableidx1 = ((((4U & (IData)(vlSelf->dat_i))
                       ? ((8U & (IData)(vlSelf->dat_i))
                           ? 0U : 1U) : ((8U & (IData)(vlSelf->dat_i))
                                          ? 2U : 0U)) 
                     << 2U) | ((1U & (IData)(vlSelf->dat_i))
                                ? ((2U & (IData)(vlSelf->dat_i))
                                    ? 0U : 1U) : ((2U 
                                                   & (IData)(vlSelf->dat_i))
                                                   ? 2U
                                                   : 0U)));
    mod3__DOT__dat_5 = Vmod3__ConstPool__TABLE_h1e27e3cc_0
        [__Vtableidx1];
    __Vtableidx2 = ((((0x40U & (IData)(vlSelf->dat_i))
                       ? ((0x80U & (IData)(vlSelf->dat_i))
                           ? 0U : 1U) : ((0x80U & (IData)(vlSelf->dat_i))
                                          ? 2U : 0U)) 
                     << 2U) | ((0x10U & (IData)(vlSelf->dat_i))
                                ? ((0x20U & (IData)(vlSelf->dat_i))
                                    ? 0U : 1U) : ((0x20U 
                                                   & (IData)(vlSelf->dat_i))
                                                   ? 2U
                                                   : 0U)));
    mod3__DOT__dat_6 = Vmod3__ConstPool__TABLE_h1e27e3cc_0
        [__Vtableidx2];
    __Vtableidx3 = (((IData)(mod3__DOT__dat_6) << 2U) 
                    | (IData)(mod3__DOT__dat_5));
    vlSelf->reminder = Vmod3__ConstPool__TABLE_h1e27e3cc_0
        [__Vtableidx3];
}

void Vmod3___024root___eval(Vmod3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmod3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod3___024root___eval\n"); );
    // Body
    Vmod3___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vmod3___024root___eval_debug_assertions(Vmod3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmod3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod3___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
