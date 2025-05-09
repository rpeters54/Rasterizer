// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__clk__0 
        = vlSelfRef.tb_all__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__rdy_in__0 
        = vlSelfRef.tb_all__DOT__rdy_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_all__DOT__vld_out__0 
        = vlSelfRef.tb_all__DOT__vld_out;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_all__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb.all.sv", 
                                             29);
        vlSelfRef.tb_all__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_all__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__0__tv0;
    __Vtask_tb_all__DOT__run_triangle_test__0__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__0__tv1;
    __Vtask_tb_all__DOT__run_triangle_test__0__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__0__tv2;
    __Vtask_tb_all__DOT__run_triangle_test__0__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_all__DOT__run_triangle_test__0__tmeta;
    __Vtask_tb_all__DOT__run_triangle_test__0__tmeta = 0;
    IData/*18:0*/ __Vfunc_tb_all__DOT__make_meta__1__Vfuncout;
    __Vfunc_tb_all__DOT__make_meta__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_all__DOT__make_meta__1__colors_in;
    __Vfunc_tb_all__DOT__make_meta__1__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_all__DOT__make_meta__1__tile_x_in;
    __Vfunc_tb_all__DOT__make_meta__1__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_all__DOT__make_meta__1__tile_y_in;
    __Vfunc_tb_all__DOT__make_meta__1__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__2__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__2__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__2__x_in;
    __Vfunc_tb_all__DOT__make_coord__2__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__2__y_in;
    __Vfunc_tb_all__DOT__make_coord__2__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__2__z_in;
    __Vfunc_tb_all__DOT__make_coord__2__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__3__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__3__x_in;
    __Vfunc_tb_all__DOT__make_coord__3__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__3__y_in;
    __Vfunc_tb_all__DOT__make_coord__3__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__3__z_in;
    __Vfunc_tb_all__DOT__make_coord__3__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__4__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__4__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__4__x_in;
    __Vfunc_tb_all__DOT__make_coord__4__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__4__y_in;
    __Vfunc_tb_all__DOT__make_coord__4__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__4__z_in;
    __Vfunc_tb_all__DOT__make_coord__4__z_in = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__5__tv0;
    __Vtask_tb_all__DOT__run_triangle_test__5__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__5__tv1;
    __Vtask_tb_all__DOT__run_triangle_test__5__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__5__tv2;
    __Vtask_tb_all__DOT__run_triangle_test__5__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_all__DOT__run_triangle_test__5__tmeta;
    __Vtask_tb_all__DOT__run_triangle_test__5__tmeta = 0;
    IData/*18:0*/ __Vfunc_tb_all__DOT__make_meta__6__Vfuncout;
    __Vfunc_tb_all__DOT__make_meta__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_all__DOT__make_meta__6__colors_in;
    __Vfunc_tb_all__DOT__make_meta__6__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_all__DOT__make_meta__6__tile_x_in;
    __Vfunc_tb_all__DOT__make_meta__6__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_all__DOT__make_meta__6__tile_y_in;
    __Vfunc_tb_all__DOT__make_meta__6__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__7__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__7__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__7__x_in;
    __Vfunc_tb_all__DOT__make_coord__7__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__7__y_in;
    __Vfunc_tb_all__DOT__make_coord__7__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__7__z_in;
    __Vfunc_tb_all__DOT__make_coord__7__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__8__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__8__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__8__x_in;
    __Vfunc_tb_all__DOT__make_coord__8__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__8__y_in;
    __Vfunc_tb_all__DOT__make_coord__8__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__8__z_in;
    __Vfunc_tb_all__DOT__make_coord__8__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__9__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__9__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__9__x_in;
    __Vfunc_tb_all__DOT__make_coord__9__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__9__y_in;
    __Vfunc_tb_all__DOT__make_coord__9__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__9__z_in;
    __Vfunc_tb_all__DOT__make_coord__9__z_in = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__10__tv0;
    __Vtask_tb_all__DOT__run_triangle_test__10__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__10__tv1;
    __Vtask_tb_all__DOT__run_triangle_test__10__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__10__tv2;
    __Vtask_tb_all__DOT__run_triangle_test__10__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_all__DOT__run_triangle_test__10__tmeta;
    __Vtask_tb_all__DOT__run_triangle_test__10__tmeta = 0;
    IData/*18:0*/ __Vfunc_tb_all__DOT__make_meta__11__Vfuncout;
    __Vfunc_tb_all__DOT__make_meta__11__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_all__DOT__make_meta__11__colors_in;
    __Vfunc_tb_all__DOT__make_meta__11__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_all__DOT__make_meta__11__tile_x_in;
    __Vfunc_tb_all__DOT__make_meta__11__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_all__DOT__make_meta__11__tile_y_in;
    __Vfunc_tb_all__DOT__make_meta__11__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__12__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__12__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__12__x_in;
    __Vfunc_tb_all__DOT__make_coord__12__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__12__y_in;
    __Vfunc_tb_all__DOT__make_coord__12__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__12__z_in;
    __Vfunc_tb_all__DOT__make_coord__12__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__13__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__13__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__13__x_in;
    __Vfunc_tb_all__DOT__make_coord__13__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__13__y_in;
    __Vfunc_tb_all__DOT__make_coord__13__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__13__z_in;
    __Vfunc_tb_all__DOT__make_coord__13__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__14__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__14__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__14__x_in;
    __Vfunc_tb_all__DOT__make_coord__14__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__14__y_in;
    __Vfunc_tb_all__DOT__make_coord__14__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__14__z_in;
    __Vfunc_tb_all__DOT__make_coord__14__z_in = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__15__tv0;
    __Vtask_tb_all__DOT__run_triangle_test__15__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__15__tv1;
    __Vtask_tb_all__DOT__run_triangle_test__15__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_all__DOT__run_triangle_test__15__tv2;
    __Vtask_tb_all__DOT__run_triangle_test__15__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_all__DOT__run_triangle_test__15__tmeta;
    __Vtask_tb_all__DOT__run_triangle_test__15__tmeta = 0;
    IData/*18:0*/ __Vfunc_tb_all__DOT__make_meta__16__Vfuncout;
    __Vfunc_tb_all__DOT__make_meta__16__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_all__DOT__make_meta__16__colors_in;
    __Vfunc_tb_all__DOT__make_meta__16__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_all__DOT__make_meta__16__tile_x_in;
    __Vfunc_tb_all__DOT__make_meta__16__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_all__DOT__make_meta__16__tile_y_in;
    __Vfunc_tb_all__DOT__make_meta__16__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__17__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__17__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__17__x_in;
    __Vfunc_tb_all__DOT__make_coord__17__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__17__y_in;
    __Vfunc_tb_all__DOT__make_coord__17__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__17__z_in;
    __Vfunc_tb_all__DOT__make_coord__17__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__18__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__18__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__18__x_in;
    __Vfunc_tb_all__DOT__make_coord__18__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__18__y_in;
    __Vfunc_tb_all__DOT__make_coord__18__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__18__z_in;
    __Vfunc_tb_all__DOT__make_coord__18__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__make_coord__19__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__19__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__19__x_in;
    __Vfunc_tb_all__DOT__make_coord__19__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__19__y_in;
    __Vfunc_tb_all__DOT__make_coord__19__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__make_coord__19__z_in;
    __Vfunc_tb_all__DOT__make_coord__19__z_in = 0;
    // Body
    vlSelfRef.tb_all__DOT__rst_n = 0U;
    vlSelfRef.tb_all__DOT__rdy_out = 0U;
    vlSelfRef.tb_all__DOT__vld_in = 0U;
    vlSelfRef.tb_all__DOT__v0 = 0ULL;
    vlSelfRef.tb_all__DOT__v1 = 0ULL;
    vlSelfRef.tb_all__DOT__v2 = 0ULL;
    vlSelfRef.tb_all__DOT__metadata = 0U;
    co_await vlSelfRef.__VtrigSched_h5cfcfd92__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         59);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5cfcfd92__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         59);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__rst_n = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_all__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h5b99ffb8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_all.rdy_in)", 
                                                             "tb.all.sv", 
                                                             63);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vfunc_tb_all__DOT__make_meta__1__tile_y_in = 0U;
    __Vfunc_tb_all__DOT__make_meta__1__tile_x_in = 0U;
    __Vfunc_tb_all__DOT__make_meta__1__colors_in = 1U;
    vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta 
        = (((IData)(__Vfunc_tb_all__DOT__make_meta__1__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_all__DOT__make_meta__1__tile_x_in) 
                         << 5U) | (IData)(__Vfunc_tb_all__DOT__make_meta__1__tile_y_in)));
    __Vfunc_tb_all__DOT__make_meta__1__Vfuncout = vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta;
    __Vtask_tb_all__DOT__run_triangle_test__0__tmeta 
        = __Vfunc_tb_all__DOT__make_meta__1__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__2__z_in = 0x200U;
    __Vfunc_tb_all__DOT__make_coord__2__y_in = 0xfU;
    __Vfunc_tb_all__DOT__make_coord__2__x_in = 0xcU;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__2__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__2__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__2__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__2__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__0__tv2 
        = __Vfunc_tb_all__DOT__make_coord__2__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__3__z_in = 0x200U;
    __Vfunc_tb_all__DOT__make_coord__3__y_in = 2U;
    __Vfunc_tb_all__DOT__make_coord__3__x_in = 7U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__3__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__3__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__3__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__3__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__0__tv1 
        = __Vfunc_tb_all__DOT__make_coord__3__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__4__z_in = 0x200U;
    __Vfunc_tb_all__DOT__make_coord__4__y_in = 0xeU;
    __Vfunc_tb_all__DOT__make_coord__4__x_in = 1U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__4__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__4__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__4__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__4__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__0__tv0 
        = __Vfunc_tb_all__DOT__make_coord__4__Vfuncout;
    while ((1U & (~ (IData)(vlSelfRef.tb_all__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h5b99ffb8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_all.rdy_in)", 
                                                             "tb.all.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_all__DOT__v0 = __Vtask_tb_all__DOT__run_triangle_test__0__tv0;
    vlSelfRef.tb_all__DOT__v1 = __Vtask_tb_all__DOT__run_triangle_test__0__tv1;
    vlSelfRef.tb_all__DOT__v2 = __Vtask_tb_all__DOT__run_triangle_test__0__tv2;
    vlSelfRef.tb_all__DOT__metadata = __Vtask_tb_all__DOT__run_triangle_test__0__tmeta;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         126);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_all__DOT__make_meta__6__tile_y_in = 0U;
    __Vfunc_tb_all__DOT__make_meta__6__tile_x_in = 0U;
    __Vfunc_tb_all__DOT__make_meta__6__colors_in = 2U;
    vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta 
        = (((IData)(__Vfunc_tb_all__DOT__make_meta__6__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_all__DOT__make_meta__6__tile_x_in) 
                         << 5U) | (IData)(__Vfunc_tb_all__DOT__make_meta__6__tile_y_in)));
    __Vfunc_tb_all__DOT__make_meta__6__Vfuncout = vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta;
    __Vtask_tb_all__DOT__run_triangle_test__5__tmeta 
        = __Vfunc_tb_all__DOT__make_meta__6__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__7__z_in = 0x100U;
    __Vfunc_tb_all__DOT__make_coord__7__y_in = 2U;
    __Vfunc_tb_all__DOT__make_coord__7__x_in = 1U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__7__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__7__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__7__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__7__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__5__tv2 
        = __Vfunc_tb_all__DOT__make_coord__7__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__8__z_in = 0x400U;
    __Vfunc_tb_all__DOT__make_coord__8__y_in = 1U;
    __Vfunc_tb_all__DOT__make_coord__8__x_in = 0x14U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__8__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__8__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__8__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__8__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__5__tv1 
        = __Vfunc_tb_all__DOT__make_coord__8__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__9__z_in = 0x100U;
    __Vfunc_tb_all__DOT__make_coord__9__y_in = 1U;
    __Vfunc_tb_all__DOT__make_coord__9__x_in = 1U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__9__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__9__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__9__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__9__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__5__tv0 
        = __Vfunc_tb_all__DOT__make_coord__9__Vfuncout;
    while ((1U & (~ (IData)(vlSelfRef.tb_all__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h5b99ffb8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_all.rdy_in)", 
                                                             "tb.all.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_all__DOT__v0 = __Vtask_tb_all__DOT__run_triangle_test__5__tv0;
    vlSelfRef.tb_all__DOT__v1 = __Vtask_tb_all__DOT__run_triangle_test__5__tv1;
    vlSelfRef.tb_all__DOT__v2 = __Vtask_tb_all__DOT__run_triangle_test__5__tv2;
    vlSelfRef.tb_all__DOT__metadata = __Vtask_tb_all__DOT__run_triangle_test__5__tmeta;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         126);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_all__DOT__make_meta__11__tile_y_in = 0U;
    __Vfunc_tb_all__DOT__make_meta__11__tile_x_in = 0U;
    __Vfunc_tb_all__DOT__make_meta__11__colors_in = 3U;
    vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta 
        = (((IData)(__Vfunc_tb_all__DOT__make_meta__11__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_all__DOT__make_meta__11__tile_x_in) 
                         << 5U) | (IData)(__Vfunc_tb_all__DOT__make_meta__11__tile_y_in)));
    __Vfunc_tb_all__DOT__make_meta__11__Vfuncout = vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta;
    __Vtask_tb_all__DOT__run_triangle_test__10__tmeta 
        = __Vfunc_tb_all__DOT__make_meta__11__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__12__z_in = 0x400U;
    __Vfunc_tb_all__DOT__make_coord__12__y_in = 0x14U;
    __Vfunc_tb_all__DOT__make_coord__12__x_in = 1U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__12__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__12__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__12__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__12__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__10__tv2 
        = __Vfunc_tb_all__DOT__make_coord__12__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__13__z_in = 0x100U;
    __Vfunc_tb_all__DOT__make_coord__13__y_in = 1U;
    __Vfunc_tb_all__DOT__make_coord__13__x_in = 2U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__13__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__13__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__13__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__13__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__10__tv1 
        = __Vfunc_tb_all__DOT__make_coord__13__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__14__z_in = 0x100U;
    __Vfunc_tb_all__DOT__make_coord__14__y_in = 1U;
    __Vfunc_tb_all__DOT__make_coord__14__x_in = 1U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__14__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__14__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__14__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__14__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__10__tv0 
        = __Vfunc_tb_all__DOT__make_coord__14__Vfuncout;
    while ((1U & (~ (IData)(vlSelfRef.tb_all__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h5b99ffb8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_all.rdy_in)", 
                                                             "tb.all.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_all__DOT__v0 = __Vtask_tb_all__DOT__run_triangle_test__10__tv0;
    vlSelfRef.tb_all__DOT__v1 = __Vtask_tb_all__DOT__run_triangle_test__10__tv1;
    vlSelfRef.tb_all__DOT__v2 = __Vtask_tb_all__DOT__run_triangle_test__10__tv2;
    vlSelfRef.tb_all__DOT__metadata = __Vtask_tb_all__DOT__run_triangle_test__10__tmeta;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         126);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_all__DOT__make_meta__16__tile_y_in = 0U;
    __Vfunc_tb_all__DOT__make_meta__16__tile_x_in = 2U;
    __Vfunc_tb_all__DOT__make_meta__16__colors_in = 4U;
    vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta 
        = (((IData)(__Vfunc_tb_all__DOT__make_meta__16__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_all__DOT__make_meta__16__tile_x_in) 
                         << 5U) | (IData)(__Vfunc_tb_all__DOT__make_meta__16__tile_y_in)));
    __Vfunc_tb_all__DOT__make_meta__16__Vfuncout = vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta;
    __Vtask_tb_all__DOT__run_triangle_test__15__tmeta 
        = __Vfunc_tb_all__DOT__make_meta__16__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__17__z_in = 0x400U;
    __Vfunc_tb_all__DOT__make_coord__17__y_in = 0x14U;
    __Vfunc_tb_all__DOT__make_coord__17__x_in = 1U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__17__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__17__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__17__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__17__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__15__tv2 
        = __Vfunc_tb_all__DOT__make_coord__17__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__18__z_in = 0x100U;
    __Vfunc_tb_all__DOT__make_coord__18__y_in = 1U;
    __Vfunc_tb_all__DOT__make_coord__18__x_in = 2U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__18__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__18__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__18__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__18__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__15__tv1 
        = __Vfunc_tb_all__DOT__make_coord__18__Vfuncout;
    __Vfunc_tb_all__DOT__make_coord__19__z_in = 0x100U;
    __Vfunc_tb_all__DOT__make_coord__19__y_in = 1U;
    __Vfunc_tb_all__DOT__make_coord__19__x_in = 1U;
    vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__19__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__19__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_all__DOT__make_coord__19__z_in), 4U)))));
    __Vfunc_tb_all__DOT__make_coord__19__Vfuncout = vlSelfRef.tb_all__DOT__make_coord__Vstatic__point;
    __Vtask_tb_all__DOT__run_triangle_test__15__tv0 
        = __Vfunc_tb_all__DOT__make_coord__19__Vfuncout;
    while ((1U & (~ (IData)(vlSelfRef.tb_all__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h5b99ffb8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_all.rdy_in)", 
                                                             "tb.all.sv", 
                                                             113);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_all__DOT__v0 = __Vtask_tb_all__DOT__run_triangle_test__15__tv0;
    vlSelfRef.tb_all__DOT__v1 = __Vtask_tb_all__DOT__run_triangle_test__15__tv1;
    vlSelfRef.tb_all__DOT__v2 = __Vtask_tb_all__DOT__run_triangle_test__15__tv2;
    vlSelfRef.tb_all__DOT__metadata = __Vtask_tb_all__DOT__run_triangle_test__15__tmeta;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_h5cfcfe53__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.clk)", 
                                                         "tb.all.sv", 
                                                         126);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_all__DOT__rdy_out = 1U;
    co_await vlSelfRef.__VtrigSched_hcca24acd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_all.vld_out)", 
                                                         "tb.all.sv", 
                                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb.all.sv", 101, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1dULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__Vfuncout = 0;
    IData/*18:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in = 0;
    // Body
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__next_state 
        = ((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
            ? (((IData)(vlSelfRef.tb_all__DOT__vld_in) 
                & (IData)(vlSelfRef.tb_all__DOT__rdy_in))
                ? 1U : 0U) : ((1U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                               ? 2U : ((2U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                        ? 3U : ((3U 
                                                 == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                 ? 4U
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                  ? 5U
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                   ? 
                                                  ((4U 
                                                    > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))
                                                    ? 0U
                                                    : 5U)
                                                   : 0U))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in 
        = vlSelfRef.tb_all__DOT__metadata;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffffffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x3f00U & (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in 
                                          << 3U)))) 
              << 0x20U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffff0000ffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x1f00U & (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in 
                                          << 8U)))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = (0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out);
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__Vfuncout;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v[0U] 
        = vlSelfRef.tb_all__DOT__v1;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v[1U] 
        = vlSelfRef.tb_all__DOT__v2;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v[2U] 
        = vlSelfRef.tb_all__DOT__v0;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v[0U] 
        = vlSelfRef.tb_all__DOT__v0;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v[1U] 
        = vlSelfRef.tb_all__DOT__v1;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v[2U] 
        = vlSelfRef.tb_all__DOT__v2;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
        [0U];
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
        [0U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a) 
                                         - (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[0U] 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
        [1U];
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
        [1U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a) 
                                         - (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[1U] 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
        [2U];
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
        [2U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a) 
                                         - (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[2U] 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__Vfuncout;
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x1dULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_0;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_0 = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_2;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_2 = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_0;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_0 = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_2;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_2 = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_0;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_0 = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_2;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_2 = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__dz_undiv;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__dz_undiv = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__c;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__c = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__dz_undiv;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__dz_undiv = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__c;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__c = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__v_0;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__v_0 = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__abs_pos;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__abs_pos = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__dzdx;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__dzdx = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__dzdy;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__dzdy = 0;
    CData/*2:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__31__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__31__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__31__ptr;
    __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__31__ptr = 0;
    CData/*2:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__32__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__32__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__32__ptr;
    __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__32__ptr = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__33__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__33__Vfuncout = 0;
    IData/*18:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__33__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__33__in = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__34__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__34__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__34__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__34__in = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__35__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__35__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__35__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__35__in = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__39__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__39__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__39__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__39__in = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__delta_i;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__delta_i = 0;
    IData/*31:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in = 0;
    IData/*18:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata = 0;
    QData/*47:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos = 0;
    IData/*31:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A = 0;
    IData/*31:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B = 0;
    IData/*31:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C = 0;
    SData/*15:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx = 0;
    SData/*15:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy = 0;
    IData/*31:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current = 0;
    VlWide<12>/*370:0*/ __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out;
    VL_ZERO_W(371, __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out);
    CData/*3:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__axel_f__DOT__count;
    __Vdly__tb_all__DOT__rastafarian__DOT__axel_f__DOT__count = 0;
    QData/*47:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos = 0;
    CData/*7:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos = 0;
    CData/*7:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos = 0;
    SData/*15:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx = 0;
    SData/*15:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy = 0;
    IData/*31:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current = 0;
    IData/*18:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata = 0;
    QData/*47:0*/ __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos = 0;
    QData/*47:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v0;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v0;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v0 = 0;
    QData/*47:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v1;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v1;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v1 = 0;
    QData/*47:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v2;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v2;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v0;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v0;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v1;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v1;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v2;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v2;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v3;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v4;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v4 = 0;
    VlWide<12>/*370:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0;
    VL_ZERO_W(371, __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0);
    CData/*1:0*/ __VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0;
    __VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0;
    __VdlySet__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0 = 0;
    QData/*47:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v0;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v0;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v0;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v0 = 0;
    QData/*47:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v1;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v1;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v1;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v1 = 0;
    QData/*47:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v2;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v2;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v2;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v0;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v0;
    __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v0;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v0;
    __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v3;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v3;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v4;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v4;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v4 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v5;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v5;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v5 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v6;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v6;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v7;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v7;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v7 = 0;
    IData/*31:0*/ __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v8;
    __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v8;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v8 = 0;
    CData/*7:0*/ __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v1;
    __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v1;
    __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v3;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v2;
    __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v2;
    __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v4;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v4 = 0;
    // Body
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v3 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v4 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v5 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v6 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v7 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v8 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v0 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v1 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v2 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v3 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v4 = 0U;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy;
    __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v0 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v1 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v2 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v0 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v1 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v2 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v3 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v4 = 0U;
    __VdlySet__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0 = 0U;
    __Vdly__tb_all__DOT__rastafarian__DOT__axel_f__DOT__count 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count;
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU];
    __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU];
    if ((1U & (~ (IData)(vlSelfRef.tb_all__DOT__rst_n)))) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk1__DOT__i = 3U;
    }
    if (vlSelfRef.tb_all__DOT__rst_n) {
        if (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0) 
             & (4U > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count)))) {
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[0U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[0U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[1U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[1U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[2U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[2U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[3U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[3U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[4U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[4U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[5U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[5U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[6U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[6U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[7U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[7U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[8U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[8U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[9U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[9U];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[0xaU] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[0xaU];
            __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[0xbU] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[0xbU];
            __VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0 
                = (3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr));
            __VdlySet__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0 = 1U;
            __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__31__ptr 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr;
            __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__31__Vfuncout 
                = ((3U <= (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__31__ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__31__ptr))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__31__Vfuncout;
        }
        if (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0) 
             & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_0))) {
            if ((0U == (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))) {
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[0U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[1U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[2U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[3U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[4U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[5U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[6U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[7U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[8U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[9U];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[0xaU];
                __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[0xbU];
            }
        }
        if (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_1) 
             & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1))) {
            __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__32__ptr 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr;
            __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__32__Vfuncout 
                = ((3U <= (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__32__ptr))
                    ? 0U : (7U & ((IData)(1U) + (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__32__ptr))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_ptr_index__32__Vfuncout;
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][0U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][1U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][2U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][3U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][4U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][5U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][6U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][7U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][8U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][9U];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][0xaU];
            __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
                [(3U & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr))][0xbU];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr;
        }
        if (((((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0) 
               & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_0)) 
              & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_1)) 
             & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1))) {
            __Vdly__tb_all__DOT__rastafarian__DOT__axel_f__DOT__count 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count;
        } else if (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0) 
                    & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_0))) {
            __Vdly__tb_all__DOT__rastafarian__DOT__axel_f__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count)));
        } else if (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_1) 
                    & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1))) {
            __Vdly__tb_all__DOT__rastafarian__DOT__axel_f__DOT__count 
                = (0xfU & ((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count) 
                           - (IData)(1U)));
        }
    } else {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__axel_f__DOT__count = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][0U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][1U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][2U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][3U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][4U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][5U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][6U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][7U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][8U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][9U];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][0xaU];
        __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer
            [0U][0xbU];
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][0U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[0U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][1U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[1U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][2U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[2U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][3U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[3U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][4U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[4U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][5U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[5U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][6U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[6U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][7U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[7U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][8U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[8U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][9U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[9U];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][0xaU] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[0xaU];
        vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__VdlyDim0__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0][0xbU] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer__v0[0xbU];
    }
    if (vlSelfRef.tb_all__DOT__rst_n) {
        if ((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)) {
            vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1 = 0U;
            vlSelfRef.tb_all__DOT__vld_out = 0U;
            if ((0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))) {
                __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__33__in 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata;
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                    = (0xffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU])) 
                                               >> 3U)));
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                    = ((0xffffffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out) 
                       | ((QData)((IData)((0x3f00U 
                                           & (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__33__in 
                                              << 3U)))) 
                          << 0x20U));
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos = 0U;
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos = 0U;
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v0 
                    = (0xffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU])) 
                                             << 0x2dU) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U])) 
                                                  >> 0x13U))));
                __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v0 = 1U;
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v0 
                    = ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                        << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                                    >> 0x13U));
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx 
                    = (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
                       >> 0x10U);
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy 
                    = (0xffffU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U]);
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U];
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                    = ((0xffff0000ffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out) 
                       | ((QData)((IData)((0x1f00U 
                                           & (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__33__in 
                                              << 8U)))) 
                          << 0x10U));
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v1 
                    = (0xffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U])) 
                                               >> 3U)));
                __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v1 = 1U;
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v1 
                    = ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                        << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                                    >> 0x13U));
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                    = (0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out);
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v2 
                    = (0xffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U])) 
                                             << 0x2dU) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U])) 
                                                  >> 0x13U))));
                __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v2 = 1U;
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v2 
                    = ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                        << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                    >> 0x13U));
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                    = (0x7ffffU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U]);
                __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__33__Vfuncout 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out;
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                    = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__33__Vfuncout;
            }
        } else if ((2U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)) {
            vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1 = 0U;
            vlSelfRef.tb_all__DOT__vld_out = 0U;
            if ((((VL_LTS_III(32, 0U, vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges
                              [0U]) & VL_LTS_III(32, 0U, 
                                                 vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges
                                                 [1U])) 
                  & VL_LTS_III(32, 0U, vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges
                               [2U])) & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current 
                                         < vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer
                                         [vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos]))) {
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v0 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current;
                __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v0 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos;
                vlSelfRef.__VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer.enqueue(__VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v0, (IData)(__VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v0));
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v0 
                    = (0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                >> 0xbU));
                __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v0 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos;
                vlSelfRef.__VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer.enqueue(__VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v0, (IData)(__VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v0));
            }
            if ((0xfU == (0xfU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos)))) {
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current 
                    = ((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current 
                        + ([&]() {
                                __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__34__in 
                                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy;
                                __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__34__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__34__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__34__in) 
                                        << 4U));
                            }(), __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__34__Vfuncout)) 
                       - VL_SHIFTL_III(32,32,32, ([&]() {
                                __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__35__in 
                                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx;
                                __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__35__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__35__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__35__in) 
                                        << 4U));
                            }(), __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__35__Vfuncout), 4U));
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk3__DOT__i = 3U;
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                    = ((0xffffffffULL & __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos) 
                       | ((QData)((IData)((0xffffU 
                                           & (VL_EXTENDS_II(16,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                                        >> 0x20U)))) 
                                              - (IData)(0xf0U))))) 
                          << 0x20U));
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0 
                    = (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges
                       [0U] - ([&]() {
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                [0U];
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in) 
                                                 << 4U));
                            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy 
                                = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__Vfuncout;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i 
                                                      >> 0x20U)));
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in) 
                                                 << 4U));
                            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx 
                                = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__Vfuncout;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__Vfuncout 
                                = (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy, 4U) 
                                   + vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx);
                        }(), __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__Vfuncout));
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                    = ((0xffff0000ffffULL & __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos) 
                       | ((QData)((IData)((0xffffU 
                                           & ((IData)(0x10U) 
                                              + VL_EXTENDS_II(16,16, 
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                                          >> 0x10U)))))))) 
                          << 0x10U));
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v3 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0;
                __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v3 = 1U;
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0 
                    = (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges
                       [1U] - ([&]() {
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                [1U];
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in) 
                                                 << 4U));
                            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy 
                                = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__Vfuncout;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i 
                                                      >> 0x20U)));
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in) 
                                                 << 4U));
                            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx 
                                = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__Vfuncout;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__Vfuncout 
                                = (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy, 4U) 
                                   + vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx);
                        }(), __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__Vfuncout));
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v4 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0;
                __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v4 = 1U;
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0 
                    = (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges
                       [2U] - ([&]() {
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                [2U];
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__in) 
                                                 << 4U));
                            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy 
                                = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__37__Vfuncout;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__delta_i 
                                                      >> 0x20U)));
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__in) 
                                                 << 4U));
                            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx 
                                = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__38__Vfuncout;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__Vfuncout 
                                = (VL_SHIFTL_III(32,32,32, vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy, 4U) 
                                   + vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx);
                        }(), __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__36__Vfuncout));
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v5 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0;
                __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v5 = 1U;
            } else {
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                    = ((0xffffffffULL & __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos) 
                       | ((QData)((IData)((0xffffU 
                                           & ((IData)(0x10U) 
                                              + VL_EXTENDS_II(16,16, 
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                                          >> 0x20U)))))))) 
                          << 0x20U));
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current 
                    = (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current 
                       + ([&]() {
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__39__in 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__39__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__39__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__39__in) 
                                                 << 4U));
                        }(), __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__39__Vfuncout));
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk4__DOT__i = 3U;
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0 
                    = (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges
                       [0U] + ([&]() {
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__delta_i 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                [0U];
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in) 
                                                 << 4U));
                            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy 
                                = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__Vfuncout;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__Vfuncout 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy;
                        }(), __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__Vfuncout));
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v6 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0;
                __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v6 = 1U;
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0 
                    = (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges
                       [1U] + ([&]() {
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__delta_i 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                [1U];
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in) 
                                                 << 4U));
                            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy 
                                = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__Vfuncout;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__Vfuncout 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy;
                        }(), __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__Vfuncout));
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v7 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0;
                __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v7 = 1U;
                vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0 
                    = (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges
                       [2U] + ([&]() {
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__delta_i 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                [2U];
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in 
                                = (0xffffU & (IData)(
                                                     (__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__delta_i 
                                                      >> 0x10U)));
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__Vfuncout 
                                = (((- (IData)((1U 
                                                & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in) 
                                                   >> 0xfU)))) 
                                    << 0x14U) | ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__in) 
                                                 << 4U));
                            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy 
                                = __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__sext_f16_f32__41__Vfuncout;
                            __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__Vfuncout 
                                = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy;
                        }(), __Vfunc_tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__40__Vfuncout));
                __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v8 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h19821f78__0;
                __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v8 = 1U;
            }
            __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos)));
            if ((0xffU <= (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos))) {
                vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1 = 1U;
            }
        } else if ((1U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)) {
            vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1 = 0U;
            if (vlSelfRef.tb_all__DOT__rdy_out) {
                vlSelfRef.tb_all__DOT__vld_out = 1U;
                vlSelfRef.tb_all__DOT__color_out = 
                    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer
                    [vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos];
                vlSelfRef.tb_all__DOT__pixel_out = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__out_coord;
                __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v1 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos;
                vlSelfRef.__VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer.enqueue(0xffffffffU, (IData)(__VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v1));
                __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v1 
                    = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos;
                vlSelfRef.__VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer.enqueue(0U, (IData)(__VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v1));
                if ((0xfU == (0xfU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos)))) {
                    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                        = ((0xffffffffULL & __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos) 
                           | ((QData)((IData)((0xffffU 
                                               & (VL_EXTENDS_II(16,16, 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                                            >> 0x20U)))) 
                                                  - (IData)(0xf0U))))) 
                              << 0x20U));
                    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                        = ((0xffff0000ffffULL & __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos) 
                           | ((QData)((IData)((0xffffU 
                                               & ((IData)(0x10U) 
                                                  + 
                                                  VL_EXTENDS_II(16,16, 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                                            >> 0x10U)))))))) 
                              << 0x10U));
                } else {
                    __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                        = ((0xffffffffULL & __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos) 
                           | ((QData)((IData)((0xffffU 
                                               & ((IData)(0x10U) 
                                                  + 
                                                  VL_EXTENDS_II(16,16, 
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                                            >> 0x20U)))))))) 
                              << 0x20U));
                }
                __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos)));
                if ((0xffU <= (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos))) {
                    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1 = 1U;
                }
            } else {
                vlSelfRef.tb_all__DOT__vld_out = 0U;
            }
        }
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state 
            = vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__next_state;
    } else {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos = 0ULL;
        __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos = 0ULL;
        __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos = 0U;
        __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v3 = 1U;
        __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i)) {
            __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v2 
                = (0xffU & vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer.enqueue(0xffffffffU, (IData)(__VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer__v2));
            __VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v2 
                = (0xffU & vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer.enqueue(0U, (IData)(__VdlyDim0__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer__v2));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i);
        }
        __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1 = 1U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state = 0U;
        __VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v4 = 1U;
    }
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
        = __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx 
        = __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy 
        = __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current 
        = __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current;
    if (vlSelfRef.tb_all__DOT__rst_n) {
        if ((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)) {
            vlSelfRef.tb_all__DOT__rdy_in = ((~ (IData)(vlSelfRef.tb_all__DOT__vld_in)) 
                                             & (IData)(vlSelfRef.tb_all__DOT__rdy_in));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                [0U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk2__DOT__i = 3U;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                [0U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk3__DOT__i = 3U;
            __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
                = vlSelfRef.tb_all__DOT__metadata;
            __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start;
            __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0;
            __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v0 = 1U;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                [0U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                [1U];
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start;
            __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v1 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0;
            __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v1 = 1U;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i 
                                                             >> 0x20U))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                [2U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i 
                                                             >> 0x10U))));
            __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v2 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0;
            __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v2 = 1U;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i 
                                                        >> 0x10U)))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i 
                                                        >> 0x20U)))));
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__Vfuncout 
                = (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                   - vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult);
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__Vfuncout;
            __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0;
            __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v0 = 1U;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                [1U];
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                [1U];
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i 
                                                             >> 0x20U))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i 
                                                             >> 0x10U))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i 
                                                        >> 0x10U)))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i 
                                                        >> 0x20U)))));
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__Vfuncout 
                = (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                   - vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult);
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__Vfuncout;
            __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v1 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0;
            __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v1 = 1U;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                [2U];
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                [2U];
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i 
                                                             >> 0x20U))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub 
                = (0xffffU & ((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__start 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__v_i 
                                                             >> 0x10U))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i 
                                                        >> 0x10U)))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub)), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__delta_i 
                                                        >> 0x20U)))));
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__Vfuncout 
                = (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult 
                   - vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult);
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__24__Vfuncout;
            __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v2 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0;
            __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v2 = 1U;
        } else if ((1U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)) {
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_2 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                [2U];
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                [0U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_y0z2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_0 
                                                            >> 0x10U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_2))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_z0y2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_0))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__delta_2 
                                                        >> 0x10U)))));
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__Vfuncout 
                = (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_z0y2_mult 
                   - vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_y0z2_mult);
            __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__25__Vfuncout;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_2 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                [2U];
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                [0U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_z0x2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_0))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_2 
                                                        >> 0x20U)))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_x0z2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_0 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__delta_2))));
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__Vfuncout 
                = (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_x0z2_mult 
                   - vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_z0x2_mult);
            __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__26__Vfuncout;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_2 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                [2U];
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                [0U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_x0y2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_0 
                                                            >> 0x20U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_2 
                                                        >> 0x10U)))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_y0x2_mult 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & (IData)(
                                                           (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_0 
                                                            >> 0x10U)))), 
                              VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__delta_2 
                                                        >> 0x20U)))));
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__Vfuncout 
                = (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_y0x2_mult 
                   - vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_x0y2_mult);
            __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__27__Vfuncout;
        } else if ((2U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)) {
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__c 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__dz_undiv 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__dz_undiv, 8U), __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__c));
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__Vfuncout 
                = (0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                              >> 4U));
            __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__28__Vfuncout;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__c 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__dz_undiv 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__dz_undiv, 8U), __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__c));
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__Vfuncout 
                = (0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz 
                              >> 4U));
            __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__29__Vfuncout;
        } else if ((3U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)) {
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__dzdy 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__dzdx 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__abs_pos 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos;
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__v_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                [0U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x 
                = (0xffffU & ((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__v_0 
                                       >> 0x20U)) - (IData)(
                                                            (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__abs_pos 
                                                             >> 0x20U))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y 
                = (0xffffU & ((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__v_0 
                                       >> 0x10U)) - (IData)(
                                                            (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__abs_pos 
                                                             >> 0x10U))));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__x_component 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x)), 
                              VL_EXTENDS_II(32,16, (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__dzdx)));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__y_component 
                = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y)), 
                              VL_EXTENDS_II(32,16, (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__dzdy)));
            vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__z_component 
                = (((- (IData)((1U & (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__v_0 
                                              >> 0xfU))))) 
                    << 0x14U) | (0xffff0U & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__v_0) 
                                             << 4U)));
            __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__Vfuncout 
                = ((vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__z_component 
                    - vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__x_component) 
                   - vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__y_component);
            __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current 
                = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__30__Vfuncout;
        } else if ((4U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)) {
            vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0 = 1U;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos;
            vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                [0U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges
                [0U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdx_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdy_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy;
            vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_z_current_0 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current;
            vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                [1U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges
                [1U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                [2U];
            vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2 
                = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges
                [2U];
        } else if ((5U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)) {
            if ((4U > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))) {
                vlSelfRef.tb_all__DOT__rdy_in = 1U;
                vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0 = 0U;
            }
        }
    } else {
        vlSelfRef.tb_all__DOT__rdy_in = 1U;
        __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos = 0ULL;
        __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v3 = 1U;
        __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy = 0U;
        __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0 = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1 = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2 = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0 = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1 = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2 = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdx_0 = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdy_0 = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_z_current_0 = 0U;
        __VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v4 = 1U;
    }
    vlSelfRef.__VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer.commit(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer);
    vlSelfRef.__VdlyCommitQueuetb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer.commit(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer);
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state 
        = ((IData)(vlSelfRef.tb_all__DOT__rst_n) ? vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__next_state
            : 0U);
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
        = __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos 
        = __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos 
        = __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
        = __Vdly__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata;
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v3) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[0U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v3;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v4) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[1U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v4;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v5) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[2U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v5;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v6) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[0U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v6;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v7) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[1U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v7;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v8) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[2U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v8;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v0) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas[0U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v0;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[0U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v0;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v1) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas[1U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v1;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[1U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v1;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v2) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas[2U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v2;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[2U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges__v2;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v3) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas[0U] = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[0U] = 0U;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas__v4) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas[1U] = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[1U] = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas[2U] = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[2U] = 0U;
    }
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
        = __Vdly__tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
        = __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
        = __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A 
        = __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B 
        = __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C 
        = __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx 
        = __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy 
        = __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current 
        = __Vdly__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current;
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v0) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[0U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v0;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v1) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[1U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v1;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v2) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[2U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges__v2;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v0) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas[0U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v0;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v1) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas[1U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v1;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v2) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas[2U] 
            = __VdlyVal__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v2;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v3) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas[0U] = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[0U] = 0U;
    }
    if (__VdlySet__tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas__v4) {
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas[1U] = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[1U] = 0U;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas[2U] = 0ULL;
        vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[2U] = 0U;
    }
    vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count 
        = __Vdly__tb_all__DOT__rastafarian__DOT__axel_f__DOT__count;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__out_coord 
        = (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                   >> 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1[0U] 
        = (0xffffffffffffULL & (((QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU])) 
                                 << 0x2dU) | (((QData)((IData)(
                                                               vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U])) 
                                               << 0xdU) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U])) 
                                                 >> 0x13U))));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1[1U] 
        = (0xffffffffffffULL & (((QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U])) 
                                 << 0x1dU) | ((QData)((IData)(
                                                              vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U])) 
                                              >> 3U)));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1[2U] 
        = (0xffffffffffffULL & (((QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U])) 
                                 << 0x2dU) | (((QData)((IData)(
                                                               vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U])) 
                                               << 0xdU) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U])) 
                                                 >> 0x13U))));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_1[0U] 
        = ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
            << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                        >> 0x13U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_1[1U] 
        = ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
            << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                        >> 0x13U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_1[2U] 
        = ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
            << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                        >> 0x13U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0[0U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[0U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0[1U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[1U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0[2U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[2U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2;
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdx_0) 
                                      << 0x10U) | (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdy_0)))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_z_current_0))));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdx_0) 
                                       << 0x10U) | (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdy_0)))) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_z_current_0))) 
                   >> 0x20U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[2U] 
        = ((0xfff80000U & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[2U]) 
           | vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0);
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[2U] 
        = ((0x7ffffU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[2U]) 
           | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2 
              << 0x13U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[3U] 
        = ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2 
            >> 0xdU) | ((IData)((((QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1)))) 
                        << 0x13U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[4U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0)) 
                      << 0x20U) | (QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1)))) 
            >> 0xdU) | ((IData)(((((QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1))) 
                                 >> 0x20U)) << 0x13U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[5U] 
        = (((IData)(((((QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0)) 
                       << 0x20U) | (QData)((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1))) 
                     >> 0x20U)) >> 0xdU) | ((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2) 
                                            << 0x13U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[6U] 
        = (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2) 
            >> 0xdU) | ((IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2 
                                 >> 0x20U)) << 0x13U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[7U] 
        = ((0xfffffff8U & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[7U]) 
           | ((IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2 
                       >> 0x20U)) >> 0xdU));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[7U] 
        = ((7U & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[7U]) 
           | ((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1) 
              << 3U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[8U] 
        = (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1) 
            >> 0x1dU) | (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0) 
                          << 0x13U) | ((IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1 
                                                >> 0x20U)) 
                                       << 3U)));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[9U] 
        = (((7U & ((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0) 
                   >> 0xdU)) | ((IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1 
                                         >> 0x20U)) 
                                >> 0x1dU)) | ((0x7fff8U 
                                               & ((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0) 
                                                  >> 0xdU)) 
                                              | ((IData)(
                                                         (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 
                                                          >> 0x20U)) 
                                                 << 0x13U)));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[0xaU] 
        = ((7U & ((IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 
                           >> 0x20U)) >> 0xdU)) | (
                                                   (0x7fff8U 
                                                    & (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0) 
                                                        << 3U) 
                                                       | ((IData)(
                                                                  (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 
                                                                   >> 0x20U)) 
                                                          >> 0xdU))) 
                                                   | (0xfff80000U 
                                                      & ((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0) 
                                                         << 3U))));
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in[0xbU] 
        = (0x7ffffU & (((IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0) 
                        >> 0x1dU) | (0x7fff8U & ((IData)(
                                                         (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                                                          >> 0x20U)) 
                                                 << 3U))));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_1 
        = (0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_0 
        = (4U > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__next_state 
        = ((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)
            ? ((0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))
                ? ((((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                << 6U)) | (0x3fU & 
                                           (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                            >> 5U))) 
                    >= ((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                   << 6U)) | (0x3fU 
                                              & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                                 >> 5U))))
                    ? 2U : 1U) : 0U) : ((1U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)
                                         ? ((0xffU 
                                             > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos))
                                             ? 1U : 2U)
                                         : ((2U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)
                                             ? ((0xffU 
                                                 > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos))
                                                 ? 2U
                                                 : 0U)
                                             : 0U)));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__Vfuncout = 0;
    IData/*18:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in = 0;
    // Body
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v[0U] 
        = vlSelfRef.tb_all__DOT__v1;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v[1U] 
        = vlSelfRef.tb_all__DOT__v2;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v[2U] 
        = vlSelfRef.tb_all__DOT__v0;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in 
        = vlSelfRef.tb_all__DOT__metadata;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffffffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x3f00U & (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in 
                                          << 3U)))) 
              << 0x20U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffff0000ffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x1f00U & (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__in 
                                          << 8U)))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = (0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out);
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__23__Vfuncout;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v[0U] 
        = vlSelfRef.tb_all__DOT__v0;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v[1U] 
        = vlSelfRef.tb_all__DOT__v1;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v[2U] 
        = vlSelfRef.tb_all__DOT__v2;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__next_state 
        = ((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
            ? (((IData)(vlSelfRef.tb_all__DOT__vld_in) 
                & (IData)(vlSelfRef.tb_all__DOT__rdy_in))
                ? 1U : 0U) : ((1U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                               ? 2U : ((2U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                        ? 3U : ((3U 
                                                 == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                 ? 4U
                                                 : 
                                                ((4U 
                                                  == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                  ? 5U
                                                  : 
                                                 ((5U 
                                                   == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                   ? 
                                                  ((4U 
                                                    > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))
                                                    ? 0U
                                                    : 5U)
                                                   : 0U))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
        [0U];
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
        [0U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__a) 
                                         - (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__b))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[0U] 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__20__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
        [1U];
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
        [1U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__a) 
                                         - (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__b))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[1U] 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__21__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
        [2U];
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
        [2U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__a) 
                                         - (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__b))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[2U] 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__22__Vfuncout;
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5cfcfd92__0.resume(
                                                   "@(posedge tb_all.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5b99ffb8__0.resume(
                                                   "@( tb_all.rdy_in)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5cfcfe53__0.resume(
                                                   "@(negedge tb_all.clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hcca24acd__0.resume(
                                                   "@(negedge tb_all.vld_out)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5cfcfd92__0.commit(
                                                   "@(posedge tb_all.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5b99ffb8__0.commit(
                                                   "@( tb_all.rdy_in)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5cfcfe53__0.commit(
                                                   "@(negedge tb_all.clk)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hcca24acd__0.commit(
                                                   "@(negedge tb_all.vld_out)");
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb.all.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb.all.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
