// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fib__Syms.h"


void Vtb_fib___024root__trace_chg_0_sub_0(Vtb_fib___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_fib___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root__trace_chg_0\n"); );
    // Init
    Vtb_fib___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fib___024root*>(voidSelf);
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_fib___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_fib___024root__trace_chg_0_sub_0(Vtb_fib___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root__trace_chg_0_sub_0\n"); );
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_fib__DOT__rdy_in));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_fib__DOT__vld_out));
        bufp->chgIData(oldp+2,(vlSelfRef.tb_fib__DOT__fib_out),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_fib__DOT__Fib__DOT__present_state),32);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_fib__DOT__Fib__DOT__limit),8);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_fib__DOT__Fib__DOT__count),8);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_fib__DOT__Fib__DOT__prev),32);
    }
    bufp->chgBit(oldp+7,(vlSelfRef.tb_fib__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelfRef.tb_fib__DOT__rst_n));
    bufp->chgBit(oldp+9,(vlSelfRef.tb_fib__DOT__vld_in));
    bufp->chgBit(oldp+10,(vlSelfRef.tb_fib__DOT__rdy_out));
    bufp->chgCData(oldp+11,(vlSelfRef.tb_fib__DOT__fib_in),8);
    bufp->chgIData(oldp+12,(vlSelfRef.tb_fib__DOT__Fib__DOT__next_state),32);
}

void Vtb_fib___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fib___024root__trace_cleanup\n"); );
    // Init
    Vtb_fib___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fib___024root*>(voidSelf);
    Vtb_fib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
