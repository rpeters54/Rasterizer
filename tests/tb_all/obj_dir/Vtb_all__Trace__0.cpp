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
        bufp->chgSData(oldp+25,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+26,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+27,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+28,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+29,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+30,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+31,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                               >> 0x13U)))),16);
        bufp->chgSData(oldp+32,((0xffffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                            >> 3U))),16);
        bufp->chgSData(oldp+33,((0xffffU & ((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
                                             << 0xdU) 
                                            | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                                               >> 0x13U)))),16);
        bufp->chgIData(oldp+34,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
                                  << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+35,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
                                  << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                                              >> 0x13U))),32);
        bufp->chgIData(oldp+36,(((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
                                  << 0xdU) | (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                              >> 0x13U))),32);
        bufp->chgCData(oldp+37,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+38,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                          >> 5U))),6);
        bufp->chgCData(oldp+39,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U])),5);
        bufp->chgSData(oldp+40,((vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+41,((0xffffU & vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U])),16);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U]),32);
        bufp->chgBit(oldp+43,((0U != (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count))));
        bufp->chgWData(oldp+44,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out),371);
        bufp->chgCData(oldp+56,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr),3);
        bufp->chgCData(oldp+57,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr),3);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count),4);
        bufp->chgCData(oldp+59,(((0U == (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state))
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
                                                == (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state))
                                                ? (
                                                   (0xffU 
                                                    > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos))
                                                    ? 1U
                                                    : 2U)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state))
                                                    ? 
                                                   ((0xffU 
                                                     > (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos))
                                                     ? 2U
                                                     : 0U)
                                                    : 0U)))),2);
        bufp->chgSData(oldp+60,(((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                            << 6U)) 
                                 | (0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
                                             >> 5U)))),11);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+61,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+62,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+63,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_start))),16);
        bufp->chgSData(oldp+64,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+65,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+66,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_0))),16);
        bufp->chgSData(oldp+67,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_1 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+68,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_1 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+69,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_1))),16);
        bufp->chgSData(oldp+70,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_2 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+71,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+72,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_delta_2))),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+73,(vlSelfRef.tb_all__DOT__rdy_in));
        bufp->chgBit(oldp+74,(vlSelfRef.tb_all__DOT__vld_out));
        bufp->chgCData(oldp+75,(vlSelfRef.tb_all__DOT__color_out),8);
        bufp->chgSData(oldp+76,((vlSelfRef.tb_all__DOT__pixel_out 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+77,((0xffffU & vlSelfRef.tb_all__DOT__pixel_out)),16);
        bufp->chgSData(oldp+78,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+79,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+80,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_abs_pos_0))),16);
        bufp->chgSData(oldp+81,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+82,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+83,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_0))),16);
        bufp->chgSData(oldp+84,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_1 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+85,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_1 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+86,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_1))),16);
        bufp->chgSData(oldp+87,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_2 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+88,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+89,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_deltas_0_2))),16);
        bufp->chgIData(oldp+90,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0_0),32);
        bufp->chgIData(oldp+91,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0_1),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_edges_0_2),32);
        bufp->chgCData(oldp+93,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+94,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0 
                                          >> 5U))),6);
        bufp->chgCData(oldp+95,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_metadata_0)),5);
        bufp->chgSData(oldp+96,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdx_0),16);
        bufp->chgSData(oldp+97,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_dzdy_0),16);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_z_current_0),32);
        bufp->chgBit(oldp+99,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_vld_0));
        bufp->chgBit(oldp+100,(vlSelfRef.tb_all__DOT__rastafarian__DOT__inter_rdy_1));
        bufp->chgWData(oldp+101,(vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellinp__axel_f__data_in),371);
        bufp->chgWData(oldp+113,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[0]),371);
        bufp->chgWData(oldp+125,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[1]),371);
        bufp->chgWData(oldp+137,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[2]),371);
        bufp->chgWData(oldp+149,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__buffer[3]),371);
        bufp->chgCData(oldp+161,(vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__next_read_ptr),3);
        bufp->chgCData(oldp+162,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__present_state),2);
        bufp->chgSData(oldp+163,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+164,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+165,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__abs_pos))),16);
        bufp->chgSData(oldp+166,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+167,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+168,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos))),16);
        bufp->chgCData(oldp+169,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__rel_pos),8);
        bufp->chgCData(oldp+170,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_rel_pos),8);
        bufp->chgSData(oldp+171,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_0 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+172,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_0 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+173,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_0))),16);
        bufp->chgSData(oldp+174,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_1 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+175,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_1 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+176,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_1))),16);
        bufp->chgSData(oldp+177,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_2 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+178,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_2 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+179,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__delta_2))),16);
        bufp->chgIData(oldp+180,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_0),32);
        bufp->chgIData(oldp+181,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_1),32);
        bufp->chgIData(oldp+182,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__edge_2),32);
        bufp->chgCData(oldp+183,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                           >> 0xbU))),8);
        bufp->chgCData(oldp+184,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                           >> 5U))),6);
        bufp->chgCData(oldp+185,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata)),5);
        bufp->chgSData(oldp+186,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdx),16);
        bufp->chgSData(oldp+187,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__dzdy),16);
        bufp->chgIData(oldp+188,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__z_current),32);
        bufp->chgSData(oldp+189,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+190,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__flush_abs_pos 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+191,(((0x7c0U & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                             << 6U)) 
                                  | (0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__metadata 
                                              >> 5U)))),11);
        bufp->chgSData(oldp+192,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_coord 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+193,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_coord 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+194,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_coord))),16);
        bufp->chgIData(oldp+195,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_z_row_off),32);
        bufp->chgIData(oldp+196,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_edge_row_off),32);
        bufp->chgIData(oldp+197,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_z_col_off),32);
        bufp->chgIData(oldp+198,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__temp_edge_col_off),32);
        bufp->chgIData(oldp+199,(vlSelfRef.tb_all__DOT__rastafarian__DOT__pixel_proc__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+200,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state),32);
        bufp->chgIData(oldp+201,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_edge_i),32);
        bufp->chgIData(oldp+202,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_coeff_a),32);
        bufp->chgIData(oldp+203,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_coeff_b),32);
        bufp->chgIData(oldp+204,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_coeff_c),32);
        bufp->chgIData(oldp+205,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_z),32);
        bufp->chgSData(oldp+206,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_dzdx),16);
        bufp->chgSData(oldp+207,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__temp_dzdy),16);
        bufp->chgSData(oldp+208,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+209,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+210,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__abs_pos))),16);
        bufp->chgSData(oldp+211,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_0 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+212,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_0 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+213,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_0))),16);
        bufp->chgSData(oldp+214,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_1 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+215,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_1 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+216,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_1))),16);
        bufp->chgSData(oldp+217,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_2 
                                                     >> 0x20U)))),16);
        bufp->chgSData(oldp+218,((0xffffU & (IData)(
                                                    (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_2 
                                                     >> 0x10U)))),16);
        bufp->chgSData(oldp+219,((0xffffU & (IData)(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__delta_2))),16);
        bufp->chgIData(oldp+220,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[0]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[1]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__edges[2]),32);
        bufp->chgCData(oldp+223,((0xffU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
                                           >> 0xbU))),8);
        bufp->chgCData(oldp+224,((0x3fU & (vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata 
                                           >> 5U))),6);
        bufp->chgCData(oldp+225,((0x1fU & vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__metadata)),5);
        bufp->chgIData(oldp+226,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_A),32);
        bufp->chgIData(oldp+227,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_B),32);
        bufp->chgIData(oldp+228,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__coeff_C),32);
        bufp->chgSData(oldp+229,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdx),16);
        bufp->chgSData(oldp+230,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__dzdy),16);
        bufp->chgIData(oldp+231,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__z_current),32);
        bufp->chgIData(oldp+232,(vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+233,(vlSelfRef.tb_all__DOT__clk));
    bufp->chgIData(oldp+234,(((0U == vlSelfRef.tb_all__DOT__rastafarian__DOT__tile_proc__DOT__present_state)
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
