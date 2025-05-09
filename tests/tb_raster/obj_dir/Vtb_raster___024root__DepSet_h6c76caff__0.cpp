// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_raster.h for the primary calling header

#include "Vtb_raster__pch.h"
#include "Vtb_raster__Syms.h"
#include "Vtb_raster___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_raster___024root___eval_initial__TOP__Vtiming__0(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ tb_raster__DOT____Vlvbound_h6671a27d__0;
    tb_raster__DOT____Vlvbound_h6671a27d__0 = 0;
    SData/*15:0*/ tb_raster__DOT____Vlvbound_h666bdeda__0;
    tb_raster__DOT____Vlvbound_h666bdeda__0 = 0;
    SData/*15:0*/ tb_raster__DOT____Vlvbound_h6667b2ab__0;
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = 0;
    IData/*31:0*/ tb_raster__DOT____Vlvbound_h29c82707__0;
    tb_raster__DOT____Vlvbound_h29c82707__0 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__0__tv0;
    __Vtask_tb_raster__DOT__run_triangle_test__0__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__0__tv1;
    __Vtask_tb_raster__DOT__run_triangle_test__0__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__0__tv2;
    __Vtask_tb_raster__DOT__run_triangle_test__0__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_raster__DOT__run_triangle_test__0__tmeta;
    __Vtask_tb_raster__DOT__run_triangle_test__0__tmeta = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__0__exp_abs_pos;
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_raster__DOT__run_triangle_test__0__exp_metadata;
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdx;
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdy;
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__run_triangle_test__0__exp_z_current;
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_z_current = 0;
    IData/*18:0*/ __Vfunc_tb_raster__DOT__make_meta__1__Vfuncout;
    __Vfunc_tb_raster__DOT__make_meta__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_raster__DOT__make_meta__1__colors_in;
    __Vfunc_tb_raster__DOT__make_meta__1__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_raster__DOT__make_meta__1__tile_x_in;
    __Vfunc_tb_raster__DOT__make_meta__1__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_raster__DOT__make_meta__1__tile_y_in;
    __Vfunc_tb_raster__DOT__make_meta__1__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__make_coord__2__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__2__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__2__x_in;
    __Vfunc_tb_raster__DOT__make_coord__2__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__2__y_in;
    __Vfunc_tb_raster__DOT__make_coord__2__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__2__z_in;
    __Vfunc_tb_raster__DOT__make_coord__2__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__make_coord__3__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__3__x_in;
    __Vfunc_tb_raster__DOT__make_coord__3__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__3__y_in;
    __Vfunc_tb_raster__DOT__make_coord__3__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__3__z_in;
    __Vfunc_tb_raster__DOT__make_coord__3__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__make_coord__4__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__4__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__4__x_in;
    __Vfunc_tb_raster__DOT__make_coord__4__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__4__y_in;
    __Vfunc_tb_raster__DOT__make_coord__4__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__4__z_in;
    __Vfunc_tb_raster__DOT__make_coord__4__z_in = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__gv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__gv0 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__gv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__gv1 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__gv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__gv2 = 0;
    IData/*18:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__gmeta;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__gmeta = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_metadata;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_z_current;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_z_current = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdx;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdx = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdy;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdy = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__5__v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__5__v[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_A;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_B;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C = 0;
    CData/*0:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected = 0;
    QData/*32:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__6__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__6__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__6__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__7__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__7__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__7__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__7__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__8__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__8__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__8__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__8__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__9__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__9__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__9__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__9__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__10__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__10__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__10__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__10__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__11__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__11__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__11__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__11__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__12__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__12__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__12__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__12__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__13__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__13__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__13__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__13__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__14__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__14__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__14__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__14__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__15__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__15__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__15__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__15__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__16__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__16__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__16__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__16__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__17__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__17__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__17__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__17__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__18__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__18__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__18__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__18__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__19__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__19__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__19__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__19__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__20__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__20__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__20__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__20__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__21__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__21__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__21__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__22__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__22__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__22__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__22__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__23__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__23__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__23__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__23__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__24__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__24__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__24__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__24__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__25__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__25__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__25__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__25__in = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__26__tv0;
    __Vtask_tb_raster__DOT__run_triangle_test__26__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__26__tv1;
    __Vtask_tb_raster__DOT__run_triangle_test__26__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__26__tv2;
    __Vtask_tb_raster__DOT__run_triangle_test__26__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_raster__DOT__run_triangle_test__26__tmeta;
    __Vtask_tb_raster__DOT__run_triangle_test__26__tmeta = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__26__exp_abs_pos;
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_raster__DOT__run_triangle_test__26__exp_metadata;
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdx;
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdy;
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__run_triangle_test__26__exp_z_current;
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_z_current = 0;
    IData/*18:0*/ __Vfunc_tb_raster__DOT__make_meta__27__Vfuncout;
    __Vfunc_tb_raster__DOT__make_meta__27__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_raster__DOT__make_meta__27__colors_in;
    __Vfunc_tb_raster__DOT__make_meta__27__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_raster__DOT__make_meta__27__tile_x_in;
    __Vfunc_tb_raster__DOT__make_meta__27__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_raster__DOT__make_meta__27__tile_y_in;
    __Vfunc_tb_raster__DOT__make_meta__27__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__make_coord__28__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__28__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__28__x_in;
    __Vfunc_tb_raster__DOT__make_coord__28__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__28__y_in;
    __Vfunc_tb_raster__DOT__make_coord__28__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__28__z_in;
    __Vfunc_tb_raster__DOT__make_coord__28__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__make_coord__29__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__29__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__29__x_in;
    __Vfunc_tb_raster__DOT__make_coord__29__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__29__y_in;
    __Vfunc_tb_raster__DOT__make_coord__29__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__29__z_in;
    __Vfunc_tb_raster__DOT__make_coord__29__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__make_coord__30__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__30__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__30__x_in;
    __Vfunc_tb_raster__DOT__make_coord__30__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__30__y_in;
    __Vfunc_tb_raster__DOT__make_coord__30__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__30__z_in;
    __Vfunc_tb_raster__DOT__make_coord__30__z_in = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__gv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__gv0 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__gv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__gv1 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__gv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__gv2 = 0;
    IData/*18:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__gmeta;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__gmeta = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_metadata;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_z_current;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_z_current = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_y0z2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_y0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_z0y2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_z0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_z0x2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_z0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_x0z2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_x0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_x0y2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_x0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_y0x2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_y0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk7__DOT__div_result_dzdx;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk7__DOT__div_result_dzdx = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk7__DOT__div_result_dzdy;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk7__DOT__div_result_dzdy = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_x;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_x = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_y;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_y = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__x_component;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__x_component = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__y_component;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__y_component = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__z_component;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__z_component = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__31__v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__31__v[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_A;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_B;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C = 0;
    CData/*0:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected = 0;
    QData/*32:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__32__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__32__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__32__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__32__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__33__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__33__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__33__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__33__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__34__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__34__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__34__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__34__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__35__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__35__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__35__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__35__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__36__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__36__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__36__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__36__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__37__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__37__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__37__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__37__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__38__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__38__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__38__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__38__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__39__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__39__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__39__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__39__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__40__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__40__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__40__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__40__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__41__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__41__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__41__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__41__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__42__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__42__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__42__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__42__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__43__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__43__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__43__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__43__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__44__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__44__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__44__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__44__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__45__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__45__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__45__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__45__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__46__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__46__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__46__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__46__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__47__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__47__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__47__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__47__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__48__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__48__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__48__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__48__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__49__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__49__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__49__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__49__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__50__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__50__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__50__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__50__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__51__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__51__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__51__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__51__in = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__52__tv0;
    __Vtask_tb_raster__DOT__run_triangle_test__52__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__52__tv1;
    __Vtask_tb_raster__DOT__run_triangle_test__52__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__52__tv2;
    __Vtask_tb_raster__DOT__run_triangle_test__52__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_raster__DOT__run_triangle_test__52__tmeta;
    __Vtask_tb_raster__DOT__run_triangle_test__52__tmeta = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__run_triangle_test__52__exp_abs_pos;
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_raster__DOT__run_triangle_test__52__exp_metadata;
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdx;
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdy;
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__run_triangle_test__52__exp_z_current;
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_z_current = 0;
    IData/*18:0*/ __Vfunc_tb_raster__DOT__make_meta__53__Vfuncout;
    __Vfunc_tb_raster__DOT__make_meta__53__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_raster__DOT__make_meta__53__colors_in;
    __Vfunc_tb_raster__DOT__make_meta__53__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_raster__DOT__make_meta__53__tile_x_in;
    __Vfunc_tb_raster__DOT__make_meta__53__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_raster__DOT__make_meta__53__tile_y_in;
    __Vfunc_tb_raster__DOT__make_meta__53__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__make_coord__54__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__54__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__54__x_in;
    __Vfunc_tb_raster__DOT__make_coord__54__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__54__y_in;
    __Vfunc_tb_raster__DOT__make_coord__54__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__54__z_in;
    __Vfunc_tb_raster__DOT__make_coord__54__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__make_coord__55__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__55__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__55__x_in;
    __Vfunc_tb_raster__DOT__make_coord__55__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__55__y_in;
    __Vfunc_tb_raster__DOT__make_coord__55__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__55__z_in;
    __Vfunc_tb_raster__DOT__make_coord__55__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_raster__DOT__make_coord__56__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__56__x_in;
    __Vfunc_tb_raster__DOT__make_coord__56__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__56__y_in;
    __Vfunc_tb_raster__DOT__make_coord__56__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__make_coord__56__z_in;
    __Vfunc_tb_raster__DOT__make_coord__56__z_in = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__gv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__gv0 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__gv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__gv1 = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__gv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__gv2 = 0;
    IData/*18:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__gmeta;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__gmeta = 0;
    QData/*47:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_metadata;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_z_current;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_z_current = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_y0z2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_y0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_z0y2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_z0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_z0x2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_z0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_x0z2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_x0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_x0y2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_x0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_y0x2_mult;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_y0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk7__DOT__div_result_dzdx;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk7__DOT__div_result_dzdx = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk7__DOT__div_result_dzdy;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk7__DOT__div_result_dzdy = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_x;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_x = 0;
    SData/*15:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_y;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_y = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__x_component;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__x_component = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__y_component;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__y_component = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__z_component;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__z_component = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__57__v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__57__v[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_A;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_B;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C = 0;
    CData/*0:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected = 0;
    QData/*32:0*/ __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__58__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__58__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__58__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__58__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__59__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__59__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__59__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__59__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__60__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__60__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__60__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__60__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__61__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__61__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__61__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__62__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__62__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__62__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__62__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__63__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__63__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__63__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__63__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__64__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__64__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__64__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__64__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__65__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__65__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__65__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__65__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__66__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__66__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__66__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__66__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__67__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__67__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__67__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__67__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__68__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__68__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__68__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__68__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__69__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__69__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__69__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__69__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__70__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__70__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__70__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__70__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__71__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__71__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__71__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__71__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__72__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__72__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__72__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__72__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__73__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__73__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__73__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__73__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__74__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__74__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__74__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__74__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__75__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__75__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__75__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__75__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__76__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__76__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__76__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__76__in = 0;
    IData/*31:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__77__Vfuncout;
    __Vfunc_tb_raster__DOT__sext_f16_f32__77__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_raster__DOT__sext_f16_f32__77__in;
    __Vfunc_tb_raster__DOT__sext_f16_f32__77__in = 0;
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
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hc1c78806__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__rst_n = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_raster__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_hca70bb26__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_raster.rdy_in)", 
                                                             "tb_raster.sv", 
                                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vfunc_tb_raster__DOT__make_meta__1__tile_y_in = 0U;
    __Vfunc_tb_raster__DOT__make_meta__1__tile_x_in = 0U;
    __Vfunc_tb_raster__DOT__make_meta__1__colors_in = 1U;
    __Vfunc_tb_raster__DOT__make_meta__1__Vfuncout 
        = (((IData)(__Vfunc_tb_raster__DOT__make_meta__1__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_raster__DOT__make_meta__1__tile_y_in) 
                         << 6U) | (IData)(__Vfunc_tb_raster__DOT__make_meta__1__tile_x_in)));
    __Vtask_tb_raster__DOT__run_triangle_test__0__tmeta 
        = __Vfunc_tb_raster__DOT__make_meta__1__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__2__z_in = 0x200U;
    __Vfunc_tb_raster__DOT__make_coord__2__y_in = 0xfU;
    __Vfunc_tb_raster__DOT__make_coord__2__x_in = 0xcU;
    __Vfunc_tb_raster__DOT__make_coord__2__Vfuncout 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__2__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__2__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__2__z_in), 4U)))));
    __Vtask_tb_raster__DOT__run_triangle_test__0__tv2 
        = __Vfunc_tb_raster__DOT__make_coord__2__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__3__z_in = 0x200U;
    __Vfunc_tb_raster__DOT__make_coord__3__y_in = 2U;
    __Vfunc_tb_raster__DOT__make_coord__3__x_in = 7U;
    __Vfunc_tb_raster__DOT__make_coord__3__Vfuncout 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__3__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__3__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__3__z_in), 4U)))));
    __Vtask_tb_raster__DOT__run_triangle_test__0__tv1 
        = __Vfunc_tb_raster__DOT__make_coord__3__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__4__z_in = 0x200U;
    __Vfunc_tb_raster__DOT__make_coord__4__y_in = 0xeU;
    __Vfunc_tb_raster__DOT__make_coord__4__x_in = 1U;
    __Vfunc_tb_raster__DOT__make_coord__4__Vfuncout 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__4__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__4__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__4__z_in), 4U)))));
    __Vtask_tb_raster__DOT__run_triangle_test__0__tv0 
        = __Vfunc_tb_raster__DOT__make_coord__4__Vfuncout;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__gmeta 
        = __Vtask_tb_raster__DOT__run_triangle_test__0__tmeta;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__gv2 
        = __Vtask_tb_raster__DOT__run_triangle_test__0__tv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__gv1 
        = __Vtask_tb_raster__DOT__run_triangle_test__0__tv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__gv0 
        = __Vtask_tb_raster__DOT__run_triangle_test__0__tv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__v[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__gv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__v[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__gv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__v[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__gv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__gv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__gv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__gv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos) 
           | ((QData)((IData)((0x7e00U & (__Vtask_tb_raster__DOT__simulate_expected_output__5__gmeta 
                                          << 9U)))) 
              << 0x20U));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos) 
           | ((QData)((IData)((0x3e00U & (__Vtask_tb_raster__DOT__simulate_expected_output__5__gmeta 
                                          << 3U)))) 
              << 0x10U));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
        = (0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos);
    tb_raster__DOT____Vlvbound_h6671a27d__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                           [0U] 
                                                           >> 0x20U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                             [0U] 
                                                             >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[0U] 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h6671a27d__0)) 
                     << 0x20U));
    tb_raster__DOT____Vlvbound_h666bdeda__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                           [0U] 
                                                           >> 0x10U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                             [0U] 
                                                             >> 0x10U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[0U] 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h666bdeda__0)) 
                     << 0x10U));
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = (0xffffU 
                                               & ((IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                          [0U]) 
                                                  - (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                            [0U])));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[0U] 
        = ((0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
            [0U]) | (IData)((IData)(tb_raster__DOT____Vlvbound_h6667b2ab__0)));
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                     [0U] 
                                                                     >> 0x20U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [0U] 
                                                                       >> 0x20U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                      [0U] 
                                                                      >> 0x20U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                       [0U] 
                                                                       >> 0x20U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [0U] 
                                                                         >> 0x20U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                        [0U] 
                                                                        >> 0x20U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:155: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta x calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                     [0U] 
                                                                     >> 0x10U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [0U] 
                                                                       >> 0x10U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                      [0U] 
                                                                      >> 0x10U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                       [0U] 
                                                                       >> 0x10U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [0U] 
                                                                         >> 0x10U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                        [0U] 
                                                                        >> 0x10U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:160: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta y calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                    [0U])))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                      [0U]))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                     [0U]))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                      [0U])))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                        [0U]))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                       [0U]))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:165: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta z calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h6671a27d__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                           [1U] 
                                                           >> 0x20U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                             [1U] 
                                                             >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[1U] 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h6671a27d__0)) 
                     << 0x20U));
    tb_raster__DOT____Vlvbound_h666bdeda__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                           [1U] 
                                                           >> 0x10U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                             [1U] 
                                                             >> 0x10U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[1U] 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h666bdeda__0)) 
                     << 0x10U));
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = (0xffffU 
                                               & ((IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                          [1U]) 
                                                  - (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                            [1U])));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[1U] 
        = ((0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
            [1U]) | (IData)((IData)(tb_raster__DOT____Vlvbound_h6667b2ab__0)));
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                     [1U] 
                                                                     >> 0x20U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [1U] 
                                                                       >> 0x20U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                      [1U] 
                                                                      >> 0x20U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                       [1U] 
                                                                       >> 0x20U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [1U] 
                                                                         >> 0x20U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                        [1U] 
                                                                        >> 0x20U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:155: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta x calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                     [1U] 
                                                                     >> 0x10U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [1U] 
                                                                       >> 0x10U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                      [1U] 
                                                                      >> 0x10U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                       [1U] 
                                                                       >> 0x10U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [1U] 
                                                                         >> 0x10U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                        [1U] 
                                                                        >> 0x10U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:160: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta y calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                    [1U])))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                      [1U]))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                     [1U]))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                      [1U])))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                        [1U]))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                       [1U]))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:165: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta z calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h6671a27d__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                           [2U] 
                                                           >> 0x20U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                             [2U] 
                                                             >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[2U] 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h6671a27d__0)) 
                     << 0x20U));
    tb_raster__DOT____Vlvbound_h666bdeda__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                           [2U] 
                                                           >> 0x10U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                             [2U] 
                                                             >> 0x10U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[2U] 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h666bdeda__0)) 
                     << 0x10U));
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = (0xffffU 
                                               & ((IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                          [2U]) 
                                                  - (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                            [2U])));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas[2U] 
        = ((0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
            [2U]) | (IData)((IData)(tb_raster__DOT____Vlvbound_h6667b2ab__0)));
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                     [2U] 
                                                                     >> 0x20U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [2U] 
                                                                       >> 0x20U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                      [2U] 
                                                                      >> 0x20U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                       [2U] 
                                                                       >> 0x20U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [2U] 
                                                                         >> 0x20U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                        [2U] 
                                                                        >> 0x20U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:155: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta x calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                     [2U] 
                                                                     >> 0x10U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [2U] 
                                                                       >> 0x10U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                      [2U] 
                                                                      >> 0x10U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                       [2U] 
                                                                       >> 0x10U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [2U] 
                                                                         >> 0x10U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                        [2U] 
                                                                        >> 0x10U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:160: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta y calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                    [2U])))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                      [2U]))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                     [2U]))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__5__rotated_v
                                                                      [2U])))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                        [2U]))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                                       [2U]))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:165: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta z calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                     [0U] 
                                                     >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                     [0U] 
                                                     >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [0U] 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [0U] 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:180: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x subtraction for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [0U] 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [0U] 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:185: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y subtraction for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [0U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [0U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [0U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__6__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [0U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__6__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__6__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__6__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__6__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__7__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__7__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__7__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__7__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__7__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:195: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x multiplication for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [0U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__8__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [0U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__8__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__8__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__8__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__8__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__9__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__9__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__9__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__9__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__9__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:200: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y multiplication for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:208: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h29c82707__0 = (__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                               - __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_edges[0U] 
        = tb_raster__DOT____Vlvbound_h29c82707__0;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                     [1U] 
                                                     >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                     [1U] 
                                                     >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [1U] 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [1U] 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:180: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x subtraction for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [1U] 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [1U] 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:185: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y subtraction for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [1U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [1U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [1U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__6__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [1U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__6__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__6__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__6__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__6__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__7__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__7__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__7__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__7__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__7__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:195: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x multiplication for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [1U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__8__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [1U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__8__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__8__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__8__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__8__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__9__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__9__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__9__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__9__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__9__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:200: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y multiplication for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:208: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h29c82707__0 = (__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                               - __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_edges[1U] 
        = tb_raster__DOT____Vlvbound_h29c82707__0;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                     [2U] 
                                                     >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                     [2U] 
                                                     >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [2U] 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [2U] 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:180: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x subtraction for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [2U] 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                         [2U] 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:185: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y subtraction for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [2U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [2U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [2U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__6__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [2U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__6__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__6__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__6__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__6__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__7__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__7__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__7__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__7__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__7__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:195: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x multiplication for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [2U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__8__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [2U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__8__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__8__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__8__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__8__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__9__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__9__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__9__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__9__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__9__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:200: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y multiplication for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:208: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h29c82707__0 = (__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                               - __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_edges[2U] 
        = tb_raster__DOT____Vlvbound_h29c82707__0;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_metadata 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__gmeta;
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                           [0U] 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [2U]))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [0U]))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [2U] 
                                                       >> 0x10U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                        [0U] 
                                                        >> 0x10U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                         [2U]))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__10__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                     [2U]));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__10__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__10__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__10__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__10__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__11__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [0U] 
                                                          >> 0x10U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__11__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__11__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__11__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__11__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:228: %Ntb_raster.simulate_expected_output.unnamedblk4: Potential overflow in coefficient A (y0*z2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [0U])))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [2U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__12__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [2U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__12__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__12__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__12__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__12__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__13__in 
                                    = (0xffffU & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                         [0U]));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__13__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__13__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__13__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__13__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:233: %Ntb_raster.simulate_expected_output.unnamedblk4: Potential overflow in coefficient A (z0*y2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:241: %Ntb_raster.simulate_expected_output.unnamedblk4: Potential overflow in coefficient A calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_A 
        = (__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult 
           - __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [0U]))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [2U] 
                                                       >> 0x20U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                           [0U] 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [2U]))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [0U])))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [2U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__14__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [2U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__14__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__14__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__14__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__14__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__15__in 
                                    = (0xffffU & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                         [0U]));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__15__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__15__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__15__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__15__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:257: %Ntb_raster.simulate_expected_output.unnamedblk5: Potential overflow in coefficient B (z0*x2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                        [0U] 
                                                        >> 0x20U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                         [2U]))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__16__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                     [2U]));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__16__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__16__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__16__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__16__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__17__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [0U] 
                                                          >> 0x20U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__17__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__17__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__17__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__17__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:262: %Ntb_raster.simulate_expected_output.unnamedblk5: Potential overflow in coefficient B (x0*z2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:270: %Ntb_raster.simulate_expected_output.unnamedblk5: Potential overflow in coefficient B calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_B 
        = (__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult 
           - __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                           [0U] 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [2U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                           [0U] 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                       [2U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                        [0U] 
                                                        >> 0x20U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [2U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__18__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [2U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__18__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__18__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__18__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__18__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__19__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [0U] 
                                                          >> 0x20U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__19__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__19__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__19__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__19__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:286: %Ntb_raster.simulate_expected_output.unnamedblk6: Potential overflow in coefficient C (x0*y2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                        [0U] 
                                                        >> 0x10U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [2U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__20__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                      [2U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__20__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__20__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__20__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__20__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__21__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
                                                          [0U] 
                                                          >> 0x10U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__21__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__21__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__21__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__21__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:291: %Ntb_raster.simulate_expected_output.unnamedblk6: Potential overflow in coefficient C (y0*x2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:299: %Ntb_raster.simulate_expected_output.unnamedblk6: Potential overflow in coefficient C calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C 
        = (__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult 
           - __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult);
    if (VL_UNLIKELY(((0U == __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:307: Assertion failed in %Ntb_raster.simulate_expected_output: Division by zero detected in dz calculations - coefficient C is zero!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_raster.sv", 307, "");
        __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx = 0U;
        __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy = 0U;
    } else {
        __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdx 
            = (- VL_DIVS_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_A, __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C));
        __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdy 
            = (- VL_DIVS_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_B, __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C));
        if (VL_UNLIKELY((((0U != __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_A) 
                          & (VL_MULS_III(32, VL_DIVS_III(32, 
                                                         (- __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_A), __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C), __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C) 
                             != (- __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_A)))))) {
            VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:319: %Ntb_raster.simulate_expected_output.unnamedblk7: Non-exact division in dzdx calculation - potential precision loss\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
        }
        if (VL_UNLIKELY((((0U != __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_B) 
                          & (VL_MULS_III(32, VL_DIVS_III(32, 
                                                         (- __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_B), __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C), __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_C) 
                             != (- __Vtask_tb_raster__DOT__simulate_expected_output__5__coeff_B)))))) {
            VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:323: %Ntb_raster.simulate_expected_output.unnamedblk7: Non-exact division in dzdy calculation - potential precision loss\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
        }
        __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx 
            = (0xffffU & (__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdx 
                          >> 4U));
        __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy 
            = (0xffffU & (__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdy 
                          >> 4U));
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                               [0U] >> 0x20U)) - (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                          >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                               [0U] >> 0x10U)) - (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                          >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                     [0U] 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [0U] 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:342: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z delta_x calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                     [0U] 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                                       [0U] 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:347: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z delta_y calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx)));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy)));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x))) 
                       & (0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx)))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__22__in 
                                        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx;
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__22__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__22__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__22__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__22__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__23__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__23__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__23__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__23__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__23__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:356: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z x_component calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y))) 
                       & (0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy)))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__24__in 
                                        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy;
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__24__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__24__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__24__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__24__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__25__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__25__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__25__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__25__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__25__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:361: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z y_component calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component 
        = (((- (IData)((1U & (IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                      [0U] >> 0xfU))))) 
            << 0x14U) | (0xffff0U & ((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                             [0U]) 
                                     << 4U)));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component))) 
                             + (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check 
        = (0x1ffffffffULL & (((QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__overflow_check)) 
                              << 1U) + (((QData)((IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component 
                                                          >> 0x1fU))) 
                                         << 0x20U) 
                                        | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_z_current 
        = ((__Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component 
            + __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component) 
           + __Vtask_tb_raster__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component);
    if ((((0xffffU & (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                             [0U])) == (0xffffU & (IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                          [1U]))) 
         & ((0xffffU & (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__v
                               [1U])) == (0xffffU & (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__5__v
                                                            [2U]))))) {
        if (VL_UNLIKELY((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx))) 
                          | (0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy))))))) {
            VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:384: %Ntb_raster.simulate_expected_output: For flat triangle, expected dzdx and dzdy to be 0, but got dzdx=%0d, dzdy=%0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx),
                         16,__Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy);
        }
    }
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_abs_pos 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_abs_pos;
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
        [0U];
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
        [1U];
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_deltas
        [2U];
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_edges
        [0U];
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_edges
        [1U];
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_edges
        [2U];
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_metadata 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_metadata;
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdx 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdx;
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdy 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_dzdy;
    __Vtask_tb_raster__DOT__run_triangle_test__0__exp_z_current 
        = __Vtask_tb_raster__DOT__simulate_expected_output__5__exp_z_current;
    while ((1U & (~ (IData)(vlSelfRef.tb_raster__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_hca70bb26__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_raster.rdy_in)", 
                                                             "tb_raster.sv", 
                                                             414);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_raster__DOT__v0 = __Vtask_tb_raster__DOT__run_triangle_test__0__tv0;
    vlSelfRef.tb_raster__DOT__v1 = __Vtask_tb_raster__DOT__run_triangle_test__0__tv1;
    vlSelfRef.tb_raster__DOT__v2 = __Vtask_tb_raster__DOT__run_triangle_test__0__tv2;
    vlSelfRef.tb_raster__DOT__in_metadata = __Vtask_tb_raster__DOT__run_triangle_test__0__tmeta;
    vlSelfRef.tb_raster__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_hc1c788c7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         424);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_hc1c788c7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         426);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h43a42b1b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.vld_out)", 
                                                         "tb_raster.sv", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Expected Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0d, dzdy: %0d\nz_current: %0d\ndelta_0: x= %0d, y=%0d, z=%0d\nedge_0: %0d\ndelta_1: x= %0d, y=%0d, z=%0d\nedge_1: %0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_2: %0d\n--- Real Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0#, dzdy: %0#\nz_current: %0#\ndelta_0: x= %0d, y=%0d, z=%0d\ndelta_1: x= %0d, y=%0d, z=%0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n",0,
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_abs_pos 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_abs_pos 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_abs_pos)),
                 16,(IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdx),
                 16,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdy,
                 32,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_z_current,
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                        [0U] >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                        [0U] >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                       [0U])),32,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges
                 [0U],16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                             [1U] >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                        [1U] >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                       [1U])),32,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges
                 [1U],16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                             [2U] >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                        [2U] >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                       [2U])),32,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges
                 [2U],16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_abs_pos 
                                             >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_abs_pos 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_abs_pos)),
                 16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdx),
                 16,vlSelfRef.tb_raster__DOT__out_dzdy,
                 32,vlSelfRef.tb_raster__DOT__out_z_current,
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0)),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1)),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2)),
                 32,vlSelfRef.tb_raster__DOT__out_edge_0,
                 32,vlSelfRef.tb_raster__DOT__out_edge_1,
                 32,vlSelfRef.tb_raster__DOT__out_edge_2);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_abs_pos 
                          != __Vtask_tb_raster__DOT__run_triangle_test__0__exp_abs_pos)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:454: Assertion failed in %Ntb_raster.run_triangle_test: abs_pos mismatch: %15# vs %15#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),48,vlSelfRef.tb_raster__DOT__out_abs_pos,
                         48,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_abs_pos);
            VL_STOP_MT("tb_raster.sv", 454, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                 [0U] 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:456: Assertion failed in %Ntb_raster.run_triangle_test: delta_0.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_0 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                [0U] 
                                                >> 0x20U))));
            VL_STOP_MT("tb_raster.sv", 456, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                 [0U] 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:458: Assertion failed in %Ntb_raster.run_triangle_test: delta_0.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_0 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                [0U] 
                                                >> 0x10U))));
            VL_STOP_MT("tb_raster.sv", 458, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0)) 
                          != (0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                [0U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:460: Assertion failed in %Ntb_raster.run_triangle_test: delta_0.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0)),
                         16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                               [0U])));
            VL_STOP_MT("tb_raster.sv", 460, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_edge_0 
                          != __Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges
                          [0U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:462: Assertion failed in %Ntb_raster.run_triangle_test: edge_0 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_edge_0,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges
                         [0U]);
            VL_STOP_MT("tb_raster.sv", 462, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                 [1U] 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:465: Assertion failed in %Ntb_raster.run_triangle_test: delta_1.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_1 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                [1U] 
                                                >> 0x20U))));
            VL_STOP_MT("tb_raster.sv", 465, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                 [1U] 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:467: Assertion failed in %Ntb_raster.run_triangle_test: delta_1.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_1 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                [1U] 
                                                >> 0x10U))));
            VL_STOP_MT("tb_raster.sv", 467, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1)) 
                          != (0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                [1U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:469: Assertion failed in %Ntb_raster.run_triangle_test: delta_1.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1)),
                         16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                               [1U])));
            VL_STOP_MT("tb_raster.sv", 469, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_edge_1 
                          != __Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges
                          [1U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:471: Assertion failed in %Ntb_raster.run_triangle_test: edge_1 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_edge_1,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges
                         [1U]);
            VL_STOP_MT("tb_raster.sv", 471, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                 [2U] 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:474: Assertion failed in %Ntb_raster.run_triangle_test: delta_2.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_2 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                [2U] 
                                                >> 0x20U))));
            VL_STOP_MT("tb_raster.sv", 474, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                 [2U] 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:476: Assertion failed in %Ntb_raster.run_triangle_test: delta_2.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_2 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                [2U] 
                                                >> 0x10U))));
            VL_STOP_MT("tb_raster.sv", 476, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2)) 
                          != (0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                                [2U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:478: Assertion failed in %Ntb_raster.run_triangle_test: delta_2.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2)),
                         16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_deltas
                                               [2U])));
            VL_STOP_MT("tb_raster.sv", 478, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_edge_2 
                          != __Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges
                          [2U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:480: Assertion failed in %Ntb_raster.run_triangle_test: edge_2 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_edge_2,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_edges
                         [2U]);
            VL_STOP_MT("tb_raster.sv", 480, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_metadata 
                          != __Vtask_tb_raster__DOT__run_triangle_test__0__exp_metadata)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:483: Assertion failed in %Ntb_raster.run_triangle_test: metadata mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_raster.sv", 483, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_raster__DOT__out_dzdx) 
                          != (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdx))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:485: Assertion failed in %Ntb_raster.run_triangle_test: dzdx mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdx),
                         16,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdx);
            VL_STOP_MT("tb_raster.sv", 485, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_raster__DOT__out_dzdy) 
                          != (IData)(__Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdy))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:487: Assertion failed in %Ntb_raster.run_triangle_test: dzdy mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdy),
                         16,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_dzdy);
            VL_STOP_MT("tb_raster.sv", 487, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_z_current 
                          != __Vtask_tb_raster__DOT__run_triangle_test__0__exp_z_current)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:489: Assertion failed in %Ntb_raster.run_triangle_test: z_current mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_z_current,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__0__exp_z_current);
            VL_STOP_MT("tb_raster.sv", 489, "");
        }
    }
    vlSelfRef.tb_raster__DOT__rdy_out = 1U;
    co_await vlSelfRef.__VtrigSched_h43a42bda__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.vld_out)", 
                                                         "tb_raster.sv", 
                                                         493);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__rdy_out = 0U;
    co_await vlSelfRef.__VtrigSched_hc1c788c7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         495);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_raster__DOT__make_meta__27__tile_y_in = 0U;
    __Vfunc_tb_raster__DOT__make_meta__27__tile_x_in = 0U;
    __Vfunc_tb_raster__DOT__make_meta__27__colors_in = 1U;
    __Vfunc_tb_raster__DOT__make_meta__27__Vfuncout 
        = (((IData)(__Vfunc_tb_raster__DOT__make_meta__27__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_raster__DOT__make_meta__27__tile_y_in) 
                         << 6U) | (IData)(__Vfunc_tb_raster__DOT__make_meta__27__tile_x_in)));
    __Vtask_tb_raster__DOT__run_triangle_test__26__tmeta 
        = __Vfunc_tb_raster__DOT__make_meta__27__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__28__z_in = 0x100U;
    __Vfunc_tb_raster__DOT__make_coord__28__y_in = 2U;
    __Vfunc_tb_raster__DOT__make_coord__28__x_in = 1U;
    __Vfunc_tb_raster__DOT__make_coord__28__Vfuncout 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__28__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__28__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__28__z_in), 4U)))));
    __Vtask_tb_raster__DOT__run_triangle_test__26__tv2 
        = __Vfunc_tb_raster__DOT__make_coord__28__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__29__z_in = 0x400U;
    __Vfunc_tb_raster__DOT__make_coord__29__y_in = 1U;
    __Vfunc_tb_raster__DOT__make_coord__29__x_in = 0x14U;
    __Vfunc_tb_raster__DOT__make_coord__29__Vfuncout 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__29__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__29__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__29__z_in), 4U)))));
    __Vtask_tb_raster__DOT__run_triangle_test__26__tv1 
        = __Vfunc_tb_raster__DOT__make_coord__29__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__30__z_in = 0x100U;
    __Vfunc_tb_raster__DOT__make_coord__30__y_in = 1U;
    __Vfunc_tb_raster__DOT__make_coord__30__x_in = 1U;
    __Vfunc_tb_raster__DOT__make_coord__30__Vfuncout 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__30__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__30__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__30__z_in), 4U)))));
    __Vtask_tb_raster__DOT__run_triangle_test__26__tv0 
        = __Vfunc_tb_raster__DOT__make_coord__30__Vfuncout;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__gmeta 
        = __Vtask_tb_raster__DOT__run_triangle_test__26__tmeta;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__gv2 
        = __Vtask_tb_raster__DOT__run_triangle_test__26__tv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__gv1 
        = __Vtask_tb_raster__DOT__run_triangle_test__26__tv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__gv0 
        = __Vtask_tb_raster__DOT__run_triangle_test__26__tv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__v[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__gv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__v[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__gv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__v[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__gv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__gv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__gv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__gv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos) 
           | ((QData)((IData)((0x7e00U & (__Vtask_tb_raster__DOT__simulate_expected_output__31__gmeta 
                                          << 9U)))) 
              << 0x20U));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos) 
           | ((QData)((IData)((0x3e00U & (__Vtask_tb_raster__DOT__simulate_expected_output__31__gmeta 
                                          << 3U)))) 
              << 0x10U));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
        = (0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos);
    tb_raster__DOT____Vlvbound_h6671a27d__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                           [0U] 
                                                           >> 0x20U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                             [0U] 
                                                             >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[0U] 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h6671a27d__0)) 
                     << 0x20U));
    tb_raster__DOT____Vlvbound_h666bdeda__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                           [0U] 
                                                           >> 0x10U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                             [0U] 
                                                             >> 0x10U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[0U] 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h666bdeda__0)) 
                     << 0x10U));
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = (0xffffU 
                                               & ((IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                          [0U]) 
                                                  - (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                            [0U])));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[0U] 
        = ((0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
            [0U]) | (IData)((IData)(tb_raster__DOT____Vlvbound_h6667b2ab__0)));
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                     [0U] 
                                                                     >> 0x20U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [0U] 
                                                                       >> 0x20U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                      [0U] 
                                                                      >> 0x20U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                       [0U] 
                                                                       >> 0x20U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [0U] 
                                                                         >> 0x20U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                        [0U] 
                                                                        >> 0x20U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:155: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta x calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                     [0U] 
                                                                     >> 0x10U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [0U] 
                                                                       >> 0x10U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                      [0U] 
                                                                      >> 0x10U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                       [0U] 
                                                                       >> 0x10U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [0U] 
                                                                         >> 0x10U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                        [0U] 
                                                                        >> 0x10U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:160: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta y calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                    [0U])))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                      [0U]))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                     [0U]))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                      [0U])))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                        [0U]))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                       [0U]))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:165: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta z calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h6671a27d__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                           [1U] 
                                                           >> 0x20U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                             [1U] 
                                                             >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[1U] 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h6671a27d__0)) 
                     << 0x20U));
    tb_raster__DOT____Vlvbound_h666bdeda__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                           [1U] 
                                                           >> 0x10U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                             [1U] 
                                                             >> 0x10U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[1U] 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h666bdeda__0)) 
                     << 0x10U));
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = (0xffffU 
                                               & ((IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                          [1U]) 
                                                  - (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                            [1U])));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[1U] 
        = ((0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
            [1U]) | (IData)((IData)(tb_raster__DOT____Vlvbound_h6667b2ab__0)));
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                     [1U] 
                                                                     >> 0x20U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [1U] 
                                                                       >> 0x20U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                      [1U] 
                                                                      >> 0x20U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                       [1U] 
                                                                       >> 0x20U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [1U] 
                                                                         >> 0x20U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                        [1U] 
                                                                        >> 0x20U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:155: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta x calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                     [1U] 
                                                                     >> 0x10U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [1U] 
                                                                       >> 0x10U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                      [1U] 
                                                                      >> 0x10U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                       [1U] 
                                                                       >> 0x10U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [1U] 
                                                                         >> 0x10U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                        [1U] 
                                                                        >> 0x10U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:160: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta y calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                    [1U])))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                      [1U]))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                     [1U]))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                      [1U])))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                        [1U]))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                       [1U]))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:165: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta z calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h6671a27d__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                           [2U] 
                                                           >> 0x20U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                             [2U] 
                                                             >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[2U] 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h6671a27d__0)) 
                     << 0x20U));
    tb_raster__DOT____Vlvbound_h666bdeda__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                           [2U] 
                                                           >> 0x10U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                             [2U] 
                                                             >> 0x10U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[2U] 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h666bdeda__0)) 
                     << 0x10U));
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = (0xffffU 
                                               & ((IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                          [2U]) 
                                                  - (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                            [2U])));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas[2U] 
        = ((0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
            [2U]) | (IData)((IData)(tb_raster__DOT____Vlvbound_h6667b2ab__0)));
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                     [2U] 
                                                                     >> 0x20U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [2U] 
                                                                       >> 0x20U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                      [2U] 
                                                                      >> 0x20U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                       [2U] 
                                                                       >> 0x20U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [2U] 
                                                                         >> 0x20U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                        [2U] 
                                                                        >> 0x20U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:155: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta x calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                     [2U] 
                                                                     >> 0x10U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [2U] 
                                                                       >> 0x10U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                      [2U] 
                                                                      >> 0x10U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                       [2U] 
                                                                       >> 0x10U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [2U] 
                                                                         >> 0x10U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                        [2U] 
                                                                        >> 0x10U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:160: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta y calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                    [2U])))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                      [2U]))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                     [2U]))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__31__rotated_v
                                                                      [2U])))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                        [2U]))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                                       [2U]))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:165: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta z calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                     [0U] 
                                                     >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                     [0U] 
                                                     >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [0U] 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [0U] 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:180: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x subtraction for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [0U] 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [0U] 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:185: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y subtraction for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [0U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [0U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [0U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__32__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [0U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__32__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__32__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__32__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__32__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__33__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__33__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__33__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__33__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__33__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:195: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x multiplication for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [0U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__34__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [0U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__34__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__34__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__34__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__34__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__35__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__35__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__35__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__35__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__35__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:200: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y multiplication for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:208: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h29c82707__0 = (__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                               - __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_edges[0U] 
        = tb_raster__DOT____Vlvbound_h29c82707__0;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                     [1U] 
                                                     >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                     [1U] 
                                                     >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [1U] 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [1U] 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:180: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x subtraction for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [1U] 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [1U] 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:185: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y subtraction for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [1U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [1U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [1U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__32__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [1U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__32__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__32__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__32__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__32__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__33__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__33__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__33__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__33__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__33__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:195: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x multiplication for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [1U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__34__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [1U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__34__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__34__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__34__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__34__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__35__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__35__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__35__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__35__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__35__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:200: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y multiplication for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:208: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h29c82707__0 = (__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                               - __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_edges[1U] 
        = tb_raster__DOT____Vlvbound_h29c82707__0;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                     [2U] 
                                                     >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                     [2U] 
                                                     >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [2U] 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [2U] 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:180: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x subtraction for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [2U] 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                         [2U] 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:185: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y subtraction for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [2U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [2U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [2U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__32__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [2U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__32__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__32__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__32__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__32__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__33__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__33__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__33__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__33__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__33__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:195: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x multiplication for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [2U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__34__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [2U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__34__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__34__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__34__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__34__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__35__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__35__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__35__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__35__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__35__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:200: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y multiplication for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:208: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h29c82707__0 = (__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                               - __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_edges[2U] 
        = tb_raster__DOT____Vlvbound_h29c82707__0;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_metadata 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__gmeta;
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_y0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                           [0U] 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [2U]))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_z0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [0U]))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [2U] 
                                                       >> 0x10U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                        [0U] 
                                                        >> 0x10U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                         [2U]))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_y0z2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__36__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                     [2U]));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__36__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__36__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__36__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__36__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__37__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [0U] 
                                                          >> 0x10U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__37__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__37__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__37__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__37__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:228: %Ntb_raster.simulate_expected_output.unnamedblk4: Potential overflow in coefficient A (y0*z2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [0U])))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [2U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_z0y2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__38__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [2U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__38__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__38__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__38__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__38__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__39__in 
                                    = (0xffffU & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                         [0U]));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__39__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__39__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__39__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__39__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:233: %Ntb_raster.simulate_expected_output.unnamedblk4: Potential overflow in coefficient A (z0*y2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_y0z2_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_y0z2_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_z0y2_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_z0y2_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:241: %Ntb_raster.simulate_expected_output.unnamedblk4: Potential overflow in coefficient A calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_A 
        = (__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_y0z2_mult 
           - __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk4__DOT__temp_z0y2_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_z0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [0U]))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [2U] 
                                                       >> 0x20U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_x0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                           [0U] 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [2U]))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [0U])))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [2U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_z0x2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__40__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [2U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__40__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__40__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__40__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__40__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__41__in 
                                    = (0xffffU & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                         [0U]));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__41__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__41__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__41__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__41__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:257: %Ntb_raster.simulate_expected_output.unnamedblk5: Potential overflow in coefficient B (z0*x2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                        [0U] 
                                                        >> 0x20U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                         [2U]))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_x0z2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__42__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                     [2U]));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__42__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__42__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__42__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__42__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__43__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [0U] 
                                                          >> 0x20U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__43__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__43__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__43__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__43__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:262: %Ntb_raster.simulate_expected_output.unnamedblk5: Potential overflow in coefficient B (x0*z2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_z0x2_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_z0x2_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_x0z2_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_x0z2_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:270: %Ntb_raster.simulate_expected_output.unnamedblk5: Potential overflow in coefficient B calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_B 
        = (__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_z0x2_mult 
           - __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk5__DOT__temp_x0z2_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_x0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                           [0U] 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [2U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_y0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                           [0U] 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                       [2U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                        [0U] 
                                                        >> 0x20U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [2U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_x0y2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__44__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [2U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__44__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__44__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__44__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__44__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__45__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [0U] 
                                                          >> 0x20U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__45__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__45__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__45__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__45__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:286: %Ntb_raster.simulate_expected_output.unnamedblk6: Potential overflow in coefficient C (x0*y2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                        [0U] 
                                                        >> 0x10U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [2U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_y0x2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__46__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                      [2U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__46__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__46__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__46__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__46__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__47__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
                                                          [0U] 
                                                          >> 0x10U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__47__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__47__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__47__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__47__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:291: %Ntb_raster.simulate_expected_output.unnamedblk6: Potential overflow in coefficient C (y0*x2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_x0y2_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_x0y2_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_y0x2_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_y0x2_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:299: %Ntb_raster.simulate_expected_output.unnamedblk6: Potential overflow in coefficient C calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C 
        = (__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_x0y2_mult 
           - __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk6__DOT__temp_y0x2_mult);
    if (VL_UNLIKELY(((0U == __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:307: Assertion failed in %Ntb_raster.simulate_expected_output: Division by zero detected in dz calculations - coefficient C is zero!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_raster.sv", 307, "");
        __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx = 0U;
        __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy = 0U;
    } else {
        __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk7__DOT__div_result_dzdx 
            = (- VL_DIVS_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_A, __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C));
        __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk7__DOT__div_result_dzdy 
            = (- VL_DIVS_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_B, __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C));
        if (VL_UNLIKELY((((0U != __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_A) 
                          & (VL_MULS_III(32, VL_DIVS_III(32, 
                                                         (- __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_A), __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C), __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C) 
                             != (- __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_A)))))) {
            VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:319: %Ntb_raster.simulate_expected_output.unnamedblk7: Non-exact division in dzdx calculation - potential precision loss\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
        }
        if (VL_UNLIKELY((((0U != __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_B) 
                          & (VL_MULS_III(32, VL_DIVS_III(32, 
                                                         (- __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_B), __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C), __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_C) 
                             != (- __Vtask_tb_raster__DOT__simulate_expected_output__31__coeff_B)))))) {
            VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:323: %Ntb_raster.simulate_expected_output.unnamedblk7: Non-exact division in dzdy calculation - potential precision loss\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
        }
        __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx 
            = (0xffffU & (__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk7__DOT__div_result_dzdx 
                          >> 4U));
        __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy 
            = (0xffffU & (__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk7__DOT__div_result_dzdy 
                          >> 4U));
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_x 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                               [0U] >> 0x20U)) - (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                          >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_y 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                               [0U] >> 0x10U)) - (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                          >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                     [0U] 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_x)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [0U] 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_x)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:342: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z delta_x calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                     [0U] 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_y)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                                       [0U] 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_y)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:347: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z delta_y calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__x_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_x)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx)));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__y_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_y)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy)));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_x))) 
                       & (0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx)))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__x_component, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__48__in 
                                        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx;
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__48__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__48__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__48__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__48__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__49__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_x;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__49__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__49__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__49__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__49__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:356: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z x_component calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_y))) 
                       & (0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy)))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__y_component, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__50__in 
                                        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy;
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__50__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__50__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__50__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__50__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__51__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__delta_y;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__51__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__51__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__51__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__51__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:361: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z y_component calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__z_component 
        = (((- (IData)((1U & (IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                      [0U] >> 0xfU))))) 
            << 0x14U) | (0xffff0U & ((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                             [0U]) 
                                     << 4U)));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__x_component 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__x_component))) 
                             + (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__y_component 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__y_component)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check 
        = (0x1ffffffffULL & (((QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__overflow_check)) 
                              << 1U) + (((QData)((IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__z_component 
                                                          >> 0x1fU))) 
                                         << 0x20U) 
                                        | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__z_component)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_z_current 
        = ((__Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__x_component 
            + __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__y_component) 
           + __Vtask_tb_raster__DOT__simulate_expected_output__31__unnamedblk8__DOT__z_component);
    if ((((0xffffU & (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                             [0U])) == (0xffffU & (IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                          [1U]))) 
         & ((0xffffU & (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__v
                               [1U])) == (0xffffU & (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__31__v
                                                            [2U]))))) {
        if (VL_UNLIKELY((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx))) 
                          | (0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy))))))) {
            VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:384: %Ntb_raster.simulate_expected_output: For flat triangle, expected dzdx and dzdy to be 0, but got dzdx=%0d, dzdy=%0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx),
                         16,__Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy);
        }
    }
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_abs_pos 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_abs_pos;
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
        [0U];
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
        [1U];
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_deltas
        [2U];
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_edges
        [0U];
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_edges
        [1U];
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_edges
        [2U];
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_metadata 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_metadata;
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdx 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdx;
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdy 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_dzdy;
    __Vtask_tb_raster__DOT__run_triangle_test__26__exp_z_current 
        = __Vtask_tb_raster__DOT__simulate_expected_output__31__exp_z_current;
    while ((1U & (~ (IData)(vlSelfRef.tb_raster__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_hca70bb26__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_raster.rdy_in)", 
                                                             "tb_raster.sv", 
                                                             414);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_raster__DOT__v0 = __Vtask_tb_raster__DOT__run_triangle_test__26__tv0;
    vlSelfRef.tb_raster__DOT__v1 = __Vtask_tb_raster__DOT__run_triangle_test__26__tv1;
    vlSelfRef.tb_raster__DOT__v2 = __Vtask_tb_raster__DOT__run_triangle_test__26__tv2;
    vlSelfRef.tb_raster__DOT__in_metadata = __Vtask_tb_raster__DOT__run_triangle_test__26__tmeta;
    vlSelfRef.tb_raster__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_hc1c788c7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         424);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_hc1c788c7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         426);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h43a42b1b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.vld_out)", 
                                                         "tb_raster.sv", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Expected Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0d, dzdy: %0d\nz_current: %0d\ndelta_0: x= %0d, y=%0d, z=%0d\nedge_0: %0d\ndelta_1: x= %0d, y=%0d, z=%0d\nedge_1: %0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_2: %0d\n--- Real Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0#, dzdy: %0#\nz_current: %0#\ndelta_0: x= %0d, y=%0d, z=%0d\ndelta_1: x= %0d, y=%0d, z=%0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n",0,
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_abs_pos 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_abs_pos 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_abs_pos)),
                 16,(IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdx),
                 16,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdy,
                 32,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_z_current,
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                        [0U] >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                        [0U] >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                       [0U])),32,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges
                 [0U],16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                             [1U] >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                        [1U] >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                       [1U])),32,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges
                 [1U],16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                             [2U] >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                        [2U] >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                       [2U])),32,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges
                 [2U],16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_abs_pos 
                                             >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_abs_pos 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_abs_pos)),
                 16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdx),
                 16,vlSelfRef.tb_raster__DOT__out_dzdy,
                 32,vlSelfRef.tb_raster__DOT__out_z_current,
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0)),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1)),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2)),
                 32,vlSelfRef.tb_raster__DOT__out_edge_0,
                 32,vlSelfRef.tb_raster__DOT__out_edge_1,
                 32,vlSelfRef.tb_raster__DOT__out_edge_2);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_abs_pos 
                          != __Vtask_tb_raster__DOT__run_triangle_test__26__exp_abs_pos)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:454: Assertion failed in %Ntb_raster.run_triangle_test: abs_pos mismatch: %15# vs %15#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),48,vlSelfRef.tb_raster__DOT__out_abs_pos,
                         48,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_abs_pos);
            VL_STOP_MT("tb_raster.sv", 454, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                 [0U] 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:456: Assertion failed in %Ntb_raster.run_triangle_test: delta_0.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_0 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                [0U] 
                                                >> 0x20U))));
            VL_STOP_MT("tb_raster.sv", 456, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                 [0U] 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:458: Assertion failed in %Ntb_raster.run_triangle_test: delta_0.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_0 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                [0U] 
                                                >> 0x10U))));
            VL_STOP_MT("tb_raster.sv", 458, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0)) 
                          != (0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                [0U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:460: Assertion failed in %Ntb_raster.run_triangle_test: delta_0.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0)),
                         16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                               [0U])));
            VL_STOP_MT("tb_raster.sv", 460, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_edge_0 
                          != __Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges
                          [0U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:462: Assertion failed in %Ntb_raster.run_triangle_test: edge_0 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_edge_0,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges
                         [0U]);
            VL_STOP_MT("tb_raster.sv", 462, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                 [1U] 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:465: Assertion failed in %Ntb_raster.run_triangle_test: delta_1.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_1 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                [1U] 
                                                >> 0x20U))));
            VL_STOP_MT("tb_raster.sv", 465, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                 [1U] 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:467: Assertion failed in %Ntb_raster.run_triangle_test: delta_1.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_1 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                [1U] 
                                                >> 0x10U))));
            VL_STOP_MT("tb_raster.sv", 467, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1)) 
                          != (0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                [1U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:469: Assertion failed in %Ntb_raster.run_triangle_test: delta_1.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1)),
                         16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                               [1U])));
            VL_STOP_MT("tb_raster.sv", 469, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_edge_1 
                          != __Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges
                          [1U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:471: Assertion failed in %Ntb_raster.run_triangle_test: edge_1 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_edge_1,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges
                         [1U]);
            VL_STOP_MT("tb_raster.sv", 471, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                 [2U] 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:474: Assertion failed in %Ntb_raster.run_triangle_test: delta_2.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_2 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                [2U] 
                                                >> 0x20U))));
            VL_STOP_MT("tb_raster.sv", 474, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                 [2U] 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:476: Assertion failed in %Ntb_raster.run_triangle_test: delta_2.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_2 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                [2U] 
                                                >> 0x10U))));
            VL_STOP_MT("tb_raster.sv", 476, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2)) 
                          != (0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                                [2U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:478: Assertion failed in %Ntb_raster.run_triangle_test: delta_2.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2)),
                         16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_deltas
                                               [2U])));
            VL_STOP_MT("tb_raster.sv", 478, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_edge_2 
                          != __Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges
                          [2U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:480: Assertion failed in %Ntb_raster.run_triangle_test: edge_2 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_edge_2,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_edges
                         [2U]);
            VL_STOP_MT("tb_raster.sv", 480, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_metadata 
                          != __Vtask_tb_raster__DOT__run_triangle_test__26__exp_metadata)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:483: Assertion failed in %Ntb_raster.run_triangle_test: metadata mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_raster.sv", 483, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_raster__DOT__out_dzdx) 
                          != (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdx))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:485: Assertion failed in %Ntb_raster.run_triangle_test: dzdx mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdx),
                         16,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdx);
            VL_STOP_MT("tb_raster.sv", 485, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_raster__DOT__out_dzdy) 
                          != (IData)(__Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdy))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:487: Assertion failed in %Ntb_raster.run_triangle_test: dzdy mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdy),
                         16,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_dzdy);
            VL_STOP_MT("tb_raster.sv", 487, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_z_current 
                          != __Vtask_tb_raster__DOT__run_triangle_test__26__exp_z_current)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:489: Assertion failed in %Ntb_raster.run_triangle_test: z_current mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_z_current,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__26__exp_z_current);
            VL_STOP_MT("tb_raster.sv", 489, "");
        }
    }
    vlSelfRef.tb_raster__DOT__rdy_out = 1U;
    co_await vlSelfRef.__VtrigSched_h43a42bda__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.vld_out)", 
                                                         "tb_raster.sv", 
                                                         493);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__rdy_out = 0U;
    co_await vlSelfRef.__VtrigSched_hc1c788c7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         495);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_raster__DOT__make_meta__53__tile_y_in = 0U;
    __Vfunc_tb_raster__DOT__make_meta__53__tile_x_in = 0U;
    __Vfunc_tb_raster__DOT__make_meta__53__colors_in = 1U;
    __Vfunc_tb_raster__DOT__make_meta__53__Vfuncout 
        = (((IData)(__Vfunc_tb_raster__DOT__make_meta__53__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_raster__DOT__make_meta__53__tile_y_in) 
                         << 6U) | (IData)(__Vfunc_tb_raster__DOT__make_meta__53__tile_x_in)));
    __Vtask_tb_raster__DOT__run_triangle_test__52__tmeta 
        = __Vfunc_tb_raster__DOT__make_meta__53__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__54__z_in = 0x400U;
    __Vfunc_tb_raster__DOT__make_coord__54__y_in = 0x14U;
    __Vfunc_tb_raster__DOT__make_coord__54__x_in = 1U;
    __Vfunc_tb_raster__DOT__make_coord__54__Vfuncout 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__54__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__54__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__54__z_in), 4U)))));
    __Vtask_tb_raster__DOT__run_triangle_test__52__tv2 
        = __Vfunc_tb_raster__DOT__make_coord__54__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__55__z_in = 0x100U;
    __Vfunc_tb_raster__DOT__make_coord__55__y_in = 1U;
    __Vfunc_tb_raster__DOT__make_coord__55__x_in = 2U;
    __Vfunc_tb_raster__DOT__make_coord__55__Vfuncout 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__55__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__55__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__55__z_in), 4U)))));
    __Vtask_tb_raster__DOT__run_triangle_test__52__tv1 
        = __Vfunc_tb_raster__DOT__make_coord__55__Vfuncout;
    __Vfunc_tb_raster__DOT__make_coord__56__z_in = 0x100U;
    __Vfunc_tb_raster__DOT__make_coord__56__y_in = 1U;
    __Vfunc_tb_raster__DOT__make_coord__56__x_in = 1U;
    __Vfunc_tb_raster__DOT__make_coord__56__Vfuncout 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__56__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__56__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_raster__DOT__make_coord__56__z_in), 4U)))));
    __Vtask_tb_raster__DOT__run_triangle_test__52__tv0 
        = __Vfunc_tb_raster__DOT__make_coord__56__Vfuncout;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__gmeta 
        = __Vtask_tb_raster__DOT__run_triangle_test__52__tmeta;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__gv2 
        = __Vtask_tb_raster__DOT__run_triangle_test__52__tv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__gv1 
        = __Vtask_tb_raster__DOT__run_triangle_test__52__tv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__gv0 
        = __Vtask_tb_raster__DOT__run_triangle_test__52__tv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__v[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__gv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__v[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__gv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__v[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__gv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__gv1;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__gv2;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__gv0;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos) 
           | ((QData)((IData)((0x7e00U & (__Vtask_tb_raster__DOT__simulate_expected_output__57__gmeta 
                                          << 9U)))) 
              << 0x20U));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos) 
           | ((QData)((IData)((0x3e00U & (__Vtask_tb_raster__DOT__simulate_expected_output__57__gmeta 
                                          << 3U)))) 
              << 0x10U));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
        = (0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos);
    tb_raster__DOT____Vlvbound_h6671a27d__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                           [0U] 
                                                           >> 0x20U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                             [0U] 
                                                             >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[0U] 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h6671a27d__0)) 
                     << 0x20U));
    tb_raster__DOT____Vlvbound_h666bdeda__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                           [0U] 
                                                           >> 0x10U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                             [0U] 
                                                             >> 0x10U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[0U] 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
            [0U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h666bdeda__0)) 
                     << 0x10U));
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = (0xffffU 
                                               & ((IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                          [0U]) 
                                                  - (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                            [0U])));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[0U] 
        = ((0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
            [0U]) | (IData)((IData)(tb_raster__DOT____Vlvbound_h6667b2ab__0)));
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                     [0U] 
                                                                     >> 0x20U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [0U] 
                                                                       >> 0x20U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                      [0U] 
                                                                      >> 0x20U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                       [0U] 
                                                                       >> 0x20U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [0U] 
                                                                         >> 0x20U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                        [0U] 
                                                                        >> 0x20U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:155: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta x calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                     [0U] 
                                                                     >> 0x10U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [0U] 
                                                                       >> 0x10U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                      [0U] 
                                                                      >> 0x10U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                       [0U] 
                                                                       >> 0x10U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [0U] 
                                                                         >> 0x10U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                        [0U] 
                                                                        >> 0x10U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:160: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta y calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                    [0U])))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                      [0U]))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                     [0U]))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                      [0U])))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                        [0U]))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                       [0U]))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:165: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta z calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h6671a27d__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                           [1U] 
                                                           >> 0x20U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                             [1U] 
                                                             >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[1U] 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h6671a27d__0)) 
                     << 0x20U));
    tb_raster__DOT____Vlvbound_h666bdeda__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                           [1U] 
                                                           >> 0x10U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                             [1U] 
                                                             >> 0x10U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[1U] 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
            [1U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h666bdeda__0)) 
                     << 0x10U));
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = (0xffffU 
                                               & ((IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                          [1U]) 
                                                  - (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                            [1U])));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[1U] 
        = ((0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
            [1U]) | (IData)((IData)(tb_raster__DOT____Vlvbound_h6667b2ab__0)));
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                     [1U] 
                                                                     >> 0x20U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [1U] 
                                                                       >> 0x20U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                      [1U] 
                                                                      >> 0x20U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                       [1U] 
                                                                       >> 0x20U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [1U] 
                                                                         >> 0x20U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                        [1U] 
                                                                        >> 0x20U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:155: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta x calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                     [1U] 
                                                                     >> 0x10U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [1U] 
                                                                       >> 0x10U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                      [1U] 
                                                                      >> 0x10U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                       [1U] 
                                                                       >> 0x10U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [1U] 
                                                                         >> 0x10U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                        [1U] 
                                                                        >> 0x10U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:160: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta y calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                    [1U])))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                      [1U]))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                     [1U]))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                      [1U])))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                        [1U]))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                       [1U]))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:165: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta z calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h6671a27d__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                           [2U] 
                                                           >> 0x20U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                             [2U] 
                                                             >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[2U] 
        = ((0xffffffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h6671a27d__0)) 
                     << 0x20U));
    tb_raster__DOT____Vlvbound_h666bdeda__0 = (0xffffU 
                                               & ((IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                           [2U] 
                                                           >> 0x10U)) 
                                                  - (IData)(
                                                            (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                             [2U] 
                                                             >> 0x10U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[2U] 
        = ((0xffff0000ffffULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
            [2U]) | ((QData)((IData)(tb_raster__DOT____Vlvbound_h666bdeda__0)) 
                     << 0x10U));
    tb_raster__DOT____Vlvbound_h6667b2ab__0 = (0xffffU 
                                               & ((IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                          [2U]) 
                                                  - (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                            [2U])));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas[2U] 
        = ((0xffffffff0000ULL & __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
            [2U]) | (IData)((IData)(tb_raster__DOT____Vlvbound_h6667b2ab__0)));
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                     [2U] 
                                                                     >> 0x20U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [2U] 
                                                                       >> 0x20U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                      [2U] 
                                                                      >> 0x20U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                       [2U] 
                                                                       >> 0x20U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [2U] 
                                                                         >> 0x20U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                        [2U] 
                                                                        >> 0x20U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:155: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta x calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                     [2U] 
                                                                     >> 0x10U))))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [2U] 
                                                                       >> 0x10U)))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                      [2U] 
                                                                      >> 0x10U)))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                       [2U] 
                                                                       >> 0x10U))))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [2U] 
                                                                         >> 0x10U)))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                        [2U] 
                                                                        >> 0x10U)))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:160: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta y calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                    [2U])))) 
                        & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                      [2U]))))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                          (0xffffU 
                                                           & (IData)(
                                                                     __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                     [2U]))))) 
                      | ((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      __Vtask_tb_raster__DOT__simulate_expected_output__57__rotated_v
                                                                      [2U])))) 
                          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                        [2U]))))) 
                         & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                                       [2U]))))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:165: %Ntb_raster.simulate_expected_output.unnamedblk1: Potential overflow in delta z calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                     [0U] 
                                                     >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                     [0U] 
                                                     >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [0U] 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [0U] 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:180: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x subtraction for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [0U] 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [0U] 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:185: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y subtraction for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [0U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [0U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [0U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__58__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [0U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__58__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__58__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__58__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__58__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__59__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__59__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__59__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__59__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__59__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:195: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x multiplication for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [0U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__60__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [0U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__60__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__60__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__60__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__60__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__61__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__61__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__61__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__61__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__61__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:200: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y multiplication for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:208: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge calculation for vertex 0\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h29c82707__0 = (__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                               - __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_edges[0U] 
        = tb_raster__DOT____Vlvbound_h29c82707__0;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                     [1U] 
                                                     >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                     [1U] 
                                                     >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [1U] 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [1U] 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:180: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x subtraction for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [1U] 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [1U] 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:185: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y subtraction for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [1U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [1U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [1U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__58__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [1U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__58__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__58__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__58__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__58__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__59__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__59__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__59__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__59__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__59__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:195: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x multiplication for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [1U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__60__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [1U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__60__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__60__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__60__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__60__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__61__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__61__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__61__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__61__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__61__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:200: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y multiplication for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:208: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge calculation for vertex 1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h29c82707__0 = (__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                               - __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_edges[1U] 
        = tb_raster__DOT____Vlvbound_h29c82707__0;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                     [2U] 
                                                     >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                     [2U] 
                                                     >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [2U] 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [2U] 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:180: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x subtraction for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [2U] 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                         [2U] 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:185: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y subtraction for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [2U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [2U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [2U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__58__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [2U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__58__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__58__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__58__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__58__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__59__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__59__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__59__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__59__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__59__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:195: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge x multiplication for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [2U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__60__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [2U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__60__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__60__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__60__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__60__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__61__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__61__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__61__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__61__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__61__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:200: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge y multiplication for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:208: %Ntb_raster.simulate_expected_output.unnamedblk2.unnamedblk3: Potential overflow in edge calculation for vertex 2\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    tb_raster__DOT____Vlvbound_h29c82707__0 = (__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                               - __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_edges[2U] 
        = tb_raster__DOT____Vlvbound_h29c82707__0;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_metadata 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__gmeta;
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_y0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                           [0U] 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [2U]))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_z0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [0U]))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [2U] 
                                                       >> 0x10U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                        [0U] 
                                                        >> 0x10U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                         [2U]))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_y0z2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__62__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                     [2U]));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__62__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__62__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__62__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__62__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__63__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [0U] 
                                                          >> 0x10U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__63__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__63__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__63__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__63__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:228: %Ntb_raster.simulate_expected_output.unnamedblk4: Potential overflow in coefficient A (y0*z2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [0U])))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [2U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_z0y2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__64__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [2U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__64__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__64__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__64__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__64__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__65__in 
                                    = (0xffffU & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                         [0U]));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__65__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__65__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__65__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__65__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:233: %Ntb_raster.simulate_expected_output.unnamedblk4: Potential overflow in coefficient A (z0*y2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_y0z2_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_y0z2_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_z0y2_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_z0y2_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:241: %Ntb_raster.simulate_expected_output.unnamedblk4: Potential overflow in coefficient A calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_A 
        = (__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_y0z2_mult 
           - __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk4__DOT__temp_z0y2_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_z0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [0U]))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [2U] 
                                                       >> 0x20U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_x0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                           [0U] 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [2U]))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [0U])))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [2U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_z0x2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__66__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [2U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__66__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__66__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__66__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__66__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__67__in 
                                    = (0xffffU & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                         [0U]));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__67__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__67__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__67__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__67__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:257: %Ntb_raster.simulate_expected_output.unnamedblk5: Potential overflow in coefficient B (z0*x2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                        [0U] 
                                                        >> 0x20U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                         [2U]))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_x0z2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__68__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                     [2U]));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__68__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__68__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__68__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__68__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__69__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [0U] 
                                                          >> 0x20U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__69__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__69__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__69__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__69__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:262: %Ntb_raster.simulate_expected_output.unnamedblk5: Potential overflow in coefficient B (x0*z2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_z0x2_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_z0x2_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_x0z2_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_x0z2_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:270: %Ntb_raster.simulate_expected_output.unnamedblk5: Potential overflow in coefficient B calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_B 
        = (__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_z0x2_mult 
           - __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk5__DOT__temp_x0z2_mult);
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_x0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                           [0U] 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [2U] 
                                                       >> 0x10U)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_y0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                           [0U] 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                       [2U] 
                                                       >> 0x20U)))));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                        [0U] 
                                                        >> 0x20U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [2U] 
                                                          >> 0x10U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_x0y2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__70__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [2U] 
                                                      >> 0x10U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__70__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__70__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__70__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__70__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__71__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [0U] 
                                                          >> 0x20U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__71__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__71__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__71__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__71__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:286: %Ntb_raster.simulate_expected_output.unnamedblk6: Potential overflow in coefficient C (x0*y2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & (IData)(
                                                       (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                        [0U] 
                                                        >> 0x10U))))) 
                       & (0U != VL_EXTENDS_II(32,16, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [2U] 
                                                          >> 0x20U)))))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_y0x2_mult, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__72__in 
                                        = (0xffffU 
                                           & (IData)(
                                                     (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                      [2U] 
                                                      >> 0x20U)));
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__72__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__72__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__72__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__72__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__73__in 
                                    = (0xffffU & (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
                                                          [0U] 
                                                          >> 0x10U)));
                                __Vfunc_tb_raster__DOT__sext_f16_f32__73__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__73__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__73__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__73__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:291: %Ntb_raster.simulate_expected_output.unnamedblk6: Potential overflow in coefficient C (y0*x2) calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_x0y2_mult 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_x0y2_mult))) 
                             - (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_y0x2_mult 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_y0x2_mult)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected = 0U;
    if (VL_UNLIKELY((__Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_detected))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:299: %Ntb_raster.simulate_expected_output.unnamedblk6: Potential overflow in coefficient C calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C 
        = (__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_x0y2_mult 
           - __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk6__DOT__temp_y0x2_mult);
    if (VL_UNLIKELY(((0U == __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:307: Assertion failed in %Ntb_raster.simulate_expected_output: Division by zero detected in dz calculations - coefficient C is zero!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_raster.sv", 307, "");
        __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx = 0U;
        __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy = 0U;
    } else {
        __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk7__DOT__div_result_dzdx 
            = (- VL_DIVS_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_A, __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C));
        __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk7__DOT__div_result_dzdy 
            = (- VL_DIVS_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_B, __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C));
        if (VL_UNLIKELY((((0U != __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_A) 
                          & (VL_MULS_III(32, VL_DIVS_III(32, 
                                                         (- __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_A), __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C), __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C) 
                             != (- __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_A)))))) {
            VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:319: %Ntb_raster.simulate_expected_output.unnamedblk7: Non-exact division in dzdx calculation - potential precision loss\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
        }
        if (VL_UNLIKELY((((0U != __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_B) 
                          & (VL_MULS_III(32, VL_DIVS_III(32, 
                                                         (- __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_B), __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C), __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_C) 
                             != (- __Vtask_tb_raster__DOT__simulate_expected_output__57__coeff_B)))))) {
            VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:323: %Ntb_raster.simulate_expected_output.unnamedblk7: Non-exact division in dzdy calculation - potential precision loss\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
        }
        __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx 
            = (0xffffU & (__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk7__DOT__div_result_dzdx 
                          >> 4U));
        __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy 
            = (0xffffU & (__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk7__DOT__div_result_dzdy 
                          >> 4U));
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_x 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                               [0U] >> 0x20U)) - (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                          >> 0x20U))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_y 
        = (0xffffU & ((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                               [0U] >> 0x10U)) - (IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                          >> 0x10U))));
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                     [0U] 
                                                                     >> 0x20U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                       >> 0x20U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_x)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [0U] 
                                                                       >> 0x20U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                         >> 0x20U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_x)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:342: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z delta_x calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                     [0U] 
                                                                     >> 0x10U))))) 
                        & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                       >> 0x10U)))))) 
                       & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_y)))) 
                      | ((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                           (0xffffU 
                                                            & (IData)(
                                                                      (__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                                       [0U] 
                                                                       >> 0x10U))))) 
                          & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, 
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos 
                                                                         >> 0x10U)))))) 
                         & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_y)))))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:347: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z delta_y calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__x_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_x)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx)));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__y_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_y)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy)));
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_x))) 
                       & (0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx)))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__x_component, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__74__in 
                                        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx;
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__74__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__74__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__74__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__74__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__75__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_x;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__75__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__75__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__75__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__75__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:356: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z x_component calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    if (VL_UNLIKELY(((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_y))) 
                       & (0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy)))) 
                      & (VL_DIV_III(32, __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__y_component, 
                                    ([&]() {
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__76__in 
                                        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy;
                                    __Vfunc_tb_raster__DOT__sext_f16_f32__76__Vfuncout 
                                        = (((- (IData)(
                                                       (1U 
                                                        & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__76__in) 
                                                           >> 0xfU)))) 
                                            << 0x14U) 
                                           | ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__76__in) 
                                              << 4U));
                                }(), __Vfunc_tb_raster__DOT__sext_f16_f32__76__Vfuncout)) 
                         != ([&]() {
                                __Vfunc_tb_raster__DOT__sext_f16_f32__77__in 
                                    = __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__delta_y;
                                __Vfunc_tb_raster__DOT__sext_f16_f32__77__Vfuncout 
                                    = (((- (IData)(
                                                   (1U 
                                                    & ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__77__in) 
                                                       >> 0xfU)))) 
                                        << 0x14U) | 
                                       ((IData)(__Vfunc_tb_raster__DOT__sext_f16_f32__77__in) 
                                        << 4U));
                            }(), __Vfunc_tb_raster__DOT__sext_f16_f32__77__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:361: %Ntb_raster.simulate_expected_output.unnamedblk8: Potential overflow in z y_component calculation\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    }
    __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__z_component 
        = (((- (IData)((1U & (IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                      [0U] >> 0xfU))))) 
            << 0x14U) | (0xffff0U & ((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                             [0U]) 
                                     << 4U)));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check 
        = (0x1ffffffffULL & ((((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__x_component 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__x_component))) 
                             + (((QData)((IData)((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__y_component 
                                                  >> 0x1fU))) 
                                 << 0x20U) | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__y_component)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check 
        = (0x1ffffffffULL & (((QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__overflow_check)) 
                              << 1U) + (((QData)((IData)(
                                                         (__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__z_component 
                                                          >> 0x1fU))) 
                                         << 0x20U) 
                                        | (QData)((IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__z_component)))));
    __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_z_current 
        = ((__Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__x_component 
            + __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__y_component) 
           + __Vtask_tb_raster__DOT__simulate_expected_output__57__unnamedblk8__DOT__z_component);
    if ((((0xffffU & (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                             [0U])) == (0xffffU & (IData)(
                                                          __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                          [1U]))) 
         & ((0xffffU & (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__v
                               [1U])) == (0xffffU & (IData)(
                                                            __Vtask_tb_raster__DOT__simulate_expected_output__57__v
                                                            [2U]))))) {
        if (VL_UNLIKELY((((0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx))) 
                          | (0U != VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy))))))) {
            VL_WRITEF_NX("[%0t] %%Warning: tb_raster.sv:384: %Ntb_raster.simulate_expected_output: For flat triangle, expected dzdx and dzdy to be 0, but got dzdx=%0d, dzdy=%0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx),
                         16,__Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy);
        }
    }
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_abs_pos 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_abs_pos;
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
        [0U];
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
        [1U];
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_deltas
        [2U];
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges[0U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_edges
        [0U];
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges[1U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_edges
        [1U];
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges[2U] 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_edges
        [2U];
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_metadata 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_metadata;
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdx 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdx;
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdy 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_dzdy;
    __Vtask_tb_raster__DOT__run_triangle_test__52__exp_z_current 
        = __Vtask_tb_raster__DOT__simulate_expected_output__57__exp_z_current;
    while ((1U & (~ (IData)(vlSelfRef.tb_raster__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_hca70bb26__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_raster.rdy_in)", 
                                                             "tb_raster.sv", 
                                                             414);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_raster__DOT__v0 = __Vtask_tb_raster__DOT__run_triangle_test__52__tv0;
    vlSelfRef.tb_raster__DOT__v1 = __Vtask_tb_raster__DOT__run_triangle_test__52__tv1;
    vlSelfRef.tb_raster__DOT__v2 = __Vtask_tb_raster__DOT__run_triangle_test__52__tv2;
    vlSelfRef.tb_raster__DOT__in_metadata = __Vtask_tb_raster__DOT__run_triangle_test__52__tmeta;
    vlSelfRef.tb_raster__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_hc1c788c7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         424);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_hc1c788c7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         426);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h43a42b1b__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_raster.vld_out)", 
                                                         "tb_raster.sv", 
                                                         427);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Expected Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0d, dzdy: %0d\nz_current: %0d\ndelta_0: x= %0d, y=%0d, z=%0d\nedge_0: %0d\ndelta_1: x= %0d, y=%0d, z=%0d\nedge_1: %0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_2: %0d\n--- Real Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0#, dzdy: %0#\nz_current: %0#\ndelta_0: x= %0d, y=%0d, z=%0d\ndelta_1: x= %0d, y=%0d, z=%0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n",0,
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_abs_pos 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_abs_pos 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_abs_pos)),
                 16,(IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdx),
                 16,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdy,
                 32,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_z_current,
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                        [0U] >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                        [0U] >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                       [0U])),32,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges
                 [0U],16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                             [1U] >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                        [1U] >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                       [1U])),32,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges
                 [1U],16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                             [2U] >> 0x20U))),
                 16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                        [2U] >> 0x10U))),
                 16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                       [2U])),32,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges
                 [2U],16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_abs_pos 
                                             >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_abs_pos 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_abs_pos)),
                 16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdx),
                 16,vlSelfRef.tb_raster__DOT__out_dzdy,
                 32,vlSelfRef.tb_raster__DOT__out_z_current,
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0)),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1)),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                        >> 0x20U))),
                 16,(0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                        >> 0x10U))),
                 16,(0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2)),
                 32,vlSelfRef.tb_raster__DOT__out_edge_0,
                 32,vlSelfRef.tb_raster__DOT__out_edge_1,
                 32,vlSelfRef.tb_raster__DOT__out_edge_2);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_abs_pos 
                          != __Vtask_tb_raster__DOT__run_triangle_test__52__exp_abs_pos)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:454: Assertion failed in %Ntb_raster.run_triangle_test: abs_pos mismatch: %15# vs %15#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),48,vlSelfRef.tb_raster__DOT__out_abs_pos,
                         48,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_abs_pos);
            VL_STOP_MT("tb_raster.sv", 454, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                 [0U] 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:456: Assertion failed in %Ntb_raster.run_triangle_test: delta_0.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_0 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                [0U] 
                                                >> 0x20U))));
            VL_STOP_MT("tb_raster.sv", 456, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_0 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                 [0U] 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:458: Assertion failed in %Ntb_raster.run_triangle_test: delta_0.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_0 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                [0U] 
                                                >> 0x10U))));
            VL_STOP_MT("tb_raster.sv", 458, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0)) 
                          != (0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                [0U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:460: Assertion failed in %Ntb_raster.run_triangle_test: delta_0.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0)),
                         16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                               [0U])));
            VL_STOP_MT("tb_raster.sv", 460, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_edge_0 
                          != __Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges
                          [0U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:462: Assertion failed in %Ntb_raster.run_triangle_test: edge_0 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_edge_0,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges
                         [0U]);
            VL_STOP_MT("tb_raster.sv", 462, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                 [1U] 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:465: Assertion failed in %Ntb_raster.run_triangle_test: delta_1.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_1 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                [1U] 
                                                >> 0x20U))));
            VL_STOP_MT("tb_raster.sv", 465, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_1 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                 [1U] 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:467: Assertion failed in %Ntb_raster.run_triangle_test: delta_1.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_1 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                [1U] 
                                                >> 0x10U))));
            VL_STOP_MT("tb_raster.sv", 467, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1)) 
                          != (0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                [1U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:469: Assertion failed in %Ntb_raster.run_triangle_test: delta_1.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1)),
                         16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                               [1U])));
            VL_STOP_MT("tb_raster.sv", 469, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_edge_1 
                          != __Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges
                          [1U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:471: Assertion failed in %Ntb_raster.run_triangle_test: edge_1 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_edge_1,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges
                         [1U]);
            VL_STOP_MT("tb_raster.sv", 471, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                 [2U] 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:474: Assertion failed in %Ntb_raster.run_triangle_test: delta_2.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_2 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                [2U] 
                                                >> 0x20U))));
            VL_STOP_MT("tb_raster.sv", 474, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__out_delta_2 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                 [2U] 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:476: Assertion failed in %Ntb_raster.run_triangle_test: delta_2.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_raster__DOT__out_delta_2 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                [2U] 
                                                >> 0x10U))));
            VL_STOP_MT("tb_raster.sv", 476, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2)) 
                          != (0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                                [2U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:478: Assertion failed in %Ntb_raster.run_triangle_test: delta_2.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2)),
                         16,(0xffffU & (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_deltas
                                               [2U])));
            VL_STOP_MT("tb_raster.sv", 478, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_edge_2 
                          != __Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges
                          [2U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:480: Assertion failed in %Ntb_raster.run_triangle_test: edge_2 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_edge_2,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_edges
                         [2U]);
            VL_STOP_MT("tb_raster.sv", 480, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_metadata 
                          != __Vtask_tb_raster__DOT__run_triangle_test__52__exp_metadata)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:483: Assertion failed in %Ntb_raster.run_triangle_test: metadata mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_raster.sv", 483, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_raster__DOT__out_dzdx) 
                          != (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdx))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:485: Assertion failed in %Ntb_raster.run_triangle_test: dzdx mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdx),
                         16,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdx);
            VL_STOP_MT("tb_raster.sv", 485, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_raster__DOT__out_dzdy) 
                          != (IData)(__Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdy))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:487: Assertion failed in %Ntb_raster.run_triangle_test: dzdy mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_raster__DOT__out_dzdy),
                         16,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_dzdy);
            VL_STOP_MT("tb_raster.sv", 487, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_raster__DOT__out_z_current 
                          != __Vtask_tb_raster__DOT__run_triangle_test__52__exp_z_current)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_raster.sv:489: Assertion failed in %Ntb_raster.run_triangle_test: z_current mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_raster__DOT__out_z_current,
                         32,__Vtask_tb_raster__DOT__run_triangle_test__52__exp_z_current);
            VL_STOP_MT("tb_raster.sv", 489, "");
        }
    }
    vlSelfRef.tb_raster__DOT__rdy_out = 1U;
    co_await vlSelfRef.__VtrigSched_h43a42bda__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.vld_out)", 
                                                         "tb_raster.sv", 
                                                         493);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_raster__DOT__rdy_out = 0U;
    co_await vlSelfRef.__VtrigSched_hc1c788c7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_raster.clk)", 
                                                         "tb_raster.sv", 
                                                         495);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_raster.sv", 110, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_raster___024root___dump_triggers__act(Vtb_raster___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_raster___024root___eval_triggers__act(Vtb_raster___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root___eval_triggers__act\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_raster__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_raster__DOT__rdy_in) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__rdy_in__0)));
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.tb_raster__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_raster__DOT__vld_out) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__vld_out__0))));
    vlSelfRef.__VactTriggered.set(5U, ((~ (IData)(vlSelfRef.tb_raster__DOT__vld_out)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__vld_out__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__clk__0 
        = vlSelfRef.tb_raster__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__rdy_in__0 
        = vlSelfRef.tb_raster__DOT__rdy_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_raster__DOT__vld_out__0 
        = vlSelfRef.tb_raster__DOT__vld_out;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_raster___024root___dump_triggers__act(vlSelf);
    }
#endif
}
