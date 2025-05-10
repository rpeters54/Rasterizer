// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pixel.h for the primary calling header

#include "Vtb_pixel__pch.h"
#include "Vtb_pixel___024root.h"

VL_ATTR_COLD void Vtb_pixel___024root___eval_static(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_static\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_pixel___024root___eval_final(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_final\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pixel___024root___dump_triggers__stl(Vtb_pixel___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_pixel___024root___eval_phase__stl(Vtb_pixel___024root* vlSelf);

VL_ATTR_COLD void Vtb_pixel___024root___eval_settle(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_settle\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_pixel___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_pixel.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_pixel___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pixel___024root___dump_triggers__stl(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___dump_triggers__stl\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_pixel___024root___stl_sequent__TOP__0(Vtb_pixel___024root* vlSelf);

VL_ATTR_COLD void Vtb_pixel___024root___eval_stl(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_stl\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_pixel___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_pixel___024root___stl_sequent__TOP__0(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___stl_sequent__TOP__0\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__out_coord 
        = (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                   >> 0x10U));
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__next_state 
        = ((0U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)
            ? ((IData)(vlSelfRef.tb_pixel__DOT__vld_in)
                ? ((((0x7c0U & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                << 6U)) | (0x3fU & 
                                           (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                            >> 5U))) 
                    >= ((0x7c0U & (vlSelfRef.tb_pixel__DOT__in_metadata 
                                   << 6U)) | (0x3fU 
                                              & (vlSelfRef.tb_pixel__DOT__in_metadata 
                                                 >> 5U))))
                    ? 2U : 1U) : 0U) : ((1U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)
                                         ? ((0xffU 
                                             > (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos))
                                             ? 1U : 2U)
                                         : ((2U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)
                                             ? ((0xffU 
                                                 > (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos))
                                                 ? 2U
                                                 : 0U)
                                             : 0U)));
}

VL_ATTR_COLD void Vtb_pixel___024root___eval_triggers__stl(Vtb_pixel___024root* vlSelf);

VL_ATTR_COLD bool Vtb_pixel___024root___eval_phase__stl(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_phase__stl\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_pixel___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_pixel___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pixel___024root___dump_triggers__act(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___dump_triggers__act\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_pixel.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_pixel.rdy_in)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pixel___024root___dump_triggers__nba(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___dump_triggers__nba\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_pixel.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_pixel.rdy_in)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_pixel___024root___ctor_var_reset(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___ctor_var_reset\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_pixel__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_pixel__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_pixel__DOT__rdy_out = VL_RAND_RESET_I(1);
    vlSelf->tb_pixel__DOT__vld_in = VL_RAND_RESET_I(1);
    vlSelf->tb_pixel__DOT__in_abs_pos = VL_RAND_RESET_Q(48);
    vlSelf->tb_pixel__DOT__in_delta_0 = VL_RAND_RESET_Q(48);
    vlSelf->tb_pixel__DOT__in_delta_1 = VL_RAND_RESET_Q(48);
    vlSelf->tb_pixel__DOT__in_delta_2 = VL_RAND_RESET_Q(48);
    vlSelf->tb_pixel__DOT__in_edge_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__in_edge_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__in_edge_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__in_metadata = VL_RAND_RESET_I(19);
    vlSelf->tb_pixel__DOT__in_dzdx = VL_RAND_RESET_I(16);
    vlSelf->tb_pixel__DOT__in_dzdy = VL_RAND_RESET_I(16);
    vlSelf->tb_pixel__DOT__in_z_current = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__rdy_in = VL_RAND_RESET_I(1);
    vlSelf->tb_pixel__DOT__vld_out = VL_RAND_RESET_I(1);
    vlSelf->tb_pixel__DOT__color_out = VL_RAND_RESET_I(8);
    vlSelf->tb_pixel__DOT__pixel_out = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__present_state = 0;
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__next_state = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_pixel__DOT__pixel_proc__DOT__z_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_pixel__DOT__pixel_proc__DOT__color_buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__abs_pos = VL_RAND_RESET_Q(48);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos = VL_RAND_RESET_Q(48);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__rel_pos = VL_RAND_RESET_I(8);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_pixel__DOT__pixel_proc__DOT__deltas[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_pixel__DOT__pixel_proc__DOT__edges[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__metadata = VL_RAND_RESET_I(19);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__dzdx = VL_RAND_RESET_I(16);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__dzdy = VL_RAND_RESET_I(16);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__z_current = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__out_coord = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdx_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdy_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out = VL_RAND_RESET_Q(48);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__unnamedblk3__DOT__unnamedblk4__DOT__row_off = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__unnamedblk5__DOT__dzdx_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0 = VL_RAND_RESET_I(32);
    vlSelf->tb_pixel__DOT__pixel_proc__DOT____Vlvbound_hb9924031__0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__tb_pixel__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__tb_pixel__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pixel__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_pixel__DOT__rdy_in__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
