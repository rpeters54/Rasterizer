// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_all.h for the primary calling header

#include "Vtb_all__pch.h"
#include "Vtb_all__Syms.h"
#include "Vtb_all___024root.h"

extern const VlWide<12>/*383:0*/ Vtb_all__ConstPool__CONST_h3c5fcb02_0;

VL_ATTR_COLD void Vtb_all___024root___eval_initial__TOP(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_initial__TOP\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f616c6cU;
    __Vtemp_1[2U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__write_ptr = 0U;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__read_ptr = 0U;
    vlSelfRef.tb_all__DOT__rastafarian__DOT__axel_f__DOT__count = 0U;
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[0U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[1U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[1U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[2U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[2U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[3U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[3U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[4U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[4U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[5U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[5U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[6U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[6U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[7U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[7U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[8U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[8U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[9U] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[9U];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xaU] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[0xaU];
    vlSelfRef.tb_all__DOT__rastafarian__DOT____Vcellout__axel_f__data_out[0xbU] 
        = Vtb_all__ConstPool__CONST_h3c5fcb02_0[0xbU];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_all___024root___dump_triggers__stl(Vtb_all___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_all___024root___eval_triggers__stl(Vtb_all___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_all___024root___eval_triggers__stl\n"); );
    Vtb_all__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_all___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
