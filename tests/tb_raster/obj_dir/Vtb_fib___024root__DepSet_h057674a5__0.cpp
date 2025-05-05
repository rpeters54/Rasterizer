// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fib.h for the primary calling header

#include "Vtb_fib__pch.h"
#include "Vtb_fib___024root.h"

VL_ATTR_COLD void Vtb_fib___024root___eval_initial__TOP(Vtb_fib___024root* vlSelf);
VlCoroutine Vtb_fib___024root___eval_initial__TOP__Vtiming__0(Vtb_fib___024root* vlSelf);
VlCoroutine Vtb_fib___024root___eval_initial__TOP__Vtiming__1(Vtb_fib___024root* vlSelf);

void Vtb_fib___024root___eval_initial(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_initial\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fib___024root___eval_initial__TOP(vlSelf);
    Vtb_fib___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fib___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fib__DOT__clk__0 
        = vlSelfRef.tb_fib__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_fib___024root___eval_initial__TOP__Vtiming__1(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_fib.sv", 
                                             23);
        vlSelfRef.__VdlyVal__tb_fib__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelfRef.tb_fib__DOT__clk)));
        vlSelfRef.__VdlySet__tb_fib__DOT__clk__v0 = 1U;
    }
}

void Vtb_fib___024root___act_sequent__TOP__0(Vtb_fib___024root* vlSelf);

void Vtb_fib___024root___eval_act(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_act\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_fib___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_fib___024root___act_sequent__TOP__0(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___act_sequent__TOP__0\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == vlSelfRef.tb_fib__DOT__Fib__DOT__present_state)) {
        vlSelfRef.tb_fib__DOT__Fib__DOT__next_state 
            = ((IData)(vlSelfRef.tb_fib__DOT__vld_in)
                ? 1U : 0U);
    } else if ((1U == vlSelfRef.tb_fib__DOT__Fib__DOT__present_state)) {
        vlSelfRef.tb_fib__DOT__Fib__DOT__next_state 
            = (((IData)(vlSelfRef.tb_fib__DOT__Fib__DOT__count) 
                > (IData)(vlSelfRef.tb_fib__DOT__Fib__DOT__limit))
                ? 2U : 1U);
    } else if ((2U == vlSelfRef.tb_fib__DOT__Fib__DOT__present_state)) {
        vlSelfRef.tb_fib__DOT__Fib__DOT__next_state 
            = ((IData)(vlSelfRef.tb_fib__DOT__rdy_out)
                ? 0U : 2U);
    }
}

void Vtb_fib___024root___nba_sequent__TOP__0(Vtb_fib___024root* vlSelf);
void Vtb_fib___024root___nba_sequent__TOP__1(Vtb_fib___024root* vlSelf);

