// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes_128.h for the primary calling header

#include "verilated.h"

#include "Vtest_aes_128_S.h"
#include "Vtest_aes_128_T.h"

VL_ATTR_COLD void Vtest_aes_128_T___settle__TOP__test_aes_128__DOT__uut__DOT__r1__t0__DOT__t0__0(Vtest_aes_128_T* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_aes_128_T___settle__TOP__test_aes_128__DOT__uut__DOT__r1__t0__DOT__t0__0\n"); );
    // Body
    vlSelf->__PVT__out = ((0xffffff00U & vlSelf->__PVT__out) 
                          | (IData)(vlSelf->__Vcellout__s4____pinNumber3));
    vlSelf->__PVT__out = ((0xffff00ffU & vlSelf->__PVT__out) 
                          | (0xff00U & ((0xffff00U 
                                         & (vlSelf->__PVT__out 
                                            >> 8U)) 
                                        ^ (vlSelf->__PVT__out 
                                           << 8U))));
    vlSelf->__PVT__out = ((0xffffU & vlSelf->__PVT__out) 
                          | (((IData)(vlSelf->__PVT__s0->out) 
                              << 0x18U) | (0xff0000U 
                                           & (vlSelf->__PVT__out 
                                              >> 8U))));
}
