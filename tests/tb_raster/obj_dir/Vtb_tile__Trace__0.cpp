// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_tile__Syms.h"


void Vtb_tile___024root__trace_chg_0_sub_0(Vtb_tile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_tile___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_chg_0\n"); );
    // Init
    Vtb_tile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tile___024root*>(voidSelf);
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_tile___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_tile___024root__trace_chg_0_sub_0(Vtb_tile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_chg_0_sub_0\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_tile__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_tile__DOT__vld_in));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_tile__DOT__rdy_out));
        bufp->chgSData(oldp+3,(vlSelfRef.tb_tile__DOT__v0_x),16);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_tile__DOT__v0_y),16);
        bufp->chgSData(oldp+5,(vlSelfRef.tb_tile__DOT__v0_z),16);
        bufp->chgSData(oldp+6,(vlSelfRef.tb_tile__DOT__v1_x),16);
        bufp->chgSData(oldp+7,(vlSelfRef.tb_tile__DOT__v1_y),16);
        bufp->chgSData(oldp+8,(vlSelfRef.tb_tile__DOT__v1_z),16);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_tile__DOT__v2_x),16);
        bufp->chgSData(oldp+10,(vlSelfRef.tb_tile__DOT__v2_y),16);
        bufp->chgSData(oldp+11,(vlSelfRef.tb_tile__DOT__v2_z),16);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_tile__DOT__in_color),8);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_tile__DOT__in_tile_x),6);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_tile__DOT__in_tile_y),5);
        bufp->chgSData(oldp+15,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+16,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+17,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point))),16);
        bufp->chgCData(oldp+18,((0xffU & (vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+19,((0x3fU & (vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta 
                                          >> 5U))),6);
        bufp->chgCData(oldp+20,((0x1fU & vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta)),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgSData(oldp+21,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+22,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+23,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start))),16);
        bufp->chgSData(oldp+24,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+25,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+26,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0))),16);
        bufp->chgSData(oldp+27,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+28,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+29,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1))),16);
        bufp->chgSData(oldp+30,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+31,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+32,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2))),16);
        bufp->chgSData(oldp+33,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+34,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+35,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0))),16);
        bufp->chgSData(oldp+36,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+37,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+38,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1))),16);
        bufp->chgSData(oldp+39,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+40,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+41,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2))),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+42,(vlSelfRef.tb_tile__DOT__rdy_in));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_tile__DOT__vld_out));
        bufp->chgSData(oldp+44,(vlSelfRef.tb_tile__DOT__out_abs_pos_x),16);
        bufp->chgSData(oldp+45,(vlSelfRef.tb_tile__DOT__out_abs_pos_y),16);
        bufp->chgSData(oldp+46,(vlSelfRef.tb_tile__DOT__out_abs_pos_z),16);
        bufp->chgSData(oldp+47,(vlSelfRef.tb_tile__DOT__out_delta_0_x),16);
        bufp->chgSData(oldp+48,(vlSelfRef.tb_tile__DOT__out_delta_0_y),16);
        bufp->chgSData(oldp+49,(vlSelfRef.tb_tile__DOT__out_delta_0_z),16);
        bufp->chgSData(oldp+50,(vlSelfRef.tb_tile__DOT__out_delta_1_x),16);
        bufp->chgSData(oldp+51,(vlSelfRef.tb_tile__DOT__out_delta_1_y),16);
        bufp->chgSData(oldp+52,(vlSelfRef.tb_tile__DOT__out_delta_1_z),16);
        bufp->chgSData(oldp+53,(vlSelfRef.tb_tile__DOT__out_delta_2_x),16);
        bufp->chgSData(oldp+54,(vlSelfRef.tb_tile__DOT__out_delta_2_y),16);
        bufp->chgSData(oldp+55,(vlSelfRef.tb_tile__DOT__out_delta_2_z),16);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_tile__DOT__out_edge_0),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_tile__DOT__out_edge_1),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_tile__DOT__out_edge_2),32);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_tile__DOT__out_color),8);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_tile__DOT__out_tile_x),6);
        bufp->chgCData(oldp+61,(vlSelfRef.tb_tile__DOT__out_tile_y),5);
        bufp->chgSData(oldp+62,(vlSelfRef.tb_tile__DOT__out_dzdx),16);
        bufp->chgSData(oldp+63,(vlSelfRef.tb_tile__DOT__out_dzdy),16);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_tile__DOT__out_z_current),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_edge_i),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_a),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_b),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_c),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_z),32);
        bufp->chgSData(oldp+71,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_dzdx),16);
        bufp->chgSData(oldp+72,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_dzdy),16);
        bufp->chgSData(oldp+73,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+74,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+75,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos))),16);
        bufp->chgSData(oldp+76,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+77,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+78,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0))),16);
        bufp->chgSData(oldp+79,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+80,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+81,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1))),16);
        bufp->chgSData(oldp+82,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+83,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+84,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2))),16);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[0]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[1]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[2]),32);
        bufp->chgCData(oldp+88,((0xffU & (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+89,((0x3fU & (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata 
                                          >> 5U))),6);
        bufp->chgCData(oldp+90,((0x1fU & vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata)),5);
        bufp->chgIData(oldp+91,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_A),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_B),32);
        bufp->chgIData(oldp+93,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_C),32);
        bufp->chgSData(oldp+94,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdx),16);
        bufp->chgSData(oldp+95,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdy),16);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__z_current),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+98,(vlSelfRef.tb_tile__DOT__clk));
    bufp->chgIData(oldp+99,(((0U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                              ? (((IData)(vlSelfRef.tb_tile__DOT__vld_in) 
                                  & (IData)(vlSelfRef.tb_tile__DOT__rdy_in))
                                  ? 1U : 0U) : ((1U 
                                                 == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_tile__DOT__rdy_out)
                                                      ? 0U
                                                      : 5U)
                                                     : 0U))))))),32);
}

void Vtb_tile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_cleanup\n"); );
    // Init
    Vtb_tile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tile___024root*>(voidSelf);
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
