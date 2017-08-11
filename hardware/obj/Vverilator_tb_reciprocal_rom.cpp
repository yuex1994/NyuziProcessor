// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_tb.h for the primary calling header

#include "Vverilator_tb_reciprocal_rom.h" // For This
#include "Vverilator_tb__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable1_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable2_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable3_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable4_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable5_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable6_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable7_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable8_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable9_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable10_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable11_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable12_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable13_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable14_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable15_reciprocal_estimate[64],5,0);
VL_ST_SIG8(Vverilator_tb_reciprocal_rom::__Vtable16_reciprocal_estimate[64],5,0);

//--------------------

VL_CTOR_IMP(Vverilator_tb_reciprocal_rom) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vverilator_tb_reciprocal_rom::__Vconfigure(Vverilator_tb__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vverilator_tb_reciprocal_rom::~Vverilator_tb_reciprocal_rom() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom__1(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom__1\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom.__Vtableidx1 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[1U] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom.__Vtable1_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom.__Vtableidx1];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom__2(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom__2\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom.__Vtableidx2 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[2U] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[1U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom.__Vtable2_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom.__Vtableidx2];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom__3(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom__3\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom.__Vtableidx3 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[3U] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[2U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom.__Vtable3_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom.__Vtableidx3];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom__4(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom__4\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom.__Vtableidx4 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[4U] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[3U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom.__Vtable4_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom.__Vtableidx4];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom__5(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom__5\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom.__Vtableidx5 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[5U] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[4U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom.__Vtable5_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom.__Vtableidx5];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom__6(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom__6\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom.__Vtableidx6 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[6U] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[5U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom.__Vtable6_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom.__Vtableidx6];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom__7(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom__7\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom.__Vtableidx7 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[7U] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[6U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom.__Vtable7_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom.__Vtableidx7];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom__8(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom__8\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom.__Vtableidx8 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[8U] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[7U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom.__Vtable8_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom.__Vtableidx8];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom__9(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom__9\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom.__Vtableidx9 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[9U] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[8U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom.__Vtable9_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom.__Vtableidx9];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom__10(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom__10\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom.__Vtableidx10 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xaU] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[9U] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom.__Vtable10_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom.__Vtableidx10];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom__11(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom__11\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom.__Vtableidx11 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xbU] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xaU] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom.__Vtable11_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom.__Vtableidx11];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom__12(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom__12\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom.__Vtableidx12 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xcU] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xbU] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom.__Vtable12_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom.__Vtableidx12];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom__13(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom__13\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom.__Vtableidx13 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xdU] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xcU] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom.__Vtable13_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom.__Vtableidx13];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom__14(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom__14\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom.__Vtableidx14 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xeU] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xdU] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom.__Vtable14_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom.__Vtableidx14];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom__15(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom__15\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom.__Vtableidx15 
	= (0x3fU & ((vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xfU] 
		     << 0xfU) | (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xeU] 
				 >> 0x11U)));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom.__Vtable15_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom.__Vtableidx15];
}

VL_INLINE_OPT void Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom__16(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom__16\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at core/reciprocal_rom.sv:25
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom.__Vtableidx16 
	= (0x3fU & (vlTOPp->verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__of_operand2[0xfU] 
		    >> 0x11U));
    vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom.reciprocal_estimate 
	= vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom.__Vtable16_reciprocal_estimate
	[vlSymsp->TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom.__Vtableidx16];
}

