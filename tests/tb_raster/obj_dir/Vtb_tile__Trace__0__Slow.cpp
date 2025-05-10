// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_tile__Syms.h"


VL_ATTR_COLD void Vtb_tile___024root__trace_init_sub__TOP__0(Vtb_tile___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_init_sub__TOP__0\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_tile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"vld_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rdy_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rdy_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"vld_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"v0_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"v0_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"v0_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"v1_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"v1_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"v1_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"v2_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"v2_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"v2_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"in_color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"in_tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"in_tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"out_abs_pos_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"out_abs_pos_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"out_abs_pos_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"out_delta_0_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"out_delta_0_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"out_delta_0_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"out_delta_1_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"out_delta_1_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"out_delta_1_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"out_delta_2_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"out_delta_2_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"out_delta_2_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"out_edge_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"out_edge_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"out_edge_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"out_color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"out_tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+62,0,"out_tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"out_dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"out_dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+65,0,"out_z_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("make_coord__Vstatic__point", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+16,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+18,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("make_meta__Vstatic__meta", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+19,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_tile_processor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rdy_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"vld_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"v0_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"v0_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"v0_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"v1_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,0,"v1_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"v1_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"v2_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"v2_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"v2_z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"in_color",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"in_tile_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+15,0,"in_tile_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"rdy_in",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"out_abs_pos_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"out_abs_pos_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"out_abs_pos_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"out_delta_0_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"out_delta_0_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"out_delta_0_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"out_delta_1_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+52,0,"out_delta_1_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"out_delta_1_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"out_delta_2_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"out_delta_2_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+56,0,"out_delta_2_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"out_edge_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"out_edge_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"out_edge_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"out_color",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"out_tile_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+62,0,"out_tile_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+63,0,"out_dzdx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"out_dzdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+65,0,"out_z_current",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"present_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+100,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("temp_start", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+22,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("temp_delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+25,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("temp_delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+28,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("temp_delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+31,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->declBus(c+67,0,"temp_edge_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"temp_coeff_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"temp_coeff_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"temp_coeff_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"temp_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"temp_dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"temp_dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("v0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+34,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("v1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+37,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+38,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("v2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+40,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+42,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("zero", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+102,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("abs_pos", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+74,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+75,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+76,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("delta_0", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+77,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+78,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+79,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("delta_1", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+80,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+81,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+82,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("delta_2", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+83,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+84,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+85,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("edges", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+86+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("metadata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+89,0,"color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"tile_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+91,0,"tile_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+92,0,"coeff_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"coeff_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"coeff_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"dzdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+96,0,"dzdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"z_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_tile___024root__trace_init_top(Vtb_tile___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_init_top\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_tile___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_tile___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_tile___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_tile___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_tile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_tile___024root__trace_register(Vtb_tile___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_register\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_tile___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_tile___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_tile___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_tile___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_tile___024root__trace_const_0_sub_0(Vtb_tile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_tile___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_const_0\n"); );
    // Init
    Vtb_tile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tile___024root*>(voidSelf);
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_tile___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_tile___024root__trace_const_0_sub_0(Vtb_tile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_const_0_sub_0\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+101,(0xaU),32);
    bufp->fullSData(oldp+102,(0U),16);
}

VL_ATTR_COLD void Vtb_tile___024root__trace_full_0_sub_0(Vtb_tile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_tile___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_full_0\n"); );
    // Init
    Vtb_tile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tile___024root*>(voidSelf);
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_tile___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_tile___024root__trace_full_0_sub_0(Vtb_tile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tile___024root__trace_full_0_sub_0\n"); );
    Vtb_tile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_tile__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_tile__DOT__vld_in));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_tile__DOT__rdy_out));
    bufp->fullSData(oldp+4,(vlSelfRef.tb_tile__DOT__v0_x),16);
    bufp->fullSData(oldp+5,(vlSelfRef.tb_tile__DOT__v0_y),16);
    bufp->fullSData(oldp+6,(vlSelfRef.tb_tile__DOT__v0_z),16);
    bufp->fullSData(oldp+7,(vlSelfRef.tb_tile__DOT__v1_x),16);
    bufp->fullSData(oldp+8,(vlSelfRef.tb_tile__DOT__v1_y),16);
    bufp->fullSData(oldp+9,(vlSelfRef.tb_tile__DOT__v1_z),16);
    bufp->fullSData(oldp+10,(vlSelfRef.tb_tile__DOT__v2_x),16);
    bufp->fullSData(oldp+11,(vlSelfRef.tb_tile__DOT__v2_y),16);
    bufp->fullSData(oldp+12,(vlSelfRef.tb_tile__DOT__v2_z),16);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_tile__DOT__in_color),8);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_tile__DOT__in_tile_x),6);
    bufp->fullCData(oldp+15,(vlSelfRef.tb_tile__DOT__in_tile_y),5);
    bufp->fullSData(oldp+16,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+17,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+18,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__make_coord__Vstatic__point))),16);
    bufp->fullCData(oldp+19,((0xffU & (vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta 
                                       >> 0xbU))),8);
    bufp->fullCData(oldp+20,((0x3fU & (vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta 
                                       >> 5U))),6);
    bufp->fullCData(oldp+21,((0x1fU & vlSelfRef.tb_tile__DOT__make_meta__Vstatic__meta)),5);
    bufp->fullSData(oldp+22,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+23,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+24,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_start))),16);
    bufp->fullSData(oldp+25,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+26,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+27,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_0))),16);
    bufp->fullSData(oldp+28,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+29,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+30,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_1))),16);
    bufp->fullSData(oldp+31,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+32,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+33,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_delta_2))),16);
    bufp->fullSData(oldp+34,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+35,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+36,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v0))),16);
    bufp->fullSData(oldp+37,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+38,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+39,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v1))),16);
    bufp->fullSData(oldp+40,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+41,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+42,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__v2))),16);
    bufp->fullBit(oldp+43,(vlSelfRef.tb_tile__DOT__rdy_in));
    bufp->fullBit(oldp+44,(vlSelfRef.tb_tile__DOT__vld_out));
    bufp->fullSData(oldp+45,(vlSelfRef.tb_tile__DOT__out_abs_pos_x),16);
    bufp->fullSData(oldp+46,(vlSelfRef.tb_tile__DOT__out_abs_pos_y),16);
    bufp->fullSData(oldp+47,(vlSelfRef.tb_tile__DOT__out_abs_pos_z),16);
    bufp->fullSData(oldp+48,(vlSelfRef.tb_tile__DOT__out_delta_0_x),16);
    bufp->fullSData(oldp+49,(vlSelfRef.tb_tile__DOT__out_delta_0_y),16);
    bufp->fullSData(oldp+50,(vlSelfRef.tb_tile__DOT__out_delta_0_z),16);
    bufp->fullSData(oldp+51,(vlSelfRef.tb_tile__DOT__out_delta_1_x),16);
    bufp->fullSData(oldp+52,(vlSelfRef.tb_tile__DOT__out_delta_1_y),16);
    bufp->fullSData(oldp+53,(vlSelfRef.tb_tile__DOT__out_delta_1_z),16);
    bufp->fullSData(oldp+54,(vlSelfRef.tb_tile__DOT__out_delta_2_x),16);
    bufp->fullSData(oldp+55,(vlSelfRef.tb_tile__DOT__out_delta_2_y),16);
    bufp->fullSData(oldp+56,(vlSelfRef.tb_tile__DOT__out_delta_2_z),16);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_tile__DOT__out_edge_0),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_tile__DOT__out_edge_1),32);
    bufp->fullIData(oldp+59,(vlSelfRef.tb_tile__DOT__out_edge_2),32);
    bufp->fullCData(oldp+60,(vlSelfRef.tb_tile__DOT__out_color),8);
    bufp->fullCData(oldp+61,(vlSelfRef.tb_tile__DOT__out_tile_x),6);
    bufp->fullCData(oldp+62,(vlSelfRef.tb_tile__DOT__out_tile_y),5);
    bufp->fullSData(oldp+63,(vlSelfRef.tb_tile__DOT__out_dzdx),16);
    bufp->fullSData(oldp+64,(vlSelfRef.tb_tile__DOT__out_dzdy),16);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_tile__DOT__out_z_current),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state),32);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_edge_i),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_a),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_b),32);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_coeff_c),32);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_z),32);
    bufp->fullSData(oldp+72,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_dzdx),16);
    bufp->fullSData(oldp+73,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__temp_dzdy),16);
    bufp->fullSData(oldp+74,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+75,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+76,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__abs_pos))),16);
    bufp->fullSData(oldp+77,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+78,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+79,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_0))),16);
    bufp->fullSData(oldp+80,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+81,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+82,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_1))),16);
    bufp->fullSData(oldp+83,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+84,((0xffffU & (IData)((vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+85,((0xffffU & (IData)(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__delta_2))),16);
    bufp->fullIData(oldp+86,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[0]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[1]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__edges[2]),32);
    bufp->fullCData(oldp+89,((0xffU & (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata 
                                       >> 0xbU))),8);
    bufp->fullCData(oldp+90,((0x3fU & (vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata 
                                       >> 5U))),6);
    bufp->fullCData(oldp+91,((0x1fU & vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__metadata)),5);
    bufp->fullIData(oldp+92,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_A),32);
    bufp->fullIData(oldp+93,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_B),32);
    bufp->fullIData(oldp+94,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__coeff_C),32);
    bufp->fullSData(oldp+95,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdx),16);
    bufp->fullSData(oldp+96,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__dzdy),16);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__z_current),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+99,(vlSelfRef.tb_tile__DOT__clk));
    bufp->fullIData(oldp+100,(((0U == vlSelfRef.tb_tile__DOT__u_tile_processor__DOT__present_state)
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
