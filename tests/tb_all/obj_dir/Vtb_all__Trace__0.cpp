// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_all__Syms.h"


void Vtb_all___024root__trace_chg_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_all___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_chg_0\n"); );
    // Init
    Vtb_all___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_all___024root*>(voidSelf);
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_all___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_all___024root__trace_chg_0_sub_0(Vtb_all___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_chg_0_sub_0\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_all__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_all__DOT__rdy_out));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_all__DOT__vld_in));
        bufp->chgSData(oldp+3,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v0 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+4,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v0 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+5,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__v0))),16);
        bufp->chgSData(oldp+6,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v1 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+7,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v1 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+8,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__v1))),16);
        bufp->chgSData(oldp+9,((0xffffU & (IData)((vlSelfRef.tb_all__DOT__v2 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+10,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__v2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+11,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__v2))),16);
        bufp->chgCData(oldp+12,((0xffU & (vlSelfRef.tb_all__DOT__metadata 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+13,((0x3fU & (vlSelfRef.tb_all__DOT__metadata 
                                          >> 5U))),6);
        bufp->chgCData(oldp+14,((0x1fU & vlSelfRef.tb_all__DOT__metadata)),5);
        bufp->chgSData(oldp+15,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+16,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__make_coord__Vstatic__point 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+17,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__make_coord__Vstatic__point))),16);
        bufp->chgCData(oldp+18,((0xffU & (vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+19,((0x3fU & (vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta 
                                          >> 5U))),6);
        bufp->chgCData(oldp+20,((0x1fU & vlSelfRef.tb_all__DOT__make_meta__Vstatic__meta)),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+21,((4U > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))));
        bufp->chgSData(oldp+22,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+23,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+24,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                                            >> 3U))),16);
        bufp->chgCData(oldp+25,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+26,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                          >> 5U))),6);
        bufp->chgCData(oldp+27,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U])),5);
        bufp->chgSData(oldp+28,((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+29,((0xffffU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U])),16);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U]),32);
        bufp->chgBit(oldp+31,((0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))));
        bufp->chgWData(oldp+32,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out),371);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr),3);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr),3);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count),4);
        bufp->chgSData(oldp+47,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+48,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+49,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+50,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+51,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+52,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+53,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+54,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+55,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                                               >> 0x13U)))),16);
        bufp->chgIData(oldp+56,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                                  << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+57,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                                  << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+58,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                                  << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+59,(((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)
                                  ? ((0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))
                                      ? ((((0x7c0U 
                                            & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                               << 6U)) 
                                           | (0x3fU 
                                              & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                                 >> 5U))) 
                                          >= ((0x7c0U 
                                               & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                                  << 6U)) 
                                              | (0x3fU 
                                                 & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                                    >> 5U))))
                                          ? 2U : 1U)
                                      : 0U) : ((1U 
                                                == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)
                                                ? (
                                                   (0xffU 
                                                    > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos))
                                                    ? 1U
                                                    : 2U)
                                                : (
                                                   (2U 
                                                    == vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state)
                                                    ? 
                                                   ((0xffU 
                                                     > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos))
                                                     ? 2U
                                                     : 0U)
                                                    : 0U)))),32);
        bufp->chgSData(oldp+60,(((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                            << 6U)) 
                                 | (0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                             >> 5U)))),11);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+61,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                    [0U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+62,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                    [0U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+63,((0xffffU & (IData)(
                                                   vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                   [0U]))),16);
        bufp->chgSData(oldp+64,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                    [1U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+65,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+66,((0xffffU & (IData)(
                                                   vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                   [1U]))),16);
        bufp->chgSData(oldp+67,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                    [2U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+68,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+69,((0xffffU & (IData)(
                                                   vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__v
                                                   [2U]))),16);
        bufp->chgSData(oldp+70,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                    [0U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+71,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                    [0U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+72,((0xffffU & (IData)(
                                                   vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                   [0U]))),16);
        bufp->chgSData(oldp+73,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                    [1U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+74,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+75,((0xffffU & (IData)(
                                                   vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                   [1U]))),16);
        bufp->chgSData(oldp+76,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                    [2U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+77,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+78,((0xffffU & (IData)(
                                                   vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__rotated_v
                                                   [2U]))),16);
        bufp->chgSData(oldp+79,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+80,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+81,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start))),16);
        bufp->chgSData(oldp+82,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                    [0U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+83,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                    [0U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+84,((0xffffU & (IData)(
                                                   vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                   [0U]))),16);
        bufp->chgSData(oldp+85,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                    [1U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+86,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+87,((0xffffU & (IData)(
                                                   vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                   [1U]))),16);
        bufp->chgSData(oldp+88,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                    [2U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+89,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+90,((0xffffU & (IData)(
                                                   vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_deltas
                                                   [2U]))),16);
        bufp->chgSData(oldp+91,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+92,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+93,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out))),16);
        bufp->chgSData(oldp+94,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+95,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+96,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_delta__Vstatic__out))),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+97,(vlSelfRef.tb_all__DOT__rdy_in));
        bufp->chgBit(oldp+98,(vlSelfRef.tb_all__DOT__vld_out));
        bufp->chgCData(oldp+99,(vlSelfRef.tb_all__DOT__color_out),8);
        bufp->chgSData(oldp+100,((vlSelfRef.tb_all__DOT__pixel_out 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+101,((0xffffU & vlSelfRef.tb_all__DOT__pixel_out)),16);
        bufp->chgSData(oldp+102,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+103,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+104,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0))),16);
        bufp->chgSData(oldp+105,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+106,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                     [0U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+107,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                    [0U]))),16);
        bufp->chgSData(oldp+108,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                     [1U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+109,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                     [1U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+110,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                    [1U]))),16);
        bufp->chgSData(oldp+111,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                     [2U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+112,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                     [2U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+113,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0
                                                    [2U]))),16);
        bufp->chgIData(oldp+114,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[0]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[1]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0[2]),32);
        bufp->chgCData(oldp+117,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 
                                           >> 0xbU))),8);
        bufp->chgCData(oldp+118,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 
                                           >> 5U))),6);
        bufp->chgCData(oldp+119,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0)),5);
        bufp->chgSData(oldp+120,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdx_0),16);
        bufp->chgSData(oldp+121,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdy_0),16);
        bufp->chgIData(oldp+122,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_z_current_0),32);
        bufp->chgBit(oldp+123,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0));
        bufp->chgSData(oldp+124,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+125,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                     [0U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+126,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                    [0U]))),16);
        bufp->chgSData(oldp+127,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                     [1U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+128,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                     [1U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+129,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                    [1U]))),16);
        bufp->chgSData(oldp+130,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                     [2U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+131,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                     [2U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+132,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_1
                                                    [2U]))),16);
        bufp->chgIData(oldp+133,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_1[0]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_1[1]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_1[2]),32);
        bufp->chgBit(oldp+136,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1));
        bufp->chgWData(oldp+137,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in),371);
        bufp->chgWData(oldp+149,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[0]),371);
        bufp->chgWData(oldp+161,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[1]),371);
        bufp->chgWData(oldp+173,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[2]),371);
        bufp->chgWData(oldp+185,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[3]),371);
        bufp->chgCData(oldp+197,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr),3);
        bufp->chgIData(oldp+198,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state),32);
        bufp->chgSData(oldp+199,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+200,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+201,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos))),16);
        bufp->chgSData(oldp+202,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+203,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+204,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos))),16);
        bufp->chgCData(oldp+205,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos),8);
        bufp->chgCData(oldp+206,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos),8);
        bufp->chgSData(oldp+207,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+208,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                     [0U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+209,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                    [0U]))),16);
        bufp->chgSData(oldp+210,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                     [1U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+211,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                     [1U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+212,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                    [1U]))),16);
        bufp->chgSData(oldp+213,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                     [2U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+214,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                     [2U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+215,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__deltas
                                                    [2U]))),16);
        bufp->chgIData(oldp+216,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[0]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[1]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edges[2]),32);
        bufp->chgCData(oldp+219,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                           >> 0xbU))),8);
        bufp->chgCData(oldp+220,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                           >> 5U))),6);
        bufp->chgCData(oldp+221,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata)),5);
        bufp->chgSData(oldp+222,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx),16);
        bufp->chgSData(oldp+223,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy),16);
        bufp->chgIData(oldp+224,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current),32);
        bufp->chgSData(oldp+225,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+226,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+227,(((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                             << 6U)) 
                                  | (0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                              >> 5U)))),11);
        bufp->chgIData(oldp+228,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy),32);
        bufp->chgIData(oldp+229,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx),32);
        bufp->chgIData(oldp+230,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy),32);
        bufp->chgIData(oldp+231,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdx_ext),32);
        bufp->chgIData(oldp+232,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdy_ext),32);
        bufp->chgSData(oldp+233,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+234,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+235,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out))),16);
        bufp->chgIData(oldp+236,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+237,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+238,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+239,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk3__DOT__unnamedblk4__DOT__row_off),32);
        bufp->chgIData(oldp+240,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk5__DOT__dzdx_ext),32);
        bufp->chgIData(oldp+241,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk6__DOT__i),32);
        bufp->chgSData(oldp+242,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+243,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+244,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_0))),16);
        bufp->chgSData(oldp+245,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+246,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+247,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_1))),16);
        bufp->chgSData(oldp+248,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+249,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+250,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_delta_2))),16);
        bufp->chgIData(oldp+251,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_0),32);
        bufp->chgIData(oldp+252,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_1),32);
        bufp->chgIData(oldp+253,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__tile_proc__out_edge_2),32);
        bufp->chgIData(oldp+254,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state),32);
        bufp->chgSData(oldp+255,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+256,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+257,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos))),16);
        bufp->chgSData(oldp+258,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                     [0U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+259,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                     [0U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+260,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                    [0U]))),16);
        bufp->chgSData(oldp+261,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                     [1U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+262,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                     [1U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+263,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                    [1U]))),16);
        bufp->chgSData(oldp+264,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                     [2U] 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+265,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                     [2U] 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+266,((0xffffU & (IData)(
                                                    vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__deltas
                                                    [2U]))),16);
        bufp->chgIData(oldp+267,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[0]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[1]),32);
        bufp->chgIData(oldp+269,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[2]),32);
        bufp->chgCData(oldp+270,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
                                           >> 0xbU))),8);
        bufp->chgCData(oldp+271,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
                                           >> 5U))),6);
        bufp->chgCData(oldp+272,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata)),5);
        bufp->chgIData(oldp+273,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A),32);
        bufp->chgIData(oldp+274,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B),32);
        bufp->chgIData(oldp+275,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C),32);
        bufp->chgSData(oldp+276,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx),16);
        bufp->chgSData(oldp+277,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy),16);
        bufp->chgIData(oldp+278,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current),32);
        bufp->chgSData(oldp+279,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub),16);
        bufp->chgSData(oldp+280,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub),16);
        bufp->chgIData(oldp+281,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult),32);
        bufp->chgIData(oldp+282,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult),32);
        bufp->chgIData(oldp+283,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_y0z2_mult),32);
        bufp->chgIData(oldp+284,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_z0y2_mult),32);
        bufp->chgIData(oldp+285,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_z0x2_mult),32);
        bufp->chgIData(oldp+286,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_x0z2_mult),32);
        bufp->chgIData(oldp+287,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_x0y2_mult),32);
        bufp->chgIData(oldp+288,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_y0x2_mult),32);
        bufp->chgIData(oldp+289,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz),32);
        bufp->chgSData(oldp+290,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x),16);
        bufp->chgSData(oldp+291,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y),16);
        bufp->chgIData(oldp+292,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__x_component),32);
        bufp->chgIData(oldp+293,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__y_component),32);
        bufp->chgIData(oldp+294,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__compute_z__Vstatic__z_component),32);
        bufp->chgIData(oldp+295,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+296,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+297,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk3__DOT__i),32);
    }
    bufp->chgBit(oldp+298,(vlSelfRef.tb_all__DOT__clk));
    bufp->chgIData(oldp+299,(((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                               ? (((IData)(vlSelfRef.tb_all__DOT__vld_in) 
                                   & (IData)(vlSelfRef.tb_all__DOT__rdy_in))
                                   ? 1U : 0U) : ((1U 
                                                  == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
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
                                                      : 0U))))))),32);
}

void Vtb_all___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root__trace_cleanup\n"); );
    // Init
    Vtb_all___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_all___024root*>(voidSelf);
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
