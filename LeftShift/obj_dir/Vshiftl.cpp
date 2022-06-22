// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshiftl.h"
#include "Vshiftl__Syms.h"

//============================================================
// Constructors

Vshiftl::Vshiftl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vshiftl__Syms(_vcontextp__, _vcname__, this)}
    , alu_op_i{vlSymsp->TOP.alu_op_i}
    , alu_a_i{vlSymsp->TOP.alu_a_i}
    , alu_b_i{vlSymsp->TOP.alu_b_i}
    , alu_p_o{vlSymsp->TOP.alu_p_o}
    , rootp{&(vlSymsp->TOP)}
{
}

Vshiftl::Vshiftl(const char* _vcname__)
    : Vshiftl(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vshiftl::~Vshiftl() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vshiftl___024root___eval_initial(Vshiftl___024root* vlSelf);
void Vshiftl___024root___eval_settle(Vshiftl___024root* vlSelf);
void Vshiftl___024root___eval(Vshiftl___024root* vlSelf);
#ifdef VL_DEBUG
void Vshiftl___024root___eval_debug_assertions(Vshiftl___024root* vlSelf);
#endif  // VL_DEBUG
void Vshiftl___024root___final(Vshiftl___024root* vlSelf);

static void _eval_initial_loop(Vshiftl__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vshiftl___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vshiftl___024root___eval_settle(&(vlSymsp->TOP));
        Vshiftl___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vshiftl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshiftl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshiftl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vshiftl___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vshiftl::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vshiftl::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vshiftl::final() {
    Vshiftl___024root___final(&(vlSymsp->TOP));
}
