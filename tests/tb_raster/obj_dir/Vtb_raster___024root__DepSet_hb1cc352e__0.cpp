// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_raster.h for the primary calling header

#include "Vtb_raster__pch.h"
#include "Vtb_raster___024root.h"

VL_ATTR_COLD void Vtb_raster___024root___eval_initial__TOP(Vtb_raster___024root* vlSelf);
VlCoroutine Vtb_raster___024root___eval_initial__TOP__Vtiming__0(Vtb_raster___024root* vlSelf);
VlCoroutine Vtb_raster___024root___eval_initial__TOP__Vtiming__1(Vtb_raster___024root* vlSelf);

void Vtb_raster___024root___eval_initial(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_initial\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_raster___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_raster___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_raster___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__clk__0 
        = vlSelfRef.tb_raster__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__rdy_in__0 
        = vlSelfRef.tb_raster__DOT__rdy_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__vld_out__0 
        = vlSelfRef.tb_raster__DOT__vld_out;
}

VL_INLINE_OPT VlCoroutine Vtb_raster___024root___eval_initial__TOP__Vtiming__0(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_raster__DOT__rst_n = 0U;
    vlSelfRef.tb_raster__DOT__rdy_out = 0U;
    vlSelfRef.tb_raster__DOT__vld_in = 0U;
    vlSelfRef.tb_raster__DOT__v0 = 0ULL;
    vlSelfRef.tb_raster__DOT__v1 = 0ULL;
    vlSelfRef.tb_raster__DOT__v2 = 0ULL;
    vlSelfRef.tb_raster__DOT__in_metadata = 0U;
    co_await vlSelfRef.__VtrigSched_hc1c78806__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hc1c78806__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_hc1c78806__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         62);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_raster__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_hca70bb26__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_raster.rdy_in)", 
                                                             "tb_raster.sv", 
                                                             63);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_raster__DOT__v0 = 0x1000e02000ULL;
    vlSelfRef.tb_raster__DOT__v1 = 0x7000202000ULL;
    vlSelfRef.tb_raster__DOT__v2 = 0xc000f02000ULL;
    vlSelfRef.tb_raster__DOT__in_metadata = 0x800U;
    co_await vlSelfRef.__VtrigSched_hc1c78806__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_hc1c78806__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         84);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__vld_in = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_raster__DOT__vld_out)))) {
        co_await vlSelfRef.__VtrigSched_h43a42aa4__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_raster.vld_out)", 
                                                             "tb_raster.sv", 
                                                             88);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_hc1c78806__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         89);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("abs_pos = %0d,%0d\ndzdx = %0#, dzdy = %0#\n",0,
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_abs_pos 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_abs_pos 
                                        >> 0x10U))),
                 16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdx),
                 16,vlSelfRef.tb_raster__DOT__out_dzdy);
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_raster.sv", 
                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_raster.sv", 98, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_raster___024root___eval_initial__TOP__Vtiming__1(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_raster.sv", 
                                             35);
        vlSelfRef.__VdlyVal__tb_raster__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.tb_raster__DOT__clk)));
        vlSelfRef.__VdlySet__tb_raster__DOT__clk__v0 = 1U;
    }
}

void Vtb_raster___024root___act_comb__TOP__0(Vtb_raster___024root* vlSelf);

