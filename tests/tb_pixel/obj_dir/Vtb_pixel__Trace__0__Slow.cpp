// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_pixel__Syms.h"


VL_ATTR_COLD void Vtb_pixel___024root__trace_init_sub__TOP__0(Vtb_pixel___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_init_sub__TOP__0\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_pixel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"rdy_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"vld_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("in_abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+55,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+58,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+60,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+61,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+64,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+65,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+67,0,"in_edge_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"in_edge_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"in_edge_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("in_metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+70,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+72,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+73,0,"in_dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"in_dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"in_z_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"rdy_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"vld_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"color_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("pixel_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+4,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+76,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pixel_proc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("in_abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+55,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+58,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+60,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+61,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+63,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("in_delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+64,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+65,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+67,0,"in_edge_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"in_edge_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"in_edge_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("in_metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+70,0,"color",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"tile_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+72,0,"tile_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+73,0,"in_dzdx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"in_dzdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"in_z_current",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"color_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("pixel_out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+4,0,"x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+6,0,"present_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+54,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+7,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("flush_abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+10,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+13,0,"rel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"flush_rel_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("deltas", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+15,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+18,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+21,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+22,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("edges", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+24+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+27,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+29,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+30,0,"dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"z_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("out_coord", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+33,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+35,0,"current_tile_coord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+77,0,"new_tile_coord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("zero", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+78,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+36,0,"edge_row_offset__Vstatic__s_dy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"edge_row_offset__Vstatic__s_dx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"edge_column_offset__Vstatic__s_dy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"z_row_offset__Vstatic__dzdx_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"z_row_offset__Vstatic__dzdy_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("tile_to_coord__Vstatic__out", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+41,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"row_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"dzdx_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_pixel___024root__trace_init_top(Vtb_pixel___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_init_top\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_pixel___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_pixel___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_pixel___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_pixel___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_pixel___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_pixel___024root__trace_register(Vtb_pixel___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_register\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_pixel___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_pixel___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_pixel___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_pixel___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_pixel___024root__trace_const_0_sub_0(Vtb_pixel___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_pixel___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_const_0\n"); );
    // Init
    Vtb_pixel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_pixel___024root*>(voidSelf);
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_pixel___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_pixel___024root__trace_const_0_sub_0(Vtb_pixel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_const_0_sub_0\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+55,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__in_abs_pos 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+56,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__in_abs_pos 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+57,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__in_abs_pos))),16);
    bufp->fullSData(oldp+58,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__in_delta_0 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+59,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__in_delta_0 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+60,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__in_delta_0))),16);
    bufp->fullSData(oldp+61,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__in_delta_1 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+62,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__in_delta_1 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+63,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__in_delta_1))),16);
    bufp->fullSData(oldp+64,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__in_delta_2 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+65,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__in_delta_2 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+66,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__in_delta_2))),16);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_pixel__DOT__in_edge_0),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_pixel__DOT__in_edge_1),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_pixel__DOT__in_edge_2),32);
    bufp->fullCData(oldp+70,((0xffU & (vlSelfRef.tb_pixel__DOT__in_metadata 
                                       >> 0xbU))),8);
    bufp->fullCData(oldp+71,((0x3fU & (vlSelfRef.tb_pixel__DOT__in_metadata 
                                       >> 5U))),6);
    bufp->fullCData(oldp+72,((0x1fU & vlSelfRef.tb_pixel__DOT__in_metadata)),5);
    bufp->fullSData(oldp+73,(vlSelfRef.tb_pixel__DOT__in_dzdx),16);
    bufp->fullSData(oldp+74,(vlSelfRef.tb_pixel__DOT__in_dzdy),16);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_pixel__DOT__in_z_current),32);
    bufp->fullIData(oldp+76,(0xaU),32);
    bufp->fullSData(oldp+77,(((0x7c0U & (vlSelfRef.tb_pixel__DOT__in_metadata 
                                         << 6U)) | 
                              (0x3fU & (vlSelfRef.tb_pixel__DOT__in_metadata 
                                        >> 5U)))),11);
    bufp->fullSData(oldp+78,(0U),16);
}

