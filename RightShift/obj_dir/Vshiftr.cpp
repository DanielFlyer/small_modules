// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshiftr.h"
#include "Vshiftr__Syms.h"

//============================================================
// Constructors

Vshiftr::Vshiftr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vshiftr__Syms(_vcontextp__, _vcname__, this)}
    , alu_op_i{vlSymsp->TOP.alu_op_i}
    , alu_a_i{vlSymsp->TOP.alu_a_i}
    , alu_b_i{vlSymsp->TOP.alu_b_i}
    , alu_p_o{vlSymsp->TOP.alu_p_o}
    , rootp{&(vlSymsp->TOP)}
{
}

Vshiftr::Vshiftr(const char* _vcname__)
    : Vshiftr(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vshiftr::~Vshiftr() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vshiftr___024root___eval_initial(Vshiftr___024root* vlSelf);
void Vshiftr___024root___eval_settle(Vshiftr___024root* vlSelf);
void Vshiftr___024root___eval(Vshiftr___024root* vlSelf);
#ifdef VL_DEBUG
void Vshiftr___024root___eval_debug_assertions(Vshiftr___024root* vlSelf);
#endif  // VL_DEBUG
void Vshiftr___024root___final(Vshiftr___024root* vlSelf);

static void _eval_initial_loop(Vshiftr__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vshiftr___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vshiftr___024root___eval_settle(&(vlSymsp->TOP));
        Vshiftr___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vshiftr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshiftr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshiftr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vshiftr___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vshiftr::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vshiftr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vshiftr::final() {
    Vshiftr___024root___final(&(vlSymsp->TOP));
}