void Vtb_fib___024root___eval_nba(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_nba\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fib___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fib___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_fib___024root___nba_sequent__TOP__0(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___nba_sequent__TOP__0\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__tb_fib__DOT__Fib__DOT__count;
    __Vdly__tb_fib__DOT__Fib__DOT__count = 0;
    IData/*31:0*/ __Vdly__tb_fib__DOT__Fib__DOT__prev;
    __Vdly__tb_fib__DOT__Fib__DOT__prev = 0;
    IData/*31:0*/ __Vdly__tb_fib__DOT__fib_out;
    __Vdly__tb_fib__DOT__fib_out = 0;
    // Body
    __Vdly__tb_fib__DOT__Fib__DOT__prev = vlSelfRef.tb_fib__DOT__Fib__DOT__prev;
    __Vdly__tb_fib__DOT__fib_out = vlSelfRef.tb_fib__DOT__fib_out;
    __Vdly__tb_fib__DOT__Fib__DOT__count = vlSelfRef.tb_fib__DOT__Fib__DOT__count;
    if (vlSelfRef.tb_fib__DOT__rst_n) {
        if ((0U == vlSelfRef.tb_fib__DOT__Fib__DOT__next_state)) {
            __Vdly__tb_fib__DOT__Fib__DOT__count = 0U;
            __Vdly__tb_fib__DOT__Fib__DOT__prev = 0U;
            __Vdly__tb_fib__DOT__fib_out = 0U;
            vlSelfRef.tb_fib__DOT__Fib__DOT__limit = 0U;
        } else if ((1U == vlSelfRef.tb_fib__DOT__Fib__DOT__next_state)) {
            if ((1U >= (IData)(vlSelfRef.tb_fib__DOT__Fib__DOT__count))) {
                __Vdly__tb_fib__DOT__Fib__DOT__prev 
                    = vlSelfRef.tb_fib__DOT__fib_out;
                __Vdly__tb_fib__DOT__fib_out = vlSelfRef.tb_fib__DOT__Fib__DOT__count;
            } else {
                __Vdly__tb_fib__DOT__fib_out = (vlSelfRef.tb_fib__DOT__fib_out 
                                                + vlSelfRef.tb_fib__DOT__Fib__DOT__prev);
                __Vdly__tb_fib__DOT__Fib__DOT__prev 
                    = vlSelfRef.tb_fib__DOT__fib_out;
            }
            __Vdly__tb_fib__DOT__Fib__DOT__count = 
                (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_fib__DOT__Fib__DOT__count)));
            if ((0U == vlSelfRef.tb_fib__DOT__Fib__DOT__present_state)) {
                vlSelfRef.tb_fib__DOT__Fib__DOT__limit 
                    = vlSelfRef.tb_fib__DOT__fib_in;
            }
        }
        vlSelfRef.tb_fib__DOT__Fib__DOT__present_state 
            = vlSelfRef.tb_fib__DOT__Fib__DOT__next_state;
    } else {
        __Vdly__tb_fib__DOT__Fib__DOT__count = 0U;
        __Vdly__tb_fib__DOT__Fib__DOT__prev = 0U;
        __Vdly__tb_fib__DOT__fib_out = 0U;
        vlSelfRef.tb_fib__DOT__Fib__DOT__limit = 0U;
        vlSelfRef.tb_fib__DOT__Fib__DOT__present_state = 0U;
    }
    vlSelfRef.tb_fib__DOT__Fib__DOT__prev = __Vdly__tb_fib__DOT__Fib__DOT__prev;
    vlSelfRef.tb_fib__DOT__fib_out = __Vdly__tb_fib__DOT__fib_out;
    vlSelfRef.tb_fib__DOT__Fib__DOT__count = __Vdly__tb_fib__DOT__Fib__DOT__count;
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

VL_INLINE_OPT void Vtb_fib___024root___nba_sequent__TOP__1(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___nba_sequent__TOP__1\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_fib__DOT__clk__v0) {
        vlSelfRef.__VdlySet__tb_fib__DOT__clk__v0 = 0U;
        vlSelfRef.tb_fib__DOT__clk = vlSelfRef.__VdlyVal__tb_fib__DOT__clk__v0;
    }
}

void Vtb_fib___024root___timing_resume(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___timing_resume\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2f736bbf__0.resume(
                                                   "@(posedge tb_fib.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fib___024root___timing_commit(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___timing_commit\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2f736bbf__0.commit(
                                                   "@(posedge tb_fib.clk)");
    }
}

void Vtb_fib___024root___eval_triggers__act(Vtb_fib___024root* vlSelf);

bool Vtb_fib___024root___eval_phase__act(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_phase__act\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fib___024root___eval_triggers__act(vlSelf);
    Vtb_fib___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_fib___024root___timing_resume(vlSelf);
        Vtb_fib___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fib___024root___eval_phase__nba(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_phase__nba\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fib___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fib___024root___dump_triggers__nba(Vtb_fib___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fib___024root___dump_triggers__act(Vtb_fib___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fib___024root___eval(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fib___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_fib.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_fib___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_fib.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_fib___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_fib___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fib___024root___eval_debug_assertions(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_debug_assertions\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
