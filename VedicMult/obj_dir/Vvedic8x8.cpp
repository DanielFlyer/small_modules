// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvedic8x8.h"
#include "Vvedic8x8__Syms.h"

//============================================================
// Constructors

Vvedic8x8::Vvedic8x8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vvedic8x8__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , prod{vlSymsp->TOP.prod}
    , rootp{&(vlSymsp->TOP)}
{
}

Vvedic8x8::Vvedic8x8(const char* _vcname__)
    : Vvedic8x8(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vvedic8x8::~Vvedic8x8() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vvedic8x8___024root___eval_initial(Vvedic8x8___024root* vlSelf);
void Vvedic8x8___024root___eval_settle(Vvedic8x8___024root* vlSelf);
void Vvedic8x8___024root___eval(Vvedic8x8___024root* vlSelf);
#ifdef VL_DEBUG
void Vvedic8x8___024root___eval_debug_assertions(Vvedic8x8___024root* vlSelf);
#endif  // VL_DEBUG
void Vvedic8x8___024root___final(Vvedic8x8___024root* vlSelf);

static void _eval_initial_loop(Vvedic8x8__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vvedic8x8___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vvedic8x8___024root___eval_settle(&(vlSymsp->TOP));
        Vvedic8x8___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vvedic8x8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvedic8x8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvedic8x8___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vvedic8x8___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vvedic8x8::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vvedic8x8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vvedic8x8::final() {
    Vvedic8x8___024root___final(&(vlSymsp->TOP));
}
