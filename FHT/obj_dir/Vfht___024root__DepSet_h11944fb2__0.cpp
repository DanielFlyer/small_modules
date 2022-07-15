// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfht.h for the primary calling header

#include "verilated.h"

#include "Vfht___024root.h"

VL_INLINE_OPT void Vfht___024root___sequent__TOP__0(Vfht___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfht__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfht___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        if (vlSelf->fht__DOT__data_valid) {
            vlSelf->data_o = vlSelf->fht__DOT__temp;
        }
        vlSelf->fht__DOT__data_d = vlSelf->data_i;
        vlSelf->fht__DOT__comp_d = ((0x80U & ((((IData)(vlSelf->fht__DOT__temp) 
                                                >> 6U) 
                                               - ((IData)(vlSelf->fht__DOT__temp) 
                                                  >> 7U)) 
                                              << 7U)) 
                                    | ((0x40U & ((((IData)(vlSelf->fht__DOT__temp) 
                                                   >> 4U) 
                                                  - 
                                                  ((IData)(vlSelf->fht__DOT__temp) 
                                                   >> 5U)) 
                                                 << 6U)) 
                                       | ((0x20U & 
                                           ((((IData)(vlSelf->fht__DOT__temp) 
                                              >> 2U) 
                                             - ((IData)(vlSelf->fht__DOT__temp) 
                                                >> 3U)) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & (((IData)(vlSelf->fht__DOT__temp) 
                                                  - 
                                                  ((IData)(vlSelf->fht__DOT__temp) 
                                                   >> 1U)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((((IData)(vlSelf->fht__DOT__temp) 
                                                      >> 6U) 
                                                     + 
                                                     ((IData)(vlSelf->fht__DOT__temp) 
                                                      >> 7U)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((((IData)(vlSelf->fht__DOT__temp) 
                                                         >> 4U) 
                                                        + 
                                                        ((IData)(vlSelf->fht__DOT__temp) 
                                                         >> 5U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((((IData)(vlSelf->fht__DOT__temp) 
                                                            >> 2U) 
                                                           + 
                                                           ((IData)(vlSelf->fht__DOT__temp) 
                                                            >> 3U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->fht__DOT__temp) 
                                                            + 
                                                            ((IData)(vlSelf->fht__DOT__temp) 
                                                             >> 1U))))))))));
        vlSelf->fht__DOT__temp_d = vlSelf->fht__DOT__temp;
        vlSelf->fht__DOT__cnt = ((3U > (IData)(vlSelf->fht__DOT__cnt))
                                  ? (3U & ((IData)(1U) 
                                           + (IData)(vlSelf->fht__DOT__cnt)))
                                  : 0U);
    } else {
        vlSelf->data_o = 0U;
        vlSelf->fht__DOT__data_d = 0U;
        vlSelf->fht__DOT__comp_d = 0U;
        vlSelf->fht__DOT__temp_d = 0U;
        vlSelf->fht__DOT__cnt = 0U;
    }
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

void Vfht___024root___eval(Vfht___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfht__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfht___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__Vclklast__TOP__reset)))) {
        Vfht___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void Vfht___024root___eval_debug_assertions(Vfht___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfht__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfht___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