void Vverilator_tb_reciprocal_rom::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_ctor_var_reset\n"); );
    // Body
    significand = VL_RAND_RESET_I(6);
    reciprocal_estimate = VL_RAND_RESET_I(6);
    __Vtableidx1 = VL_RAND_RESET_I(6);
    __Vtable1_reciprocal_estimate[0] = 0U;
    __Vtable1_reciprocal_estimate[1] = 0x3eU;
    __Vtable1_reciprocal_estimate[2] = 0x3cU;
    __Vtable1_reciprocal_estimate[3] = 0x3aU;
    __Vtable1_reciprocal_estimate[4] = 0x38U;
    __Vtable1_reciprocal_estimate[5] = 0x36U;
    __Vtable1_reciprocal_estimate[6] = 0x35U;
    __Vtable1_reciprocal_estimate[7] = 0x33U;
    __Vtable1_reciprocal_estimate[8] = 0x31U;
    __Vtable1_reciprocal_estimate[9] = 0x30U;
    __Vtable1_reciprocal_estimate[10] = 0x2eU;
    __Vtable1_reciprocal_estimate[11] = 0x2dU;
    __Vtable1_reciprocal_estimate[12] = 0x2bU;
    __Vtable1_reciprocal_estimate[13] = 0x2aU;
    __Vtable1_reciprocal_estimate[14] = 0x29U;
    __Vtable1_reciprocal_estimate[15] = 0x27U;
    __Vtable1_reciprocal_estimate[16] = 0x26U;
    __Vtable1_reciprocal_estimate[17] = 0x25U;
    __Vtable1_reciprocal_estimate[18] = 0x23U;
    __Vtable1_reciprocal_estimate[19] = 0x22U;
    __Vtable1_reciprocal_estimate[20] = 0x21U;
    __Vtable1_reciprocal_estimate[21] = 0x20U;
    __Vtable1_reciprocal_estimate[22] = 0x1fU;
    __Vtable1_reciprocal_estimate[23] = 0x1eU;
    __Vtable1_reciprocal_estimate[24] = 0x1dU;
    __Vtable1_reciprocal_estimate[25] = 0x1cU;
    __Vtable1_reciprocal_estimate[26] = 0x1bU;
    __Vtable1_reciprocal_estimate[27] = 0x1aU;
    __Vtable1_reciprocal_estimate[28] = 0x19U;
    __Vtable1_reciprocal_estimate[29] = 0x18U;
    __Vtable1_reciprocal_estimate[30] = 0x17U;
    __Vtable1_reciprocal_estimate[31] = 0x16U;
    __Vtable1_reciprocal_estimate[32] = 0x15U;
    __Vtable1_reciprocal_estimate[33] = 0x14U;
    __Vtable1_reciprocal_estimate[34] = 0x13U;
    __Vtable1_reciprocal_estimate[35] = 0x12U;
    __Vtable1_reciprocal_estimate[36] = 0x11U;
    __Vtable1_reciprocal_estimate[37] = 0x11U;
    __Vtable1_reciprocal_estimate[38] = 0x10U;
    __Vtable1_reciprocal_estimate[39] = 0xfU;
    __Vtable1_reciprocal_estimate[40] = 0xeU;
    __Vtable1_reciprocal_estimate[41] = 0xeU;
    __Vtable1_reciprocal_estimate[42] = 0xdU;
    __Vtable1_reciprocal_estimate[43] = 0xcU;
    __Vtable1_reciprocal_estimate[44] = 0xbU;
    __Vtable1_reciprocal_estimate[45] = 0xbU;
    __Vtable1_reciprocal_estimate[46] = 0xaU;
    __Vtable1_reciprocal_estimate[47] = 9U;
    __Vtable1_reciprocal_estimate[48] = 9U;
    __Vtable1_reciprocal_estimate[49] = 8U;
    __Vtable1_reciprocal_estimate[50] = 7U;
    __Vtable1_reciprocal_estimate[51] = 7U;
    __Vtable1_reciprocal_estimate[52] = 6U;
    __Vtable1_reciprocal_estimate[53] = 6U;
    __Vtable1_reciprocal_estimate[54] = 5U;
    __Vtable1_reciprocal_estimate[55] = 4U;
    __Vtable1_reciprocal_estimate[56] = 4U;
    __Vtable1_reciprocal_estimate[57] = 3U;
    __Vtable1_reciprocal_estimate[58] = 3U;
    __Vtable1_reciprocal_estimate[59] = 2U;
    __Vtable1_reciprocal_estimate[60] = 2U;
    __Vtable1_reciprocal_estimate[61] = 1U;
    __Vtable1_reciprocal_estimate[62] = 1U;
    __Vtable1_reciprocal_estimate[63] = 0U;
    __Vtableidx2 = VL_RAND_RESET_I(6);
    __Vtable2_reciprocal_estimate[0] = 0U;
    __Vtable2_reciprocal_estimate[1] = 0x3eU;
    __Vtable2_reciprocal_estimate[2] = 0x3cU;
    __Vtable2_reciprocal_estimate[3] = 0x3aU;
    __Vtable2_reciprocal_estimate[4] = 0x38U;
    __Vtable2_reciprocal_estimate[5] = 0x36U;
    __Vtable2_reciprocal_estimate[6] = 0x35U;
    __Vtable2_reciprocal_estimate[7] = 0x33U;
    __Vtable2_reciprocal_estimate[8] = 0x31U;
    __Vtable2_reciprocal_estimate[9] = 0x30U;
    __Vtable2_reciprocal_estimate[10] = 0x2eU;
    __Vtable2_reciprocal_estimate[11] = 0x2dU;
    __Vtable2_reciprocal_estimate[12] = 0x2bU;
    __Vtable2_reciprocal_estimate[13] = 0x2aU;
    __Vtable2_reciprocal_estimate[14] = 0x29U;
    __Vtable2_reciprocal_estimate[15] = 0x27U;
    __Vtable2_reciprocal_estimate[16] = 0x26U;
    __Vtable2_reciprocal_estimate[17] = 0x25U;
    __Vtable2_reciprocal_estimate[18] = 0x23U;
    __Vtable2_reciprocal_estimate[19] = 0x22U;
    __Vtable2_reciprocal_estimate[20] = 0x21U;
    __Vtable2_reciprocal_estimate[21] = 0x20U;
    __Vtable2_reciprocal_estimate[22] = 0x1fU;
    __Vtable2_reciprocal_estimate[23] = 0x1eU;
    __Vtable2_reciprocal_estimate[24] = 0x1dU;
    __Vtable2_reciprocal_estimate[25] = 0x1cU;
    __Vtable2_reciprocal_estimate[26] = 0x1bU;
    __Vtable2_reciprocal_estimate[27] = 0x1aU;
    __Vtable2_reciprocal_estimate[28] = 0x19U;
    __Vtable2_reciprocal_estimate[29] = 0x18U;
    __Vtable2_reciprocal_estimate[30] = 0x17U;
    __Vtable2_reciprocal_estimate[31] = 0x16U;
    __Vtable2_reciprocal_estimate[32] = 0x15U;
    __Vtable2_reciprocal_estimate[33] = 0x14U;
    __Vtable2_reciprocal_estimate[34] = 0x13U;
    __Vtable2_reciprocal_estimate[35] = 0x12U;
    __Vtable2_reciprocal_estimate[36] = 0x11U;
    __Vtable2_reciprocal_estimate[37] = 0x11U;
    __Vtable2_reciprocal_estimate[38] = 0x10U;
    __Vtable2_reciprocal_estimate[39] = 0xfU;
    __Vtable2_reciprocal_estimate[40] = 0xeU;
    __Vtable2_reciprocal_estimate[41] = 0xeU;
    __Vtable2_reciprocal_estimate[42] = 0xdU;
    __Vtable2_reciprocal_estimate[43] = 0xcU;
    __Vtable2_reciprocal_estimate[44] = 0xbU;
    __Vtable2_reciprocal_estimate[45] = 0xbU;
    __Vtable2_reciprocal_estimate[46] = 0xaU;
    __Vtable2_reciprocal_estimate[47] = 9U;
    __Vtable2_reciprocal_estimate[48] = 9U;
    __Vtable2_reciprocal_estimate[49] = 8U;
    __Vtable2_reciprocal_estimate[50] = 7U;
    __Vtable2_reciprocal_estimate[51] = 7U;
    __Vtable2_reciprocal_estimate[52] = 6U;
    __Vtable2_reciprocal_estimate[53] = 6U;
    __Vtable2_reciprocal_estimate[54] = 5U;
    __Vtable2_reciprocal_estimate[55] = 4U;
    __Vtable2_reciprocal_estimate[56] = 4U;
    __Vtable2_reciprocal_estimate[57] = 3U;
    __Vtable2_reciprocal_estimate[58] = 3U;
    __Vtable2_reciprocal_estimate[59] = 2U;
    __Vtable2_reciprocal_estimate[60] = 2U;
    __Vtable2_reciprocal_estimate[61] = 1U;
    __Vtable2_reciprocal_estimate[62] = 1U;
    __Vtable2_reciprocal_estimate[63] = 0U;
    __Vtableidx3 = VL_RAND_RESET_I(6);
    __Vtable3_reciprocal_estimate[0] = 0U;
    __Vtable3_reciprocal_estimate[1] = 0x3eU;
    __Vtable3_reciprocal_estimate[2] = 0x3cU;
    __Vtable3_reciprocal_estimate[3] = 0x3aU;
    __Vtable3_reciprocal_estimate[4] = 0x38U;
    __Vtable3_reciprocal_estimate[5] = 0x36U;
    __Vtable3_reciprocal_estimate[6] = 0x35U;
    __Vtable3_reciprocal_estimate[7] = 0x33U;
    __Vtable3_reciprocal_estimate[8] = 0x31U;
    __Vtable3_reciprocal_estimate[9] = 0x30U;
    __Vtable3_reciprocal_estimate[10] = 0x2eU;
    __Vtable3_reciprocal_estimate[11] = 0x2dU;
    __Vtable3_reciprocal_estimate[12] = 0x2bU;
    __Vtable3_reciprocal_estimate[13] = 0x2aU;
    __Vtable3_reciprocal_estimate[14] = 0x29U;
    __Vtable3_reciprocal_estimate[15] = 0x27U;
    __Vtable3_reciprocal_estimate[16] = 0x26U;
    __Vtable3_reciprocal_estimate[17] = 0x25U;
    __Vtable3_reciprocal_estimate[18] = 0x23U;
    __Vtable3_reciprocal_estimate[19] = 0x22U;
    __Vtable3_reciprocal_estimate[20] = 0x21U;
    __Vtable3_reciprocal_estimate[21] = 0x20U;
    __Vtable3_reciprocal_estimate[22] = 0x1fU;
    __Vtable3_reciprocal_estimate[23] = 0x1eU;
    __Vtable3_reciprocal_estimate[24] = 0x1dU;
    __Vtable3_reciprocal_estimate[25] = 0x1cU;
    __Vtable3_reciprocal_estimate[26] = 0x1bU;
    __Vtable3_reciprocal_estimate[27] = 0x1aU;
    __Vtable3_reciprocal_estimate[28] = 0x19U;
    __Vtable3_reciprocal_estimate[29] = 0x18U;
    __Vtable3_reciprocal_estimate[30] = 0x17U;
    __Vtable3_reciprocal_estimate[31] = 0x16U;
    __Vtable3_reciprocal_estimate[32] = 0x15U;
    __Vtable3_reciprocal_estimate[33] = 0x14U;
    __Vtable3_reciprocal_estimate[34] = 0x13U;
    __Vtable3_reciprocal_estimate[35] = 0x12U;
    __Vtable3_reciprocal_estimate[36] = 0x11U;
    __Vtable3_reciprocal_estimate[37] = 0x11U;
    __Vtable3_reciprocal_estimate[38] = 0x10U;
    __Vtable3_reciprocal_estimate[39] = 0xfU;
    __Vtable3_reciprocal_estimate[40] = 0xeU;
    __Vtable3_reciprocal_estimate[41] = 0xeU;
    __Vtable3_reciprocal_estimate[42] = 0xdU;
    __Vtable3_reciprocal_estimate[43] = 0xcU;
    __Vtable3_reciprocal_estimate[44] = 0xbU;
    __Vtable3_reciprocal_estimate[45] = 0xbU;
    __Vtable3_reciprocal_estimate[46] = 0xaU;
    __Vtable3_reciprocal_estimate[47] = 9U;
    __Vtable3_reciprocal_estimate[48] = 9U;
    __Vtable3_reciprocal_estimate[49] = 8U;
    __Vtable3_reciprocal_estimate[50] = 7U;
    __Vtable3_reciprocal_estimate[51] = 7U;
    __Vtable3_reciprocal_estimate[52] = 6U;
    __Vtable3_reciprocal_estimate[53] = 6U;
    __Vtable3_reciprocal_estimate[54] = 5U;
    __Vtable3_reciprocal_estimate[55] = 4U;
    __Vtable3_reciprocal_estimate[56] = 4U;
    __Vtable3_reciprocal_estimate[57] = 3U;
    __Vtable3_reciprocal_estimate[58] = 3U;
    __Vtable3_reciprocal_estimate[59] = 2U;
    __Vtable3_reciprocal_estimate[60] = 2U;
    __Vtable3_reciprocal_estimate[61] = 1U;
    __Vtable3_reciprocal_estimate[62] = 1U;
    __Vtable3_reciprocal_estimate[63] = 0U;
    __Vtableidx4 = VL_RAND_RESET_I(6);
    __Vtable4_reciprocal_estimate[0] = 0U;
    __Vtable4_reciprocal_estimate[1] = 0x3eU;
    __Vtable4_reciprocal_estimate[2] = 0x3cU;
    __Vtable4_reciprocal_estimate[3] = 0x3aU;
    __Vtable4_reciprocal_estimate[4] = 0x38U;
    __Vtable4_reciprocal_estimate[5] = 0x36U;
    __Vtable4_reciprocal_estimate[6] = 0x35U;
    __Vtable4_reciprocal_estimate[7] = 0x33U;
    __Vtable4_reciprocal_estimate[8] = 0x31U;
    __Vtable4_reciprocal_estimate[9] = 0x30U;
    __Vtable4_reciprocal_estimate[10] = 0x2eU;
    __Vtable4_reciprocal_estimate[11] = 0x2dU;
    __Vtable4_reciprocal_estimate[12] = 0x2bU;
    __Vtable4_reciprocal_estimate[13] = 0x2aU;
    __Vtable4_reciprocal_estimate[14] = 0x29U;
    __Vtable4_reciprocal_estimate[15] = 0x27U;
    __Vtable4_reciprocal_estimate[16] = 0x26U;
    __Vtable4_reciprocal_estimate[17] = 0x25U;
    __Vtable4_reciprocal_estimate[18] = 0x23U;
    __Vtable4_reciprocal_estimate[19] = 0x22U;
    __Vtable4_reciprocal_estimate[20] = 0x21U;
    __Vtable4_reciprocal_estimate[21] = 0x20U;
    __Vtable4_reciprocal_estimate[22] = 0x1fU;
    __Vtable4_reciprocal_estimate[23] = 0x1eU;
    __Vtable4_reciprocal_estimate[24] = 0x1dU;
    __Vtable4_reciprocal_estimate[25] = 0x1cU;
    __Vtable4_reciprocal_estimate[26] = 0x1bU;
    __Vtable4_reciprocal_estimate[27] = 0x1aU;
    __Vtable4_reciprocal_estimate[28] = 0x19U;
    __Vtable4_reciprocal_estimate[29] = 0x18U;
    __Vtable4_reciprocal_estimate[30] = 0x17U;
    __Vtable4_reciprocal_estimate[31] = 0x16U;
    __Vtable4_reciprocal_estimate[32] = 0x15U;
    __Vtable4_reciprocal_estimate[33] = 0x14U;
    __Vtable4_reciprocal_estimate[34] = 0x13U;
    __Vtable4_reciprocal_estimate[35] = 0x12U;
    __Vtable4_reciprocal_estimate[36] = 0x11U;
    __Vtable4_reciprocal_estimate[37] = 0x11U;
    __Vtable4_reciprocal_estimate[38] = 0x10U;
    __Vtable4_reciprocal_estimate[39] = 0xfU;
    __Vtable4_reciprocal_estimate[40] = 0xeU;
    __Vtable4_reciprocal_estimate[41] = 0xeU;
    __Vtable4_reciprocal_estimate[42] = 0xdU;
    __Vtable4_reciprocal_estimate[43] = 0xcU;
    __Vtable4_reciprocal_estimate[44] = 0xbU;
    __Vtable4_reciprocal_estimate[45] = 0xbU;
    __Vtable4_reciprocal_estimate[46] = 0xaU;
    __Vtable4_reciprocal_estimate[47] = 9U;
    __Vtable4_reciprocal_estimate[48] = 9U;
    __Vtable4_reciprocal_estimate[49] = 8U;
    __Vtable4_reciprocal_estimate[50] = 7U;
    __Vtable4_reciprocal_estimate[51] = 7U;
    __Vtable4_reciprocal_estimate[52] = 6U;
    __Vtable4_reciprocal_estimate[53] = 6U;
    __Vtable4_reciprocal_estimate[54] = 5U;
    __Vtable4_reciprocal_estimate[55] = 4U;
    __Vtable4_reciprocal_estimate[56] = 4U;
    __Vtable4_reciprocal_estimate[57] = 3U;
    __Vtable4_reciprocal_estimate[58] = 3U;
    __Vtable4_reciprocal_estimate[59] = 2U;
    __Vtable4_reciprocal_estimate[60] = 2U;
    __Vtable4_reciprocal_estimate[61] = 1U;
    __Vtable4_reciprocal_estimate[62] = 1U;
    __Vtable4_reciprocal_estimate[63] = 0U;
    __Vtableidx5 = VL_RAND_RESET_I(6);
    __Vtable5_reciprocal_estimate[0] = 0U;
    __Vtable5_reciprocal_estimate[1] = 0x3eU;
    __Vtable5_reciprocal_estimate[2] = 0x3cU;
    __Vtable5_reciprocal_estimate[3] = 0x3aU;
    __Vtable5_reciprocal_estimate[4] = 0x38U;
    __Vtable5_reciprocal_estimate[5] = 0x36U;
    __Vtable5_reciprocal_estimate[6] = 0x35U;
    __Vtable5_reciprocal_estimate[7] = 0x33U;
    __Vtable5_reciprocal_estimate[8] = 0x31U;
    __Vtable5_reciprocal_estimate[9] = 0x30U;
    __Vtable5_reciprocal_estimate[10] = 0x2eU;
    __Vtable5_reciprocal_estimate[11] = 0x2dU;
    __Vtable5_reciprocal_estimate[12] = 0x2bU;
    __Vtable5_reciprocal_estimate[13] = 0x2aU;
    __Vtable5_reciprocal_estimate[14] = 0x29U;
    __Vtable5_reciprocal_estimate[15] = 0x27U;
    __Vtable5_reciprocal_estimate[16] = 0x26U;
    __Vtable5_reciprocal_estimate[17] = 0x25U;
    __Vtable5_reciprocal_estimate[18] = 0x23U;
    __Vtable5_reciprocal_estimate[19] = 0x22U;
    __Vtable5_reciprocal_estimate[20] = 0x21U;
    __Vtable5_reciprocal_estimate[21] = 0x20U;
    __Vtable5_reciprocal_estimate[22] = 0x1fU;
    __Vtable5_reciprocal_estimate[23] = 0x1eU;
    __Vtable5_reciprocal_estimate[24] = 0x1dU;
    __Vtable5_reciprocal_estimate[25] = 0x1cU;
    __Vtable5_reciprocal_estimate[26] = 0x1bU;
    __Vtable5_reciprocal_estimate[27] = 0x1aU;
    __Vtable5_reciprocal_estimate[28] = 0x19U;
    __Vtable5_reciprocal_estimate[29] = 0x18U;
    __Vtable5_reciprocal_estimate[30] = 0x17U;
    __Vtable5_reciprocal_estimate[31] = 0x16U;
    __Vtable5_reciprocal_estimate[32] = 0x15U;
    __Vtable5_reciprocal_estimate[33] = 0x14U;
    __Vtable5_reciprocal_estimate[34] = 0x13U;
    __Vtable5_reciprocal_estimate[35] = 0x12U;
    __Vtable5_reciprocal_estimate[36] = 0x11U;
    __Vtable5_reciprocal_estimate[37] = 0x11U;
    __Vtable5_reciprocal_estimate[38] = 0x10U;
    __Vtable5_reciprocal_estimate[39] = 0xfU;
    __Vtable5_reciprocal_estimate[40] = 0xeU;
    __Vtable5_reciprocal_estimate[41] = 0xeU;
    __Vtable5_reciprocal_estimate[42] = 0xdU;
    __Vtable5_reciprocal_estimate[43] = 0xcU;
    __Vtable5_reciprocal_estimate[44] = 0xbU;
    __Vtable5_reciprocal_estimate[45] = 0xbU;
    __Vtable5_reciprocal_estimate[46] = 0xaU;
    __Vtable5_reciprocal_estimate[47] = 9U;
    __Vtable5_reciprocal_estimate[48] = 9U;
    __Vtable5_reciprocal_estimate[49] = 8U;
    __Vtable5_reciprocal_estimate[50] = 7U;
    __Vtable5_reciprocal_estimate[51] = 7U;
    __Vtable5_reciprocal_estimate[52] = 6U;
    __Vtable5_reciprocal_estimate[53] = 6U;
    __Vtable5_reciprocal_estimate[54] = 5U;
    __Vtable5_reciprocal_estimate[55] = 4U;
    __Vtable5_reciprocal_estimate[56] = 4U;
    __Vtable5_reciprocal_estimate[57] = 3U;
    __Vtable5_reciprocal_estimate[58] = 3U;
    __Vtable5_reciprocal_estimate[59] = 2U;
    __Vtable5_reciprocal_estimate[60] = 2U;
    __Vtable5_reciprocal_estimate[61] = 1U;
    __Vtable5_reciprocal_estimate[62] = 1U;
    __Vtable5_reciprocal_estimate[63] = 0U;
    __Vtableidx6 = VL_RAND_RESET_I(6);
    __Vtable6_reciprocal_estimate[0] = 0U;
    __Vtable6_reciprocal_estimate[1] = 0x3eU;
    __Vtable6_reciprocal_estimate[2] = 0x3cU;
    __Vtable6_reciprocal_estimate[3] = 0x3aU;
    __Vtable6_reciprocal_estimate[4] = 0x38U;
    __Vtable6_reciprocal_estimate[5] = 0x36U;
    __Vtable6_reciprocal_estimate[6] = 0x35U;
    __Vtable6_reciprocal_estimate[7] = 0x33U;
    __Vtable6_reciprocal_estimate[8] = 0x31U;
    __Vtable6_reciprocal_estimate[9] = 0x30U;
    __Vtable6_reciprocal_estimate[10] = 0x2eU;
    __Vtable6_reciprocal_estimate[11] = 0x2dU;
    __Vtable6_reciprocal_estimate[12] = 0x2bU;
    __Vtable6_reciprocal_estimate[13] = 0x2aU;
    __Vtable6_reciprocal_estimate[14] = 0x29U;
    __Vtable6_reciprocal_estimate[15] = 0x27U;
    __Vtable6_reciprocal_estimate[16] = 0x26U;
    __Vtable6_reciprocal_estimate[17] = 0x25U;
    __Vtable6_reciprocal_estimate[18] = 0x23U;
    __Vtable6_reciprocal_estimate[19] = 0x22U;
    __Vtable6_reciprocal_estimate[20] = 0x21U;
    __Vtable6_reciprocal_estimate[21] = 0x20U;
    __Vtable6_reciprocal_estimate[22] = 0x1fU;
    __Vtable6_reciprocal_estimate[23] = 0x1eU;
    __Vtable6_reciprocal_estimate[24] = 0x1dU;
    __Vtable6_reciprocal_estimate[25] = 0x1cU;
    __Vtable6_reciprocal_estimate[26] = 0x1bU;
    __Vtable6_reciprocal_estimate[27] = 0x1aU;
    __Vtable6_reciprocal_estimate[28] = 0x19U;
    __Vtable6_reciprocal_estimate[29] = 0x18U;
    __Vtable6_reciprocal_estimate[30] = 0x17U;
    __Vtable6_reciprocal_estimate[31] = 0x16U;
    __Vtable6_reciprocal_estimate[32] = 0x15U;
    __Vtable6_reciprocal_estimate[33] = 0x14U;
    __Vtable6_reciprocal_estimate[34] = 0x13U;
    __Vtable6_reciprocal_estimate[35] = 0x12U;
    __Vtable6_reciprocal_estimate[36] = 0x11U;
    __Vtable6_reciprocal_estimate[37] = 0x11U;
    __Vtable6_reciprocal_estimate[38] = 0x10U;
    __Vtable6_reciprocal_estimate[39] = 0xfU;
    __Vtable6_reciprocal_estimate[40] = 0xeU;
    __Vtable6_reciprocal_estimate[41] = 0xeU;
    __Vtable6_reciprocal_estimate[42] = 0xdU;
    __Vtable6_reciprocal_estimate[43] = 0xcU;
    __Vtable6_reciprocal_estimate[44] = 0xbU;
    __Vtable6_reciprocal_estimate[45] = 0xbU;
    __Vtable6_reciprocal_estimate[46] = 0xaU;
    __Vtable6_reciprocal_estimate[47] = 9U;
    __Vtable6_reciprocal_estimate[48] = 9U;
    __Vtable6_reciprocal_estimate[49] = 8U;
    __Vtable6_reciprocal_estimate[50] = 7U;
    __Vtable6_reciprocal_estimate[51] = 7U;
    __Vtable6_reciprocal_estimate[52] = 6U;
    __Vtable6_reciprocal_estimate[53] = 6U;
    __Vtable6_reciprocal_estimate[54] = 5U;
    __Vtable6_reciprocal_estimate[55] = 4U;
    __Vtable6_reciprocal_estimate[56] = 4U;
    __Vtable6_reciprocal_estimate[57] = 3U;
    __Vtable6_reciprocal_estimate[58] = 3U;
    __Vtable6_reciprocal_estimate[59] = 2U;
    __Vtable6_reciprocal_estimate[60] = 2U;
    __Vtable6_reciprocal_estimate[61] = 1U;
    __Vtable6_reciprocal_estimate[62] = 1U;
    __Vtable6_reciprocal_estimate[63] = 0U;
    __Vtableidx7 = VL_RAND_RESET_I(6);
    __Vtable7_reciprocal_estimate[0] = 0U;
    __Vtable7_reciprocal_estimate[1] = 0x3eU;
    __Vtable7_reciprocal_estimate[2] = 0x3cU;
    __Vtable7_reciprocal_estimate[3] = 0x3aU;
    __Vtable7_reciprocal_estimate[4] = 0x38U;
    __Vtable7_reciprocal_estimate[5] = 0x36U;
    __Vtable7_reciprocal_estimate[6] = 0x35U;
    __Vtable7_reciprocal_estimate[7] = 0x33U;
    __Vtable7_reciprocal_estimate[8] = 0x31U;
    __Vtable7_reciprocal_estimate[9] = 0x30U;
    __Vtable7_reciprocal_estimate[10] = 0x2eU;
    __Vtable7_reciprocal_estimate[11] = 0x2dU;
    __Vtable7_reciprocal_estimate[12] = 0x2bU;
    __Vtable7_reciprocal_estimate[13] = 0x2aU;
    __Vtable7_reciprocal_estimate[14] = 0x29U;
    __Vtable7_reciprocal_estimate[15] = 0x27U;
    __Vtable7_reciprocal_estimate[16] = 0x26U;
    __Vtable7_reciprocal_estimate[17] = 0x25U;
    __Vtable7_reciprocal_estimate[18] = 0x23U;
    __Vtable7_reciprocal_estimate[19] = 0x22U;
    __Vtable7_reciprocal_estimate[20] = 0x21U;
    __Vtable7_reciprocal_estimate[21] = 0x20U;
    __Vtable7_reciprocal_estimate[22] = 0x1fU;
    __Vtable7_reciprocal_estimate[23] = 0x1eU;
    __Vtable7_reciprocal_estimate[24] = 0x1dU;
    __Vtable7_reciprocal_estimate[25] = 0x1cU;
    __Vtable7_reciprocal_estimate[26] = 0x1bU;
    __Vtable7_reciprocal_estimate[27] = 0x1aU;
    __Vtable7_reciprocal_estimate[28] = 0x19U;
    __Vtable7_reciprocal_estimate[29] = 0x18U;
    __Vtable7_reciprocal_estimate[30] = 0x17U;
    __Vtable7_reciprocal_estimate[31] = 0x16U;
    __Vtable7_reciprocal_estimate[32] = 0x15U;
    __Vtable7_reciprocal_estimate[33] = 0x14U;
    __Vtable7_reciprocal_estimate[34] = 0x13U;
    __Vtable7_reciprocal_estimate[35] = 0x12U;
    __Vtable7_reciprocal_estimate[36] = 0x11U;
    __Vtable7_reciprocal_estimate[37] = 0x11U;
    __Vtable7_reciprocal_estimate[38] = 0x10U;
    __Vtable7_reciprocal_estimate[39] = 0xfU;
    __Vtable7_reciprocal_estimate[40] = 0xeU;
    __Vtable7_reciprocal_estimate[41] = 0xeU;
    __Vtable7_reciprocal_estimate[42] = 0xdU;
    __Vtable7_reciprocal_estimate[43] = 0xcU;
    __Vtable7_reciprocal_estimate[44] = 0xbU;
    __Vtable7_reciprocal_estimate[45] = 0xbU;
    __Vtable7_reciprocal_estimate[46] = 0xaU;
    __Vtable7_reciprocal_estimate[47] = 9U;
    __Vtable7_reciprocal_estimate[48] = 9U;
    __Vtable7_reciprocal_estimate[49] = 8U;
    __Vtable7_reciprocal_estimate[50] = 7U;
    __Vtable7_reciprocal_estimate[51] = 7U;
    __Vtable7_reciprocal_estimate[52] = 6U;
    __Vtable7_reciprocal_estimate[53] = 6U;
    __Vtable7_reciprocal_estimate[54] = 5U;
    __Vtable7_reciprocal_estimate[55] = 4U;
    __Vtable7_reciprocal_estimate[56] = 4U;
    __Vtable7_reciprocal_estimate[57] = 3U;
    __Vtable7_reciprocal_estimate[58] = 3U;
    __Vtable7_reciprocal_estimate[59] = 2U;
    __Vtable7_reciprocal_estimate[60] = 2U;
    __Vtable7_reciprocal_estimate[61] = 1U;
    __Vtable7_reciprocal_estimate[62] = 1U;
    __Vtable7_reciprocal_estimate[63] = 0U;
    __Vtableidx8 = VL_RAND_RESET_I(6);
    __Vtable8_reciprocal_estimate[0] = 0U;
    __Vtable8_reciprocal_estimate[1] = 0x3eU;
    __Vtable8_reciprocal_estimate[2] = 0x3cU;
    __Vtable8_reciprocal_estimate[3] = 0x3aU;
    __Vtable8_reciprocal_estimate[4] = 0x38U;
    __Vtable8_reciprocal_estimate[5] = 0x36U;
    __Vtable8_reciprocal_estimate[6] = 0x35U;
    __Vtable8_reciprocal_estimate[7] = 0x33U;
    __Vtable8_reciprocal_estimate[8] = 0x31U;
    __Vtable8_reciprocal_estimate[9] = 0x30U;
    __Vtable8_reciprocal_estimate[10] = 0x2eU;
    __Vtable8_reciprocal_estimate[11] = 0x2dU;
    __Vtable8_reciprocal_estimate[12] = 0x2bU;
    __Vtable8_reciprocal_estimate[13] = 0x2aU;
    __Vtable8_reciprocal_estimate[14] = 0x29U;
    __Vtable8_reciprocal_estimate[15] = 0x27U;
    __Vtable8_reciprocal_estimate[16] = 0x26U;
    __Vtable8_reciprocal_estimate[17] = 0x25U;
    __Vtable8_reciprocal_estimate[18] = 0x23U;
    __Vtable8_reciprocal_estimate[19] = 0x22U;
    __Vtable8_reciprocal_estimate[20] = 0x21U;
    __Vtable8_reciprocal_estimate[21] = 0x20U;
    __Vtable8_reciprocal_estimate[22] = 0x1fU;
    __Vtable8_reciprocal_estimate[23] = 0x1eU;
    __Vtable8_reciprocal_estimate[24] = 0x1dU;
    __Vtable8_reciprocal_estimate[25] = 0x1cU;
    __Vtable8_reciprocal_estimate[26] = 0x1bU;
    __Vtable8_reciprocal_estimate[27] = 0x1aU;
    __Vtable8_reciprocal_estimate[28] = 0x19U;
    __Vtable8_reciprocal_estimate[29] = 0x18U;
    __Vtable8_reciprocal_estimate[30] = 0x17U;
    __Vtable8_reciprocal_estimate[31] = 0x16U;
    __Vtable8_reciprocal_estimate[32] = 0x15U;
    __Vtable8_reciprocal_estimate[33] = 0x14U;
    __Vtable8_reciprocal_estimate[34] = 0x13U;
    __Vtable8_reciprocal_estimate[35] = 0x12U;
    __Vtable8_reciprocal_estimate[36] = 0x11U;
    __Vtable8_reciprocal_estimate[37] = 0x11U;
    __Vtable8_reciprocal_estimate[38] = 0x10U;
    __Vtable8_reciprocal_estimate[39] = 0xfU;
    __Vtable8_reciprocal_estimate[40] = 0xeU;
    __Vtable8_reciprocal_estimate[41] = 0xeU;
    __Vtable8_reciprocal_estimate[42] = 0xdU;
    __Vtable8_reciprocal_estimate[43] = 0xcU;
    __Vtable8_reciprocal_estimate[44] = 0xbU;
    __Vtable8_reciprocal_estimate[45] = 0xbU;
    __Vtable8_reciprocal_estimate[46] = 0xaU;
    __Vtable8_reciprocal_estimate[47] = 9U;
    __Vtable8_reciprocal_estimate[48] = 9U;
    __Vtable8_reciprocal_estimate[49] = 8U;
    __Vtable8_reciprocal_estimate[50] = 7U;
    __Vtable8_reciprocal_estimate[51] = 7U;
    __Vtable8_reciprocal_estimate[52] = 6U;
    __Vtable8_reciprocal_estimate[53] = 6U;
    __Vtable8_reciprocal_estimate[54] = 5U;
    __Vtable8_reciprocal_estimate[55] = 4U;
    __Vtable8_reciprocal_estimate[56] = 4U;
    __Vtable8_reciprocal_estimate[57] = 3U;
    __Vtable8_reciprocal_estimate[58] = 3U;
    __Vtable8_reciprocal_estimate[59] = 2U;
    __Vtable8_reciprocal_estimate[60] = 2U;
    __Vtable8_reciprocal_estimate[61] = 1U;
    __Vtable8_reciprocal_estimate[62] = 1U;
    __Vtable8_reciprocal_estimate[63] = 0U;
    __Vtableidx9 = VL_RAND_RESET_I(6);
    __Vtable9_reciprocal_estimate[0] = 0U;
    __Vtable9_reciprocal_estimate[1] = 0x3eU;
    __Vtable9_reciprocal_estimate[2] = 0x3cU;
    __Vtable9_reciprocal_estimate[3] = 0x3aU;
    __Vtable9_reciprocal_estimate[4] = 0x38U;
    __Vtable9_reciprocal_estimate[5] = 0x36U;
    __Vtable9_reciprocal_estimate[6] = 0x35U;
    __Vtable9_reciprocal_estimate[7] = 0x33U;
    __Vtable9_reciprocal_estimate[8] = 0x31U;
    __Vtable9_reciprocal_estimate[9] = 0x30U;
    __Vtable9_reciprocal_estimate[10] = 0x2eU;
    __Vtable9_reciprocal_estimate[11] = 0x2dU;
    __Vtable9_reciprocal_estimate[12] = 0x2bU;
    __Vtable9_reciprocal_estimate[13] = 0x2aU;
    __Vtable9_reciprocal_estimate[14] = 0x29U;
    __Vtable9_reciprocal_estimate[15] = 0x27U;
    __Vtable9_reciprocal_estimate[16] = 0x26U;
    __Vtable9_reciprocal_estimate[17] = 0x25U;
    __Vtable9_reciprocal_estimate[18] = 0x23U;
    __Vtable9_reciprocal_estimate[19] = 0x22U;
    __Vtable9_reciprocal_estimate[20] = 0x21U;
    __Vtable9_reciprocal_estimate[21] = 0x20U;
    __Vtable9_reciprocal_estimate[22] = 0x1fU;
    __Vtable9_reciprocal_estimate[23] = 0x1eU;
    __Vtable9_reciprocal_estimate[24] = 0x1dU;
    __Vtable9_reciprocal_estimate[25] = 0x1cU;
    __Vtable9_reciprocal_estimate[26] = 0x1bU;
    __Vtable9_reciprocal_estimate[27] = 0x1aU;
    __Vtable9_reciprocal_estimate[28] = 0x19U;
    __Vtable9_reciprocal_estimate[29] = 0x18U;
    __Vtable9_reciprocal_estimate[30] = 0x17U;
    __Vtable9_reciprocal_estimate[31] = 0x16U;
    __Vtable9_reciprocal_estimate[32] = 0x15U;
    __Vtable9_reciprocal_estimate[33] = 0x14U;
    __Vtable9_reciprocal_estimate[34] = 0x13U;
    __Vtable9_reciprocal_estimate[35] = 0x12U;
    __Vtable9_reciprocal_estimate[36] = 0x11U;
    __Vtable9_reciprocal_estimate[37] = 0x11U;
    __Vtable9_reciprocal_estimate[38] = 0x10U;
    __Vtable9_reciprocal_estimate[39] = 0xfU;
    __Vtable9_reciprocal_estimate[40] = 0xeU;
    __Vtable9_reciprocal_estimate[41] = 0xeU;
    __Vtable9_reciprocal_estimate[42] = 0xdU;
    __Vtable9_reciprocal_estimate[43] = 0xcU;
    __Vtable9_reciprocal_estimate[44] = 0xbU;
    __Vtable9_reciprocal_estimate[45] = 0xbU;
    __Vtable9_reciprocal_estimate[46] = 0xaU;
    __Vtable9_reciprocal_estimate[47] = 9U;
    __Vtable9_reciprocal_estimate[48] = 9U;
    __Vtable9_reciprocal_estimate[49] = 8U;
    __Vtable9_reciprocal_estimate[50] = 7U;
    __Vtable9_reciprocal_estimate[51] = 7U;
    __Vtable9_reciprocal_estimate[52] = 6U;
    __Vtable9_reciprocal_estimate[53] = 6U;
    __Vtable9_reciprocal_estimate[54] = 5U;
    __Vtable9_reciprocal_estimate[55] = 4U;
    __Vtable9_reciprocal_estimate[56] = 4U;
    __Vtable9_reciprocal_estimate[57] = 3U;
    __Vtable9_reciprocal_estimate[58] = 3U;
    __Vtable9_reciprocal_estimate[59] = 2U;
    __Vtable9_reciprocal_estimate[60] = 2U;
    __Vtable9_reciprocal_estimate[61] = 1U;
    __Vtable9_reciprocal_estimate[62] = 1U;
    __Vtable9_reciprocal_estimate[63] = 0U;
    __Vtableidx10 = VL_RAND_RESET_I(6);
    __Vtable10_reciprocal_estimate[0] = 0U;
    __Vtable10_reciprocal_estimate[1] = 0x3eU;
    __Vtable10_reciprocal_estimate[2] = 0x3cU;
    __Vtable10_reciprocal_estimate[3] = 0x3aU;
    __Vtable10_reciprocal_estimate[4] = 0x38U;
    __Vtable10_reciprocal_estimate[5] = 0x36U;
    __Vtable10_reciprocal_estimate[6] = 0x35U;
    __Vtable10_reciprocal_estimate[7] = 0x33U;
    __Vtable10_reciprocal_estimate[8] = 0x31U;
    __Vtable10_reciprocal_estimate[9] = 0x30U;
    __Vtable10_reciprocal_estimate[10] = 0x2eU;
    __Vtable10_reciprocal_estimate[11] = 0x2dU;
    __Vtable10_reciprocal_estimate[12] = 0x2bU;
    __Vtable10_reciprocal_estimate[13] = 0x2aU;
    __Vtable10_reciprocal_estimate[14] = 0x29U;
    __Vtable10_reciprocal_estimate[15] = 0x27U;
    __Vtable10_reciprocal_estimate[16] = 0x26U;
    __Vtable10_reciprocal_estimate[17] = 0x25U;
    __Vtable10_reciprocal_estimate[18] = 0x23U;
    __Vtable10_reciprocal_estimate[19] = 0x22U;
    __Vtable10_reciprocal_estimate[20] = 0x21U;
    __Vtable10_reciprocal_estimate[21] = 0x20U;
    __Vtable10_reciprocal_estimate[22] = 0x1fU;
    __Vtable10_reciprocal_estimate[23] = 0x1eU;
    __Vtable10_reciprocal_estimate[24] = 0x1dU;
    __Vtable10_reciprocal_estimate[25] = 0x1cU;
    __Vtable10_reciprocal_estimate[26] = 0x1bU;
    __Vtable10_reciprocal_estimate[27] = 0x1aU;
    __Vtable10_reciprocal_estimate[28] = 0x19U;
    __Vtable10_reciprocal_estimate[29] = 0x18U;
    __Vtable10_reciprocal_estimate[30] = 0x17U;
    __Vtable10_reciprocal_estimate[31] = 0x16U;
    __Vtable10_reciprocal_estimate[32] = 0x15U;
    __Vtable10_reciprocal_estimate[33] = 0x14U;
    __Vtable10_reciprocal_estimate[34] = 0x13U;
    __Vtable10_reciprocal_estimate[35] = 0x12U;
    __Vtable10_reciprocal_estimate[36] = 0x11U;
    __Vtable10_reciprocal_estimate[37] = 0x11U;
    __Vtable10_reciprocal_estimate[38] = 0x10U;
    __Vtable10_reciprocal_estimate[39] = 0xfU;
    __Vtable10_reciprocal_estimate[40] = 0xeU;
    __Vtable10_reciprocal_estimate[41] = 0xeU;
    __Vtable10_reciprocal_estimate[42] = 0xdU;
    __Vtable10_reciprocal_estimate[43] = 0xcU;
    __Vtable10_reciprocal_estimate[44] = 0xbU;
    __Vtable10_reciprocal_estimate[45] = 0xbU;
    __Vtable10_reciprocal_estimate[46] = 0xaU;
    __Vtable10_reciprocal_estimate[47] = 9U;
    __Vtable10_reciprocal_estimate[48] = 9U;
    __Vtable10_reciprocal_estimate[49] = 8U;
    __Vtable10_reciprocal_estimate[50] = 7U;
    __Vtable10_reciprocal_estimate[51] = 7U;
    __Vtable10_reciprocal_estimate[52] = 6U;
    __Vtable10_reciprocal_estimate[53] = 6U;
    __Vtable10_reciprocal_estimate[54] = 5U;
    __Vtable10_reciprocal_estimate[55] = 4U;
    __Vtable10_reciprocal_estimate[56] = 4U;
    __Vtable10_reciprocal_estimate[57] = 3U;
    __Vtable10_reciprocal_estimate[58] = 3U;
    __Vtable10_reciprocal_estimate[59] = 2U;
    __Vtable10_reciprocal_estimate[60] = 2U;
    __Vtable10_reciprocal_estimate[61] = 1U;
    __Vtable10_reciprocal_estimate[62] = 1U;
    __Vtable10_reciprocal_estimate[63] = 0U;
    __Vtableidx11 = VL_RAND_RESET_I(6);
    __Vtable11_reciprocal_estimate[0] = 0U;
    __Vtable11_reciprocal_estimate[1] = 0x3eU;
    __Vtable11_reciprocal_estimate[2] = 0x3cU;
    __Vtable11_reciprocal_estimate[3] = 0x3aU;
    __Vtable11_reciprocal_estimate[4] = 0x38U;
    __Vtable11_reciprocal_estimate[5] = 0x36U;
    __Vtable11_reciprocal_estimate[6] = 0x35U;
    __Vtable11_reciprocal_estimate[7] = 0x33U;
    __Vtable11_reciprocal_estimate[8] = 0x31U;
    __Vtable11_reciprocal_estimate[9] = 0x30U;
    __Vtable11_reciprocal_estimate[10] = 0x2eU;
    __Vtable11_reciprocal_estimate[11] = 0x2dU;
    __Vtable11_reciprocal_estimate[12] = 0x2bU;
    __Vtable11_reciprocal_estimate[13] = 0x2aU;
    __Vtable11_reciprocal_estimate[14] = 0x29U;
    __Vtable11_reciprocal_estimate[15] = 0x27U;
    __Vtable11_reciprocal_estimate[16] = 0x26U;
    __Vtable11_reciprocal_estimate[17] = 0x25U;
    __Vtable11_reciprocal_estimate[18] = 0x23U;
    __Vtable11_reciprocal_estimate[19] = 0x22U;
    __Vtable11_reciprocal_estimate[20] = 0x21U;
    __Vtable11_reciprocal_estimate[21] = 0x20U;
    __Vtable11_reciprocal_estimate[22] = 0x1fU;
    __Vtable11_reciprocal_estimate[23] = 0x1eU;
    __Vtable11_reciprocal_estimate[24] = 0x1dU;
    __Vtable11_reciprocal_estimate[25] = 0x1cU;
    __Vtable11_reciprocal_estimate[26] = 0x1bU;
    __Vtable11_reciprocal_estimate[27] = 0x1aU;
    __Vtable11_reciprocal_estimate[28] = 0x19U;
    __Vtable11_reciprocal_estimate[29] = 0x18U;
    __Vtable11_reciprocal_estimate[30] = 0x17U;
    __Vtable11_reciprocal_estimate[31] = 0x16U;
    __Vtable11_reciprocal_estimate[32] = 0x15U;
    __Vtable11_reciprocal_estimate[33] = 0x14U;
    __Vtable11_reciprocal_estimate[34] = 0x13U;
    __Vtable11_reciprocal_estimate[35] = 0x12U;
    __Vtable11_reciprocal_estimate[36] = 0x11U;
    __Vtable11_reciprocal_estimate[37] = 0x11U;
    __Vtable11_reciprocal_estimate[38] = 0x10U;
    __Vtable11_reciprocal_estimate[39] = 0xfU;
    __Vtable11_reciprocal_estimate[40] = 0xeU;
    __Vtable11_reciprocal_estimate[41] = 0xeU;
    __Vtable11_reciprocal_estimate[42] = 0xdU;
    __Vtable11_reciprocal_estimate[43] = 0xcU;
    __Vtable11_reciprocal_estimate[44] = 0xbU;
    __Vtable11_reciprocal_estimate[45] = 0xbU;
    __Vtable11_reciprocal_estimate[46] = 0xaU;
    __Vtable11_reciprocal_estimate[47] = 9U;
    __Vtable11_reciprocal_estimate[48] = 9U;
    __Vtable11_reciprocal_estimate[49] = 8U;
    __Vtable11_reciprocal_estimate[50] = 7U;
    __Vtable11_reciprocal_estimate[51] = 7U;
    __Vtable11_reciprocal_estimate[52] = 6U;
    __Vtable11_reciprocal_estimate[53] = 6U;
    __Vtable11_reciprocal_estimate[54] = 5U;
    __Vtable11_reciprocal_estimate[55] = 4U;
    __Vtable11_reciprocal_estimate[56] = 4U;
    __Vtable11_reciprocal_estimate[57] = 3U;
    __Vtable11_reciprocal_estimate[58] = 3U;
    __Vtable11_reciprocal_estimate[59] = 2U;
    __Vtable11_reciprocal_estimate[60] = 2U;
    __Vtable11_reciprocal_estimate[61] = 1U;
    __Vtable11_reciprocal_estimate[62] = 1U;
    __Vtable11_reciprocal_estimate[63] = 0U;
    __Vtableidx12 = VL_RAND_RESET_I(6);
    __Vtable12_reciprocal_estimate[0] = 0U;
    __Vtable12_reciprocal_estimate[1] = 0x3eU;
    __Vtable12_reciprocal_estimate[2] = 0x3cU;
    __Vtable12_reciprocal_estimate[3] = 0x3aU;
    __Vtable12_reciprocal_estimate[4] = 0x38U;
    __Vtable12_reciprocal_estimate[5] = 0x36U;
    __Vtable12_reciprocal_estimate[6] = 0x35U;
    __Vtable12_reciprocal_estimate[7] = 0x33U;
    __Vtable12_reciprocal_estimate[8] = 0x31U;
    __Vtable12_reciprocal_estimate[9] = 0x30U;
    __Vtable12_reciprocal_estimate[10] = 0x2eU;
    __Vtable12_reciprocal_estimate[11] = 0x2dU;
    __Vtable12_reciprocal_estimate[12] = 0x2bU;
    __Vtable12_reciprocal_estimate[13] = 0x2aU;
    __Vtable12_reciprocal_estimate[14] = 0x29U;
    __Vtable12_reciprocal_estimate[15] = 0x27U;
    __Vtable12_reciprocal_estimate[16] = 0x26U;
    __Vtable12_reciprocal_estimate[17] = 0x25U;
    __Vtable12_reciprocal_estimate[18] = 0x23U;
    __Vtable12_reciprocal_estimate[19] = 0x22U;
    __Vtable12_reciprocal_estimate[20] = 0x21U;
    __Vtable12_reciprocal_estimate[21] = 0x20U;
    __Vtable12_reciprocal_estimate[22] = 0x1fU;
    __Vtable12_reciprocal_estimate[23] = 0x1eU;
    __Vtable12_reciprocal_estimate[24] = 0x1dU;
    __Vtable12_reciprocal_estimate[25] = 0x1cU;
    __Vtable12_reciprocal_estimate[26] = 0x1bU;
    __Vtable12_reciprocal_estimate[27] = 0x1aU;
    __Vtable12_reciprocal_estimate[28] = 0x19U;
    __Vtable12_reciprocal_estimate[29] = 0x18U;
    __Vtable12_reciprocal_estimate[30] = 0x17U;
    __Vtable12_reciprocal_estimate[31] = 0x16U;
    __Vtable12_reciprocal_estimate[32] = 0x15U;
    __Vtable12_reciprocal_estimate[33] = 0x14U;
    __Vtable12_reciprocal_estimate[34] = 0x13U;
    __Vtable12_reciprocal_estimate[35] = 0x12U;
    __Vtable12_reciprocal_estimate[36] = 0x11U;
    __Vtable12_reciprocal_estimate[37] = 0x11U;
    __Vtable12_reciprocal_estimate[38] = 0x10U;
    __Vtable12_reciprocal_estimate[39] = 0xfU;
    __Vtable12_reciprocal_estimate[40] = 0xeU;
    __Vtable12_reciprocal_estimate[41] = 0xeU;
    __Vtable12_reciprocal_estimate[42] = 0xdU;
    __Vtable12_reciprocal_estimate[43] = 0xcU;
    __Vtable12_reciprocal_estimate[44] = 0xbU;
    __Vtable12_reciprocal_estimate[45] = 0xbU;
    __Vtable12_reciprocal_estimate[46] = 0xaU;
    __Vtable12_reciprocal_estimate[47] = 9U;
    __Vtable12_reciprocal_estimate[48] = 9U;
    __Vtable12_reciprocal_estimate[49] = 8U;
    __Vtable12_reciprocal_estimate[50] = 7U;
    __Vtable12_reciprocal_estimate[51] = 7U;
    __Vtable12_reciprocal_estimate[52] = 6U;
    __Vtable12_reciprocal_estimate[53] = 6U;
    __Vtable12_reciprocal_estimate[54] = 5U;
    __Vtable12_reciprocal_estimate[55] = 4U;
    __Vtable12_reciprocal_estimate[56] = 4U;
    __Vtable12_reciprocal_estimate[57] = 3U;
    __Vtable12_reciprocal_estimate[58] = 3U;
    __Vtable12_reciprocal_estimate[59] = 2U;
    __Vtable12_reciprocal_estimate[60] = 2U;
    __Vtable12_reciprocal_estimate[61] = 1U;
    __Vtable12_reciprocal_estimate[62] = 1U;
    __Vtable12_reciprocal_estimate[63] = 0U;
    __Vtableidx13 = VL_RAND_RESET_I(6);
    __Vtable13_reciprocal_estimate[0] = 0U;
    __Vtable13_reciprocal_estimate[1] = 0x3eU;
    __Vtable13_reciprocal_estimate[2] = 0x3cU;
    __Vtable13_reciprocal_estimate[3] = 0x3aU;
    __Vtable13_reciprocal_estimate[4] = 0x38U;
    __Vtable13_reciprocal_estimate[5] = 0x36U;
    __Vtable13_reciprocal_estimate[6] = 0x35U;
    __Vtable13_reciprocal_estimate[7] = 0x33U;
    __Vtable13_reciprocal_estimate[8] = 0x31U;
    __Vtable13_reciprocal_estimate[9] = 0x30U;
    __Vtable13_reciprocal_estimate[10] = 0x2eU;
    __Vtable13_reciprocal_estimate[11] = 0x2dU;
    __Vtable13_reciprocal_estimate[12] = 0x2bU;
    __Vtable13_reciprocal_estimate[13] = 0x2aU;
    __Vtable13_reciprocal_estimate[14] = 0x29U;
    __Vtable13_reciprocal_estimate[15] = 0x27U;
    __Vtable13_reciprocal_estimate[16] = 0x26U;
    __Vtable13_reciprocal_estimate[17] = 0x25U;
    __Vtable13_reciprocal_estimate[18] = 0x23U;
    __Vtable13_reciprocal_estimate[19] = 0x22U;
    __Vtable13_reciprocal_estimate[20] = 0x21U;
    __Vtable13_reciprocal_estimate[21] = 0x20U;
    __Vtable13_reciprocal_estimate[22] = 0x1fU;
    __Vtable13_reciprocal_estimate[23] = 0x1eU;
    __Vtable13_reciprocal_estimate[24] = 0x1dU;
    __Vtable13_reciprocal_estimate[25] = 0x1cU;
    __Vtable13_reciprocal_estimate[26] = 0x1bU;
    __Vtable13_reciprocal_estimate[27] = 0x1aU;
    __Vtable13_reciprocal_estimate[28] = 0x19U;
    __Vtable13_reciprocal_estimate[29] = 0x18U;
    __Vtable13_reciprocal_estimate[30] = 0x17U;
    __Vtable13_reciprocal_estimate[31] = 0x16U;
    __Vtable13_reciprocal_estimate[32] = 0x15U;
    __Vtable13_reciprocal_estimate[33] = 0x14U;
    __Vtable13_reciprocal_estimate[34] = 0x13U;
    __Vtable13_reciprocal_estimate[35] = 0x12U;
    __Vtable13_reciprocal_estimate[36] = 0x11U;
    __Vtable13_reciprocal_estimate[37] = 0x11U;
    __Vtable13_reciprocal_estimate[38] = 0x10U;
    __Vtable13_reciprocal_estimate[39] = 0xfU;
    __Vtable13_reciprocal_estimate[40] = 0xeU;
    __Vtable13_reciprocal_estimate[41] = 0xeU;
    __Vtable13_reciprocal_estimate[42] = 0xdU;
    __Vtable13_reciprocal_estimate[43] = 0xcU;
    __Vtable13_reciprocal_estimate[44] = 0xbU;
    __Vtable13_reciprocal_estimate[45] = 0xbU;
    __Vtable13_reciprocal_estimate[46] = 0xaU;
    __Vtable13_reciprocal_estimate[47] = 9U;
    __Vtable13_reciprocal_estimate[48] = 9U;
    __Vtable13_reciprocal_estimate[49] = 8U;
    __Vtable13_reciprocal_estimate[50] = 7U;
    __Vtable13_reciprocal_estimate[51] = 7U;
    __Vtable13_reciprocal_estimate[52] = 6U;
    __Vtable13_reciprocal_estimate[53] = 6U;
    __Vtable13_reciprocal_estimate[54] = 5U;
    __Vtable13_reciprocal_estimate[55] = 4U;
    __Vtable13_reciprocal_estimate[56] = 4U;
    __Vtable13_reciprocal_estimate[57] = 3U;
    __Vtable13_reciprocal_estimate[58] = 3U;
    __Vtable13_reciprocal_estimate[59] = 2U;
    __Vtable13_reciprocal_estimate[60] = 2U;
    __Vtable13_reciprocal_estimate[61] = 1U;
    __Vtable13_reciprocal_estimate[62] = 1U;
    __Vtable13_reciprocal_estimate[63] = 0U;
    __Vtableidx14 = VL_RAND_RESET_I(6);
    __Vtable14_reciprocal_estimate[0] = 0U;
    __Vtable14_reciprocal_estimate[1] = 0x3eU;
    __Vtable14_reciprocal_estimate[2] = 0x3cU;
    __Vtable14_reciprocal_estimate[3] = 0x3aU;
    __Vtable14_reciprocal_estimate[4] = 0x38U;
    __Vtable14_reciprocal_estimate[5] = 0x36U;
    __Vtable14_reciprocal_estimate[6] = 0x35U;
    __Vtable14_reciprocal_estimate[7] = 0x33U;
    __Vtable14_reciprocal_estimate[8] = 0x31U;
    __Vtable14_reciprocal_estimate[9] = 0x30U;
    __Vtable14_reciprocal_estimate[10] = 0x2eU;
    __Vtable14_reciprocal_estimate[11] = 0x2dU;
    __Vtable14_reciprocal_estimate[12] = 0x2bU;
    __Vtable14_reciprocal_estimate[13] = 0x2aU;
    __Vtable14_reciprocal_estimate[14] = 0x29U;
    __Vtable14_reciprocal_estimate[15] = 0x27U;
    __Vtable14_reciprocal_estimate[16] = 0x26U;
    __Vtable14_reciprocal_estimate[17] = 0x25U;
    __Vtable14_reciprocal_estimate[18] = 0x23U;
    __Vtable14_reciprocal_estimate[19] = 0x22U;
    __Vtable14_reciprocal_estimate[20] = 0x21U;
    __Vtable14_reciprocal_estimate[21] = 0x20U;
    __Vtable14_reciprocal_estimate[22] = 0x1fU;
    __Vtable14_reciprocal_estimate[23] = 0x1eU;
    __Vtable14_reciprocal_estimate[24] = 0x1dU;
    __Vtable14_reciprocal_estimate[25] = 0x1cU;
    __Vtable14_reciprocal_estimate[26] = 0x1bU;
    __Vtable14_reciprocal_estimate[27] = 0x1aU;
    __Vtable14_reciprocal_estimate[28] = 0x19U;
    __Vtable14_reciprocal_estimate[29] = 0x18U;
    __Vtable14_reciprocal_estimate[30] = 0x17U;
    __Vtable14_reciprocal_estimate[31] = 0x16U;
    __Vtable14_reciprocal_estimate[32] = 0x15U;
    __Vtable14_reciprocal_estimate[33] = 0x14U;
    __Vtable14_reciprocal_estimate[34] = 0x13U;
    __Vtable14_reciprocal_estimate[35] = 0x12U;
    __Vtable14_reciprocal_estimate[36] = 0x11U;
    __Vtable14_reciprocal_estimate[37] = 0x11U;
    __Vtable14_reciprocal_estimate[38] = 0x10U;
    __Vtable14_reciprocal_estimate[39] = 0xfU;
    __Vtable14_reciprocal_estimate[40] = 0xeU;
    __Vtable14_reciprocal_estimate[41] = 0xeU;
    __Vtable14_reciprocal_estimate[42] = 0xdU;
    __Vtable14_reciprocal_estimate[43] = 0xcU;
    __Vtable14_reciprocal_estimate[44] = 0xbU;
    __Vtable14_reciprocal_estimate[45] = 0xbU;
    __Vtable14_reciprocal_estimate[46] = 0xaU;
    __Vtable14_reciprocal_estimate[47] = 9U;
    __Vtable14_reciprocal_estimate[48] = 9U;
    __Vtable14_reciprocal_estimate[49] = 8U;
    __Vtable14_reciprocal_estimate[50] = 7U;
    __Vtable14_reciprocal_estimate[51] = 7U;
    __Vtable14_reciprocal_estimate[52] = 6U;
    __Vtable14_reciprocal_estimate[53] = 6U;
    __Vtable14_reciprocal_estimate[54] = 5U;
    __Vtable14_reciprocal_estimate[55] = 4U;
    __Vtable14_reciprocal_estimate[56] = 4U;
    __Vtable14_reciprocal_estimate[57] = 3U;
    __Vtable14_reciprocal_estimate[58] = 3U;
    __Vtable14_reciprocal_estimate[59] = 2U;
    __Vtable14_reciprocal_estimate[60] = 2U;
    __Vtable14_reciprocal_estimate[61] = 1U;
    __Vtable14_reciprocal_estimate[62] = 1U;
    __Vtable14_reciprocal_estimate[63] = 0U;
    __Vtableidx15 = VL_RAND_RESET_I(6);
    __Vtable15_reciprocal_estimate[0] = 0U;
    __Vtable15_reciprocal_estimate[1] = 0x3eU;
    __Vtable15_reciprocal_estimate[2] = 0x3cU;
    __Vtable15_reciprocal_estimate[3] = 0x3aU;
    __Vtable15_reciprocal_estimate[4] = 0x38U;
    __Vtable15_reciprocal_estimate[5] = 0x36U;
    __Vtable15_reciprocal_estimate[6] = 0x35U;
    __Vtable15_reciprocal_estimate[7] = 0x33U;
    __Vtable15_reciprocal_estimate[8] = 0x31U;
    __Vtable15_reciprocal_estimate[9] = 0x30U;
    __Vtable15_reciprocal_estimate[10] = 0x2eU;
    __Vtable15_reciprocal_estimate[11] = 0x2dU;
    __Vtable15_reciprocal_estimate[12] = 0x2bU;
    __Vtable15_reciprocal_estimate[13] = 0x2aU;
    __Vtable15_reciprocal_estimate[14] = 0x29U;
    __Vtable15_reciprocal_estimate[15] = 0x27U;
    __Vtable15_reciprocal_estimate[16] = 0x26U;
    __Vtable15_reciprocal_estimate[17] = 0x25U;
    __Vtable15_reciprocal_estimate[18] = 0x23U;
    __Vtable15_reciprocal_estimate[19] = 0x22U;
    __Vtable15_reciprocal_estimate[20] = 0x21U;
    __Vtable15_reciprocal_estimate[21] = 0x20U;
    __Vtable15_reciprocal_estimate[22] = 0x1fU;
    __Vtable15_reciprocal_estimate[23] = 0x1eU;
    __Vtable15_reciprocal_estimate[24] = 0x1dU;
    __Vtable15_reciprocal_estimate[25] = 0x1cU;
    __Vtable15_reciprocal_estimate[26] = 0x1bU;
    __Vtable15_reciprocal_estimate[27] = 0x1aU;
    __Vtable15_reciprocal_estimate[28] = 0x19U;
    __Vtable15_reciprocal_estimate[29] = 0x18U;
    __Vtable15_reciprocal_estimate[30] = 0x17U;
    __Vtable15_reciprocal_estimate[31] = 0x16U;
    __Vtable15_reciprocal_estimate[32] = 0x15U;
    __Vtable15_reciprocal_estimate[33] = 0x14U;
    __Vtable15_reciprocal_estimate[34] = 0x13U;
    __Vtable15_reciprocal_estimate[35] = 0x12U;
    __Vtable15_reciprocal_estimate[36] = 0x11U;
    __Vtable15_reciprocal_estimate[37] = 0x11U;
    __Vtable15_reciprocal_estimate[38] = 0x10U;
    __Vtable15_reciprocal_estimate[39] = 0xfU;
    __Vtable15_reciprocal_estimate[40] = 0xeU;
    __Vtable15_reciprocal_estimate[41] = 0xeU;
    __Vtable15_reciprocal_estimate[42] = 0xdU;
    __Vtable15_reciprocal_estimate[43] = 0xcU;
    __Vtable15_reciprocal_estimate[44] = 0xbU;
    __Vtable15_reciprocal_estimate[45] = 0xbU;
    __Vtable15_reciprocal_estimate[46] = 0xaU;
    __Vtable15_reciprocal_estimate[47] = 9U;
    __Vtable15_reciprocal_estimate[48] = 9U;
    __Vtable15_reciprocal_estimate[49] = 8U;
    __Vtable15_reciprocal_estimate[50] = 7U;
    __Vtable15_reciprocal_estimate[51] = 7U;
    __Vtable15_reciprocal_estimate[52] = 6U;
    __Vtable15_reciprocal_estimate[53] = 6U;
    __Vtable15_reciprocal_estimate[54] = 5U;
    __Vtable15_reciprocal_estimate[55] = 4U;
    __Vtable15_reciprocal_estimate[56] = 4U;
    __Vtable15_reciprocal_estimate[57] = 3U;
    __Vtable15_reciprocal_estimate[58] = 3U;
    __Vtable15_reciprocal_estimate[59] = 2U;
    __Vtable15_reciprocal_estimate[60] = 2U;
    __Vtable15_reciprocal_estimate[61] = 1U;
    __Vtable15_reciprocal_estimate[62] = 1U;
    __Vtable15_reciprocal_estimate[63] = 0U;
    __Vtableidx16 = VL_RAND_RESET_I(6);
    __Vtable16_reciprocal_estimate[0] = 0U;
    __Vtable16_reciprocal_estimate[1] = 0x3eU;
    __Vtable16_reciprocal_estimate[2] = 0x3cU;
    __Vtable16_reciprocal_estimate[3] = 0x3aU;
    __Vtable16_reciprocal_estimate[4] = 0x38U;
    __Vtable16_reciprocal_estimate[5] = 0x36U;
    __Vtable16_reciprocal_estimate[6] = 0x35U;
    __Vtable16_reciprocal_estimate[7] = 0x33U;
    __Vtable16_reciprocal_estimate[8] = 0x31U;
    __Vtable16_reciprocal_estimate[9] = 0x30U;
    __Vtable16_reciprocal_estimate[10] = 0x2eU;
    __Vtable16_reciprocal_estimate[11] = 0x2dU;
    __Vtable16_reciprocal_estimate[12] = 0x2bU;
    __Vtable16_reciprocal_estimate[13] = 0x2aU;
    __Vtable16_reciprocal_estimate[14] = 0x29U;
    __Vtable16_reciprocal_estimate[15] = 0x27U;
    __Vtable16_reciprocal_estimate[16] = 0x26U;
    __Vtable16_reciprocal_estimate[17] = 0x25U;
    __Vtable16_reciprocal_estimate[18] = 0x23U;
    __Vtable16_reciprocal_estimate[19] = 0x22U;
    __Vtable16_reciprocal_estimate[20] = 0x21U;
    __Vtable16_reciprocal_estimate[21] = 0x20U;
    __Vtable16_reciprocal_estimate[22] = 0x1fU;
    __Vtable16_reciprocal_estimate[23] = 0x1eU;
    __Vtable16_reciprocal_estimate[24] = 0x1dU;
    __Vtable16_reciprocal_estimate[25] = 0x1cU;
    __Vtable16_reciprocal_estimate[26] = 0x1bU;
    __Vtable16_reciprocal_estimate[27] = 0x1aU;
    __Vtable16_reciprocal_estimate[28] = 0x19U;
    __Vtable16_reciprocal_estimate[29] = 0x18U;
    __Vtable16_reciprocal_estimate[30] = 0x17U;
    __Vtable16_reciprocal_estimate[31] = 0x16U;
    __Vtable16_reciprocal_estimate[32] = 0x15U;
    __Vtable16_reciprocal_estimate[33] = 0x14U;
    __Vtable16_reciprocal_estimate[34] = 0x13U;
    __Vtable16_reciprocal_estimate[35] = 0x12U;
    __Vtable16_reciprocal_estimate[36] = 0x11U;
    __Vtable16_reciprocal_estimate[37] = 0x11U;
    __Vtable16_reciprocal_estimate[38] = 0x10U;
    __Vtable16_reciprocal_estimate[39] = 0xfU;
    __Vtable16_reciprocal_estimate[40] = 0xeU;
    __Vtable16_reciprocal_estimate[41] = 0xeU;
    __Vtable16_reciprocal_estimate[42] = 0xdU;
    __Vtable16_reciprocal_estimate[43] = 0xcU;
    __Vtable16_reciprocal_estimate[44] = 0xbU;
    __Vtable16_reciprocal_estimate[45] = 0xbU;
    __Vtable16_reciprocal_estimate[46] = 0xaU;
    __Vtable16_reciprocal_estimate[47] = 9U;
    __Vtable16_reciprocal_estimate[48] = 9U;
    __Vtable16_reciprocal_estimate[49] = 8U;
    __Vtable16_reciprocal_estimate[50] = 7U;
    __Vtable16_reciprocal_estimate[51] = 7U;
    __Vtable16_reciprocal_estimate[52] = 6U;
    __Vtable16_reciprocal_estimate[53] = 6U;
    __Vtable16_reciprocal_estimate[54] = 5U;
    __Vtable16_reciprocal_estimate[55] = 4U;
    __Vtable16_reciprocal_estimate[56] = 4U;
    __Vtable16_reciprocal_estimate[57] = 3U;
    __Vtable16_reciprocal_estimate[58] = 3U;
    __Vtable16_reciprocal_estimate[59] = 2U;
    __Vtable16_reciprocal_estimate[60] = 2U;
    __Vtable16_reciprocal_estimate[61] = 1U;
    __Vtable16_reciprocal_estimate[62] = 1U;
    __Vtable16_reciprocal_estimate[63] = 0U;
}

void Vverilator_tb_reciprocal_rom::_configure_coverage(Vverilator_tb__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_reciprocal_rom::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
