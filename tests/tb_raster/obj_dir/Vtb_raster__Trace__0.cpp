// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_raster__Syms.h"


void Vtb_raster___024root__trace_chg_0_sub_0(Vtb_raster___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_raster___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root__trace_chg_0\n"); );
    // Init
    Vtb_raster___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_raster___024root*>(voidSelf);
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_raster___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_raster___024root__trace_chg_0_sub_0(Vtb_raster___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root__trace_chg_0_sub_0\n"); );
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_raster__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_raster__DOT__rdy_out));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_raster__DOT__vld_in));
        bufp->chgSData(oldp+3,((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__v0 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+4,((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__v0 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+5,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__v0))),16);
        bufp->chgSData(oldp+6,((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__v1 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+7,((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__v1 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+8,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__v1))),16);
        bufp->chgSData(oldp+9,((0xffffU & (IData)((vlSelfRef.tb_raster__DOT__v2 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+10,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__v2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+11,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__v2))),16);
        bufp->chgCData(oldp+12,((0xffU & (vlSelfRef.tb_raster__DOT__in_metadata 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+13,((0x1fU & (vlSelfRef.tb_raster__DOT__in_metadata 
                                          >> 6U))),5);
        bufp->chgCData(oldp+14,((0x3fU & vlSelfRef.tb_raster__DOT__in_metadata)),6);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+15,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                                                    [0U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+16,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                                                    [0U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+17,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                                                   [0U]))),16);
        bufp->chgSData(oldp+18,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                                                    [1U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+19,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+20,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                                                   [1U]))),16);
        bufp->chgSData(oldp+21,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                                                    [2U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+22,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+23,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__v
                                                   [2U]))),16);
        bufp->chgSData(oldp+24,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
                                                    [0U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+25,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
                                                    [0U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+26,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
                                                   [0U]))),16);
        bufp->chgSData(oldp+27,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
                                                    [1U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+28,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+29,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
                                                   [1U]))),16);
        bufp->chgSData(oldp+30,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
                                                    [2U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+31,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+32,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__rotated_v
                                                   [2U]))),16);
        bufp->chgSData(oldp+33,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_start 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+34,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_start 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+35,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_start))),16);
        bufp->chgSData(oldp+36,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                                                    [0U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+37,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                                                    [0U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+38,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                                                   [0U]))),16);
        bufp->chgSData(oldp+39,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                                                    [1U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+40,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+41,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                                                   [1U]))),16);
        bufp->chgSData(oldp+42,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                                                    [2U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+43,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+44,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__temp_deltas
                                                   [2U]))),16);
        bufp->chgSData(oldp+45,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+46,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+47,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__tile_to_coord__Vstatic__out))),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+48,(vlSelfRef.tb_raster__DOT__rdy_in));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_raster__DOT__vld_out));
        bufp->chgSData(oldp+50,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__out_abs_pos 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+51,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__out_abs_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+52,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_abs_pos))),16);
        bufp->chgSData(oldp+53,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__out_delta_0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+54,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__out_delta_0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+55,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_0))),16);
        bufp->chgSData(oldp+56,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__out_delta_1 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+57,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__out_delta_1 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+58,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_1))),16);
        bufp->chgSData(oldp+59,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__out_delta_2 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+60,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__out_delta_2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+61,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__out_delta_2))),16);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_raster__DOT__out_edge_0),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb_raster__DOT__out_edge_1),32);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_raster__DOT__out_edge_2),32);
        bufp->chgCData(oldp+65,((0xffU & (vlSelfRef.tb_raster__DOT__out_metadata 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+66,((0x1fU & (vlSelfRef.tb_raster__DOT__out_metadata 
                                          >> 6U))),5);
        bufp->chgCData(oldp+67,((0x3fU & vlSelfRef.tb_raster__DOT__out_metadata)),6);
        bufp->chgSData(oldp+68,(vlSelfRef.tb_raster__DOT__out_dzdx),16);
        bufp->chgSData(oldp+69,(vlSelfRef.tb_raster__DOT__out_dzdy),16);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_raster__DOT__out_z_current),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state),32);
        bufp->chgSData(oldp+72,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__abs_pos 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+73,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__abs_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+74,((0xffffU & (IData)(vlSelfRef.tb_raster__DOT__tile_proc__DOT__abs_pos))),16);
        bufp->chgSData(oldp+75,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                                                    [0U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+76,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                                                    [0U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+77,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                                                   [0U]))),16);
        bufp->chgSData(oldp+78,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                                                    [1U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+79,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+80,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                                                   [1U]))),16);
        bufp->chgSData(oldp+81,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                                                    [2U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+82,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+83,((0xffffU & (IData)(
                                                   vlSelfRef.tb_raster__DOT__tile_proc__DOT__deltas
                                                   [2U]))),16);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges[0]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges[1]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__edges[2]),32);
        bufp->chgCData(oldp+87,((0xffU & (vlSelfRef.tb_raster__DOT__tile_proc__DOT__metadata 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+88,((0x1fU & (vlSelfRef.tb_raster__DOT__tile_proc__DOT__metadata 
                                          >> 6U))),5);
        bufp->chgCData(oldp+89,((0x3fU & vlSelfRef.tb_raster__DOT__tile_proc__DOT__metadata)),6);
        bufp->chgIData(oldp+90,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__coeff_A),32);
        bufp->chgIData(oldp+91,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__coeff_B),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__coeff_C),32);
        bufp->chgSData(oldp+93,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdx),16);
        bufp->chgSData(oldp+94,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__dzdy),16);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__z_current),32);
        bufp->chgSData(oldp+96,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_sub),16);
        bufp->chgSData(oldp+97,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_sub),16);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_x_mult),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_edge__Vstatic__temp_y_mult),32);
        bufp->chgIData(oldp+100,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_y0z2_mult),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_plane_coeff_a__Vstatic__temp_z0y2_mult),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_z0x2_mult),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_plane_coeff_b__Vstatic__temp_x0z2_mult),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_x0y2_mult),32);
        bufp->chgIData(oldp+105,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_plane_coeff_c__Vstatic__temp_y0x2mult),32);
        bufp->chgIData(oldp+106,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__scale_dz__Vstatic__div_result_dz),32);
        bufp->chgSData(oldp+107,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__delta_x),16);
        bufp->chgSData(oldp+108,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__delta_y),16);
        bufp->chgIData(oldp+109,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__x_component),32);
        bufp->chgIData(oldp+110,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__y_component),32);
        bufp->chgIData(oldp+111,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__compute_z__Vstatic__z_component),32);
        bufp->chgIData(oldp+112,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+113,(vlSelfRef.tb_raster__DOT__tile_proc__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgBit(oldp+114,(vlSelfRef.tb_raster__DOT__clk));
    bufp->chgIData(oldp+115,(((0U == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                               ? (((IData)(vlSelfRef.tb_raster__DOT__vld_in) 
                                   & (IData)(vlSelfRef.tb_raster__DOT__rdy_in))
                                   ? 1U : 0U) : ((1U 
                                                  == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == vlSelfRef.tb_raster__DOT__tile_proc__DOT__present_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
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
                                                      : 0U))))))),32);
}

void Vtb_raster___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_raster___024root__trace_cleanup\n"); );
    // Init
    Vtb_raster___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_raster___024root*>(voidSelf);
    Vtb_raster__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
