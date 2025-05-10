// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tile.h for the primary calling header

#include "Vtb_tile__pch.h"
#include "Vtb_tile___024root.h"

VL_ATTR_COLD void Vtb_tile___024root___eval_static(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_static\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_tile___024root___eval_final(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_final\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tile___024root___dump_triggers__stl(Vtb_tile___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_tile___024root___eval_phase__stl(Vtb_tile___024root* vlSelf);

VL_ATTR_COLD void Vtb_tile___024root___eval_settle(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_settle\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_tile___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_tile.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_tile___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tile___024root___dump_triggers__stl(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___dump_triggers__stl\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_tile___024root___act_comb__TOP__0(Vtb_tile___024root* vlSelf);
VL_ATTR_COLD void Vtb_tile___024root____Vm_traceActivitySetAll(Vtb_tile___024root* vlSelf);

VL_ATTR_COLD void Vtb_tile___024root___eval_stl(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_stl\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_tile___024root___act_comb__TOP__0(vlSelf);
        Vtb_tile___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_tile___024root___eval_triggers__stl(Vtb_tile___024root* vlSelf);

VL_ATTR_COLD bool Vtb_tile___024root___eval_phase__stl(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_phase__stl\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_tile___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_tile___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tile___024root___dump_triggers__act(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___dump_triggers__act\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_tile.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_tile.rdy_in)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_tile.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge tb_tile.vld_out)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge tb_tile.vld_out)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tile___024root___dump_triggers__nba(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___dump_triggers__nba\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_tile.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_tile.rdy_in)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_tile.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge tb_tile.vld_out)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge tb_tile.vld_out)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_tile___024root____Vm_traceActivitySetAll(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root____Vm_traceActivitySetAll\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_tile___024root___ctor_var_reset(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___ctor_var_reset\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_tile__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_tile__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_tile__DOT__rdy_out = VL_RAND_RESET_I(1);
    vlSelf->tb_tile__DOT__vld_in = VL_RAND_RESET_I(1);
    vlSelf->tb_tile__DOT__v0 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__v1 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__v2 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__in_metadata = VL_RAND_RESET_I(19);
    vlSelf->tb_tile__DOT__rdy_in = VL_RAND_RESET_I(1);
    vlSelf->tb_tile__DOT__vld_out = VL_RAND_RESET_I(1);
    vlSelf->tb_tile__DOT__out_abs_pos = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__out_delta_0 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__out_delta_1 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__out_delta_2 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__out_edge_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__out_edge_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__out_edge_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__out_metadata = VL_RAND_RESET_I(19);
    vlSelf->tb_tile__DOT__out_dzdx = VL_RAND_RESET_I(16);
    vlSelf->tb_tile__DOT__out_dzdy = VL_RAND_RESET_I(16);
    vlSelf->tb_tile__DOT__out_z_current = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__make_coord__Vstatic__point = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__make_meta__Vstatic__meta = VL_RAND_RESET_I(19);
    vlSelf->tb_tile__DOT__tile_proc__DOT__present_state = 0;
    vlSelf->tb_tile__DOT__tile_proc__DOT__next_state = 0;
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_start = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_delta_0 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_delta_1 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_delta_2 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_edge_i = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_coeff_a = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_coeff_b = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_coeff_c = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_z = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_dzdx = VL_RAND_RESET_I(16);
    vlSelf->tb_tile__DOT__tile_proc__DOT__temp_dzdy = VL_RAND_RESET_I(16);
    vlSelf->tb_tile__DOT__tile_proc__DOT__abs_pos = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__tile_proc__DOT__delta_0 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__tile_proc__DOT__delta_1 = VL_RAND_RESET_Q(48);
    vlSelf->tb_tile__DOT__tile_proc__DOT__delta_2 = VL_RAND_RESET_Q(48);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_tile__DOT__tile_proc__DOT__edges[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_tile__DOT__tile_proc__DOT__metadata = VL_RAND_RESET_I(19);
    vlSelf->tb_tile__DOT__tile_proc__DOT__coeff_A = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__tile_proc__DOT__coeff_B = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__tile_proc__DOT__coeff_C = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__tile_proc__DOT__dzdx = VL_RAND_RESET_I(16);
    vlSelf->tb_tile__DOT__tile_proc__DOT__dzdy = VL_RAND_RESET_I(16);
    vlSelf->tb_tile__DOT__tile_proc__DOT__z_current = VL_RAND_RESET_I(32);
    vlSelf->tb_tile__DOT__tile_proc__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtask_tb_tile__DOT__tile_proc__DOT__tile_to_coord__24__out = VL_RAND_RESET_Q(48);
    vlSelf->__Vtask_tb_tile__DOT__tile_proc__DOT__compute_delta__25__out = VL_RAND_RESET_Q(48);
    vlSelf->__Vtask_tb_tile__DOT__tile_proc__DOT__compute_delta__26__out = VL_RAND_RESET_Q(48);
    vlSelf->__Vtask_tb_tile__DOT__tile_proc__DOT__compute_delta__27__out = VL_RAND_RESET_Q(48);
    vlSelf->__Vtrigprevexpr___TOP__tb_tile__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_tile__DOT__rdy_in__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_tile__DOT__vld_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
