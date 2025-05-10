// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_all.h for the primary calling header

#include "Vtb_all__pch.h"
#include "Vtb_all__Syms.h"
#include "Vtb_all___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__act(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_all___024root___eval_triggers__act(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_triggers__act\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_all__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_all__DOT__rdy_in) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__rdy_in__0)));
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.tb_all__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(4U, ((~ (IData)(vlSelfRef.tb_all__DOT__vld_out)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__vld_out__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__clk__0 
        = vlSelfRef.tb_all__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__rdy_in__0 
        = vlSelfRef.tb_all__DOT__rdy_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__vld_out__0 
        = vlSelfRef.tb_all__DOT__vld_out;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_all___024root___dump_triggers__act(vlSelf);
    }
#endif
}
