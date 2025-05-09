// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pixel.h for the primary calling header

#include "Vtb_pixel__pch.h"
#include "Vtb_pixel___024root.h"

VL_ATTR_COLD void Vtb_pixel___024root___eval_initial__TOP(Vtb_pixel___024root* vlSelf);
VlCoroutine Vtb_pixel___024root___eval_initial__TOP__Vtiming__0(Vtb_pixel___024root* vlSelf);
VlCoroutine Vtb_pixel___024root___eval_initial__TOP__Vtiming__1(Vtb_pixel___024root* vlSelf);

void Vtb_pixel___024root___eval_initial(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_initial\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_pixel___024root___eval_initial__TOP(vlSelf);
    Vtb_pixel___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_pixel___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pixel__DOT__clk__0 
        = vlSelfRef.tb_pixel__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pixel__DOT__rdy_in__0 
        = vlSelfRef.tb_pixel__DOT__rdy_in;
}

VL_INLINE_OPT VlCoroutine Vtb_pixel___024root___eval_initial__TOP__Vtiming__0(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pixel__DOT__clk = 0U;
    vlSelfRef.tb_pixel__DOT__rst_n = 0U;
    vlSelfRef.tb_pixel__DOT__rdy_out = 0U;
    vlSelfRef.tb_pixel__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_h9f95fec7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pixel.clk)", 
                                                         "tb_pixel.sv", 
                                                         65);
    co_await vlSelfRef.__VtrigSched_h9f95fec7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pixel.clk)", 
                                                         "tb_pixel.sv", 
                                                         65);
    vlSelfRef.tb_pixel__DOT__rst_n = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_pixel__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_hcc9cc3b7__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_pixel.rdy_in)", 
                                                             "tb_pixel.sv", 
                                                             69);
    }
    VL_FINISH_MT("tb_pixel.sv", 73, "");
}

VL_INLINE_OPT VlCoroutine Vtb_pixel___024root___eval_initial__TOP__Vtiming__1(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_pixel.sv", 
                                             33);
        vlSelfRef.__VdlyVal__tb_pixel__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.tb_pixel__DOT__clk)));
        vlSelfRef.__VdlySet__tb_pixel__DOT__clk__v0 = 1U;
    }
}

void Vtb_pixel___024root___act_comb__TOP__0(Vtb_pixel___024root* vlSelf);

