// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tile.h for the primary calling header

#include "Vtb_tile__pch.h"
#include "Vtb_tile___024root.h"

VL_ATTR_COLD void Vtb_tile___024root___eval_initial__TOP(Vtb_tile___024root* vlSelf);
VlCoroutine Vtb_tile___024root___eval_initial__TOP__Vtiming__0(Vtb_tile___024root* vlSelf);
VlCoroutine Vtb_tile___024root___eval_initial__TOP__Vtiming__1(Vtb_tile___024root* vlSelf);

void Vtb_tile___024root___eval_initial(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_initial\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_tile___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_tile___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_tile___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__clk__0 
        = vlSelfRef.tb_tile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__rdy_in__0 
        = vlSelfRef.tb_tile__DOT__rdy_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__vld_out__0 
        = vlSelfRef.tb_tile__DOT__vld_out;
}

VL_INLINE_OPT VlCoroutine Vtb_tile___024root___eval_initial__TOP__Vtiming__0(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tile__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_tile.sv", 
                                             87);
        vlSelfRef.tb_tile__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_tile__DOT__clk)));
    }
}

void Vtb_tile___024root___act_comb__TOP__0(Vtb_tile___024root* vlSelf);

void Vtb_tile___024root___eval_act(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_act\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x3dULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_tile___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_tile___024root___act_comb__TOP__0(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___act_comb__TOP__0\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_x;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_x = 0;
    CData/*4:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_y;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_y = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__out = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b = 0;
    // Body
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__next_state 
        = ((0U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
            ? (((IData)(vlSelfRef.tb_tile__DOT__vld_in) 
                & (IData)(vlSelfRef.tb_tile__DOT__rdy_in))
                ? 1U : 0U) : ((1U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                               ? 2U : ((2U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                        ? 3U : ((3U 
                                                 == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                 ? 4U
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                  ? 5U
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_tile__DOT__rdy_out)
                                                    ? 0U
                                                    : 5U)
                                                   : 0U))))));
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_y 
        = vlSelfRef.tb_tile__DOT__in_tile_y;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_x 
        = vlSelfRef.tb_tile__DOT__in_tile_x;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__out 
        = (((QData)((IData)(((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_x) 
                             << 8U))) << 0x20U) | (QData)((IData)(
                                                                  ((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_y) 
                                                                   << 0x18U))));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start 
        = __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__out;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_tile__DOT__v0_x) 
                              << 0x10U) | (IData)(vlSelfRef.tb_tile__DOT__v0_y)))) 
            << 0x10U) | (QData)((IData)(vlSelfRef.tb_tile__DOT__v0_z)));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_tile__DOT__v1_x) 
                              << 0x10U) | (IData)(vlSelfRef.tb_tile__DOT__v1_y)))) 
            << 0x10U) | (QData)((IData)(vlSelfRef.tb_tile__DOT__v1_z)));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_tile__DOT__v2_x) 
                              << 0x10U) | (IData)(vlSelfRef.tb_tile__DOT__v2_y)))) 
            << 0x10U) | (QData)((IData)(vlSelfRef.tb_tile__DOT__v2_z)));
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1;
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out 
        = ((0xffffULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a) 
                                         - (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b))))));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0 
        = vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2;
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out 
        = ((0xffffULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a) 
                                         - (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b))))));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1 
        = vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0;
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out 
        = ((0xffffULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a) 
                                         - (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b))))));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2 
        = vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out;
}

void Vtb_tile___024root___nba_sequent__TOP__0(Vtb_tile___024root* vlSelf);
void Vtb_tile___024root___nba_comb__TOP__0(Vtb_tile___024root* vlSelf);

void Vtb_tile___024root___eval_nba(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_nba\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_tile___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x3dULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_tile___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_tile___024root___nba_sequent__TOP__0(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___nba_sequent__TOP__0\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__start;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__start = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__v_i;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__v_i = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__delta_i;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__delta_i = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__out = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_x_sub;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_y_sub;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_x_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_y_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_y_mult = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__start;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__start = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__v_i;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__v_i = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__delta_i;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__delta_i = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__out = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_x_sub;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_y_sub;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_x_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_y_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_y_mult = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__start;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__start = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__v_i;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__v_i = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__delta_i;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__delta_i = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__out = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_x_sub;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_y_sub;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_x_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_y_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_y_mult = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_0;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_2;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_2 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__out = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__temp_y0z2_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__temp_y0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__temp_z0y2_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__temp_z0y2_mult = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_0;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_2;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_2 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__out = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__temp_z0x2_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__temp_z0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__temp_x0z2_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__temp_x0z2_mult = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_0;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_2;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_2 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__out = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__temp_x0y2_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__temp_x0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__temp_y0x2_mult;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__temp_y0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__dz_undiv;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__dz_undiv = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__c;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__c = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__out = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__div_result_dz;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__div_result_dz = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__dz_undiv;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__dz_undiv = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__c;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__c = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__out = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__div_result_dz;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__div_result_dz = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__v_0;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__v_0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__abs_pos;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__abs_pos = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__dzdx;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__dzdx = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__dzdy;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__dzdy = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__out = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__delta_x;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__delta_x = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__delta_y;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__delta_y = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__x_component;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__x_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__y_component;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__y_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__z_component;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__z_component = 0;
    IData/*18:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__metadata;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__metadata = 0;
    QData/*47:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__abs_pos;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__abs_pos = 0;
    QData/*47:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_0;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_0 = 0;
    QData/*47:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_1;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_1 = 0;
    QData/*47:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_2;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_2 = 0;
    IData/*31:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_A;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_A = 0;
    IData/*31:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_B;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_B = 0;
    IData/*31:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_C;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_C = 0;
    SData/*15:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdx;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdx = 0;
    SData/*15:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdy;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdy = 0;
    IData/*31:0*/ __Vdly__tb_tile__DOT__u_tile_processor__DOT__z_current;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__z_current = 0;
    IData/*31:0*/ __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v0;
    __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v0;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v1;
    __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v1;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v2;
    __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v2;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v3;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v4;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v4 = 0;
    // Body
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__metadata 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__abs_pos 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_0 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_1 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_2 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_A 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_A;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_B 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_B;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_C 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_C;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdx 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdx;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdy 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdy;
    __Vdly__tb_tile__DOT__u_tile_processor__DOT__z_current 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__z_current;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v0 = 0U;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v1 = 0U;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v2 = 0U;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v3 = 0U;
    __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v4 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_tile__DOT__rst_n)))) {
        vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__unnamedblk1__DOT__i = 3U;
    }
    if (vlSelfRef.tb_tile__DOT__rst_n) {
        if ((0U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)) {
            vlSelfRef.tb_tile__DOT__rdy_in = ((~ (IData)(vlSelfRef.tb_tile__DOT__vld_in)) 
                                              & (IData)(vlSelfRef.tb_tile__DOT__rdy_in));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__delta_i 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__metadata 
                = (((IData)(vlSelfRef.tb_tile__DOT__in_color) 
                    << 0xbU) | (((IData)(vlSelfRef.tb_tile__DOT__in_tile_x) 
                                 << 5U) | (IData)(vlSelfRef.tb_tile__DOT__in_tile_y)));
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__abs_pos 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_0 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_1 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_2 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__v_i 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__start 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_x_sub 
                = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__v_i 
                                                             >> 0x20U))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_y_sub 
                = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__v_i 
                                                             >> 0x10U))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__delta_i 
                                                        >> 0x10U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__delta_i 
                                                        >> 0x20U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__out 
                = (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_x_mult 
                   - __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__temp_y_mult);
            vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_edge_i 
                = __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__28__out;
            __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v0 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_edge_i;
            __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v0 = 1U;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__delta_i 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__v_i 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__start 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_x_sub 
                = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__v_i 
                                                             >> 0x20U))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_y_sub 
                = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__v_i 
                                                             >> 0x10U))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__delta_i 
                                                        >> 0x10U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__delta_i 
                                                        >> 0x20U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__out 
                = (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_x_mult 
                   - __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__temp_y_mult);
            vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_edge_i 
                = __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__29__out;
            __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v1 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_edge_i;
            __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v1 = 1U;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__delta_i 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__v_i 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__start 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_x_sub 
                = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__v_i 
                                                             >> 0x20U))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_y_sub 
                = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__v_i 
                                                             >> 0x10U))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__delta_i 
                                                        >> 0x10U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__delta_i 
                                                        >> 0x20U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__out 
                = (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_x_mult 
                   - __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__temp_y_mult);
            vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_edge_i 
                = __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_edge__30__out;
            __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v2 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_edge_i;
            __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v2 = 1U;
        } else if ((1U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)) {
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_2 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_0 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__temp_y0z2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_0 
                                                            >> 0x10U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_2))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__temp_z0y2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_0))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__delta_2 
                                                        >> 0x10U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__out 
                = (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__temp_z0y2_mult 
                   - __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__temp_y0z2_mult);
            vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_a 
                = __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_a__31__out;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_A 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_a;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_2 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_0 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__temp_z0x2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_0))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_2 
                                                        >> 0x20U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__temp_x0z2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_0 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__delta_2))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__out 
                = (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__temp_x0z2_mult 
                   - __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__temp_z0x2_mult);
            vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_b 
                = __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_b__32__out;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_B 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_b;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_2 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_0 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__temp_x0y2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_0 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_2 
                                                        >> 0x10U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__temp_y0x2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_0 
                                                            >> 0x10U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__delta_2 
                                                        >> 0x20U)))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__out 
                = (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__temp_y0x2_mult 
                   - __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__temp_x0y2_mult);
            vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_c 
                = __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_plane_coeff_c__33__out;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_C 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_c;
        } else if ((2U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)) {
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__c 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_C;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__dz_undiv 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_A;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__div_result_dz 
                = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__dz_undiv, 8U), __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__c));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__out 
                = (0xffffU & (__Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__div_result_dz 
                              >> 4U));
            vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_dzdx 
                = __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__34__out;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdx 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_dzdx;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__c 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_C;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__dz_undiv 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_B;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__div_result_dz 
                = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__dz_undiv, 8U), __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__c));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__out 
                = (0xffffU & (__Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__div_result_dz 
                              >> 4U));
            vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_dzdy 
                = __Vtask_tb_tile__DOT__u_tile_processor__DOT__scale_dz__35__out;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdy 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_dzdy;
        } else if ((3U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)) {
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__dzdy 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdy;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__dzdx 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdx;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__abs_pos 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__v_0 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0;
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__delta_x 
                = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__v_0 
                                       >> 0x20U)) - (IData)(
                                                            (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__abs_pos 
                                                             >> 0x20U))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__delta_y 
                = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__v_0 
                                       >> 0x10U)) - (IData)(
                                                            (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__abs_pos 
                                                             >> 0x10U))));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__x_component 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__delta_x)), 
                              VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__dzdx)));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__y_component 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__delta_y)), 
                              VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__dzdy)));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__z_component 
                = (((- (IData)((1U & (IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__v_0 
                                              >> 0xfU))))) 
                    << 0x14U) | (0xffff0U & ((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__v_0) 
                                             << 4U)));
            __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__out 
                = ((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__z_component 
                    - __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__x_component) 
                   - __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__y_component);
            vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_z 
                = __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_z__36__out;
            __Vdly__tb_tile__DOT__u_tile_processor__DOT__z_current 
                = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_z;
        } else if ((4U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)) {
            vlSelfRef.tb_tile__DOT__vld_out = 1U;
            vlSelfRef.tb_tile__DOT__out_abs_pos_x = 
                (0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos 
                                    >> 0x20U)));
            vlSelfRef.tb_tile__DOT__out_delta_0_x = 
                (0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0 
                                    >> 0x20U)));
            vlSelfRef.tb_tile__DOT__out_delta_1_x = 
                (0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1 
                                    >> 0x20U)));
            vlSelfRef.tb_tile__DOT__out_delta_2_x = 
                (0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2 
                                    >> 0x20U)));
            vlSelfRef.tb_tile__DOT__out_edge_0 = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges
                [0U];
            vlSelfRef.tb_tile__DOT__out_color = (0xffU 
                                                 & (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata 
                                                    >> 0xbU));
            vlSelfRef.tb_tile__DOT__out_dzdx = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdx;
            vlSelfRef.tb_tile__DOT__out_dzdy = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdy;
            vlSelfRef.tb_tile__DOT__out_z_current = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__z_current;
            vlSelfRef.tb_tile__DOT__out_abs_pos_y = 
                (0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos 
                                    >> 0x10U)));
            vlSelfRef.tb_tile__DOT__out_delta_0_y = 
                (0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0 
                                    >> 0x10U)));
            vlSelfRef.tb_tile__DOT__out_delta_1_y = 
                (0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1 
                                    >> 0x10U)));
            vlSelfRef.tb_tile__DOT__out_delta_2_y = 
                (0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2 
                                    >> 0x10U)));
            vlSelfRef.tb_tile__DOT__out_edge_1 = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges
                [1U];
            vlSelfRef.tb_tile__DOT__out_tile_x = (0x3fU 
                                                  & (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata 
                                                     >> 5U));
            vlSelfRef.tb_tile__DOT__out_abs_pos_z = 
                (0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos));
            vlSelfRef.tb_tile__DOT__out_delta_0_z = 
                (0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0));
            vlSelfRef.tb_tile__DOT__out_delta_1_z = 
                (0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1));
            vlSelfRef.tb_tile__DOT__out_delta_2_z = 
                (0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2));
            vlSelfRef.tb_tile__DOT__out_edge_2 = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges
                [2U];
            vlSelfRef.tb_tile__DOT__out_tile_y = (0x1fU 
                                                  & vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata);
        } else if ((5U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)) {
            if (vlSelfRef.tb_tile__DOT__rdy_out) {
                vlSelfRef.tb_tile__DOT__rdy_in = 1U;
                vlSelfRef.tb_tile__DOT__vld_out = 0U;
            }
        }
        vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state 
            = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__next_state;
    } else {
        vlSelfRef.tb_tile__DOT__rdy_in = 1U;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__abs_pos = 0ULL;
        __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v3 = 1U;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_0 = 0ULL;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_1 = 0ULL;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_2 = 0ULL;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__metadata = 0U;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_A = 0U;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_B = 0U;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_C = 0U;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdx = 0U;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdy = 0U;
        __Vdly__tb_tile__DOT__u_tile_processor__DOT__z_current = 0U;
        vlSelfRef.tb_tile__DOT__vld_out = 0U;
        vlSelfRef.tb_tile__DOT__out_abs_pos_x = 0U;
        vlSelfRef.tb_tile__DOT__out_abs_pos_y = 0U;
        vlSelfRef.tb_tile__DOT__out_abs_pos_z = 0U;
        vlSelfRef.tb_tile__DOT__out_delta_0_x = 0U;
        vlSelfRef.tb_tile__DOT__out_delta_0_y = 0U;
        vlSelfRef.tb_tile__DOT__out_delta_0_z = 0U;
        vlSelfRef.tb_tile__DOT__out_delta_1_x = 0U;
        vlSelfRef.tb_tile__DOT__out_delta_1_y = 0U;
        vlSelfRef.tb_tile__DOT__out_delta_1_z = 0U;
        vlSelfRef.tb_tile__DOT__out_delta_2_x = 0U;
        vlSelfRef.tb_tile__DOT__out_delta_2_y = 0U;
        vlSelfRef.tb_tile__DOT__out_delta_2_z = 0U;
        vlSelfRef.tb_tile__DOT__out_edge_0 = 0U;
        vlSelfRef.tb_tile__DOT__out_edge_1 = 0U;
        vlSelfRef.tb_tile__DOT__out_edge_2 = 0U;
        vlSelfRef.tb_tile__DOT__out_color = 0U;
        vlSelfRef.tb_tile__DOT__out_tile_x = 0U;
        vlSelfRef.tb_tile__DOT__out_tile_y = 0U;
        vlSelfRef.tb_tile__DOT__out_dzdx = 0U;
        vlSelfRef.tb_tile__DOT__out_dzdy = 0U;
        vlSelfRef.tb_tile__DOT__out_z_current = 0U;
        __VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v4 = 1U;
        vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state = 0U;
    }
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__metadata;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__abs_pos;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_0;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_1;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__delta_2;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_A 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_A;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_B 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_B;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_C 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__coeff_C;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdx 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdx;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdy 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__dzdy;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__z_current 
        = __Vdly__tb_tile__DOT__u_tile_processor__DOT__z_current;
    if (__VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v0) {
        vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[0U] 
            = __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v0;
    }
    if (__VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v1) {
        vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[1U] 
            = __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v1;
    }
    if (__VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v2) {
        vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[2U] 
            = __VdlyVal__tb_tile__DOT__u_tile_processor__DOT__edges__v2;
    }
    if (__VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v3) {
        vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[0U] = 0U;
    }
    if (__VdlySet__tb_tile__DOT__u_tile_processor__DOT__edges__v4) {
        vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[1U] = 0U;
        vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[2U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_tile___024root___nba_comb__TOP__0(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___nba_comb__TOP__0\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_x;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_x = 0;
    CData/*4:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_y;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_y = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__out = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b = 0;
    // Body
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_y 
        = vlSelfRef.tb_tile__DOT__in_tile_y;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_x 
        = vlSelfRef.tb_tile__DOT__in_tile_x;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__out 
        = (((QData)((IData)(((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_x) 
                             << 8U))) << 0x20U) | (QData)((IData)(
                                                                  ((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__tile_y) 
                                                                   << 0x18U))));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start 
        = __Vtask_tb_tile__DOT__u_tile_processor__DOT__tile_to_coord__24__out;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_tile__DOT__v0_x) 
                              << 0x10U) | (IData)(vlSelfRef.tb_tile__DOT__v0_y)))) 
            << 0x10U) | (QData)((IData)(vlSelfRef.tb_tile__DOT__v0_z)));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_tile__DOT__v1_x) 
                              << 0x10U) | (IData)(vlSelfRef.tb_tile__DOT__v1_y)))) 
            << 0x10U) | (QData)((IData)(vlSelfRef.tb_tile__DOT__v1_z)));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2 
        = (((QData)((IData)((((IData)(vlSelfRef.tb_tile__DOT__v2_x) 
                              << 0x10U) | (IData)(vlSelfRef.tb_tile__DOT__v2_y)))) 
            << 0x10U) | (QData)((IData)(vlSelfRef.tb_tile__DOT__v2_z)));
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1;
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out 
        = ((0xffffULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__a) 
                                         - (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__b))))));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0 
        = vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__25__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2;
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out 
        = ((0xffffULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__a) 
                                         - (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__b))))));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1 
        = vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__26__out;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2;
    __Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a 
        = vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0;
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out 
        = ((0xffffULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__a) 
                                         - (IData)(__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__b))))));
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2 
        = vlSelfRef.__Vtask_tb_tile__DOT__u_tile_processor__DOT__compute_delta__27__out;
    vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__next_state 
        = ((0U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
            ? (((IData)(vlSelfRef.tb_tile__DOT__vld_in) 
                & (IData)(vlSelfRef.tb_tile__DOT__rdy_in))
                ? 1U : 0U) : ((1U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                               ? 2U : ((2U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                        ? 3U : ((3U 
                                                 == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                 ? 4U
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                  ? 5U
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_tile__DOT__rdy_out)
                                                    ? 0U
                                                    : 5U)
                                                   : 0U))))));
}

void Vtb_tile___024root___timing_resume(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___timing_resume\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h066b40b5__0.resume(
                                                   "@(posedge tb_tile.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3f3f19a8__0.resume(
                                                   "@( tb_tile.rdy_in)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h066b4174__0.resume(
                                                   "@(negedge tb_tile.clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5a39fa9e__0.resume(
                                                   "@(posedge tb_tile.vld_out)");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5a39fb5f__0.resume(
                                                   "@(negedge tb_tile.vld_out)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_tile___024root___timing_commit(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___timing_commit\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h066b40b5__0.commit(
                                                   "@(posedge tb_tile.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3f3f19a8__0.commit(
                                                   "@( tb_tile.rdy_in)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h066b4174__0.commit(
                                                   "@(negedge tb_tile.clk)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5a39fa9e__0.commit(
                                                   "@(posedge tb_tile.vld_out)");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5a39fb5f__0.commit(
                                                   "@(negedge tb_tile.vld_out)");
    }
}

void Vtb_tile___024root___eval_triggers__act(Vtb_tile___024root* vlSelf);

bool Vtb_tile___024root___eval_phase__act(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_phase__act\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_tile___024root___eval_triggers__act(vlSelf);
    Vtb_tile___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_tile___024root___timing_resume(vlSelf);
        Vtb_tile___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_tile___024root___eval_phase__nba(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_phase__nba\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_tile___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tile___024root___dump_triggers__nba(Vtb_tile___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tile___024root___dump_triggers__act(Vtb_tile___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_tile___024root___eval(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_tile___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_tile.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_tile___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_tile.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_tile___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_tile___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_tile___024root___eval_debug_assertions(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_debug_assertions\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
