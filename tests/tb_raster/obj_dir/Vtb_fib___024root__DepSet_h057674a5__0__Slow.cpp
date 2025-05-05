// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fib.h for the primary calling header

#include "Vtb_fib__pch.h"
#include "Vtb_fib___024root.h"

VL_ATTR_COLD void Vtb_fib___024root___eval_static__TOP(Vtb_fib___024root* vlSelf);
VL_ATTR_COLD void Vtb_fib___024root____Vm_traceActivitySetAll(Vtb_fib___024root* vlSelf);

VL_ATTR_COLD void Vtb_fib___024root___eval_static(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_static\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fib___024root___eval_static__TOP(vlSelf);
    Vtb_fib___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_fib___024root___eval_static__TOP(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_static__TOP\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fib__DOT__Fib__DOT__present_state = 0U;
    vlSelfRef.tb_fib__DOT__Fib__DOT__limit = 0U;
    vlSelfRef.tb_fib__DOT__Fib__DOT__count = 0U;
    vlSelfRef.tb_fib__DOT__Fib__DOT__prev = 0U;
}

VL_ATTR_COLD void Vtb_fib___024root___eval_final(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_final\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fib___024root___dump_triggers__stl(Vtb_fib___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fib___024root___eval_phase__stl(Vtb_fib___024root* vlSelf);

VL_ATTR_COLD void Vtb_fib___024root___eval_settle(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_settle\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fib___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_fib.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_fib___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fib___024root___dump_triggers__stl(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___dump_triggers__stl\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fib___024root___stl_sequent__TOP__0(Vtb_fib___024root* vlSelf);

VL_ATTR_COLD void Vtb_fib___024root___eval_stl(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_stl\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_fib___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_fib___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_fib___024root___stl_sequent__TOP__0(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___stl_sequent__TOP__0\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == vlSelfRef.tb_fib__DOT__Fib__DOT__present_state)) {
        vlSelfRef.tb_fib__DOT__rdy_in = 1U;
        vlSelfRef.tb_fib__DOT__vld_out = 0U;
        vlSelfRef.tb_fib__DOT__Fib__DOT__next_state 
            = ((IData)(vlSelfRef.tb_fib__DOT__vld_in)
                ? 1U : 0U);
    } else if ((1U == vlSelfRef.tb_fib__DOT__Fib__DOT__present_state)) {
        vlSelfRef.tb_fib__DOT__rdy_in = 0U;
        vlSelfRef.tb_fib__DOT__vld_out = 0U;
        vlSelfRef.tb_fib__DOT__Fib__DOT__next_state 
            = (((IData)(vlSelfRef.tb_fib__DOT__Fib__DOT__count) 
                > (IData)(vlSelfRef.tb_fib__DOT__Fib__DOT__limit))
                ? 2U : 1U);
    } else if ((2U == vlSelfRef.tb_fib__DOT__Fib__DOT__present_state)) {
        vlSelfRef.tb_fib__DOT__rdy_in = 0U;
        vlSelfRef.tb_fib__DOT__vld_out = 1U;
        vlSelfRef.tb_fib__DOT__Fib__DOT__next_state 
            = ((IData)(vlSelfRef.tb_fib__DOT__rdy_out)
                ? 0U : 2U);
    }
}

VL_ATTR_COLD void Vtb_fib___024root___eval_triggers__stl(Vtb_fib___024root* vlSelf);

VL_ATTR_COLD bool Vtb_fib___024root___eval_phase__stl(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_phase__stl\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fib___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_fib___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fib___024root___dump_triggers__act(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___dump_triggers__act\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_fib.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fib___024root___dump_triggers__nba(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___dump_triggers__nba\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_fib.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fib___024root____Vm_traceActivitySetAll(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root____Vm_traceActivitySetAll\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_fib___024root___ctor_var_reset(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___ctor_var_reset\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_fib__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_fib__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_fib__DOT__vld_in = VL_RAND_RESET_I(1);
    vlSelf->tb_fib__DOT__rdy_out = VL_RAND_RESET_I(1);
    vlSelf->tb_fib__DOT__rdy_in = VL_RAND_RESET_I(1);
    vlSelf->tb_fib__DOT__vld_out = VL_RAND_RESET_I(1);
    vlSelf->tb_fib__DOT__fib_in = VL_RAND_RESET_I(8);
    vlSelf->tb_fib__DOT__fib_out = VL_RAND_RESET_I(32);
    vlSelf->tb_fib__DOT__Fib__DOT__present_state = 0;
    vlSelf->tb_fib__DOT__Fib__DOT__next_state = 0;
    vlSelf->tb_fib__DOT__Fib__DOT__limit = VL_RAND_RESET_I(8);
    vlSelf->tb_fib__DOT__Fib__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->tb_fib__DOT__Fib__DOT__prev = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_fib__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__tb_fib__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fib__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
