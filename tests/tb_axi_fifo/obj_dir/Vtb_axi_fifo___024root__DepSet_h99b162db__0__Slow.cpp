// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_fifo.h for the primary calling header

#include "Vtb_axi_fifo__pch.h"
#include "Vtb_axi_fifo___024root.h"

VL_ATTR_COLD void Vtb_axi_fifo___024root___eval_static(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_static\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_axi_fifo___024root___eval_final(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_final\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_fifo___024root___dump_triggers__stl(Vtb_axi_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_axi_fifo___024root___eval_phase__stl(Vtb_axi_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_axi_fifo___024root___eval_settle(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_settle\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_axi_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_axi_fifo.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_axi_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_fifo___024root___dump_triggers__stl(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___dump_triggers__stl\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_axi_fifo___024root___stl_sequent__TOP__0(Vtb_axi_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_axi_fifo___024root___eval_stl(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_stl\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_axi_fifo___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_axi_fifo___024root___stl_sequent__TOP__0(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___stl_sequent__TOP__0\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi_fifo__DOT__vld_out1 = (0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__rdy_in1 = (5U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo1__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__vld_out2 = (0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__rdy_in2 = (4U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo2__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__vld_out3 = (0U != (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count));
    vlSelfRef.tb_axi_fifo__DOT__rdy_in3 = (8U > (IData)(vlSelfRef.tb_axi_fifo__DOT__fifo3__DOT__count));
}

VL_ATTR_COLD void Vtb_axi_fifo___024root___eval_triggers__stl(Vtb_axi_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vtb_axi_fifo___024root___eval_phase__stl(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___eval_phase__stl\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_axi_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_axi_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_fifo___024root___dump_triggers__act(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___dump_triggers__act\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_axi_fifo.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_axi_fifo.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( (4'h5 > tb_axi_fifo.fifo1.count))\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( (4'h4 > tb_axi_fifo.fifo2.count))\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( (4'h8 > tb_axi_fifo.fifo3.count))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_fifo___024root___dump_triggers__nba(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___dump_triggers__nba\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_axi_fifo.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_axi_fifo.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( (4'h5 > tb_axi_fifo.fifo1.count))\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( (4'h4 > tb_axi_fifo.fifo2.count))\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( (4'h8 > tb_axi_fifo.fifo3.count))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi_fifo___024root___ctor_var_reset(Vtb_axi_fifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_fifo___024root___ctor_var_reset\n"); );
    Vtb_axi_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_axi_fifo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__rdy_out1 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__vld_in1 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__data_in1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_axi_fifo__DOT__data_out1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_axi_fifo__DOT__rdy_in1 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__vld_out1 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__rdy_out2 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__vld_in2 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__data_in2 = VL_RAND_RESET_I(8);
    vlSelf->tb_axi_fifo__DOT__data_out2 = VL_RAND_RESET_I(8);
    vlSelf->tb_axi_fifo__DOT__rdy_in2 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__vld_out2 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__rdy_out3 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__vld_in3 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__data_in3 = VL_RAND_RESET_I(16);
    vlSelf->tb_axi_fifo__DOT__data_out3 = VL_RAND_RESET_I(16);
    vlSelf->tb_axi_fifo__DOT__rdy_in3 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__vld_out3 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi_fifo__DOT__fifo_64.atDefault() = VL_RAND_RESET_Q(64);
    vlSelf->tb_axi_fifo__DOT__fifo_16.atDefault() = VL_RAND_RESET_I(16);
    vlSelf->tb_axi_fifo__DOT__fifo_8.atDefault() = VL_RAND_RESET_I(8);
    vlSelf->tb_axi_fifo__DOT__count_64 = VL_RAND_RESET_Q(64);
    vlSelf->tb_axi_fifo__DOT__count_16 = VL_RAND_RESET_Q(64);
    vlSelf->tb_axi_fifo__DOT__count_8 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_axi_fifo__DOT__fifo1__DOT__buffer[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb_axi_fifo__DOT__fifo1__DOT__write_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_axi_fifo__DOT__fifo1__DOT__read_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_axi_fifo__DOT__fifo1__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->tb_axi_fifo__DOT__fifo1__DOT__next_read_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_axi_fifo__DOT__fifo1__DOT____Vlvbound_he6849cae__0 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_axi_fifo__DOT__fifo2__DOT__buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_axi_fifo__DOT__fifo2__DOT__write_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb_axi_fifo__DOT__fifo2__DOT__read_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb_axi_fifo__DOT__fifo2__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->tb_axi_fifo__DOT__fifo2__DOT__next_read_ptr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_axi_fifo__DOT__fifo3__DOT__buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb_axi_fifo__DOT__fifo3__DOT__write_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_axi_fifo__DOT__fifo3__DOT__read_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_axi_fifo__DOT__fifo3__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->tb_axi_fifo__DOT__fifo3__DOT__next_read_ptr = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_fifo__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hd64cf2fc__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h5c8054a5__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hcf3ae41c__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