void Vtb_pixel___024root___eval_act(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_act\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_pixel___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_pixel___024root___act_comb__TOP__0(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___act_comb__TOP__0\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtb_pixel___024root___nba_sequent__TOP__0(Vtb_pixel___024root* vlSelf);
void Vtb_pixel___024root___nba_sequent__TOP__1(Vtb_pixel___024root* vlSelf);

void Vtb_pixel___024root___eval_nba(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_nba\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_pixel___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_pixel___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_pixel___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_pixel___024root___nba_sequent__TOP__0(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___nba_sequent__TOP__0\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__0__Vfuncout;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__0__Vfuncout = 0;
    IData/*18:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__0__in;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__0__in = 0;
    IData/*31:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__1__Vfuncout;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__1__in;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__1__in = 0;
    IData/*31:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__2__Vfuncout;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__2__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__2__in;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__2__in = 0;
    IData/*31:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__Vfuncout;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i = 0;
    IData/*31:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__Vfuncout;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in = 0;
    IData/*31:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__Vfuncout;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in = 0;
    IData/*31:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__6__Vfuncout;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__6__in;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__6__in = 0;
    IData/*31:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__Vfuncout;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__delta_i;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__delta_i = 0;
    IData/*31:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__Vfuncout;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in;
    __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in = 0;
    QData/*47:0*/ __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos = 0;
    CData/*7:0*/ __Vdly__tb_pixel__DOT__pixel_proc__DOT__rel_pos;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__rel_pos = 0;
    CData/*7:0*/ __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos = 0;
    SData/*15:0*/ __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdx;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdx = 0;
    SData/*15:0*/ __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdy;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdy = 0;
    IData/*31:0*/ __Vdly__tb_pixel__DOT__pixel_proc__DOT__z_current;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__z_current = 0;
    IData/*18:0*/ __Vdly__tb_pixel__DOT__pixel_proc__DOT__metadata;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__metadata = 0;
    QData/*47:0*/ __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos = 0;
    QData/*47:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v0;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v0;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v0;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v0 = 0;
    QData/*47:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v1;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v1;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v1;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v1 = 0;
    QData/*47:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v2;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v2;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v2;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v0;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v0;
    __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v0;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v0;
    __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v3;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v3;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v4;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v4;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v5;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v5;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v6;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v6;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v7;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v7;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v8;
    __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v8;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v8 = 0;
    CData/*7:0*/ __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v1;
    __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v1;
    __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v3;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v2;
    __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v2;
    __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v4;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v4 = 0;
    // Body
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos 
        = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdx = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdx;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdy = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdy;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__z_current 
        = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_current;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
        = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__rel_pos 
        = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos 
        = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos;
    __Vdly__tb_pixel__DOT__pixel_proc__DOT__metadata 
        = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v3 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v4 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v5 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v6 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v7 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v8 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v0 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v1 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v2 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v3 = 0U;
    __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v4 = 0U;
    if (vlSelfRef.tb_pixel__DOT__rst_n) {
        if ((0U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)) {
            vlSelfRef.tb_pixel__DOT__rdy_in = 0U;
            vlSelfRef.tb_pixel__DOT__vld_out = 0U;
            if (vlSelfRef.tb_pixel__DOT__vld_in) {
                __Vfunc_tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__0__in 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata;
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                    = vlSelfRef.tb_pixel__DOT__in_abs_pos;
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                    = ((0xffffffffULL & vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out) 
                       | ((QData)((IData)((0x3f00U 
                                           & (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__0__in 
                                              << 3U)))) 
                          << 0x20U));
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__rel_pos = 0U;
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos = 0U;
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v0 
                    = vlSelfRef.tb_pixel__DOT__in_delta_0;
                __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v0 = 1U;
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v0 
                    = vlSelfRef.tb_pixel__DOT__in_edge_0;
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdx 
                    = vlSelfRef.tb_pixel__DOT__in_dzdx;
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdy 
                    = vlSelfRef.tb_pixel__DOT__in_dzdy;
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__z_current 
                    = vlSelfRef.tb_pixel__DOT__in_z_current;
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                    = ((0xffff0000ffffULL & vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out) 
                       | ((QData)((IData)((0x1f00U 
                                           & (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__0__in 
                                              << 8U)))) 
                          << 0x10U));
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v1 
                    = vlSelfRef.tb_pixel__DOT__in_delta_1;
                __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v1 = 1U;
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v1 
                    = vlSelfRef.tb_pixel__DOT__in_edge_1;
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                    = (0xffffffff0000ULL & vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out);
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v2 
                    = vlSelfRef.tb_pixel__DOT__in_delta_2;
                __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v2 = 1U;
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v2 
                    = vlSelfRef.tb_pixel__DOT__in_edge_2;
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__metadata 
                    = vlSelfRef.tb_pixel__DOT__in_metadata;
                __Vfunc_tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__0__Vfuncout 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out;
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                    = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__0__Vfuncout;
            }
        } else if ((2U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)) {
            vlSelfRef.tb_pixel__DOT__rdy_in = 0U;
            vlSelfRef.tb_pixel__DOT__vld_out = 0U;
            if ((((VL_LTS_III(32, 0U, vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges
                              [0U]) & VL_LTS_III(32, 0U, 
                                                 vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges
                                                 [1U])) 
                  & VL_LTS_III(32, 0U, vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges
                               [2U])) & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_current 
                                         < vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_buffer
                                         [vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos]))) {
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v0 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_current;
                __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v0 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos;
                vlSelfRef.__VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__z_buffer.enqueue(__VdlyVal__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v0, (IData)(__VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v0));
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v0 
                    = (0xffU & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                >> 0xbU));
                __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v0 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos;
                vlSelfRef.__VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__color_buffer.enqueue(__VdlyVal__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v0, (IData)(__VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v0));
            }
            if ((0xfU == (0xfU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos)))) {
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__z_current 
                    = ((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_current 
                        + ([&]() {
                                __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__1__in 
                                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdy;
                                __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__1__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__1__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__1__in) 
                                        << 4U));
                            }(), __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__1__Vfuncout)) 
                       - VL_SHIFTL_III(32,32,32, ([&]() {
                                __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__2__in 
                                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdx;
                                __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__2__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__2__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__2__in) 
                                        << 4U));
                            }(), __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__2__Vfuncout), 4U));
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk3__DOT__i = 3U;
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                    = ((0xffffffffULL & __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos) 
                       | ((QData)((IData)((0xffffU 
                                           & (VL_EXTENDS_II(16,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                                                                        >> 0x20U)))) 
                                              - (IData)(0xf0U))))) 
                          << 0x20U));
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0 
                    = (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges
                       [0U] - ([&]() {
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                [0U];
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in) 
                                                 << 4U));
                            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy 
                                = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__Vfuncout;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i 
                                                      >> 0x20U)));
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in) 
                                                 << 4U));
                            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx 
                                = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__Vfuncout;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__Vfuncout 
                                = (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy, 4U) 
                                   + vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx);
                        }(), __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__Vfuncout));
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                    = ((0xffff0000ffffULL & __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos) 
                       | ((QData)((IData)((0xffffU 
                                           & ((IData)(0x10U) 
                                              + VL_EXTENDS_II(16,16, 
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                                                                          >> 0x10U)))))))) 
                          << 0x10U));
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v3 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0;
                __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v3 = 1U;
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0 
                    = (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges
                       [1U] - ([&]() {
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                [1U];
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in) 
                                                 << 4U));
                            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy 
                                = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__Vfuncout;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i 
                                                      >> 0x20U)));
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in) 
                                                 << 4U));
                            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx 
                                = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__Vfuncout;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__Vfuncout 
                                = (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy, 4U) 
                                   + vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx);
                        }(), __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__Vfuncout));
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v4 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0;
                __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v4 = 1U;
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0 
                    = (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges
                       [2U] - ([&]() {
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                [2U];
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__in) 
                                                 << 4U));
                            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy 
                                = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__4__Vfuncout;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__delta_i 
                                                      >> 0x20U)));
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__in) 
                                                 << 4U));
                            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx 
                                = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__5__Vfuncout;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__Vfuncout 
                                = (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy, 4U) 
                                   + vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx);
                        }(), __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__3__Vfuncout));
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v5 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0;
                __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v5 = 1U;
            } else {
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                    = ((0xffffffffULL & __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos) 
                       | ((QData)((IData)((0xffffU 
                                           & ((IData)(0x10U) 
                                              + VL_EXTENDS_II(16,16, 
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                                                                          >> 0x20U)))))))) 
                          << 0x20U));
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__z_current 
                    = (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_current 
                       + ([&]() {
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__6__in 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdx;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__6__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__6__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__6__in) 
                                                 << 4U));
                        }(), __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__6__Vfuncout));
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk4__DOT__i = 3U;
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0 
                    = (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges
                       [0U] + ([&]() {
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__delta_i 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                [0U];
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in) 
                                                 << 4U));
                            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy 
                                = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__Vfuncout;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__Vfuncout 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy;
                        }(), __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__Vfuncout));
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v6 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0;
                __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v6 = 1U;
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0 
                    = (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges
                       [1U] + ([&]() {
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__delta_i 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                [1U];
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in) 
                                                 << 4U));
                            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy 
                                = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__Vfuncout;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__Vfuncout 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy;
                        }(), __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__Vfuncout));
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v7 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0;
                __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v7 = 1U;
                vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0 
                    = (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges
                       [2U] + ([&]() {
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__delta_i 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                [2U];
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__in) 
                                                 << 4U));
                            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy 
                                = __Vfunc_tb_pixel__DOT__pixel_proc__DOT__sext_f16_f32__8__Vfuncout;
                            __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__Vfuncout 
                                = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy;
                        }(), __Vfunc_tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__7__Vfuncout));
                __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v8 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0;
                __VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v8 = 1U;
            }
            __Vdly__tb_pixel__DOT__pixel_proc__DOT__rel_pos 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos)));
            if ((0xffU <= (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos))) {
                vlSelfRef.tb_pixel__DOT__rdy_in = 1U;
            }
        } else if ((1U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)) {
            vlSelfRef.tb_pixel__DOT__rdy_in = 0U;
            if (vlSelfRef.tb_pixel__DOT__rdy_out) {
                vlSelfRef.tb_pixel__DOT__vld_out = 1U;
                vlSelfRef.tb_pixel__DOT__color_out 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__color_buffer
                    [vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos];
                vlSelfRef.tb_pixel__DOT__pixel_out 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__out_coord;
                __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v1 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos;
                vlSelfRef.__VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__z_buffer.enqueue(0xffffffffU, (IData)(__VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v1));
                __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v1 
                    = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos;
                vlSelfRef.__VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__color_buffer.enqueue(0U, (IData)(__VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v1));
                if ((0xfU == (0xfU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos)))) {
                    __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                        = ((0xffffffffULL & __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos) 
                           | ((QData)((IData)((0xffffU 
                                               & (VL_EXTENDS_II(16,16, 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                                            >> 0x20U)))) 
                                                  - (IData)(0xf0U))))) 
                              << 0x20U));
                    __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                        = ((0xffff0000ffffULL & __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos) 
                           | ((QData)((IData)((0xffffU 
                                               & ((IData)(0x10U) 
                                                  + 
                                                  VL_EXTENDS_II(16,16, 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                                            >> 0x10U)))))))) 
                              << 0x10U));
                } else {
                    __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                        = ((0xffffffffULL & __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos) 
                           | ((QData)((IData)((0xffffU 
                                               & ((IData)(0x10U) 
                                                  + 
                                                  VL_EXTENDS_II(16,16, 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                                            >> 0x20U)))))))) 
                              << 0x20U));
                }
                __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos)));
                if ((0xffU <= (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos))) {
                    vlSelfRef.tb_pixel__DOT__rdy_in = 1U;
                }
            } else {
                vlSelfRef.tb_pixel__DOT__vld_out = 0U;
            }
        }
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state 
            = vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__next_state;
    } else {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i = 0U;
        __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos = 0ULL;
        __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos = 0ULL;
        __Vdly__tb_pixel__DOT__pixel_proc__DOT__rel_pos = 0U;
        __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos = 0U;
        __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v3 = 1U;
        __Vdly__tb_pixel__DOT__pixel_proc__DOT__metadata = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i)) {
            __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v2 
                = (0xffU & vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__z_buffer.enqueue(0xffffffffU, (IData)(__VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__z_buffer__v2));
            __VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v2 
                = (0xffU & vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__color_buffer.enqueue(0U, (IData)(__VdlyDim0__tb_pixel__DOT__pixel_proc__DOT__color_buffer__v2));
            vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i);
        }
        __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdx = 0U;
        __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdy = 0U;
        __Vdly__tb_pixel__DOT__pixel_proc__DOT__z_current = 0U;
        vlSelfRef.tb_pixel__DOT__rdy_in = 1U;
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state = 0U;
        __VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v4 = 1U;
    }
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos 
        = __Vdly__tb_pixel__DOT__pixel_proc__DOT__abs_pos;
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdx 
        = __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdx;
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdy 
        = __Vdly__tb_pixel__DOT__pixel_proc__DOT__dzdy;
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_current 
        = __Vdly__tb_pixel__DOT__pixel_proc__DOT__z_current;
    vlSelfRef.__VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__z_buffer.commit(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_buffer);
    vlSelfRef.__VdlyCommitQueuetb_pixel__DOT__pixel_proc__DOT__color_buffer.commit(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__color_buffer);
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
        = __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos;
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos 
        = __Vdly__tb_pixel__DOT__pixel_proc__DOT__rel_pos;
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos 
        = __Vdly__tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos;
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
        = __Vdly__tb_pixel__DOT__pixel_proc__DOT__metadata;
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v3) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[0U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v3;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v4) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[1U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v4;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v5) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[2U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v5;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v6) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[0U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v6;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v7) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[1U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v7;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__edges__v8) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[2U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v8;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v0) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas[0U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v0;
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[0U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v0;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v1) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas[1U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v1;
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[1U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v1;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v2) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas[2U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__deltas__v2;
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[2U] 
            = __VdlyVal__tb_pixel__DOT__pixel_proc__DOT__edges__v2;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v3) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas[0U] = 0ULL;
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[0U] = 0U;
    }
    if (__VdlySet__tb_pixel__DOT__pixel_proc__DOT__deltas__v4) {
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas[1U] = 0ULL;
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[1U] = 0U;
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas[2U] = 0ULL;
        vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[2U] = 0U;
    }
    vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__out_coord 
        = (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                   >> 0x10U));
}

