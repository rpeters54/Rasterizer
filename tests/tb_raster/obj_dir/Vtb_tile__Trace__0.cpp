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
        bufp->chgBit(oldp+1,(vlSelfRef.tb_tile__DOT__rdy_out));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_tile__DOT__vld_in));
        bufp->chgSData(oldp+3,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__v0 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+4,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__v0 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+5,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__v0))),16);
        bufp->chgSData(oldp+6,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__v1 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+7,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__v1 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+8,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__v1))),16);
        bufp->chgSData(oldp+9,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__v2 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+10,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__v2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+11,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__v2))),16);
        bufp->chgCData(oldp+12,((0xffU & (vlSelfRef.tb_tile__DOT__in_metadata 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+13,((0x3fU & (vlSelfRef.tb_tile__DOT__in_metadata 
                                          >> 5U))),6);
        bufp->chgCData(oldp+14,((0x1fU & vlSelfRef.tb_tile__DOT__in_metadata)),5);
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
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_start 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+22,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_start 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+23,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_start))),16);
        bufp->chgSData(oldp+24,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_delta_0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+25,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_delta_0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+26,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_delta_0))),16);
        bufp->chgSData(oldp+27,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_delta_1 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+28,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_delta_1 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+29,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_delta_1))),16);
        bufp->chgSData(oldp+30,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_delta_2 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+31,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_delta_2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+32,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_delta_2))),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+33,(vlSelfRef.tb_tile__DOT__rdy_in));
        bufp->chgBit(oldp+34,(vlSelfRef.tb_tile__DOT__vld_out));
        bufp->chgSData(oldp+35,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+36,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__out_abs_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+37,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_abs_pos))),16);
        bufp->chgSData(oldp+38,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+39,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__out_delta_0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+40,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_0))),16);
        bufp->chgSData(oldp+41,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+42,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__out_delta_1 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+43,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_1))),16);
        bufp->chgSData(oldp+44,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+45,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__out_delta_2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+46,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__out_delta_2))),16);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_tile__DOT__out_edge_0),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb_tile__DOT__out_edge_1),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_tile__DOT__out_edge_2),32);
        bufp->chgCData(oldp+50,((0xffU & (vlSelfRef.tb_tile__DOT__out_metadata 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+51,((0x3fU & (vlSelfRef.tb_tile__DOT__out_metadata 
                                          >> 5U))),6);
        bufp->chgCData(oldp+52,((0x1fU & vlSelfRef.tb_tile__DOT__out_metadata)),5);
        bufp->chgSData(oldp+53,(vlSelfRef.tb_tile__DOT__out_dzdx),16);
        bufp->chgSData(oldp+54,(vlSelfRef.tb_tile__DOT__out_dzdy),16);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_tile__DOT__out_z_current),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_edge_i),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_coeff_a),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_coeff_b),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_coeff_c),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_z),32);
        bufp->chgSData(oldp+62,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_dzdx),16);
        bufp->chgSData(oldp+63,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__temp_dzdy),16);
        bufp->chgSData(oldp+64,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__abs_pos 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+65,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__abs_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+66,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__abs_pos))),16);
        bufp->chgSData(oldp+67,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__delta_0 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+68,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__delta_0 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+69,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__delta_0))),16);
        bufp->chgSData(oldp+70,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__delta_1 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+71,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__delta_1 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+72,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__delta_1))),16);
        bufp->chgSData(oldp+73,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__delta_2 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+74,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_tile__DOT__tile_proc__DOT__delta_2 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+75,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__tile_proc__DOT__delta_2))),16);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges[0]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges[1]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__edges[2]),32);
        bufp->chgCData(oldp+79,((0xffU & (vlSelfRef.tb_tile__DOT__tile_proc__DOT__metadata 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+80,((0x3fU & (vlSelfRef.tb_tile__DOT__tile_proc__DOT__metadata 
                                          >> 5U))),6);
        bufp->chgCData(oldp+81,((0x1fU & vlSelfRef.tb_tile__DOT__tile_proc__DOT__metadata)),5);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_A),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_B),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__coeff_C),32);
        bufp->chgSData(oldp+85,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdx),16);
        bufp->chgSData(oldp+86,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__dzdy),16);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__z_current),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_tile__DOT__tile_proc__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+89,(vlSelfRef.tb_tile__DOT__clk));
    bufp->chgIData(oldp+90,(((0U == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                              ? (((IData)(vlSelfRef.tb_tile__DOT__vld_in) 
                                  & (IData)(vlSelfRef.tb_tile__DOT__rdy_in))
                                  ? 1U : 0U) : ((1U 
                                                 == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == vlSelfRef.tb_tile__DOT__tile_proc__DOT__present_state)
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
