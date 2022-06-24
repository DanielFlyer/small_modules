// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdivider.h"
#include "Vdivider__Syms.h"

//============================================================
// Constructors

Vdivider::Vdivider(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdivider__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , enable{vlSymsp->TOP.enable}
    , src1{vlSymsp->TOP.src1}
    , src2{vlSymsp->TOP.src2}
    , desOv{vlSymsp->TOP.desOv}
    , des1{vlSymsp->TOP.des1}
    , des2{vlSymsp->TOP.des2}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdivider::Vdivider(const char* _vcname__)
    : Vdivider(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdivider::~Vdivider() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdivider___024root___eval_initial(Vdivider___024root* vlSelf);
void Vdivider___024root___eval_settle(Vdivider___024root* vlSelf);
void Vdivider___024root___eval(Vdivider___024root* vlSelf);
#ifdef VL_DEBUG
void Vdivider___024root___eval_debug_assertions(Vdivider___024root* vlSelf);
#endif  // VL_DEBUG
void Vdivider___024root___final(Vdivider___024root* vlSelf);

static void _eval_initial_loop(Vdivider__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdivider___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdivider___024root___eval_settle(&(vlSymsp->TOP));
        Vdivider___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdivider::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdivider::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdivider___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdivider___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vdivider::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdivider::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdivider::final() {
    Vdivider___024root___final(&(vlSymsp->TOP));
}
