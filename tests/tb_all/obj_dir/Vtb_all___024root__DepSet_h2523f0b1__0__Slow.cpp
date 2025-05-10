// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_all.h for the primary calling header

#include "Vtb_all__pch.h"
#include "Vtb_all___024root.h"

VL_ATTR_COLD void Vtb_all___024root___eval_static(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_static\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_all___024root___eval_final(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_final\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__stl(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_all___024root___eval_phase__stl(Vtb_all___024root* vlSelf);

VL_ATTR_COLD void Vtb_all___024root___eval_settle(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_settle\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_all___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_all.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_all___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__stl(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___dump_triggers__stl\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtb_all___024root___stl_sequent__TOP__0(Vtb_all___024root* vlSelf);
VL_ATTR_COLD void Vtb_all___024root____Vm_traceActivitySetAll(Vtb_all___024root* vlSelf);

VL_ATTR_COLD void Vtb_all___024root___eval_stl(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_stl\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_all___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_all___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_all___024root___stl_sequent__TOP__0(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___stl_sequent__TOP__0\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__a;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__a = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__b;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__b = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__a;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__a = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__b;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__b = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__a;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__a = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__b;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__b = 0;
    QData/*47:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__122__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__122__Vfuncout = 0;
    IData/*18:0*/ __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__122__in;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__122__in = 0;
    // Body
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_1 
        = (0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_0 
        = (4U > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__out_coord 
        = (IData)((vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                   >> 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[2U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[1U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[0U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0[2U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0[1U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0[0U] 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0;
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
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__122__in 
        = vlSelfRef.tb_all__DOT__metadata;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffffffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x3f00U & (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__122__in 
                                          << 3U)))) 
              << 0x20U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = ((0xffff0000ffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out) 
           | ((QData)((IData)((0x1f00U & (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__122__in 
                                          << 8U)))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
        = (0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out);
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__122__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__122__Vfuncout;
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
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__b 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
        [0U];
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__a 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
        [0U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__a) 
                                         - (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__b))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[0U] 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__119__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__b 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
        [1U];
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__a 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
        [1U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__a) 
                                         - (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__b))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[1U] 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__120__Vfuncout;
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__b 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
        [2U];
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__a 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
        [2U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | ((QData)((IData)(((((IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__a 
                                          >> 0x20U)) 
                                 - (IData)((__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__b 
                                            >> 0x20U))) 
                                << 0x10U) | (0xffffU 
                                             & ((IData)(
                                                        (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__a 
                                                         >> 0x10U)) 
                                                - (IData)(
                                                          (__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__b 
                                                           >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
        = ((0xffffffff0000ULL & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out) 
           | (IData)((IData)((0xffffU & ((IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__a) 
                                         - (IData)(__Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__b))))));
    __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__Vfuncout 
        = vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[2U] 
        = __Vfunc_tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__121__Vfuncout;
}

VL_ATTR_COLD void Vtb_all___024root___eval_triggers__stl(Vtb_all___024root* vlSelf);

VL_ATTR_COLD bool Vtb_all___024root___eval_phase__stl(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_phase__stl\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_all___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_all___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__act(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___dump_triggers__act\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_all.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_all.rdy_in)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_all.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge tb_all.vld_out)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__nba(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___dump_triggers__nba\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_all.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_all.rdy_in)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_all.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge tb_all.vld_out)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_all___024root____Vm_traceActivitySetAll(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root____Vm_traceActivitySetAll\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_all___024root___ctor_var_reset(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___ctor_var_reset\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_all__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__rdy_out = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__vld_in = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__v0 = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__v1 = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__v2 = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__metadata = VL_RAND_RESET_I(19);
    vlSelf->tb_all__DOT__rdy_in = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__vld_out = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__color_out = VL_RAND_RESET_I(8);
    vlSelf->tb_all__DOT__pixel_out = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__make_coord__Vstatic__point = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__make_meta__Vstatic__meta = VL_RAND_RESET_I(19);
    vlSelf->tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 = VL_RAND_RESET_Q(48);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__inter_deltas_0[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__inter_edges_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_all__DOT__rastafarian__DOT__inter_metadata_0 = VL_RAND_RESET_I(19);
    vlSelf->tb_all__DOT__rastafarian__DOT__inter_dzdx_0 = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__inter_dzdy_0 = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__inter_z_current_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__inter_vld_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__rastafarian__DOT__inter_rdy_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__inter_deltas_1[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__inter_edges_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_all__DOT__rastafarian__DOT__inter_vld_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__rastafarian__DOT__inter_rdy_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2 = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1 = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0 = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2 = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1 = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(371, vlSelf->tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out);
    VL_RAND_RESET_W(371, vlSelf->tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state = 0;
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__next_state = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start = VL_RAND_RESET_Q(48);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas[__Vi0] = VL_RAND_RESET_Q(48);
    }
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos = VL_RAND_RESET_Q(48);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata = VL_RAND_RESET_I(19);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_y0z2_mult = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_z0y2_mult = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_z0x2_mult = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_x0z2_mult = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_x0y2_mult = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_y0x2_mult = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__x_component = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__y_component = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__z_component = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h32313c2c__0 = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__rastafarian__DOT__tile_proc__DOT____Vlvbound_h8d56d838__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(371, vlSelf->tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[__Vi0]);
    }
    vlSelf->tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb_all__DOT__rastafarian__DOT__axel_f__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr = VL_RAND_RESET_I(3);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state = 0;
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__next_state = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__color_buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos = VL_RAND_RESET_I(8);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata = VL_RAND_RESET_I(19);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy = VL_RAND_RESET_I(16);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__out_coord = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdx_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdy_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out = VL_RAND_RESET_Q(48);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk3__DOT__unnamedblk4__DOT__row_off = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk5__DOT__dzdx_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_h8d56d838__0 = VL_RAND_RESET_I(32);
    vlSelf->tb_all__DOT__rastafarian__DOT__pixel_proc__DOT____Vlvbound_hb9924031__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_all__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_all__DOT__rdy_in__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_all__DOT__vld_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
