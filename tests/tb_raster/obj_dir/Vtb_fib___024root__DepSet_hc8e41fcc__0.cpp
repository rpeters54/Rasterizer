// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fib.h for the primary calling header

#include "Vtb_fib__pch.h"
#include "Vtb_fib__Syms.h"
#include "Vtb_fib___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_fib___024root___eval_initial__TOP__Vtiming__0(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fib__DOT__vld_in = 0U;
    vlSelfRef.tb_fib__DOT__rdy_out = 0U;
    vlSelfRef.tb_fib__DOT__fib_in = 0U;
    vlSelfRef.tb_fib__DOT__clk = 0U;
    VL_WRITEF_NX("Testing Base Case...\n",0);
    vlSelfRef.tb_fib__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h2f736bbf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fib.clk)", 
                                                         "tb_fib.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h2f736bbf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fib.clk)", 
                                                         "tb_fib.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h2f736bbf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fib.clk)", 
                                                         "tb_fib.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h2f736bbf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fib.clk)", 
                                                         "tb_fib.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h2f736bbf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fib.clk)", 
                                                         "tb_fib.sv", 
                                                         50);
    vlSelfRef.tb_fib__DOT__rst_n = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_fib__DOT__rdy_in)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_fib.sv:57: Assertion failed in %Ntb_fib.test_base: rdy_in not set by default\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_fib.sv", 57, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_fib__DOT__fib_out)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_fib.sv:58: Assertion failed in %Ntb_fib.test_base: fib_out not zero by default\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_fib.sv", 58, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((vlSelfRef.tb_fib__DOT__vld_out))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_fib.sv:59: Assertion failed in %Ntb_fib.test_base: vld_out not zero by default\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_fib.sv", 59, "");
        }
    }
    VL_WRITEF_NX("SUCCESS\n",0);
    VL_FINISH_MT("tb_fib.sv", 43, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fib___024root___dump_triggers__act(Vtb_fib___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fib___024root___eval_triggers__act(Vtb_fib___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root___eval_triggers__act\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_fib__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fib__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fib__DOT__clk__0 
        = vlSelfRef.tb_fib__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fib___024root___dump_triggers__act(vlSelf);
    }
#endif
}
