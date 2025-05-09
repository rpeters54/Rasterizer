// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_pixel__Syms.h"


void Vtb_pixel___024root__trace_chg_0_sub_0(Vtb_pixel___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_pixel___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_chg_0\n"); );
    // Init
    Vtb_pixel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_pixel___024root*>(voidSelf);
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_pixel___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_pixel___024root__trace_chg_0_sub_0(Vtb_pixel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_chg_0_sub_0\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_pixel__DOT__rdy_in));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_pixel__DOT__vld_out));
        bufp->chgCData(oldp+2,(vlSelfRef.tb_pixel__DOT__color_out),8);
        bufp->chgSData(oldp+3,((vlSelfRef.tb_pixel__DOT__pixel_out 
                                >> 0x10U)),16);
        bufp->chgSData(oldp+4,((0xffffU & vlSelfRef.tb_pixel__DOT__pixel_out)),16);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state),32);
        bufp->chgSData(oldp+6,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+7,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                                                   >> 0x10U)))),16);
        bufp->chgSData(oldp+8,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos))),16);
        bufp->chgSData(oldp+9,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                   >> 0x20U)))),16);
        bufp->chgSData(oldp+10,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+11,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos))),16);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos),8);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos),8);
        bufp->chgSData(oldp+14,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                    [0U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+15,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                    [0U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+16,((0xffffU & (IData)(
                                                   vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                   [0U]))),16);
        bufp->chgSData(oldp+17,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                    [1U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+18,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                    [1U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+19,((0xffffU & (IData)(
                                                   vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                   [1U]))),16);
        bufp->chgSData(oldp+20,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                    [2U] 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+21,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                    [2U] 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+22,((0xffffU & (IData)(
                                                   vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                   [2U]))),16);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[0]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[1]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[2]),32);
        bufp->chgCData(oldp+26,((0xffU & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                          >> 0xbU))),8);
        bufp->chgCData(oldp+27,((0x3fU & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                          >> 5U))),6);
        bufp->chgCData(oldp+28,((0x1fU & vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata)),5);
        bufp->chgSData(oldp+29,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdx),16);
        bufp->chgSData(oldp+30,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdy),16);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_current),32);
        bufp->chgSData(oldp+32,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+33,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+34,(((0x7c0U & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                            << 6U)) 
                                 | (0x3fU & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                             >> 5U)))),11);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy),32);
        bufp->chgSData(oldp+38,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+39,((0xffffU & (IData)(
                                                   (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+40,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out))),16);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk4__DOT__i),32);
    }
    bufp->chgBit(oldp+45,(vlSelfRef.tb_pixel__DOT__clk));
    bufp->chgBit(oldp+46,(vlSelfRef.tb_pixel__DOT__rst_n));
    bufp->chgBit(oldp+47,(vlSelfRef.tb_pixel__DOT__rdy_out));
    bufp->chgBit(oldp+48,(vlSelfRef.tb_pixel__DOT__vld_in));
    bufp->chgIData(oldp+49,(((0U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)
                              ? ((IData)(vlSelfRef.tb_pixel__DOT__vld_in)
                                  ? ((((0x7c0U & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                                  << 6U)) 
                                       | (0x3fU & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                                   >> 5U))) 
                                      >= ((0x7c0U & 
                                           (vlSelfRef.tb_pixel__DOT__in_metadata 
                                            << 6U)) 
                                          | (0x3fU 
                                             & (vlSelfRef.tb_pixel__DOT__in_metadata 
                                                >> 5U))))
                                      ? 2U : 1U) : 0U)
                              : ((1U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)
                                  ? ((0xffU > (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos))
                                      ? 1U : 2U) : 
                                 ((2U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)
                                   ? ((0xffU > (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos))
                                       ? 2U : 0U) : 0U)))),32);
}

void Vtb_pixel___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_cleanup\n"); );
    // Init
    Vtb_pixel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_pixel___024root*>(voidSelf);
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
