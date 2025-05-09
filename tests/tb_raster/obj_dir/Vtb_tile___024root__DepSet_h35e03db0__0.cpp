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
                                             58);
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
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__Vfuncout = 0;
    IData/*18:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in = 0;
    // Body
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__next_state 
        = ((0U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
            ? (((IData)(vlSelfRef.tb_tile__DOT__vld_in) 
                & (IData)(vlSelfRef.tb_tile__DOT__rdy_in))
                ? 1U : 0U) : ((1U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                               ? 2U : ((2U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                        ? 3U : ((3U 
                                                 == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                 ? 4U
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                  ? 5U
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_tile__DOT__rdy_out)
                                                    ? 0U
                                                    : 5U)
                                                   : 0U))))));
    __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in 
        = vlSelfRef.tb_tile__DOT__in_metadata;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffffffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x3f00U & (__Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in 
                                          << 3U)))) 
              << 0x20U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffff0000ffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x1f00U & (__Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in 
                                          << 8U)))) 
              << 0x10U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = (0xffffffff0000ULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out);
    __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__Vfuncout 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_start 
        = __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__Vfuncout;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v[0U] 
        = vlSelfRef.tb_tile__DOT__v1;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v[1U] 
        = vlSelfRef.tb_tile__DOT__v2;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v[2U] 
        = vlSelfRef.tb_tile__DOT__v0;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__v[0U] = vlSelfRef.tb_tile__DOT__v0;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__v[1U] = vlSelfRef.tb_tile__DOT__v1;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__v[2U] = vlSelfRef.tb_tile__DOT__v2;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
        [0U];
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v
        [0U];
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a) 
                                         - (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b))))));
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__Vfuncout 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas[0U] 
        = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
        [1U];
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v
        [1U];
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a) 
                                         - (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b))))));
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__Vfuncout 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas[1U] 
        = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
        [2U];
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v
        [2U];
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a) 
                                         - (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b))))));
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__Vfuncout 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas[2U] 
        = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__Vfuncout;
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
    IData/*31:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i = 0;
    IData/*31:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_0;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_0 = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_2;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_2 = 0;
    IData/*31:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_0;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_0 = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_2;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_2 = 0;
    IData/*31:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_0;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_0 = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_2;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_2 = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__dz_undiv;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__dz_undiv = 0;
    IData/*31:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__c;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__c = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__dz_undiv;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__dz_undiv = 0;
    IData/*31:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__c;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__c = 0;
    IData/*31:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__v_0;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__v_0 = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__abs_pos;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__abs_pos = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__dzdx;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__dzdx = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__dzdy;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__dzdy = 0;
    IData/*18:0*/ __Vdly__tb_tile__DOT__tile_proc__DOT__metadata;
    __Vdly__tb_tile__DOT__tile_proc__DOT__metadata = 0;
    QData/*47:0*/ __Vdly__tb_tile__DOT__tile_proc__DOT__abs_pos;
    __Vdly__tb_tile__DOT__tile_proc__DOT__abs_pos = 0;
    IData/*31:0*/ __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_A;
    __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_A = 0;
    IData/*31:0*/ __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_B;
    __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_B = 0;
    IData/*31:0*/ __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_C;
    __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_C = 0;
    SData/*15:0*/ __Vdly__tb_tile__DOT__tile_proc__DOT__dzdx;
    __Vdly__tb_tile__DOT__tile_proc__DOT__dzdx = 0;
    SData/*15:0*/ __Vdly__tb_tile__DOT__tile_proc__DOT__dzdy;
    __Vdly__tb_tile__DOT__tile_proc__DOT__dzdy = 0;
    IData/*31:0*/ __Vdly__tb_tile__DOT__tile_proc__DOT__z_current;
    __Vdly__tb_tile__DOT__tile_proc__DOT__z_current = 0;
    QData/*47:0*/ __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v0;
    __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v0;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v0 = 0;
    QData/*47:0*/ __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v1;
    __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v1;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v1 = 0;
    QData/*47:0*/ __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v2;
    __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v2;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v0;
    __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v0;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v1;
    __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v1;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v2;
    __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v2;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v3;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v4;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v4 = 0;
    // Body
    __Vdly__tb_tile__DOT__tile_proc__DOT__metadata 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__metadata;
    __Vdly__tb_tile__DOT__tile_proc__DOT__abs_pos = vlSelfRef.tb_tile__DOT__tile_proc__DOT__abs_pos;
    __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_A = vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_A;
    __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_B = vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_B;
    __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_C = vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_C;
    __Vdly__tb_tile__DOT__tile_proc__DOT__dzdx = vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdx;
    __Vdly__tb_tile__DOT__tile_proc__DOT__dzdy = vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdy;
    __Vdly__tb_tile__DOT__tile_proc__DOT__z_current 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__z_current;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v0 = 0U;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v1 = 0U;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v2 = 0U;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v0 = 0U;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v1 = 0U;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v2 = 0U;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v3 = 0U;
    __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v4 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_tile__DOT__rst_n)))) {
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__unnamedblk1__DOT__i = 3U;
    }
    if (vlSelfRef.tb_tile__DOT__rst_n) {
        if ((0U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)) {
            vlSelfRef.tb_tile__DOT__rdy_in = ((~ (IData)(vlSelfRef.tb_tile__DOT__vld_in)) 
                                              & (IData)(vlSelfRef.tb_tile__DOT__rdy_in));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas
                [0U];
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__unnamedblk2__DOT__i = 3U;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas
                [0U];
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__unnamedblk3__DOT__i = 3U;
            __Vdly__tb_tile__DOT__tile_proc__DOT__metadata 
                = vlSelfRef.tb_tile__DOT__in_metadata;
            __Vdly__tb_tile__DOT__tile_proc__DOT__abs_pos 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_start;
            __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v0 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0;
            __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v0 = 1U;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
                [0U];
            vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas
                [1U];
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_start;
            __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v1 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0;
            __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v1 = 1U;
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i 
                                                             >> 0x20U))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas
                [2U];
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i 
                                                             >> 0x10U))));
            __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v2 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0;
            __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v2 = 1U;
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i 
                                                        >> 0x10U)))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i 
                                                        >> 0x20U)))));
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__Vfuncout 
                = (vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                   - vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult);
            vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0 
                = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__Vfuncout;
            __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v0 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0;
            __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v0 = 1U;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas
                [1U];
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
                [1U];
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_start;
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i 
                                                             >> 0x20U))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i 
                                                             >> 0x10U))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i 
                                                        >> 0x10U)))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i 
                                                        >> 0x20U)))));
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__Vfuncout 
                = (vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                   - vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult);
            vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0 
                = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__Vfuncout;
            __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v1 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0;
            __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v1 = 1U;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas
                [2U];
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
                [2U];
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_start;
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i 
                                                             >> 0x20U))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__v_i 
                                                             >> 0x10U))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i 
                                                        >> 0x10U)))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__delta_i 
                                                        >> 0x20U)))));
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__Vfuncout 
                = (vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                   - vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult);
            vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0 
                = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_edge__28__Vfuncout;
            __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v2 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0;
            __VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v2 = 1U;
        } else if ((1U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)) {
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_2 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas
                [2U];
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_0 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas
                [0U];
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_y0z2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_0 
                                                            >> 0x10U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_2))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_z0y2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_0))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__delta_2 
                                                        >> 0x10U)))));
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__Vfuncout 
                = (vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_z0y2_mult 
                   - vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_y0z2_mult);
            __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_A 
                = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_a__29__Vfuncout;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_2 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas
                [2U];
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_0 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas
                [0U];
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_z0x2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_0))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_2 
                                                        >> 0x20U)))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_x0z2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_0 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__delta_2))));
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__Vfuncout 
                = (vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_x0z2_mult 
                   - vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_z0x2_mult);
            __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_B 
                = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_b__30__Vfuncout;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_2 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas
                [2U];
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_0 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas
                [0U];
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_x0y2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_0 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_2 
                                                        >> 0x10U)))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_y0x2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_0 
                                                            >> 0x10U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__delta_2 
                                                        >> 0x20U)))));
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__Vfuncout 
                = (vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_y0x2_mult 
                   - vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_x0y2_mult);
            __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_C 
                = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_plane_coeff_c__31__Vfuncout;
        } else if ((2U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)) {
            __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__c 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_C;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__dz_undiv 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_A;
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__dz_undiv, 8U), __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__c));
            __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__Vfuncout 
                = (0xffffU & (vlSelfRef.tb_tile__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                              >> 4U));
            __Vdly__tb_tile__DOT__tile_proc__DOT__dzdx 
                = __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__32__Vfuncout;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__c 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_C;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__dz_undiv 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_B;
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__dz_undiv, 8U), __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__c));
            __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__Vfuncout 
                = (0xffffU & (vlSelfRef.tb_tile__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                              >> 4U));
            __Vdly__tb_tile__DOT__tile_proc__DOT__dzdy 
                = __Vfunc_tb_tile__DOT__tile_proc__DOT__scale_dz__33__Vfuncout;
        } else if ((3U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)) {
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__dzdy 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdy;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__dzdx 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdx;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__abs_pos 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__abs_pos;
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__v_0 
                = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
                [0U];
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x 
                = (0xffffU & ((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__v_0 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__abs_pos 
                                                             >> 0x20U))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y 
                = (0xffffU & ((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__v_0 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__abs_pos 
                                                             >> 0x10U))));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__x_component 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x)), 
                              VL_EXTENDS_II(32,16, (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__dzdx)));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__y_component 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y)), 
                              VL_EXTENDS_II(32,16, (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__dzdy)));
            vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__z_component 
                = (((- (IData)((1U & (IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__v_0 
                                              >> 0xfU))))) 
                    << 0x14U) | (0xffff0U & ((IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__v_0) 
                                             << 4U)));
            __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__Vfuncout 
                = ((vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__z_component 
                    - vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__x_component) 
                   - vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_z__Vstatic__y_component);
            __Vdly__tb_tile__DOT__tile_proc__DOT__z_current 
                = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_z__34__Vfuncout;
        } else if ((4U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)) {
            vlSelfRef.tb_tile__DOT__vld_out = 1U;
            vlSelfRef.tb_tile__DOT__out_abs_pos = vlSelfRef.tb_tile__DOT__tile_proc__DOT__abs_pos;
            vlSelfRef.tb_tile__DOT__out_delta_0 = vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas
                [0U];
            vlSelfRef.tb_tile__DOT__out_edge_0 = vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges
                [0U];
            vlSelfRef.tb_tile__DOT__out_metadata = vlSelfRef.tb_tile__DOT__tile_proc__DOT__metadata;
            vlSelfRef.tb_tile__DOT__out_dzdx = vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdx;
            vlSelfRef.tb_tile__DOT__out_dzdy = vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdy;
            vlSelfRef.tb_tile__DOT__out_z_current = vlSelfRef.tb_tile__DOT__tile_proc__DOT__z_current;
            vlSelfRef.tb_tile__DOT__out_delta_1 = vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas
                [1U];
            vlSelfRef.tb_tile__DOT__out_edge_1 = vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges
                [1U];
            vlSelfRef.tb_tile__DOT__out_delta_2 = vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas
                [2U];
            vlSelfRef.tb_tile__DOT__out_edge_2 = vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges
                [2U];
        } else if ((5U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)) {
            if (vlSelfRef.tb_tile__DOT__rdy_out) {
                vlSelfRef.tb_tile__DOT__rdy_in = 1U;
                vlSelfRef.tb_tile__DOT__vld_out = 0U;
            }
        }
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state 
            = vlSelfRef.tb_tile__DOT__tile_proc__DOT__next_state;
    } else {
        vlSelfRef.tb_tile__DOT__rdy_in = 1U;
        __Vdly__tb_tile__DOT__tile_proc__DOT__abs_pos = 0ULL;
        __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v3 = 1U;
        __Vdly__tb_tile__DOT__tile_proc__DOT__metadata = 0U;
        __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_A = 0U;
        __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_B = 0U;
        __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_C = 0U;
        __Vdly__tb_tile__DOT__tile_proc__DOT__dzdx = 0U;
        __Vdly__tb_tile__DOT__tile_proc__DOT__dzdy = 0U;
        __Vdly__tb_tile__DOT__tile_proc__DOT__z_current = 0U;
        vlSelfRef.tb_tile__DOT__vld_out = 0U;
        vlSelfRef.tb_tile__DOT__out_abs_pos = 0ULL;
        vlSelfRef.tb_tile__DOT__out_delta_0 = 0ULL;
        vlSelfRef.tb_tile__DOT__out_delta_1 = 0ULL;
        vlSelfRef.tb_tile__DOT__out_delta_2 = 0ULL;
        vlSelfRef.tb_tile__DOT__out_edge_0 = 0U;
        vlSelfRef.tb_tile__DOT__out_edge_1 = 0U;
        vlSelfRef.tb_tile__DOT__out_edge_2 = 0U;
        vlSelfRef.tb_tile__DOT__out_metadata = 0U;
        vlSelfRef.tb_tile__DOT__out_dzdx = 0U;
        vlSelfRef.tb_tile__DOT__out_dzdy = 0U;
        vlSelfRef.tb_tile__DOT__out_z_current = 0U;
        __VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v4 = 1U;
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state = 0U;
    }
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__metadata 
        = __Vdly__tb_tile__DOT__tile_proc__DOT__metadata;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__abs_pos 
        = __Vdly__tb_tile__DOT__tile_proc__DOT__abs_pos;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_A 
        = __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_A;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_B 
        = __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_B;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_C 
        = __Vdly__tb_tile__DOT__tile_proc__DOT__coeff_C;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdx = __Vdly__tb_tile__DOT__tile_proc__DOT__dzdx;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdy = __Vdly__tb_tile__DOT__tile_proc__DOT__dzdy;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__z_current 
        = __Vdly__tb_tile__DOT__tile_proc__DOT__z_current;
    if (__VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v0) {
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges[0U] 
            = __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v0;
    }
    if (__VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v1) {
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges[1U] 
            = __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v1;
    }
    if (__VdlySet__tb_tile__DOT__tile_proc__DOT__edges__v2) {
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges[2U] 
            = __VdlyVal__tb_tile__DOT__tile_proc__DOT__edges__v2;
    }
    if (__VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v0) {
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas[0U] 
            = __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v0;
    }
    if (__VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v1) {
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas[1U] 
            = __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v1;
    }
    if (__VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v2) {
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas[2U] 
            = __VdlyVal__tb_tile__DOT__tile_proc__DOT__deltas__v2;
    }
    if (__VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v3) {
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas[0U] = 0ULL;
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges[0U] = 0U;
    }
    if (__VdlySet__tb_tile__DOT__tile_proc__DOT__deltas__v4) {
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas[1U] = 0ULL;
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges[1U] = 0U;
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__deltas[2U] = 0ULL;
        vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges[2U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_tile___024root___nba_comb__TOP__0(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___nba_comb__TOP__0\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__Vfuncout = 0;
    IData/*18:0*/ __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in = 0;
    // Body
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v[0U] 
        = vlSelfRef.tb_tile__DOT__v1;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v[1U] 
        = vlSelfRef.tb_tile__DOT__v2;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v[2U] 
        = vlSelfRef.tb_tile__DOT__v0;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in 
        = vlSelfRef.tb_tile__DOT__in_metadata;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffffffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x3f00U & (__Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in 
                                          << 3U)))) 
              << 0x20U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffff0000ffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x1f00U & (__Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__in 
                                          << 8U)))) 
              << 0x10U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = (0xffffffff0000ULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out);
    __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__Vfuncout 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_start 
        = __Vfunc_tb_tile__DOT__tile_proc__DOT__tile_to_coord__27__Vfuncout;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__v[0U] = vlSelfRef.tb_tile__DOT__v0;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__v[1U] = vlSelfRef.tb_tile__DOT__v1;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__v[2U] = vlSelfRef.tb_tile__DOT__v2;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__next_state 
        = ((0U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
            ? (((IData)(vlSelfRef.tb_tile__DOT__vld_in) 
                & (IData)(vlSelfRef.tb_tile__DOT__rdy_in))
                ? 1U : 0U) : ((1U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                               ? 2U : ((2U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                        ? 3U : ((3U 
                                                 == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                 ? 4U
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                  ? 5U
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_tile__DOT__rdy_out)
                                                    ? 0U
                                                    : 5U)
                                                   : 0U))))));
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
        [0U];
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v
        [0U];
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__a) 
                                         - (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__b))))));
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__Vfuncout 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas[0U] 
        = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__24__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
        [1U];
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v
        [1U];
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__a) 
                                         - (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__b))))));
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__Vfuncout 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas[1U] 
        = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__25__Vfuncout;
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__v
        [2U];
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__rotated_v
        [2U];
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__a) 
                                         - (IData)(__Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__b))))));
    __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__Vfuncout 
        = vlSelfRef.tb_tile__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_deltas[2U] 
        = __Vfunc_tb_tile__DOT__tile_proc__DOT__compute_delta__26__Vfuncout;
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
            VL_FATAL_MT("tb_tile.sv", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("tb_tile.sv", 3, "", "Active region did not converge.");
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