VL_INLINE_OPT void Vtb_pixel___024root___nba_sequent__TOP__1(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___nba_sequent__TOP__1\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_pixel__DOT__clk__v0) {
        vlSelfRef.__VdlySet__tb_pixel__DOT__clk__v0 = 0U;
        vlSelfRef.tb_pixel__DOT__clk = vlSelfRef.__VdlyVal__tb_pixel__DOT__clk__v0;
    }
}

void Vtb_pixel___024root___timing_resume(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___timing_resume\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9f95fec7__0.resume(
                                                   "@(posedge tb_pixel.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hcc9cc3b7__0.resume(
                                                   "@( tb_pixel.rdy_in)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_pixel___024root___timing_commit(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___timing_commit\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9f95fec7__0.commit(
                                                   "@(posedge tb_pixel.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hcc9cc3b7__0.commit(
                                                   "@( tb_pixel.rdy_in)");
    }
}

void Vtb_pixel___024root___eval_triggers__act(Vtb_pixel___024root* vlSelf);

bool Vtb_pixel___024root___eval_phase__act(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_phase__act\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_pixel___024root___eval_triggers__act(vlSelf);
    Vtb_pixel___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_pixel___024root___timing_resume(vlSelf);
        Vtb_pixel___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_pixel___024root___eval_phase__nba(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_phase__nba\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_pixel___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pixel___024root___dump_triggers__nba(Vtb_pixel___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pixel___024root___dump_triggers__act(Vtb_pixel___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_pixel___024root___eval(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_pixel___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_pixel.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_pixel___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_pixel.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_pixel___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_pixel___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_pixel___024root___eval_debug_assertions(Vtb_pixel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root___eval_debug_assertions\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