VL_ATTR_COLD void Vtb_pixel___024root__trace_full_0_sub_0(Vtb_pixel___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_pixel___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_full_0\n"); );
    // Init
    Vtb_pixel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_pixel___024root*>(voidSelf);
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_pixel___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_pixel___024root__trace_full_0_sub_0(Vtb_pixel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pixel___024root__trace_full_0_sub_0\n"); );
    Vtb_pixel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_pixel__DOT__rdy_in));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_pixel__DOT__vld_out));
    bufp->fullCData(oldp+3,(vlSelfRef.tb_pixel__DOT__color_out),8);
    bufp->fullSData(oldp+4,((vlSelfRef.tb_pixel__DOT__pixel_out 
                             >> 0x10U)),16);
    bufp->fullSData(oldp+5,((0xffffU & vlSelfRef.tb_pixel__DOT__pixel_out)),16);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state),32);
    bufp->fullSData(oldp+7,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                                                >> 0x20U)))),16);
    bufp->fullSData(oldp+8,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos 
                                                >> 0x10U)))),16);
    bufp->fullSData(oldp+9,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__abs_pos))),16);
    bufp->fullSData(oldp+10,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+11,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+12,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos))),16);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__rel_pos),8);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_rel_pos),8);
    bufp->fullSData(oldp+15,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                 [0U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+16,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                 [0U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+17,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                [0U]))),16);
    bufp->fullSData(oldp+18,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                 [1U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+19,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                 [1U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+20,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                [1U]))),16);
    bufp->fullSData(oldp+21,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                 [2U] 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+22,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                 [2U] 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+23,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__deltas
                                                [2U]))),16);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[0]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[1]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edges[2]),32);
    bufp->fullCData(oldp+27,((0xffU & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                       >> 0xbU))),8);
    bufp->fullCData(oldp+28,((0x3fU & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                       >> 5U))),6);
    bufp->fullCData(oldp+29,((0x1fU & vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata)),5);
    bufp->fullSData(oldp+30,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdx),16);
    bufp->fullSData(oldp+31,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__dzdy),16);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_current),32);
    bufp->fullSData(oldp+33,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+34,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__flush_abs_pos 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+35,(((0x7c0U & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                         << 6U)) | 
                              (0x3fU & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                        >> 5U)))),11);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dy),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_row_offset__Vstatic__s_dx),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__edge_column_offset__Vstatic__s_dy),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdx_ext),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__z_row_offset__Vstatic__dzdy_ext),32);
    bufp->fullSData(oldp+41,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+42,((0xffffU & (IData)((vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+43,((0xffffU & (IData)(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__tile_to_coord__Vstatic__out))),16);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+45,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+46,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+47,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk3__DOT__unnamedblk4__DOT__row_off),32);
    bufp->fullIData(oldp+48,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk5__DOT__dzdx_ext),32);
    bufp->fullIData(oldp+49,(vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__unnamedblk6__DOT__i),32);
    bufp->fullBit(oldp+50,(vlSelfRef.tb_pixel__DOT__clk));
    bufp->fullBit(oldp+51,(vlSelfRef.tb_pixel__DOT__rst_n));
    bufp->fullBit(oldp+52,(vlSelfRef.tb_pixel__DOT__rdy_out));
    bufp->fullBit(oldp+53,(vlSelfRef.tb_pixel__DOT__vld_in));
    bufp->fullIData(oldp+54,(((0U == vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__present_state)
                               ? ((IData)(vlSelfRef.tb_pixel__DOT__vld_in)
                                   ? ((((0x7c0U & (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                                   << 6U)) 
                                        | (0x3fU & 
                                           (vlSelfRef.tb_pixel__DOT__pixel_proc__DOT__metadata 
                                            >> 5U))) 
                                       >= ((0x7c0U 
                                            & (vlSelfRef.tb_pixel__DOT__in_metadata 
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
