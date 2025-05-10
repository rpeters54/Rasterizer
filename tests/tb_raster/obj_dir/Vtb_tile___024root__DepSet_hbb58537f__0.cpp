// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tile.h for the primary calling header

#include "Vtb_tile__pch.h"
#include "Vtb_tile__Syms.h"
#include "Vtb_tile___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_tile___024root___eval_initial__TOP__Vtiming__1(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = 0;
    IData/*31:0*/ tb_tile__DOT____Vlvbound_h77fbc91e__0;
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__tv0;
    __Vtask_tb_tile__DOT__run_triangle_test__0__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__tv1;
    __Vtask_tb_tile__DOT__run_triangle_test__0__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__tv2;
    __Vtask_tb_tile__DOT__run_triangle_test__0__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__tmeta;
    __Vtask_tb_tile__DOT__run_triangle_test__0__tmeta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta;
    __Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__exp_abs_pos;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__exp_metadata;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdx;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdy;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__exp_z_current;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_z_current = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_A;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_B;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_C;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_C = 0;
    IData/*18:0*/ __Vfunc_tb_tile__DOT__make_meta__1__Vfuncout;
    __Vfunc_tb_tile__DOT__make_meta__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tile__DOT__make_meta__1__colors_in;
    __Vfunc_tb_tile__DOT__make_meta__1__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_tile__DOT__make_meta__1__tile_x_in;
    __Vfunc_tb_tile__DOT__make_meta__1__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_tile__DOT__make_meta__1__tile_y_in;
    __Vfunc_tb_tile__DOT__make_meta__1__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__2__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__2__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__2__x_in;
    __Vfunc_tb_tile__DOT__make_coord__2__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__2__y_in;
    __Vfunc_tb_tile__DOT__make_coord__2__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__2__z_in;
    __Vfunc_tb_tile__DOT__make_coord__2__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__3__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__3__x_in;
    __Vfunc_tb_tile__DOT__make_coord__3__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__3__y_in;
    __Vfunc_tb_tile__DOT__make_coord__3__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__3__z_in;
    __Vfunc_tb_tile__DOT__make_coord__3__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__4__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__4__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__4__x_in;
    __Vfunc_tb_tile__DOT__make_coord__4__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__4__y_in;
    __Vfunc_tb_tile__DOT__make_coord__4__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__4__z_in;
    __Vfunc_tb_tile__DOT__make_coord__4__z_in = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__gv0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__gv1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__gv2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__gmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__gmeta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_1;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_2;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_2 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_0 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_1;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_1 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_2;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_metadata;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdx;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdy;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_z_current;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_z_current = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_A;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_B;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_C;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_C = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdx;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdx = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdy;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdy = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__5__v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__5__v[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__5__rotated_v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__5__rotated_v[__Vi0] = 0;
    }
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d2;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d2 = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edges[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas[__Vi0] = 0;
    }
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__tv0;
    __Vtask_tb_tile__DOT__run_triangle_test__6__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__tv1;
    __Vtask_tb_tile__DOT__run_triangle_test__6__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__tv2;
    __Vtask_tb_tile__DOT__run_triangle_test__6__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__tmeta;
    __Vtask_tb_tile__DOT__run_triangle_test__6__tmeta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta;
    __Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__exp_abs_pos;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__exp_metadata;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdx;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdy;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__exp_z_current;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_z_current = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_A;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_B;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_C;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_C = 0;
    IData/*18:0*/ __Vfunc_tb_tile__DOT__make_meta__7__Vfuncout;
    __Vfunc_tb_tile__DOT__make_meta__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tile__DOT__make_meta__7__colors_in;
    __Vfunc_tb_tile__DOT__make_meta__7__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_tile__DOT__make_meta__7__tile_x_in;
    __Vfunc_tb_tile__DOT__make_meta__7__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_tile__DOT__make_meta__7__tile_y_in;
    __Vfunc_tb_tile__DOT__make_meta__7__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__8__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__8__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__8__x_in;
    __Vfunc_tb_tile__DOT__make_coord__8__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__8__y_in;
    __Vfunc_tb_tile__DOT__make_coord__8__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__8__z_in;
    __Vfunc_tb_tile__DOT__make_coord__8__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__9__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__9__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__9__x_in;
    __Vfunc_tb_tile__DOT__make_coord__9__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__9__y_in;
    __Vfunc_tb_tile__DOT__make_coord__9__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__9__z_in;
    __Vfunc_tb_tile__DOT__make_coord__9__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__10__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__10__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__10__x_in;
    __Vfunc_tb_tile__DOT__make_coord__10__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__10__y_in;
    __Vfunc_tb_tile__DOT__make_coord__10__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__10__z_in;
    __Vfunc_tb_tile__DOT__make_coord__10__z_in = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__gv0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__gv1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__gv2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__gmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__gmeta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_1;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_2;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_2 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_0 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_1;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_1 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_2;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_metadata;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdx;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdy;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_z_current;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_z_current = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_A;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_B;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_C;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_C = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk4__DOT__temp_y0z2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk4__DOT__temp_y0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk4__DOT__temp_z0y2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk4__DOT__temp_z0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk5__DOT__temp_z0x2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk5__DOT__temp_z0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk5__DOT__temp_x0z2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk5__DOT__temp_x0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk6__DOT__temp_x0y2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk6__DOT__temp_x0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk6__DOT__temp_y0x2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk6__DOT__temp_y0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk7__DOT__div_result_dzdx;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk7__DOT__div_result_dzdx = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk7__DOT__div_result_dzdy;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk7__DOT__div_result_dzdy = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__delta_x;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__delta_x = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__delta_y;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__delta_y = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__x_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__x_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__y_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__y_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__z_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__z_component = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__11__v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__11__v[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__11__rotated_v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__11__rotated_v[__Vi0] = 0;
    }
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d2;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d2 = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edges[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas[__Vi0] = 0;
    }
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__tv0;
    __Vtask_tb_tile__DOT__run_triangle_test__12__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__tv1;
    __Vtask_tb_tile__DOT__run_triangle_test__12__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__tv2;
    __Vtask_tb_tile__DOT__run_triangle_test__12__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__tmeta;
    __Vtask_tb_tile__DOT__run_triangle_test__12__tmeta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta;
    __Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__exp_abs_pos;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__exp_metadata;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdx;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdy;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__exp_z_current;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_z_current = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_A;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_B;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_C;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_C = 0;
    IData/*18:0*/ __Vfunc_tb_tile__DOT__make_meta__13__Vfuncout;
    __Vfunc_tb_tile__DOT__make_meta__13__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tile__DOT__make_meta__13__colors_in;
    __Vfunc_tb_tile__DOT__make_meta__13__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_tile__DOT__make_meta__13__tile_x_in;
    __Vfunc_tb_tile__DOT__make_meta__13__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_tile__DOT__make_meta__13__tile_y_in;
    __Vfunc_tb_tile__DOT__make_meta__13__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__14__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__14__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__14__x_in;
    __Vfunc_tb_tile__DOT__make_coord__14__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__14__y_in;
    __Vfunc_tb_tile__DOT__make_coord__14__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__14__z_in;
    __Vfunc_tb_tile__DOT__make_coord__14__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__15__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__15__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__15__x_in;
    __Vfunc_tb_tile__DOT__make_coord__15__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__15__y_in;
    __Vfunc_tb_tile__DOT__make_coord__15__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__15__z_in;
    __Vfunc_tb_tile__DOT__make_coord__15__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__16__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__16__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__16__x_in;
    __Vfunc_tb_tile__DOT__make_coord__16__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__16__y_in;
    __Vfunc_tb_tile__DOT__make_coord__16__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__16__z_in;
    __Vfunc_tb_tile__DOT__make_coord__16__z_in = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__gv0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__gv1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__gv2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__gmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__gmeta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_1;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_2;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_2 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_0 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_1;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_1 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_2;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_metadata;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdx;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdy;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_z_current;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_z_current = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_A;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_B;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_C;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_C = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk4__DOT__temp_y0z2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk4__DOT__temp_y0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk4__DOT__temp_z0y2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk4__DOT__temp_z0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk5__DOT__temp_z0x2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk5__DOT__temp_z0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk5__DOT__temp_x0z2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk5__DOT__temp_x0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk6__DOT__temp_x0y2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk6__DOT__temp_x0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk6__DOT__temp_y0x2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk6__DOT__temp_y0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk7__DOT__div_result_dzdx;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk7__DOT__div_result_dzdx = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk7__DOT__div_result_dzdy;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk7__DOT__div_result_dzdy = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__delta_x;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__delta_x = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__delta_y;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__delta_y = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__x_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__x_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__y_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__y_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__z_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__z_component = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__17__v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__17__v[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__17__rotated_v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__17__rotated_v[__Vi0] = 0;
    }
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d2;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d2 = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edges[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas[__Vi0] = 0;
    }
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__tv0;
    __Vtask_tb_tile__DOT__run_triangle_test__18__tv0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__tv1;
    __Vtask_tb_tile__DOT__run_triangle_test__18__tv1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__tv2;
    __Vtask_tb_tile__DOT__run_triangle_test__18__tv2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__tmeta;
    __Vtask_tb_tile__DOT__run_triangle_test__18__tmeta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta;
    __Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__exp_abs_pos;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_abs_pos = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas[__Vi0] = 0;
    }
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges[__Vi0] = 0;
    }
    IData/*18:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__exp_metadata;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdx;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdy;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__exp_z_current;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_z_current = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_A;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_B;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_C;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_C = 0;
    IData/*18:0*/ __Vfunc_tb_tile__DOT__make_meta__19__Vfuncout;
    __Vfunc_tb_tile__DOT__make_meta__19__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tile__DOT__make_meta__19__colors_in;
    __Vfunc_tb_tile__DOT__make_meta__19__colors_in = 0;
    CData/*5:0*/ __Vfunc_tb_tile__DOT__make_meta__19__tile_x_in;
    __Vfunc_tb_tile__DOT__make_meta__19__tile_x_in = 0;
    CData/*4:0*/ __Vfunc_tb_tile__DOT__make_meta__19__tile_y_in;
    __Vfunc_tb_tile__DOT__make_meta__19__tile_y_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__20__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__20__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__20__x_in;
    __Vfunc_tb_tile__DOT__make_coord__20__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__20__y_in;
    __Vfunc_tb_tile__DOT__make_coord__20__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__20__z_in;
    __Vfunc_tb_tile__DOT__make_coord__20__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__21__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__21__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__21__x_in;
    __Vfunc_tb_tile__DOT__make_coord__21__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__21__y_in;
    __Vfunc_tb_tile__DOT__make_coord__21__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__21__z_in;
    __Vfunc_tb_tile__DOT__make_coord__21__z_in = 0;
    QData/*47:0*/ __Vfunc_tb_tile__DOT__make_coord__22__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__22__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__22__x_in;
    __Vfunc_tb_tile__DOT__make_coord__22__x_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__22__y_in;
    __Vfunc_tb_tile__DOT__make_coord__22__y_in = 0;
    SData/*15:0*/ __Vfunc_tb_tile__DOT__make_coord__22__z_in;
    __Vfunc_tb_tile__DOT__make_coord__22__z_in = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__gv0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__gv1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__gv2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__gmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__gmeta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_1;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_1 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_2;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_2 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_0 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_1;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_1 = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_2;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_2 = 0;
    IData/*18:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_metadata;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_metadata = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdx;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdx = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdy;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdy = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_z_current;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_z_current = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_A;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_A = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_B;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_B = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_C;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_C = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk4__DOT__temp_y0z2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk4__DOT__temp_y0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk4__DOT__temp_z0y2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk4__DOT__temp_z0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk5__DOT__temp_z0x2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk5__DOT__temp_z0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk5__DOT__temp_x0z2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk5__DOT__temp_x0z2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk6__DOT__temp_x0y2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk6__DOT__temp_x0y2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk6__DOT__temp_y0x2_mult;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk6__DOT__temp_y0x2_mult = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk7__DOT__div_result_dzdx;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk7__DOT__div_result_dzdx = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk7__DOT__div_result_dzdy;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk7__DOT__div_result_dzdy = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__delta_x;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__delta_x = 0;
    SData/*15:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__delta_y;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__delta_y = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__x_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__x_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__y_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__y_component = 0;
    IData/*31:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__z_component;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__z_component = 0;
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__23__v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__23__v[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__23__rotated_v;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__23__rotated_v[__Vi0] = 0;
    }
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d0 = 0;
    QData/*47:0*/ __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d2;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d2 = 0;
    VlUnpacked<IData/*31:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edges;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edges[__Vi0] = 0;
    }
    VlUnpacked<QData/*47:0*/, 3> __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas[__Vi0] = 0;
    }
    // Body
    vlSelfRef.tb_tile__DOT__rst_n = 0U;
    vlSelfRef.tb_tile__DOT__rdy_out = 0U;
    vlSelfRef.tb_tile__DOT__vld_in = 0U;
    vlSelfRef.tb_tile__DOT__v0 = 0ULL;
    vlSelfRef.tb_tile__DOT__v1 = 0ULL;
    vlSelfRef.tb_tile__DOT__v2 = 0ULL;
    vlSelfRef.tb_tile__DOT__in_metadata = 0U;
    co_await vlSelfRef.__VtrigSched_h066b40b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         89);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h066b40b5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         89);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__rst_n = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_tile__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h3f3f19a8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_tile.rdy_in)", 
                                                             "tb_tile.sv", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vfunc_tb_tile__DOT__make_meta__1__tile_y_in = 0U;
    __Vfunc_tb_tile__DOT__make_meta__1__tile_x_in = 0U;
    __Vfunc_tb_tile__DOT__make_meta__1__colors_in = 1U;
    vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta 
        = (((IData)(__Vfunc_tb_tile__DOT__make_meta__1__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_tile__DOT__make_meta__1__tile_x_in) 
                         << 5U) | (IData)(__Vfunc_tb_tile__DOT__make_meta__1__tile_y_in)));
    __Vfunc_tb_tile__DOT__make_meta__1__Vfuncout = vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta;
    __Vtask_tb_tile__DOT__run_triangle_test__0__tmeta 
        = __Vfunc_tb_tile__DOT__make_meta__1__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__2__z_in = 0x200U;
    __Vfunc_tb_tile__DOT__make_coord__2__y_in = 2U;
    __Vfunc_tb_tile__DOT__make_coord__2__x_in = 7U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__2__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__2__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__2__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__2__Vfuncout = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__0__tv2 
        = __Vfunc_tb_tile__DOT__make_coord__2__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__3__z_in = 0x200U;
    __Vfunc_tb_tile__DOT__make_coord__3__y_in = 0xfU;
    __Vfunc_tb_tile__DOT__make_coord__3__x_in = 0xcU;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__3__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__3__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__3__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__3__Vfuncout = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__0__tv1 
        = __Vfunc_tb_tile__DOT__make_coord__3__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__4__z_in = 0x200U;
    __Vfunc_tb_tile__DOT__make_coord__4__y_in = 0xeU;
    __Vfunc_tb_tile__DOT__make_coord__4__x_in = 1U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__4__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__4__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__4__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__4__Vfuncout = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__0__tv0 
        = __Vfunc_tb_tile__DOT__make_coord__4__Vfuncout;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__gmeta 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__tmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__gv2 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__tv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__gv1 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__tv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__gv0 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__tv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__v[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__v[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__v[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__rotated_v[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__rotated_v[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__rotated_v[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
        = ((0xffffffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos) 
           | ((QData)((IData)((0x3f00U & (__Vtask_tb_tile__DOT__simulate_expected_output__5__gmeta 
                                          << 3U)))) 
              << 0x20U));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
        = ((0xffff0000ffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos) 
           | ((QData)((IData)((0x1f00U & (__Vtask_tb_tile__DOT__simulate_expected_output__5__gmeta 
                                          << 8U)))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
        = (0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos);
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__rotated_v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas[0U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__rotated_v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas[1U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__rotated_v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas[2U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_1 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edges[0U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edges[1U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edges[2U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edges
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_1 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edges
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edges
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_metadata 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__gmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d0 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d2))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d0))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d2 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_A 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_y0z2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk4__DOT__temp_z0y2_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d0))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d2 
                                                       >> 0x20U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d0 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d2))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_B 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_z0x2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk5__DOT__temp_x0z2_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d0 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d2 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d0 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_d2 
                                                       >> 0x20U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_C 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_x0y2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk6__DOT__temp_y0x2_mult);
    if (VL_UNLIKELY(((0U == __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_C)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:248: Assertion failed in %Ntb_tile.simulate_expected_output: Division by zero detected in dz calculations - coefficient C is zero!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_tile.sv", 248, "");
        __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdx = 0U;
        __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdy = 0U;
    } else {
        __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdx 
            = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_A, 8U), __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_C));
        __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdy 
            = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_B, 8U), __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_C));
        __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdx 
            = (0xffffU & (__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdx 
                          >> 4U));
        __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdy 
            = (0xffffU & (__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk7__DOT__div_result_dzdy 
                          >> 4U));
    }
    __Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_x)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdx)));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__delta_y)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdy)));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component 
        = (((- (IData)((1U & (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v 
                                      >> 0xfU))))) 
            << 0x14U) | (0xffff0U & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__5__temp_v) 
                                     << 4U)));
    __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_z_current 
        = ((__Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__z_component 
            - __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__x_component) 
           - __Vtask_tb_tile__DOT__simulate_expected_output__5__unnamedblk8__DOT__y_component);
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_abs_pos 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_abs_pos;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_0;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_1;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_delta_2;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_0;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_1;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_edge_2;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_metadata 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_metadata;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdx 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdx;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdy 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_dzdy;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_z_current 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_z_current;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_A 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_A;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_B 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_B;
    __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_C 
        = __Vtask_tb_tile__DOT__simulate_expected_output__5__exp_coeff_C;
    while ((1U & (~ (IData)(vlSelfRef.tb_tile__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h3f3f19a8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_tile.rdy_in)", 
                                                             "tb_tile.sv", 
                                                             313);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_tile__DOT__v0 = __Vtask_tb_tile__DOT__run_triangle_test__0__tv0;
    vlSelfRef.tb_tile__DOT__v1 = __Vtask_tb_tile__DOT__run_triangle_test__0__tv1;
    vlSelfRef.tb_tile__DOT__v2 = __Vtask_tb_tile__DOT__run_triangle_test__0__tv2;
    vlSelfRef.tb_tile__DOT__in_metadata = __Vtask_tb_tile__DOT__run_triangle_test__0__tmeta;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         322);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         324);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         326);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5a39fa9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_tile.vld_out)", 
                                                         "tb_tile.sv", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Expected Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0d, dzdy: %0d\nz_current: %0d\ncoeff_A: %0d\ncoeff_B: %0d\ncoeff_C: %0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__0__exp_abs_pos 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__0__exp_abs_pos 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__exp_abs_pos)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdx), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdy), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__0__exp_z_current, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_A, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_B, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__0__exp_coeff_C, 8U));
    __Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas
        [0U];
    VL_WRITEF_NX("delta_0: x= %0d, y=%0d, z=%0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta)), 4U)));
    __Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas
        [1U];
    VL_WRITEF_NX("delta_1: x= %0d, y=%0d, z=%0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta)), 4U)));
    __Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas
        [2U];
    VL_WRITEF_NX("delta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n--- Real Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0#, dzdy: %0#\nz_current: %0#\ndelta_0: x= %0d, y=%0d, z=%0d\ndelta_1: x= %0d, y=%0d, z=%0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta)), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges
                                   [0U], 8U),32,VL_SHIFTRS_III(32,32,32, 
                                                               __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges
                                                               [1U], 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges
                                   [2U], 8U),16,(0xffffU 
                                                 & VL_SHIFTRS_III(16,16,32, 
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                                              >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_abs_pos)), 4U)),
                 16,(0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.tb_tile__DOT__out_dzdx), 4U)),
                 16,(0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.tb_tile__DOT__out_dzdy), 4U)),
                 32,VL_SHIFTR_III(32,32,32, vlSelfRef.tb_tile__DOT__out_z_current, 8U),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_0, 8U),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_1, 8U),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_2, 8U));
    __Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas
        [0U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_abs_pos 
                          != __Vtask_tb_tile__DOT__run_triangle_test__0__exp_abs_pos)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:363: Assertion failed in %Ntb_tile.run_triangle_test: abs_pos mismatch: %15# vs %15#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),48,vlSelfRef.tb_tile__DOT__out_abs_pos,
                         48,__Vtask_tb_tile__DOT__run_triangle_test__0__exp_abs_pos);
            VL_STOP_MT("tb_tile.sv", 363, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_0 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:365: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 365, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_0 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:367: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 367, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:369: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 369, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_0 
                          != __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges
                          [0U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:371: Assertion failed in %Ntb_tile.run_triangle_test: edge_0 mismatch: %0d vs %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_0,
                         48,__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta);
            VL_STOP_MT("tb_tile.sv", 371, "");
        }
    }
    __Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas
        [1U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_1 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:375: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 375, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_1 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:377: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 377, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:379: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 379, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_1 
                          != __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges
                          [1U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:381: Assertion failed in %Ntb_tile.run_triangle_test: edge_1 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_1,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges
                         [1U]);
            VL_STOP_MT("tb_tile.sv", 381, "");
        }
    }
    __Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__0__exp_deltas
        [2U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_2 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:385: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 385, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_2 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:387: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 387, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:389: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 389, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_2 
                          != __Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges
                          [2U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:391: Assertion failed in %Ntb_tile.run_triangle_test: edge_2 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_2,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__0__exp_edges
                         [2U]);
            VL_STOP_MT("tb_tile.sv", 391, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_metadata 
                          != __Vtask_tb_tile__DOT__run_triangle_test__0__exp_metadata)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:394: Assertion failed in %Ntb_tile.run_triangle_test: metadata mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_tile.sv", 394, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_tile__DOT__out_dzdx) 
                          != (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdx))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:396: Assertion failed in %Ntb_tile.run_triangle_test: dzdx mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_tile__DOT__out_dzdx),
                         16,__Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdx);
            VL_STOP_MT("tb_tile.sv", 396, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_tile__DOT__out_dzdy) 
                          != (IData)(__Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdy))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:398: Assertion failed in %Ntb_tile.run_triangle_test: dzdy mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_tile__DOT__out_dzdy),
                         16,__Vtask_tb_tile__DOT__run_triangle_test__0__exp_dzdy);
            VL_STOP_MT("tb_tile.sv", 398, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_z_current 
                          != __Vtask_tb_tile__DOT__run_triangle_test__0__exp_z_current)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:400: Assertion failed in %Ntb_tile.run_triangle_test: z_current mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_z_current,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__0__exp_z_current);
            VL_STOP_MT("tb_tile.sv", 400, "");
        }
    }
    vlSelfRef.tb_tile__DOT__rdy_out = 1U;
    co_await vlSelfRef.__VtrigSched_h5a39fb5f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.vld_out)", 
                                                         "tb_tile.sv", 
                                                         404);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__rdy_out = 0U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         406);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_tile__DOT__make_meta__7__tile_y_in = 0U;
    __Vfunc_tb_tile__DOT__make_meta__7__tile_x_in = 0U;
    __Vfunc_tb_tile__DOT__make_meta__7__colors_in = 2U;
    vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta 
        = (((IData)(__Vfunc_tb_tile__DOT__make_meta__7__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_tile__DOT__make_meta__7__tile_x_in) 
                         << 5U) | (IData)(__Vfunc_tb_tile__DOT__make_meta__7__tile_y_in)));
    __Vfunc_tb_tile__DOT__make_meta__7__Vfuncout = vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta;
    __Vtask_tb_tile__DOT__run_triangle_test__6__tmeta 
        = __Vfunc_tb_tile__DOT__make_meta__7__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__8__z_in = 0x400U;
    __Vfunc_tb_tile__DOT__make_coord__8__y_in = 1U;
    __Vfunc_tb_tile__DOT__make_coord__8__x_in = 0x14U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__8__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__8__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__8__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__8__Vfuncout = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__6__tv2 
        = __Vfunc_tb_tile__DOT__make_coord__8__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__9__z_in = 0x100U;
    __Vfunc_tb_tile__DOT__make_coord__9__y_in = 2U;
    __Vfunc_tb_tile__DOT__make_coord__9__x_in = 1U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__9__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__9__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__9__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__9__Vfuncout = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__6__tv1 
        = __Vfunc_tb_tile__DOT__make_coord__9__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__10__z_in = 0x100U;
    __Vfunc_tb_tile__DOT__make_coord__10__y_in = 1U;
    __Vfunc_tb_tile__DOT__make_coord__10__x_in = 1U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__10__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__10__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__10__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__10__Vfuncout 
        = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__6__tv0 
        = __Vfunc_tb_tile__DOT__make_coord__10__Vfuncout;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__gmeta 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__tmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__gv2 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__tv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__gv1 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__tv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__gv0 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__tv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__v[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__v[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__v[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__rotated_v[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__rotated_v[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__rotated_v[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
        = ((0xffffffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos) 
           | ((QData)((IData)((0x3f00U & (__Vtask_tb_tile__DOT__simulate_expected_output__11__gmeta 
                                          << 3U)))) 
              << 0x20U));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
        = ((0xffff0000ffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos) 
           | ((QData)((IData)((0x1f00U & (__Vtask_tb_tile__DOT__simulate_expected_output__11__gmeta 
                                          << 8U)))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
        = (0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos);
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__rotated_v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas[0U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__rotated_v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas[1U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__rotated_v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas[2U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_1 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edges[0U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edges[1U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edges[2U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edges
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_1 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edges
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edges
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_metadata 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__gmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk4__DOT__temp_y0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d0 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d2))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk4__DOT__temp_z0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d0))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d2 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_A 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk4__DOT__temp_y0z2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk4__DOT__temp_z0y2_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk5__DOT__temp_z0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d0))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d2 
                                                       >> 0x20U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk5__DOT__temp_x0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d0 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d2))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_B 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk5__DOT__temp_z0x2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk5__DOT__temp_x0z2_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk6__DOT__temp_x0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d0 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d2 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk6__DOT__temp_y0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d0 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_d2 
                                                       >> 0x20U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_C 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk6__DOT__temp_x0y2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk6__DOT__temp_y0x2_mult);
    if (VL_UNLIKELY(((0U == __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_C)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:248: Assertion failed in %Ntb_tile.simulate_expected_output: Division by zero detected in dz calculations - coefficient C is zero!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_tile.sv", 248, "");
        __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdx = 0U;
        __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdy = 0U;
    } else {
        __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk7__DOT__div_result_dzdx 
            = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_A, 8U), __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_C));
        __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk7__DOT__div_result_dzdy 
            = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_B, 8U), __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_C));
        __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdx 
            = (0xffffU & (__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk7__DOT__div_result_dzdx 
                          >> 4U));
        __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdy 
            = (0xffffU & (__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk7__DOT__div_result_dzdy 
                          >> 4U));
    }
    __Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__delta_x 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__delta_y 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__x_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__delta_x)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdx)));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__y_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__delta_y)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdy)));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__z_component 
        = (((- (IData)((1U & (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v 
                                      >> 0xfU))))) 
            << 0x14U) | (0xffff0U & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__11__temp_v) 
                                     << 4U)));
    __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_z_current 
        = ((__Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__z_component 
            - __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__x_component) 
           - __Vtask_tb_tile__DOT__simulate_expected_output__11__unnamedblk8__DOT__y_component);
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_abs_pos 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_abs_pos;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_0;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_1;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_delta_2;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_0;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_1;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_edge_2;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_metadata 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_metadata;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdx 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdx;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdy 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_dzdy;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_z_current 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_z_current;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_A 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_A;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_B 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_B;
    __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_C 
        = __Vtask_tb_tile__DOT__simulate_expected_output__11__exp_coeff_C;
    while ((1U & (~ (IData)(vlSelfRef.tb_tile__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h3f3f19a8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_tile.rdy_in)", 
                                                             "tb_tile.sv", 
                                                             313);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_tile__DOT__v0 = __Vtask_tb_tile__DOT__run_triangle_test__6__tv0;
    vlSelfRef.tb_tile__DOT__v1 = __Vtask_tb_tile__DOT__run_triangle_test__6__tv1;
    vlSelfRef.tb_tile__DOT__v2 = __Vtask_tb_tile__DOT__run_triangle_test__6__tv2;
    vlSelfRef.tb_tile__DOT__in_metadata = __Vtask_tb_tile__DOT__run_triangle_test__6__tmeta;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         322);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         324);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         326);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5a39fa9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_tile.vld_out)", 
                                                         "tb_tile.sv", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Expected Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0d, dzdy: %0d\nz_current: %0d\ncoeff_A: %0d\ncoeff_B: %0d\ncoeff_C: %0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__6__exp_abs_pos 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__6__exp_abs_pos 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__exp_abs_pos)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdx), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdy), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__6__exp_z_current, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_A, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_B, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__6__exp_coeff_C, 8U));
    __Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas
        [0U];
    VL_WRITEF_NX("delta_0: x= %0d, y=%0d, z=%0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta)), 4U)));
    __Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas
        [1U];
    VL_WRITEF_NX("delta_1: x= %0d, y=%0d, z=%0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta)), 4U)));
    __Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas
        [2U];
    VL_WRITEF_NX("delta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n--- Real Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0#, dzdy: %0#\nz_current: %0#\ndelta_0: x= %0d, y=%0d, z=%0d\ndelta_1: x= %0d, y=%0d, z=%0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta)), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges
                                   [0U], 8U),32,VL_SHIFTRS_III(32,32,32, 
                                                               __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges
                                                               [1U], 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges
                                   [2U], 8U),16,(0xffffU 
                                                 & VL_SHIFTRS_III(16,16,32, 
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                                              >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_abs_pos)), 4U)),
                 16,(0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.tb_tile__DOT__out_dzdx), 4U)),
                 16,(0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.tb_tile__DOT__out_dzdy), 4U)),
                 32,VL_SHIFTR_III(32,32,32, vlSelfRef.tb_tile__DOT__out_z_current, 8U),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_0, 8U),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_1, 8U),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_2, 8U));
    __Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas
        [0U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_abs_pos 
                          != __Vtask_tb_tile__DOT__run_triangle_test__6__exp_abs_pos)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:363: Assertion failed in %Ntb_tile.run_triangle_test: abs_pos mismatch: %15# vs %15#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),48,vlSelfRef.tb_tile__DOT__out_abs_pos,
                         48,__Vtask_tb_tile__DOT__run_triangle_test__6__exp_abs_pos);
            VL_STOP_MT("tb_tile.sv", 363, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_0 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:365: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 365, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_0 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:367: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 367, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:369: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 369, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_0 
                          != __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges
                          [0U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:371: Assertion failed in %Ntb_tile.run_triangle_test: edge_0 mismatch: %0d vs %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_0,
                         48,__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta);
            VL_STOP_MT("tb_tile.sv", 371, "");
        }
    }
    __Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas
        [1U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_1 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:375: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 375, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_1 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:377: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 377, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:379: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 379, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_1 
                          != __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges
                          [1U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:381: Assertion failed in %Ntb_tile.run_triangle_test: edge_1 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_1,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges
                         [1U]);
            VL_STOP_MT("tb_tile.sv", 381, "");
        }
    }
    __Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__6__exp_deltas
        [2U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_2 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:385: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 385, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_2 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:387: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 387, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:389: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 389, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_2 
                          != __Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges
                          [2U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:391: Assertion failed in %Ntb_tile.run_triangle_test: edge_2 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_2,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__6__exp_edges
                         [2U]);
            VL_STOP_MT("tb_tile.sv", 391, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_metadata 
                          != __Vtask_tb_tile__DOT__run_triangle_test__6__exp_metadata)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:394: Assertion failed in %Ntb_tile.run_triangle_test: metadata mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_tile.sv", 394, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_tile__DOT__out_dzdx) 
                          != (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdx))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:396: Assertion failed in %Ntb_tile.run_triangle_test: dzdx mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_tile__DOT__out_dzdx),
                         16,__Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdx);
            VL_STOP_MT("tb_tile.sv", 396, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_tile__DOT__out_dzdy) 
                          != (IData)(__Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdy))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:398: Assertion failed in %Ntb_tile.run_triangle_test: dzdy mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_tile__DOT__out_dzdy),
                         16,__Vtask_tb_tile__DOT__run_triangle_test__6__exp_dzdy);
            VL_STOP_MT("tb_tile.sv", 398, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_z_current 
                          != __Vtask_tb_tile__DOT__run_triangle_test__6__exp_z_current)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:400: Assertion failed in %Ntb_tile.run_triangle_test: z_current mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_z_current,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__6__exp_z_current);
            VL_STOP_MT("tb_tile.sv", 400, "");
        }
    }
    vlSelfRef.tb_tile__DOT__rdy_out = 1U;
    co_await vlSelfRef.__VtrigSched_h5a39fb5f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.vld_out)", 
                                                         "tb_tile.sv", 
                                                         404);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__rdy_out = 0U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         406);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_tile__DOT__make_meta__13__tile_y_in = 0U;
    __Vfunc_tb_tile__DOT__make_meta__13__tile_x_in = 0U;
    __Vfunc_tb_tile__DOT__make_meta__13__colors_in = 3U;
    vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta 
        = (((IData)(__Vfunc_tb_tile__DOT__make_meta__13__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_tile__DOT__make_meta__13__tile_x_in) 
                         << 5U) | (IData)(__Vfunc_tb_tile__DOT__make_meta__13__tile_y_in)));
    __Vfunc_tb_tile__DOT__make_meta__13__Vfuncout = vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta;
    __Vtask_tb_tile__DOT__run_triangle_test__12__tmeta 
        = __Vfunc_tb_tile__DOT__make_meta__13__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__14__z_in = 0x100U;
    __Vfunc_tb_tile__DOT__make_coord__14__y_in = 1U;
    __Vfunc_tb_tile__DOT__make_coord__14__x_in = 2U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__14__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__14__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__14__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__14__Vfuncout 
        = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__12__tv2 
        = __Vfunc_tb_tile__DOT__make_coord__14__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__15__z_in = 0x400U;
    __Vfunc_tb_tile__DOT__make_coord__15__y_in = 0x14U;
    __Vfunc_tb_tile__DOT__make_coord__15__x_in = 1U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__15__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__15__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__15__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__15__Vfuncout 
        = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__12__tv1 
        = __Vfunc_tb_tile__DOT__make_coord__15__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__16__z_in = 0x100U;
    __Vfunc_tb_tile__DOT__make_coord__16__y_in = 1U;
    __Vfunc_tb_tile__DOT__make_coord__16__x_in = 1U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__16__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__16__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__16__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__16__Vfuncout 
        = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__12__tv0 
        = __Vfunc_tb_tile__DOT__make_coord__16__Vfuncout;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__gmeta 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__tmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__gv2 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__tv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__gv1 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__tv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__gv0 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__tv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__v[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__v[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__v[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__rotated_v[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__rotated_v[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__rotated_v[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
        = ((0xffffffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos) 
           | ((QData)((IData)((0x3f00U & (__Vtask_tb_tile__DOT__simulate_expected_output__17__gmeta 
                                          << 3U)))) 
              << 0x20U));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
        = ((0xffff0000ffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos) 
           | ((QData)((IData)((0x1f00U & (__Vtask_tb_tile__DOT__simulate_expected_output__17__gmeta 
                                          << 8U)))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
        = (0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos);
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__rotated_v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas[0U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__rotated_v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas[1U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__rotated_v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas[2U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_1 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edges[0U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edges[1U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edges[2U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edges
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_1 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edges
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edges
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_metadata 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__gmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk4__DOT__temp_y0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d0 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d2))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk4__DOT__temp_z0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d0))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d2 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_A 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk4__DOT__temp_y0z2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk4__DOT__temp_z0y2_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk5__DOT__temp_z0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d0))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d2 
                                                       >> 0x20U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk5__DOT__temp_x0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d0 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d2))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_B 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk5__DOT__temp_z0x2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk5__DOT__temp_x0z2_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk6__DOT__temp_x0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d0 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d2 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk6__DOT__temp_y0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d0 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_d2 
                                                       >> 0x20U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_C 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk6__DOT__temp_x0y2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk6__DOT__temp_y0x2_mult);
    if (VL_UNLIKELY(((0U == __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_C)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:248: Assertion failed in %Ntb_tile.simulate_expected_output: Division by zero detected in dz calculations - coefficient C is zero!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_tile.sv", 248, "");
        __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdx = 0U;
        __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdy = 0U;
    } else {
        __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk7__DOT__div_result_dzdx 
            = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_A, 8U), __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_C));
        __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk7__DOT__div_result_dzdy 
            = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_B, 8U), __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_C));
        __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdx 
            = (0xffffU & (__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk7__DOT__div_result_dzdx 
                          >> 4U));
        __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdy 
            = (0xffffU & (__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk7__DOT__div_result_dzdy 
                          >> 4U));
    }
    __Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__delta_x 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__delta_y 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__x_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__delta_x)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdx)));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__y_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__delta_y)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdy)));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__z_component 
        = (((- (IData)((1U & (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v 
                                      >> 0xfU))))) 
            << 0x14U) | (0xffff0U & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__17__temp_v) 
                                     << 4U)));
    __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_z_current 
        = ((__Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__z_component 
            - __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__x_component) 
           - __Vtask_tb_tile__DOT__simulate_expected_output__17__unnamedblk8__DOT__y_component);
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_abs_pos 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_abs_pos;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_0;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_1;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_delta_2;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_0;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_1;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_edge_2;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_metadata 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_metadata;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdx 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdx;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdy 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_dzdy;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_z_current 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_z_current;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_A 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_A;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_B 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_B;
    __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_C 
        = __Vtask_tb_tile__DOT__simulate_expected_output__17__exp_coeff_C;
    while ((1U & (~ (IData)(vlSelfRef.tb_tile__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h3f3f19a8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_tile.rdy_in)", 
                                                             "tb_tile.sv", 
                                                             313);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_tile__DOT__v0 = __Vtask_tb_tile__DOT__run_triangle_test__12__tv0;
    vlSelfRef.tb_tile__DOT__v1 = __Vtask_tb_tile__DOT__run_triangle_test__12__tv1;
    vlSelfRef.tb_tile__DOT__v2 = __Vtask_tb_tile__DOT__run_triangle_test__12__tv2;
    vlSelfRef.tb_tile__DOT__in_metadata = __Vtask_tb_tile__DOT__run_triangle_test__12__tmeta;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         322);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         324);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         326);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5a39fa9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_tile.vld_out)", 
                                                         "tb_tile.sv", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Expected Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0d, dzdy: %0d\nz_current: %0d\ncoeff_A: %0d\ncoeff_B: %0d\ncoeff_C: %0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__12__exp_abs_pos 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__12__exp_abs_pos 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__exp_abs_pos)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdx), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdy), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__12__exp_z_current, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_A, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_B, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__12__exp_coeff_C, 8U));
    __Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas
        [0U];
    VL_WRITEF_NX("delta_0: x= %0d, y=%0d, z=%0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta)), 4U)));
    __Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas
        [1U];
    VL_WRITEF_NX("delta_1: x= %0d, y=%0d, z=%0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta)), 4U)));
    __Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas
        [2U];
    VL_WRITEF_NX("delta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n--- Real Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0#, dzdy: %0#\nz_current: %0#\ndelta_0: x= %0d, y=%0d, z=%0d\ndelta_1: x= %0d, y=%0d, z=%0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta)), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges
                                   [0U], 8U),32,VL_SHIFTRS_III(32,32,32, 
                                                               __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges
                                                               [1U], 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges
                                   [2U], 8U),16,(0xffffU 
                                                 & VL_SHIFTRS_III(16,16,32, 
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                                              >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_abs_pos)), 4U)),
                 16,(0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.tb_tile__DOT__out_dzdx), 4U)),
                 16,(0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.tb_tile__DOT__out_dzdy), 4U)),
                 32,VL_SHIFTR_III(32,32,32, vlSelfRef.tb_tile__DOT__out_z_current, 8U),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_0, 8U),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_1, 8U),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_2, 8U));
    __Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas
        [0U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_abs_pos 
                          != __Vtask_tb_tile__DOT__run_triangle_test__12__exp_abs_pos)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:363: Assertion failed in %Ntb_tile.run_triangle_test: abs_pos mismatch: %15# vs %15#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),48,vlSelfRef.tb_tile__DOT__out_abs_pos,
                         48,__Vtask_tb_tile__DOT__run_triangle_test__12__exp_abs_pos);
            VL_STOP_MT("tb_tile.sv", 363, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_0 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:365: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 365, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_0 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:367: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 367, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:369: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 369, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_0 
                          != __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges
                          [0U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:371: Assertion failed in %Ntb_tile.run_triangle_test: edge_0 mismatch: %0d vs %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_0,
                         48,__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta);
            VL_STOP_MT("tb_tile.sv", 371, "");
        }
    }
    __Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas
        [1U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_1 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:375: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 375, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_1 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:377: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 377, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:379: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 379, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_1 
                          != __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges
                          [1U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:381: Assertion failed in %Ntb_tile.run_triangle_test: edge_1 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_1,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges
                         [1U]);
            VL_STOP_MT("tb_tile.sv", 381, "");
        }
    }
    __Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__12__exp_deltas
        [2U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_2 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:385: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 385, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_2 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:387: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 387, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:389: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 389, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_2 
                          != __Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges
                          [2U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:391: Assertion failed in %Ntb_tile.run_triangle_test: edge_2 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_2,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__12__exp_edges
                         [2U]);
            VL_STOP_MT("tb_tile.sv", 391, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_metadata 
                          != __Vtask_tb_tile__DOT__run_triangle_test__12__exp_metadata)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:394: Assertion failed in %Ntb_tile.run_triangle_test: metadata mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_tile.sv", 394, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_tile__DOT__out_dzdx) 
                          != (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdx))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:396: Assertion failed in %Ntb_tile.run_triangle_test: dzdx mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_tile__DOT__out_dzdx),
                         16,__Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdx);
            VL_STOP_MT("tb_tile.sv", 396, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_tile__DOT__out_dzdy) 
                          != (IData)(__Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdy))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:398: Assertion failed in %Ntb_tile.run_triangle_test: dzdy mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_tile__DOT__out_dzdy),
                         16,__Vtask_tb_tile__DOT__run_triangle_test__12__exp_dzdy);
            VL_STOP_MT("tb_tile.sv", 398, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_z_current 
                          != __Vtask_tb_tile__DOT__run_triangle_test__12__exp_z_current)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:400: Assertion failed in %Ntb_tile.run_triangle_test: z_current mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_z_current,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__12__exp_z_current);
            VL_STOP_MT("tb_tile.sv", 400, "");
        }
    }
    vlSelfRef.tb_tile__DOT__rdy_out = 1U;
    co_await vlSelfRef.__VtrigSched_h5a39fb5f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.vld_out)", 
                                                         "tb_tile.sv", 
                                                         404);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__rdy_out = 0U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         406);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_tile__DOT__make_meta__19__tile_y_in = 0U;
    __Vfunc_tb_tile__DOT__make_meta__19__tile_x_in = 2U;
    __Vfunc_tb_tile__DOT__make_meta__19__colors_in = 4U;
    vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta 
        = (((IData)(__Vfunc_tb_tile__DOT__make_meta__19__colors_in) 
            << 0xbU) | (((IData)(__Vfunc_tb_tile__DOT__make_meta__19__tile_x_in) 
                         << 5U) | (IData)(__Vfunc_tb_tile__DOT__make_meta__19__tile_y_in)));
    __Vfunc_tb_tile__DOT__make_meta__19__Vfuncout = vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta;
    __Vtask_tb_tile__DOT__run_triangle_test__18__tmeta 
        = __Vfunc_tb_tile__DOT__make_meta__19__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__20__z_in = 0x100U;
    __Vfunc_tb_tile__DOT__make_coord__20__y_in = 1U;
    __Vfunc_tb_tile__DOT__make_coord__20__x_in = 2U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__20__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__20__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__20__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__20__Vfuncout 
        = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__18__tv2 
        = __Vfunc_tb_tile__DOT__make_coord__20__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__21__z_in = 0x400U;
    __Vfunc_tb_tile__DOT__make_coord__21__y_in = 0x14U;
    __Vfunc_tb_tile__DOT__make_coord__21__x_in = 1U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__21__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__21__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__21__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__21__Vfuncout 
        = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__18__tv1 
        = __Vfunc_tb_tile__DOT__make_coord__21__Vfuncout;
    __Vfunc_tb_tile__DOT__make_coord__22__z_in = 0x100U;
    __Vfunc_tb_tile__DOT__make_coord__22__y_in = 1U;
    __Vfunc_tb_tile__DOT__make_coord__22__x_in = 1U;
    vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
        = (((QData)((IData)(((VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__22__x_in), 4U) 
                              << 0x10U) | (0xffffU 
                                           & VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__22__y_in), 4U))))) 
            << 0x10U) | (QData)((IData)((0xffffU & 
                                         VL_SHIFTL_III(16,16,32, (IData)(__Vfunc_tb_tile__DOT__make_coord__22__z_in), 4U)))));
    __Vfunc_tb_tile__DOT__make_coord__22__Vfuncout 
        = vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point;
    __Vtask_tb_tile__DOT__run_triangle_test__18__tv0 
        = __Vfunc_tb_tile__DOT__make_coord__22__Vfuncout;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__gmeta 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__tmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__gv2 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__tv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__gv1 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__tv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__gv0 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__tv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__v[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__v[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__v[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__rotated_v[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__gv1;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__rotated_v[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__gv2;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__rotated_v[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__gv0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
        = ((0xffffffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos) 
           | ((QData)((IData)((0x3f00U & (__Vtask_tb_tile__DOT__simulate_expected_output__23__gmeta 
                                          << 3U)))) 
              << 0x20U));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
        = ((0xffff0000ffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos) 
           | ((QData)((IData)((0x1f00U & (__Vtask_tb_tile__DOT__simulate_expected_output__23__gmeta 
                                          << 8U)))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
        = (0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos);
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__rotated_v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas[0U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__rotated_v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas[1U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__rotated_v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = ((0xffffULL & __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta) 
           | ((QData)((IData)(((((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv 
                                          >> 0x20U)) 
                                 - (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                                           >> 0x10U))))))) 
              << 0x10U));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = ((0xffffffff0000ULL & __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta) 
           | (IData)((IData)((0xffffU & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_rv) 
                                         - (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v))))));
    tb_tile__DOT____Vlvbound_hd8f22bbc__0 = __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas[2U] 
        = tb_tile__DOT____Vlvbound_hd8f22bbc__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_1 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edges[0U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__v
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edges[1U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__v
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_sub)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_delta 
                                                       >> 0x20U)))));
    tb_tile__DOT____Vlvbound_h77fbc91e__0 = (__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_x_mult 
                                             - __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk2__DOT__unnamedblk3__DOT__temp_y_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edges[2U] 
        = tb_tile__DOT____Vlvbound_h77fbc91e__0;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edges
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_1 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edges
        [1U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edges
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_metadata 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__gmeta;
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d2 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [2U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d0 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_deltas
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk4__DOT__temp_y0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d0 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d2))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk4__DOT__temp_z0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d0))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d2 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_A 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk4__DOT__temp_y0z2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk4__DOT__temp_z0y2_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk5__DOT__temp_z0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d0))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d2 
                                                       >> 0x20U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk5__DOT__temp_x0z2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d0 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d2))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_B 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk5__DOT__temp_z0x2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk5__DOT__temp_x0z2_mult);
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk6__DOT__temp_x0y2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d0 
                                                           >> 0x20U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d2 
                                                       >> 0x10U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk6__DOT__temp_y0x2_mult 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (0xffffU 
                                                & (IData)(
                                                          (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d0 
                                                           >> 0x10U)))), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & (IData)(
                                                      (__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_d2 
                                                       >> 0x20U)))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_C 
        = (__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk6__DOT__temp_x0y2_mult 
           - __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk6__DOT__temp_y0x2_mult);
    if (VL_UNLIKELY(((0U == __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_C)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:248: Assertion failed in %Ntb_tile.simulate_expected_output: Division by zero detected in dz calculations - coefficient C is zero!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_tile.sv", 248, "");
        __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdx = 0U;
        __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdy = 0U;
    } else {
        __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk7__DOT__div_result_dzdx 
            = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_A, 8U), __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_C));
        __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk7__DOT__div_result_dzdy 
            = (- VL_DIVS_III(32, VL_SHIFTL_III(32,32,32, __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_B, 8U), __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_C));
        __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdx 
            = (0xffffU & (__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk7__DOT__div_result_dzdx 
                          >> 4U));
        __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdy 
            = (0xffffU & (__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk7__DOT__div_result_dzdy 
                          >> 4U));
    }
    __Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__v
        [0U];
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__delta_x 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                               >> 0x20U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
                                                     >> 0x20U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__delta_y 
        = (0xffffU & ((IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                               >> 0x10U)) - (IData)(
                                                    (__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos 
                                                     >> 0x10U))));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__x_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__delta_x)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdx)));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__y_component 
        = VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__delta_y)), 
                      VL_EXTENDS_II(32,16, (IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdy)));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__z_component 
        = (((- (IData)((1U & (IData)((__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v 
                                      >> 0xfU))))) 
            << 0x14U) | (0xffff0U & ((IData)(__Vtask_tb_tile__DOT__simulate_expected_output__23__temp_v) 
                                     << 4U)));
    __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_z_current 
        = ((__Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__z_component 
            - __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__x_component) 
           - __Vtask_tb_tile__DOT__simulate_expected_output__23__unnamedblk8__DOT__y_component);
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_abs_pos 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_abs_pos;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_0;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_1;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_delta_2;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges[0U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_0;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges[1U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_1;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges[2U] 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_edge_2;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_metadata 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_metadata;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdx 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdx;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdy 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_dzdy;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_z_current 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_z_current;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_A 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_A;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_B 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_B;
    __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_C 
        = __Vtask_tb_tile__DOT__simulate_expected_output__23__exp_coeff_C;
    while ((1U & (~ (IData)(vlSelfRef.tb_tile__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_h3f3f19a8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_tile.rdy_in)", 
                                                             "tb_tile.sv", 
                                                             313);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_tile__DOT__v0 = __Vtask_tb_tile__DOT__run_triangle_test__18__tv0;
    vlSelfRef.tb_tile__DOT__v1 = __Vtask_tb_tile__DOT__run_triangle_test__18__tv1;
    vlSelfRef.tb_tile__DOT__v2 = __Vtask_tb_tile__DOT__run_triangle_test__18__tv2;
    vlSelfRef.tb_tile__DOT__in_metadata = __Vtask_tb_tile__DOT__run_triangle_test__18__tmeta;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         322);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         324);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__vld_in = 0U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         326);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5a39fa9e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_tile.vld_out)", 
                                                         "tb_tile.sv", 
                                                         327);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Expected Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0d, dzdy: %0d\nz_current: %0d\ncoeff_A: %0d\ncoeff_B: %0d\ncoeff_C: %0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__18__exp_abs_pos 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__18__exp_abs_pos 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__exp_abs_pos)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdx), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdy), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__18__exp_z_current, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_A, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_B, 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__18__exp_coeff_C, 8U));
    __Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas
        [0U];
    VL_WRITEF_NX("delta_0: x= %0d, y=%0d, z=%0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta)), 4U)));
    __Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas
        [1U];
    VL_WRITEF_NX("delta_1: x= %0d, y=%0d, z=%0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta)), 4U)));
    __Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas
        [2U];
    VL_WRITEF_NX("delta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n--- Real Values ---\nabs_pos: x=%0d, y=%0d, z=%0d\ndzdx: %0#, dzdy: %0#\nz_current: %0#\ndelta_0: x= %0d, y=%0d, z=%0d\ndelta_1: x= %0d, y=%0d, z=%0d\ndelta_2: x= %0d, y=%0d, z=%0d\nedge_0: %0d\nedge_1: %0d\nedge_2: %0d\n",0,
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta)), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges
                                   [0U], 8U),32,VL_SHIFTRS_III(32,32,32, 
                                                               __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges
                                                               [1U], 8U),
                 32,VL_SHIFTRS_III(32,32,32, __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges
                                   [2U], 8U),16,(0xffffU 
                                                 & VL_SHIFTRS_III(16,16,32, 
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                                              >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_abs_pos)), 4U)),
                 16,(0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.tb_tile__DOT__out_dzdx), 4U)),
                 16,(0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.tb_tile__DOT__out_dzdy), 4U)),
                 32,VL_SHIFTR_III(32,32,32, vlSelfRef.tb_tile__DOT__out_z_current, 8U),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                          >> 0x20U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                          >> 0x10U))), 4U)),
                 16,(0xffffU & VL_SHIFTRS_III(16,16,32, 
                                              (0xffffU 
                                               & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)), 4U)),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_0, 8U),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_1, 8U),
                 32,VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_tile__DOT__out_edge_2, 8U));
    __Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas
        [0U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_abs_pos 
                          != __Vtask_tb_tile__DOT__run_triangle_test__18__exp_abs_pos)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:363: Assertion failed in %Ntb_tile.run_triangle_test: abs_pos mismatch: %15# vs %15#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),48,vlSelfRef.tb_tile__DOT__out_abs_pos,
                         48,__Vtask_tb_tile__DOT__run_triangle_test__18__exp_abs_pos);
            VL_STOP_MT("tb_tile.sv", 363, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_0 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:365: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 365, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_0 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:367: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 367, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:369: Assertion failed in %Ntb_tile.run_triangle_test: delta_0.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 369, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_0 
                          != __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges
                          [0U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:371: Assertion failed in %Ntb_tile.run_triangle_test: edge_0 mismatch: %0d vs %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_0,
                         48,__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta);
            VL_STOP_MT("tb_tile.sv", 371, "");
        }
    }
    __Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas
        [1U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_1 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:375: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 375, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_1 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:377: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 377, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:379: Assertion failed in %Ntb_tile.run_triangle_test: delta_1.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 379, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_1 
                          != __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges
                          [1U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:381: Assertion failed in %Ntb_tile.run_triangle_test: edge_1 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_1,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges
                         [1U]);
            VL_STOP_MT("tb_tile.sv", 381, "");
        }
    }
    __Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
        = __Vtask_tb_tile__DOT__run_triangle_test__18__exp_deltas
        [2U];
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_2 
                                              >> 0x20U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                 >> 0x20U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:385: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.x mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                           >> 0x20U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                >> 0x20U))));
            VL_STOP_MT("tb_tile.sv", 385, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__out_delta_2 
                                              >> 0x10U))) 
                          != (0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                 >> 0x10U))))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:387: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.y mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(
                                                          (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                           >> 0x10U))),
                         16,(0xffffU & (IData)((__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta 
                                                >> 0x10U))));
            VL_STOP_MT("tb_tile.sv", 387, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)) 
                          != (0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta)))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:389: Assertion failed in %Ntb_tile.run_triangle_test: delta_2.z mismatch: %5# vs %5#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(0xffffU 
                                                & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2)),
                         16,(0xffffU & (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__temp_delta)));
            VL_STOP_MT("tb_tile.sv", 389, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_edge_2 
                          != __Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges
                          [2U])))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:391: Assertion failed in %Ntb_tile.run_triangle_test: edge_2 mismatch: %0d vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_edge_2,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__18__exp_edges
                         [2U]);
            VL_STOP_MT("tb_tile.sv", 391, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_metadata 
                          != __Vtask_tb_tile__DOT__run_triangle_test__18__exp_metadata)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:394: Assertion failed in %Ntb_tile.run_triangle_test: metadata mismatch\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_tile.sv", 394, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_tile__DOT__out_dzdx) 
                          != (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdx))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:396: Assertion failed in %Ntb_tile.run_triangle_test: dzdx mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_tile__DOT__out_dzdx),
                         16,__Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdx);
            VL_STOP_MT("tb_tile.sv", 396, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_tile__DOT__out_dzdy) 
                          != (IData)(__Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdy))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:398: Assertion failed in %Ntb_tile.run_triangle_test: dzdy mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),16,(IData)(vlSelfRef.tb_tile__DOT__out_dzdy),
                         16,__Vtask_tb_tile__DOT__run_triangle_test__18__exp_dzdy);
            VL_STOP_MT("tb_tile.sv", 398, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_tile__DOT__out_z_current 
                          != __Vtask_tb_tile__DOT__run_triangle_test__18__exp_z_current)))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_tile.sv:400: Assertion failed in %Ntb_tile.run_triangle_test: z_current mismatch: %0# vs %0d\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_tile__DOT__out_z_current,
                         32,__Vtask_tb_tile__DOT__run_triangle_test__18__exp_z_current);
            VL_STOP_MT("tb_tile.sv", 400, "");
        }
    }
    vlSelfRef.tb_tile__DOT__rdy_out = 1U;
    co_await vlSelfRef.__VtrigSched_h5a39fb5f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.vld_out)", 
                                                         "tb_tile.sv", 
                                                         404);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_tile__DOT__rdy_out = 0U;
    co_await vlSelfRef.__VtrigSched_h066b4174__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_tile.clk)", 
                                                         "tb_tile.sv", 
                                                         406);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_tile.sv", 128, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tile___024root___dump_triggers__act(Vtb_tile___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_tile___024root___eval_triggers__act(Vtb_tile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root___eval_triggers__act\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_tile__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_tile__DOT__rdy_in) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__rdy_in__0)));
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.tb_tile__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_tile__DOT__vld_out) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__vld_out__0))));
    vlSelfRef.__VactTriggered.set(5U, ((~ (IData)(vlSelfRef.tb_tile__DOT__vld_out)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__vld_out__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__clk__0 
        = vlSelfRef.tb_tile__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__rdy_in__0 
        = vlSelfRef.tb_tile__DOT__rdy_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tile__DOT__vld_out__0 
        = vlSelfRef.tb_tile__DOT__vld_out;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_tile___024root___dump_triggers__act(vlSelf);
    }
#endif
}
