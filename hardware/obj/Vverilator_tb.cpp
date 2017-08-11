// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_tb.h for the primary calling header

#include "Vverilator_tb.h"     // For This
#include "Vverilator_tb__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vverilator_tb) {
    Vverilator_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vverilator_tb__Syms(this, name());
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (verilator_tb, Vverilator_tb_verilator_tb);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vverilator_tb::__Vconfigure(Vverilator_tb__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vverilator_tb::~Vverilator_tb() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vverilator_tb::eval() {
    Vverilator_tb__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vverilator_tb::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vverilator_tb::_eval_initial_loop(Vverilator_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vverilator_tb::_eval(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vverilator_tb::_eval\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__verilator_tb__memory._sequent__TOP__verilator_tb__memory__2(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__verilator_tb____PVT__sd_sclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__verilator_tb____PVT__sd_sclk)))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__7(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->__VinpClk__TOP__verilator_tb____PVT__sd_sclk)) 
	 & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__verilator_tb____PVT__sd_sclk))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__9(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__verilator_tb__memory._sequent__TOP__verilator_tb__memory__5(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__verilator_tb__memory._sequent__TOP__verilator_tb__memory__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__10(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__verilator_tb____PVT__sd_sclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__verilator_tb____PVT__sd_sclk)))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__11(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__13(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__verilator_tb__memory._sequent__TOP__verilator_tb__memory__8(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__15(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x100U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom__1(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom__2(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom__3(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom__4(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom__5(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom__6(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom__7(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom__8(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom__9(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom__10(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom__11(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom__12(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom__13(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom__14(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom__15(vlSymsp);
	vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom__16(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__verilator_tb____PVT__sd_sclk) 
	   & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__verilator_tb____PVT__sd_sclk))) 
	  | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlSymsp->TOP__verilator_tb._multiclk__TOP__verilator_tb__18(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x200U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__19(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x400U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__20(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x800U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__22(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x1000U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__24(vlSymsp);
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__26(vlSymsp);
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__28(vlSymsp);
	vlSymsp->TOP__verilator_tb._sequent__TOP__verilator_tb__30(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__verilator_tb____PVT__sd_sclk 
	= vlTOPp->__VinpClk__TOP__verilator_tb____PVT__sd_sclk;
    vlTOPp->__VinpClk__TOP__verilator_tb____PVT__sd_sclk 
	= vlSymsp->TOP__verilator_tb.__PVT__sd_sclk;
}

void Vverilator_tb::_eval_initial(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vverilator_tb::_eval_initial\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb._initial__TOP__verilator_tb__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__verilator_tb__memory._initial__TOP__verilator_tb__memory__1(vlSymsp);
    vlSymsp->TOP__verilator_tb._initial__TOP__verilator_tb__5(vlSymsp);
    vlSymsp->TOP__verilator_tb__memory._initial__TOP__verilator_tb__memory__3(vlSymsp);
    vlSymsp->TOP__verilator_tb._initial__TOP__verilator_tb__14(vlSymsp);
}

void Vverilator_tb::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vverilator_tb::final\n"); );
    // Variables
    Vverilator_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb._final_TOP__verilator_tb(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vverilator_tb::_eval_settle(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vverilator_tb::_eval_settle\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__6(vlSymsp);
    vlSymsp->TOP__verilator_tb__memory._settle__TOP__verilator_tb__memory__4(vlSymsp);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__12(vlSymsp);
    vlSymsp->TOP__verilator_tb__memory._settle__TOP__verilator_tb__memory__7(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom__1(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom__2(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom__3(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom__4(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom__5(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom__6(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom__7(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom__8(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom__9(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom__10(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom__11(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom__12(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom__13(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom__14(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom__15(vlSymsp);
    vlSymsp->TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom._settle__TOP__verilator_tb__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom__16(vlSymsp);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__16(vlSymsp);
    vlSymsp->TOP__verilator_tb__memory._settle__TOP__verilator_tb__memory__9(vlSymsp);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__17(vlSymsp);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__21(vlSymsp);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__23(vlSymsp);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__25(vlSymsp);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__27(vlSymsp);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__29(vlSymsp);
    vlSymsp->TOP__verilator_tb._settle__TOP__verilator_tb__31(vlSymsp);
}

VL_INLINE_OPT QData Vverilator_tb::_change_request(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vverilator_tb::_change_request\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__verilator_tb.__PVT__sd_sclk ^ vlTOPp->__Vchglast__TOP__verilator_tb__sd_sclk));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__verilator_tb.__PVT__sd_sclk ^ vlTOPp->__Vchglast__TOP__verilator_tb__sd_sclk))) VL_PRINTF("	CHANGE: testbench/verilator_tb.sv:45: sd_sclk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__verilator_tb__sd_sclk 
	= vlSymsp->TOP__verilator_tb.__PVT__sd_sclk;
    return __req;
}

void Vverilator_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vverilator_tb::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __VinpClk__TOP__verilator_tb____PVT__sd_sclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__verilator_tb____PVT__sd_sclk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__verilator_tb__sd_sclk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vverilator_tb::_configure_coverage(Vverilator_tb__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vverilator_tb::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