void Vtb_raster___024root___eval_act(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_act\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xfULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_raster___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_raster___024root___act_comb__TOP__0(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___act_comb__TOP__0\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0;
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0 = 0;
    SData/*15:0*/ tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0;
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0 = 0;
    SData/*15:0*/ tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0;
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0 = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__Vfuncout;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__Vfuncout = 0;
    IData/*18:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in = 0;
    // Body
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__next_state 
        = ((0U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
            ? (((IData)(vlSelfRef.tb_raster__DOT__vld_in) 
                & (IData)(vlSelfRef.tb_raster__DOT__rdy_in))
                ? 1U : 0U) : ((1U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                               ? 2U : ((2U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                        ? 3U : ((3U 
                                                 == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                                 ? 4U
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                                  ? 5U
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_raster__DOT__rdy_out)
                                                    ? 0U
                                                    : 5U)
                                                   : 0U))))));
    __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in 
        = vlSelfRef.tb_raster__DOT__in_metadata;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffffffffULL & vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x7e00U & (__Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in 
                                          << 9U)))) 
              << 0x20U));
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffff0000ffffULL & vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x3e00U & (__Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in 
                                          << 3U)))) 
              << 0x10U));
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = (0xffffffff0000ULL & vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out);
    __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__Vfuncout 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_start 
        = __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__Vfuncout;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__v[0U] 
        = vlSelfRef.tb_raster__DOT__v0;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__v[1U] 
        = vlSelfRef.tb_raster__DOT__v1;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__v[2U] 
        = vlSelfRef.tb_raster__DOT__v2;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v[0U] 
        = vlSelfRef.tb_raster__DOT__v1;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v[1U] 
        = vlSelfRef.tb_raster__DOT__v2;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v[2U] 
        = vlSelfRef.tb_raster__DOT__v0;
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b[0U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
        [0U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b[1U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
        [1U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b[2U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
        [2U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a[0U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
        [0U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a[1U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
        [1U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a[2U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
        [2U];
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [0U] >> 0x20U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [0U] 
                                                          >> 0x20U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[0U] 
        = ((0xffffffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0)) 
                     << 0x20U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [0U] >> 0x10U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [0U] 
                                                          >> 0x10U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[0U] 
        = ((0xffff0000ffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0)) 
                     << 0x10U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0 
        = (0xffffU & ((IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                              [0U]) - (IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                              [0U])));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[0U] 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [0U]) | (IData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0)));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [1U] >> 0x20U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [1U] 
                                                          >> 0x20U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[1U] 
        = ((0xffffffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0)) 
                     << 0x20U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [1U] >> 0x10U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [1U] 
                                                          >> 0x10U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[1U] 
        = ((0xffff0000ffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0)) 
                     << 0x10U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0 
        = (0xffffU & ((IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                              [1U]) - (IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                              [1U])));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[1U] 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [1U]) | (IData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0)));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [2U] >> 0x20U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [2U] 
                                                          >> 0x20U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[2U] 
        = ((0xffffffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0)) 
                     << 0x20U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [2U] >> 0x10U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [2U] 
                                                          >> 0x10U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[2U] 
        = ((0xffff0000ffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0)) 
                     << 0x10U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0 
        = (0xffffU & ((IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                              [2U]) - (IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                              [2U])));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[2U] 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [2U]) | (IData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0)));
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas[0U] 
        = vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
        [0U];
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas[1U] 
        = vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
        [1U];
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas[2U] 
        = vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
        [2U];
}

void Vtb_raster___024root___nba_sequent__TOP__0(Vtb_raster___024root* vlSelf);
void Vtb_raster___024root___nba_sequent__TOP__1(Vtb_raster___024root* vlSelf);
void Vtb_raster___024root___nba_comb__TOP__0(Vtb_raster___024root* vlSelf);

void Vtb_raster___024root___eval_nba(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_nba\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_raster___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_raster___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_raster___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_raster___024root___nba_sequent__TOP__0(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___nba_sequent__TOP__0\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__Vfuncout;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__Vfuncout;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__Vfuncout = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__deltas[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__Vfuncout;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__Vfuncout = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__deltas[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__v[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__Vfuncout;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__Vfuncout = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__deltas[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__v[__Vi0] = 0;
    }
    SData/*15:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__Vfuncout;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__dz_undiv;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__dz_undiv = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__determinant;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__determinant = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__Vfuncout;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__dz_undiv;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__dz_undiv = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__determinant;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__determinant = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__Vfuncout;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__v_0;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__v_0 = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__abs_pos;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__abs_pos = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__dzdx;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__dzdx = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__dzdy;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__dzdy = 0;
    IData/*18:0*/ __Vdly__tb_raster__DOT__tile_proc__DOT__metadata;
    __Vdly__tb_raster__DOT__tile_proc__DOT__metadata = 0;
    QData/*47:0*/ __Vdly__tb_raster__DOT__tile_proc__DOT__abs_pos;
    __Vdly__tb_raster__DOT__tile_proc__DOT__abs_pos = 0;
    IData/*31:0*/ __Vdly__tb_raster__DOT__tile_proc__DOT__determinant;
    __Vdly__tb_raster__DOT__tile_proc__DOT__determinant = 0;
    IData/*31:0*/ __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx_undiv;
    __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx_undiv = 0;
    IData/*31:0*/ __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy_undiv;
    __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy_undiv = 0;
    SData/*15:0*/ __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx;
    __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx = 0;
    SData/*15:0*/ __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy;
    __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy = 0;
    IData/*31:0*/ __Vdly__tb_raster__DOT__tile_proc__DOT__z_current;
    __Vdly__tb_raster__DOT__tile_proc__DOT__z_current = 0;
    QData/*47:0*/ __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v0;
    __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v0;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v0 = 0;
    QData/*47:0*/ __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v1;
    __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v1;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v1 = 0;
    QData/*47:0*/ __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v2;
    __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v2;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v0;
    __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v0;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v1;
    __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v1;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v2;
    __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v2;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v3;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v4;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v4 = 0;
    // Body
    __Vdly__tb_raster__DOT__tile_proc__DOT__metadata 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__metadata;
    __Vdly__tb_raster__DOT__tile_proc__DOT__abs_pos 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__abs_pos;
    __Vdly__tb_raster__DOT__tile_proc__DOT__determinant 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__determinant;
    __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx_undiv 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdx_undiv;
    __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy_undiv 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdy_undiv;
    __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdx;
    __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdy;
    __Vdly__tb_raster__DOT__tile_proc__DOT__z_current 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__z_current;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v0 = 0U;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v1 = 0U;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v2 = 0U;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v0 = 0U;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v1 = 0U;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v2 = 0U;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v3 = 0U;
    __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v4 = 0U;
    if (vlSelfRef.tb_raster__DOT__rst_n) {
        if ((0U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)) {
            vlSelfRef.tb_raster__DOT__rdy_in = ((~ (IData)(vlSelfRef.tb_raster__DOT__vld_in)) 
                                                & (IData)(vlSelfRef.tb_raster__DOT__rdy_in));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_hf68aa2bc__0 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                [0U];
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__unnamedblk1__DOT__i = 3U;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                [0U];
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__unnamedblk2__DOT__i = 3U;
            __Vdly__tb_raster__DOT__tile_proc__DOT__metadata 
                = vlSelfRef.tb_raster__DOT__in_metadata;
            __Vdly__tb_raster__DOT__tile_proc__DOT__abs_pos 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_start;
            __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v0 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_hf68aa2bc__0;
            __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v0 = 1U;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [0U];
            vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_hf68aa2bc__0 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                [1U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_start;
            __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v1 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_hf68aa2bc__0;
            __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v1 = 1U;
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i 
                                                             >> 0x20U))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_hf68aa2bc__0 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                [2U];
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i 
                                                             >> 0x10U))));
            __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v2 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_hf68aa2bc__0;
            __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v2 = 1U;
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i 
                                                        >> 0x10U)))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i 
                                                        >> 0x20U)))));
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__Vfuncout 
                = (vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                   - vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult);
            vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_h788d9ebb__0 
                = __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__Vfuncout;
            __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v0 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_h788d9ebb__0;
            __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v0 = 1U;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                [1U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [1U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_start;
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i 
                                                             >> 0x20U))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i 
                                                             >> 0x10U))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i 
                                                        >> 0x10U)))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i 
                                                        >> 0x20U)))));
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__Vfuncout 
                = (vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                   - vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult);
            vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_h788d9ebb__0 
                = __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__Vfuncout;
            __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v1 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_h788d9ebb__0;
            __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v1 = 1U;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                [2U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [2U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_start;
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i 
                                                             >> 0x20U))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__v_i 
                                                             >> 0x10U))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i 
                                                        >> 0x10U)))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__delta_i 
                                                        >> 0x20U)))));
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__Vfuncout 
                = (vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                   - vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult);
            vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_h788d9ebb__0 
                = __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_edge__2__Vfuncout;
            __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v2 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT____Vlvbound_h788d9ebb__0;
            __VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v2 = 1U;
        } else if ((1U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)) {
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__deltas[0U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [0U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__deltas[1U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [1U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__deltas[2U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [2U];
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_det__Vstatic__temp_x0y2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__deltas
                                                            [0U] 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__deltas
                                                        [2U] 
                                                        >> 0x10U)))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_det__Vstatic__temp_x2y0_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__deltas
                                                            [2U] 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__deltas
                                                        [0U] 
                                                        >> 0x10U)))));
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__Vfuncout 
                = (vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_det__Vstatic__temp_x0y2_mult 
                   - vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_det__Vstatic__temp_x2y0_mult);
            __Vdly__tb_raster__DOT__tile_proc__DOT__determinant 
                = __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_det__3__Vfuncout;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__v[0U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [0U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__v[1U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [1U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__v[2U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [2U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__deltas[0U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [0U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__deltas[1U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [1U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__deltas[2U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [2U];
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__Vstatic__temp_dy1vz0_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__deltas
                                                            [1U] 
                                                            >> 0x10U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__v
                                                       [0U]))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__Vstatic__temp_dy2vz1_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__deltas
                                                            [2U] 
                                                            >> 0x10U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__v
                                                       [1U]))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__Vstatic__temp_dy0vz2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__deltas
                                                            [0U] 
                                                            >> 0x10U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__v
                                                       [2U]))));
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__Vfuncout 
                = ((vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__Vstatic__temp_dy1vz0_mult 
                    + vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__Vstatic__temp_dy2vz1_mult) 
                   + vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__Vstatic__temp_dy0vz2_mult);
            __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx_undiv 
                = __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdx_undiv__4__Vfuncout;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__v[0U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [0U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__v[1U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [1U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__v[2U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [2U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__deltas[0U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [0U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__deltas[1U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [1U];
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__deltas[2U] 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [2U];
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__Vstatic__temp_dx0vz0_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__deltas
                                                            [0U] 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__v
                                                       [0U]))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__Vstatic__temp_dx1vz1_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__deltas
                                                            [1U] 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__v
                                                       [1U]))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__Vstatic__temp_dx2vz2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__deltas
                                                            [2U] 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__v
                                                       [2U]))));
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__Vfuncout 
                = (- ((vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__Vstatic__temp_dx0vz0_mult 
                       + vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__Vstatic__temp_dx1vz1_mult) 
                      + vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__Vstatic__temp_dx2vz2_mult));
            __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy_undiv 
                = __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_dzdy_undiv__5__Vfuncout;
        } else if ((2U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)) {
            __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__determinant 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__determinant;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__dz_undiv 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdx_undiv;
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                = VL_DIVS_III(32, __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__dz_undiv, __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__determinant);
            __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__Vfuncout 
                = (0xffffU & (vlSelfRef.tb_raster__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                              >> 4U));
            __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx 
                = __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__6__Vfuncout;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__determinant 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__determinant;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__dz_undiv 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdy_undiv;
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                = VL_DIVS_III(32, __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__dz_undiv, __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__determinant);
            __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__Vfuncout 
                = (0xffffU & (vlSelfRef.tb_raster__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                              >> 4U));
            __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy 
                = __Vfunc_tb_raster__DOT__tile_proc__DOT__scale_dz__7__Vfuncout;
        } else if ((3U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)) {
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__dzdy 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdy;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__dzdx 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdx;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__abs_pos 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__abs_pos;
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__v_0 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                [0U];
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x 
                = (0xffffU & ((IData)((__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__v_0 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__abs_pos 
                                                             >> 0x20U))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y 
                = (0xffffU & ((IData)((__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__v_0 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__abs_pos 
                                                             >> 0x10U))));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__x_component 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x)), 
                              VL_EXTENDS_II(32,16, (IData)(__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__dzdx)));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__y_component 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y)), 
                              VL_EXTENDS_II(32,16, (IData)(__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__dzdy)));
            vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__z_component 
                = (((- (IData)((1U & (IData)((__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__v_0 
                                              >> 0xfU))))) 
                    << 0x14U) | (0xffff0U & ((IData)(__Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__v_0) 
                                             << 4U)));
            __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__Vfuncout 
                = ((vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__x_component 
                    + vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__y_component) 
                   + vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__z_component);
            __Vdly__tb_raster__DOT__tile_proc__DOT__z_current 
                = __Vfunc_tb_raster__DOT__tile_proc__DOT__compute_z__8__Vfuncout;
        } else if ((4U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)) {
            vlSelfRef.tb_raster__DOT__vld_out = 1U;
            vlSelfRef.tb_raster__DOT__out_abs_pos = vlSelfRef.tb_raster__DOT__tile_proc__DOT__abs_pos;
            vlSelfRef.tb_raster__DOT__out_delta_0 = 
                vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [0U];
            vlSelfRef.tb_raster__DOT__out_edge_0 = 
                vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges
                [0U];
            vlSelfRef.tb_raster__DOT__out_metadata 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__metadata;
            vlSelfRef.tb_raster__DOT__out_dzdx = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdx;
            vlSelfRef.tb_raster__DOT__out_dzdy = vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdy;
            vlSelfRef.tb_raster__DOT__out_z_current 
                = vlSelfRef.tb_raster__DOT__tile_proc__DOT__z_current;
            vlSelfRef.tb_raster__DOT__out_delta_1 = 
                vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [1U];
            vlSelfRef.tb_raster__DOT__out_edge_1 = 
                vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges
                [1U];
            vlSelfRef.tb_raster__DOT__out_delta_2 = 
                vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                [2U];
            vlSelfRef.tb_raster__DOT__out_edge_2 = 
                vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges
                [2U];
        } else if ((5U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)) {
            if (vlSelfRef.tb_raster__DOT__rdy_out) {
                vlSelfRef.tb_raster__DOT__rdy_in = 1U;
                vlSelfRef.tb_raster__DOT__vld_out = 0U;
            }
        }
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state 
            = vlSelfRef.tb_raster__DOT__tile_proc__DOT__next_state;
    } else {
        vlSelfRef.tb_raster__DOT__rdy_in = 1U;
        __Vdly__tb_raster__DOT__tile_proc__DOT__abs_pos = 0ULL;
        __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v3 = 1U;
        __Vdly__tb_raster__DOT__tile_proc__DOT__metadata = 0U;
        __Vdly__tb_raster__DOT__tile_proc__DOT__determinant = 0U;
        __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx_undiv = 0U;
        __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy_undiv = 0U;
        __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx = 0U;
        __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy = 0U;
        __Vdly__tb_raster__DOT__tile_proc__DOT__z_current = 0U;
        __VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v4 = 1U;
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state = 0U;
    }
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__metadata 
        = __Vdly__tb_raster__DOT__tile_proc__DOT__metadata;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__abs_pos 
        = __Vdly__tb_raster__DOT__tile_proc__DOT__abs_pos;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__determinant 
        = __Vdly__tb_raster__DOT__tile_proc__DOT__determinant;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdx_undiv 
        = __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx_undiv;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdy_undiv 
        = __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy_undiv;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdx 
        = __Vdly__tb_raster__DOT__tile_proc__DOT__dzdx;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdy 
        = __Vdly__tb_raster__DOT__tile_proc__DOT__dzdy;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__z_current 
        = __Vdly__tb_raster__DOT__tile_proc__DOT__z_current;
    if (__VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v0) {
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges[0U] 
            = __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v0;
    }
    if (__VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v1) {
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges[1U] 
            = __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v1;
    }
    if (__VdlySet__tb_raster__DOT__tile_proc__DOT__edges__v2) {
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges[2U] 
            = __VdlyVal__tb_raster__DOT__tile_proc__DOT__edges__v2;
    }
    if (__VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v0) {
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas[0U] 
            = __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v0;
    }
    if (__VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v1) {
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas[1U] 
            = __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v1;
    }
    if (__VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v2) {
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas[2U] 
            = __VdlyVal__tb_raster__DOT__tile_proc__DOT__deltas__v2;
    }
    if (__VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v3) {
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas[0U] = 0ULL;
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges[0U] = 0U;
    }
    if (__VdlySet__tb_raster__DOT__tile_proc__DOT__deltas__v4) {
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas[1U] = 0ULL;
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges[1U] = 0U;
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas[2U] = 0ULL;
        vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges[2U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_raster___024root___nba_sequent__TOP__1(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___nba_sequent__TOP__1\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_raster__DOT__clk__v0) {
        vlSelfRef.__VdlySet__tb_raster__DOT__clk__v0 = 0U;
        vlSelfRef.tb_raster__DOT__clk = vlSelfRef.__VdlyVal__tb_raster__DOT__clk__v0;
    }
}

VL_INLINE_OPT void Vtb_raster___024root___nba_comb__TOP__0(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___nba_comb__TOP__0\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0;
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0 = 0;
    SData/*15:0*/ tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0;
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0 = 0;
    SData/*15:0*/ tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0;
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0 = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__Vfuncout;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__Vfuncout = 0;
    IData/*18:0*/ __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in;
    __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in = 0;
    // Body
    __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in 
        = vlSelfRef.tb_raster__DOT__in_metadata;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffffffffULL & vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x7e00U & (__Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in 
                                          << 9U)))) 
              << 0x20U));
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffff0000ffffULL & vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x3e00U & (__Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__in 
                                          << 3U)))) 
              << 0x10U));
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = (0xffffffff0000ULL & vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out);
    __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__Vfuncout 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_start 
        = __Vfunc_tb_raster__DOT__tile_proc__DOT__tile_to_coord__0__Vfuncout;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__v[0U] 
        = vlSelfRef.tb_raster__DOT__v0;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__v[1U] 
        = vlSelfRef.tb_raster__DOT__v1;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__v[2U] 
        = vlSelfRef.tb_raster__DOT__v2;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v[0U] 
        = vlSelfRef.tb_raster__DOT__v1;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v[1U] 
        = vlSelfRef.tb_raster__DOT__v2;
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v[2U] 
        = vlSelfRef.tb_raster__DOT__v0;
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b[0U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
        [0U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b[1U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
        [1U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b[2U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
        [2U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a[0U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
        [0U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a[1U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
        [1U];
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a[2U] 
        = vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
        [2U];
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [0U] >> 0x20U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [0U] 
                                                          >> 0x20U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[0U] 
        = ((0xffffffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0)) 
                     << 0x20U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [0U] >> 0x10U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [0U] 
                                                          >> 0x10U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[0U] 
        = ((0xffff0000ffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0)) 
                     << 0x10U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0 
        = (0xffffU & ((IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                              [0U]) - (IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                              [0U])));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[0U] 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [0U]) | (IData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0)));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [1U] >> 0x20U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [1U] 
                                                          >> 0x20U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[1U] 
        = ((0xffffffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0)) 
                     << 0x20U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [1U] >> 0x10U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [1U] 
                                                          >> 0x10U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[1U] 
        = ((0xffff0000ffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0)) 
                     << 0x10U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0 
        = (0xffffU & ((IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                              [1U]) - (IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                              [1U])));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[1U] 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [1U]) | (IData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0)));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [2U] >> 0x20U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [2U] 
                                                          >> 0x20U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[2U] 
        = ((0xffffffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8b895015__0)) 
                     << 0x20U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0 
        = (0xffffU & ((IData)((vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                               [2U] >> 0x10U)) - (IData)(
                                                         (vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                                          [2U] 
                                                          >> 0x10U))));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[2U] 
        = ((0xffff0000ffffULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ac395a0__0)) 
                     << 0x10U));
    tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0 
        = (0xffffU & ((IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__a
                              [2U]) - (IData)(vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__b
                                              [2U])));
    vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas[2U] 
        = ((0xffffffff0000ULL & vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
            [2U]) | (IData)((IData)(tb_raster__DOT__tile_proc__DOT____Vlvbound_h8ae37423__0)));
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas[0U] 
        = vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
        [0U];
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas[1U] 
        = vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
        [1U];
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas[2U] 
        = vlSelfRef.__Vtask_tb_raster__DOT__tile_proc__DOT__compute_deltas__1__deltas
        [2U];
    vlSelfRef.tb_raster__DOT__tile_proc__DOT__next_state 
        = ((0U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
            ? (((IData)(vlSelfRef.tb_raster__DOT__vld_in) 
                & (IData)(vlSelfRef.tb_raster__DOT__rdy_in))
                ? 1U : 0U) : ((1U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                               ? 2U : ((2U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                        ? 3U : ((3U 
                                                 == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                                 ? 4U
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                                  ? 5U
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_raster__DOT__rdy_out)
                                                    ? 0U
                                                    : 5U)
                                                   : 0U))))));
}

void Vtb_raster___024root___timing_resume(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___timing_resume\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc1c78806__0.resume(
                                                   "@(posedge tb_raster.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hca70bb26__0.resume(
                                                   "@( tb_raster.rdy_in)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h43a42aa4__0.resume(
                                                   "@( tb_raster.vld_out)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_raster___024root___timing_commit(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___timing_commit\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc1c78806__0.commit(
                                                   "@(posedge tb_raster.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hca70bb26__0.commit(
                                                   "@( tb_raster.rdy_in)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h43a42aa4__0.commit(
                                                   "@( tb_raster.vld_out)");
    }
}

void Vtb_raster___024root___eval_triggers__act(Vtb_raster___024root* vlSelf);

bool Vtb_raster___024root___eval_phase__act(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_phase__act\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_raster___024root___eval_triggers__act(vlSelf);
    Vtb_raster___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_raster___024root___timing_resume(vlSelf);
        Vtb_raster___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_raster___024root___eval_phase__nba(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_phase__nba\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_raster___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_raster___024root___dump_triggers__nba(Vtb_raster___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_raster___024root___dump_triggers__act(Vtb_raster___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_raster___024root___eval(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_raster___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_raster.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_raster___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_raster.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_raster___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_raster___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_raster___024root___eval_debug_assertions(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_debug_assertions\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
