// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_tb.h for the primary calling header

#include "Vverilator_tb_sim_sdram__C8.h" // For This
#include "Vverilator_tb__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vverilator_tb_sim_sdram__C8) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vverilator_tb_sim_sdram__C8::__Vconfigure(Vverilator_tb__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vverilator_tb_sim_sdram__C8::~Vverilator_tb_sim_sdram__C8() {
}

//--------------------
// Internal Methods

void Vverilator_tb_sim_sdram__C8::_initial__TOP__verilator_tb__memory__1(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_initial__TOP__verilator_tb__memory__1\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at testbench/sim_sdram.sv:56
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_column_address = 0U;
}

VL_INLINE_OPT void Vverilator_tb_sim_sdram__C8::_sequent__TOP__verilator_tb__memory__2(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_sequent__TOP__verilator_tb__memory__2\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_active 
	= vlSymsp->TOP__verilator_tb__memory.__PVT__burst_active;
    vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_count_ff 
	= vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff;
    vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_read_delay_count 
	= vlSymsp->TOP__verilator_tb__memory.__PVT__burst_read_delay_count;
    vlSymsp->TOP__verilator_tb__memory.__Vdly__bank_active 
	= vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active;
    vlSymsp->TOP__verilator_tb__memory.__Vdly__refresh_delay 
	= vlSymsp->TOP__verilator_tb__memory.__PVT__refresh_delay;
    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_active_row__v0 = 0U;
    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__sdram_data__v0 = 0U;
    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__sdram_data__v1 = 0U;
    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v0 = 0U;
    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v1 = 0U;
    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v2 = 0U;
    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v3 = 0U;
    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v4 = 0U;
    // ALWAYS at testbench/sim_sdram.sv:258
    vlSymsp->TOP__verilator_tb__memory.__PVT__unnamedblk2__DOT__bank = 4U;
    // ALWAYS at testbench/sim_sdram.sv:168
    if (((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_write_burst) 
	 | (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_read_burst))) {
	vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_active = 1U;
    } else {
	if ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff) 
	      >= ((0xfU & ((IData)(1U) << (7U & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__mode_register_ff)))) 
		  - (IData)(1U))) & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_active))) {
	    vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_active = 0U;
	}
    }
    // ALWAYS at testbench/sim_sdram.sv:95
    if (vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_write_burst) {
	vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_count_ff = 1U;
    } else {
	if (vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_read_burst) {
	    vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_count_ff = 0U;
	} else {
	    if ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_active) 
		  & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cke_ff)) 
		 & ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_w) 
		    | (0U == (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_read_delay_count))))) {
		vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_count_ff 
		    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff)));
	    }
	}
    }
    // ALWAYS at testbench/sim_sdram.sv:156
    if (vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_read_burst) {
	vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_read_delay_count 
	    = (0xfU & ((7U & ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__mode_register_ff) 
			      >> 4U)) - (IData)(1U)));
    } else {
	if ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_active) 
	      & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cke_ff)) 
	     & (~ (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_w)))) {
	    if ((0U < (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_read_delay_count))) {
		vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_read_delay_count 
		    = (0xfU & ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_read_delay_count) 
			       - (IData)(1U)));
	    }
	}
    }
    // ALWAYS at testbench/sim_sdram.sv:207
    if (VL_UNLIKELY((0x320U <= (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__refresh_delay)))) {
	if (VL_UNLIKELY(Verilated::assertOn())) {
	    VL_WRITEF("[%0t] %%Error: sim_sdram.sv:210: Assertion failed in %Nverilator_tb.memory\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("testbench/sim_sdram.sv",210,"");
	}
    }
    if (vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_auto_refresh) {
	vlSymsp->TOP__verilator_tb__memory.__Vdly__refresh_delay = 0U;
    } else {
	if (vlSymsp->TOP__verilator_tb__memory.__PVT__initialized) {
	    vlSymsp->TOP__verilator_tb__memory.__Vdly__refresh_delay 
		= (0xffffU & ((IData)(1U) + (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__refresh_delay)));
	}
    }
    // ALWAYS at testbench/sim_sdram.sv:219
    if ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_active) 
	  & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cke_ff)) 
	 & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_w))) {
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__sdram_data__v0 
	    = vlSymsp->TOP__verilator_tb.__PVT__dram_dq;
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__sdram_data__v0 = 1U;
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvdim0__sdram_data__v0 
	    = vlSymsp->TOP__verilator_tb__memory.__PVT__burst_address;
    } else {
	if (vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_write_burst) {
	    vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__sdram_data__v1 
		= vlSymsp->TOP__verilator_tb.__PVT__dram_dq;
	    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__sdram_data__v1 = 1U;
	    vlSymsp->TOP__verilator_tb__memory.__Vdlyvdim0__sdram_data__v1 
		= ((vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active_row
		    [vlSymsp->TOP__verilator_tb.__PVT__dram_ba] 
		    << 0xaU) | (((IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_ba) 
				 << 8U) | (0xffU & (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_addr))));
	}
    }
    // ALWAYS at testbench/sim_sdram.sv:255
    if (vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_activate) {
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v0 
	    = (0xfU & ((7U & ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__mode_register_ff) 
			      >> 4U)) - (IData)(2U)));
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v0 = 1U;
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvdim0__bank_cas_delay__v0 
	    = vlSymsp->TOP__verilator_tb.__PVT__dram_ba;
    }
    if (((0U < vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay
	  [0U]) & ((0U != (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_ba)) 
		   | (~ (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_activate))))) {
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v1 
	    = (0xfU & (vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay
		       [0U] - (IData)(1U)));
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v1 = 1U;
    }
    if (((0U < vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay
	  [1U]) & ((1U != (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_ba)) 
		   | (~ (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_activate))))) {
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v2 
	    = (0xfU & (vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay
		       [1U] - (IData)(1U)));
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v2 = 1U;
    }
    if (((0U < vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay
	  [2U]) & ((2U != (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_ba)) 
		   | (~ (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_activate))))) {
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v3 
	    = (0xfU & (vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay
		       [2U] - (IData)(1U)));
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v3 = 1U;
    }
    if (((0U < vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay
	  [3U]) & ((3U != (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_ba)) 
		   | (~ (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_activate))))) {
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v4 
	    = (0xfU & (vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay
		       [3U] - (IData)(1U)));
	vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v4 = 1U;
    }
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_read_delay_count 
	= vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_read_delay_count;
    vlSymsp->TOP__verilator_tb__memory.__PVT__refresh_delay 
	= vlSymsp->TOP__verilator_tb__memory.__Vdly__refresh_delay;
    // ALWAYSPOST at testbench/sim_sdram.sv:222
    if (vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__sdram_data__v0) {
	vlSymsp->TOP__verilator_tb__memory.sdram_data[vlSymsp->TOP__verilator_tb__memory.__Vdlyvdim0__sdram_data__v0] 
	    = vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__sdram_data__v0;
    }
    if (vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__sdram_data__v1) {
	vlSymsp->TOP__verilator_tb__memory.sdram_data[vlSymsp->TOP__verilator_tb__memory.__Vdlyvdim0__sdram_data__v1] 
	    = vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__sdram_data__v1;
    }
    // ALWAYS at testbench/sim_sdram.sv:106
    if (((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	   & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		 >> 2U))) & ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
			     >> 1U)) & (~ (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command)))) {
	if ((0x400U & (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_addr))) {
	    vlSymsp->TOP__verilator_tb__memory.__Vdly__bank_active = 0U;
	} else {
	    vlSymsp->TOP__verilator_tb__memory.__Vdly__bank_active 
		= ((~ ((IData)(1U) << (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_ba))) 
		   & (IData)(vlSymsp->TOP__verilator_tb__memory.__Vdly__bank_active));
	}
	vlSymsp->TOP__verilator_tb__memory.__PVT__initialized = 1U;
    } else {
	if (vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_activate) {
	    if (VL_UNLIKELY((1U & ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active) 
				   >> (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_ba))))) {
		if (VL_UNLIKELY(Verilated::assertOn())) {
		    VL_WRITEF("[%0t] %%Error: sim_sdram.sv:130: Assertion failed in %Nverilator_tb.memory\n",
			      64,VL_TIME_Q(),vlSymsp->name());
		    vl_stop("testbench/sim_sdram.sv",130,"");
		}
	    }
	    vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_active_row__v0 
		= (0xfffU & (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_addr));
	    vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_active_row__v0 = 1U;
	    vlSymsp->TOP__verilator_tb__memory.__Vdlyvdim0__bank_active_row__v0 
		= vlSymsp->TOP__verilator_tb.__PVT__dram_ba;
	    vlSymsp->TOP__verilator_tb__memory.__Vdly__bank_active 
		= ((IData)(vlSymsp->TOP__verilator_tb__memory.__Vdly__bank_active) 
		   | ((IData)(1U) << (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_ba)));
	} else {
	    if ((((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff) 
		    == ((0xfU & ((IData)(1U) << (7U 
						 & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__mode_register_ff)))) 
			- (IData)(1U))) & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_active)) 
		  & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cke_ff)) 
		 & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_auto_precharge))) {
		vlSymsp->TOP__verilator_tb__memory.__Vdly__bank_active 
		    = ((~ ((IData)(1U) << (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_bank))) 
		       & (IData)(vlSymsp->TOP__verilator_tb__memory.__Vdly__bank_active));
	    }
	}
    }
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_active 
	= vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_active;
    // ALWAYSPOST at testbench/sim_sdram.sv:136
    if (vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_active_row__v0) {
	vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active_row[vlSymsp->TOP__verilator_tb__memory.__Vdlyvdim0__bank_active_row__v0] 
	    = vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_active_row__v0;
    }
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff 
	= vlSymsp->TOP__verilator_tb__memory.__Vdly__burst_count_ff;
    // ALWAYS at testbench/sim_sdram.sv:82
    vlSymsp->TOP__verilator_tb__memory.__PVT__cke_ff = 1U;
    // ALWAYS at testbench/sim_sdram.sv:144
    if (((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	   & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		 >> 2U))) & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
				>> 1U))) & (~ (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command)))) {
	vlSymsp->TOP__verilator_tb__memory.__PVT__mode_register_ff 
	    = (0x3ffU & (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_addr));
    }
    // ALWAYS at testbench/sim_sdram.sv:176
    if (((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_write_burst) 
	 | (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_read_burst))) {
	if (VL_UNLIKELY((1U & (~ ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active) 
				  >> (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_ba)))))) {
	    if (VL_UNLIKELY(Verilated::assertOn())) {
		VL_WRITEF("[%0t] %%Error: sim_sdram.sv:181: Assertion failed in %Nverilator_tb.memory\n",
			  64,VL_TIME_Q(),vlSymsp->name());
		vl_stop("testbench/sim_sdram.sv",181,"");
	    }
	}
	if (VL_UNLIKELY((0U != vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay
			 [vlSymsp->TOP__verilator_tb.__PVT__dram_ba]))) {
	    if (VL_UNLIKELY(Verilated::assertOn())) {
		VL_WRITEF("[%0t] %%Error: sim_sdram.sv:184: Assertion failed in %Nverilator_tb.memory\n",
			  64,VL_TIME_Q(),vlSymsp->name());
		vl_stop("testbench/sim_sdram.sv",184,"");
	    }
	}
	vlSymsp->TOP__verilator_tb__memory.__PVT__burst_w 
	    = vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_write_burst;
	vlSymsp->TOP__verilator_tb__memory.__PVT__burst_bank 
	    = vlSymsp->TOP__verilator_tb.__PVT__dram_ba;
	vlSymsp->TOP__verilator_tb__memory.__PVT__burst_auto_precharge 
	    = (1U & ((IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_addr) 
		     >> 0xaU));
	vlSymsp->TOP__verilator_tb__memory.__PVT__burst_column_address 
	    = (0xffU & (IData)(vlSymsp->TOP__verilator_tb.__PVT__dram_addr));
    } else {
	if (vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_auto_refresh) {
	    if (VL_UNLIKELY((0U != (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active)))) {
		if (VL_UNLIKELY(Verilated::assertOn())) {
		    VL_WRITEF("[%0t] %%Error: sim_sdram.sv:199: Assertion failed in %Nverilator_tb.memory\n",
			      64,VL_TIME_Q(),vlSymsp->name());
		    vl_stop("testbench/sim_sdram.sv",199,"");
		}
	    }
	}
    }
    vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active 
	= vlSymsp->TOP__verilator_tb__memory.__Vdly__bank_active;
    // ALWAYSPOST at testbench/sim_sdram.sv:256
    if (vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v0) {
	vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay[vlSymsp->TOP__verilator_tb__memory.__Vdlyvdim0__bank_cas_delay__v0] 
	    = vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v0;
    }
    if (vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v1) {
	vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay[0U] 
	    = vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v1;
    }
    if (vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v2) {
	vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay[1U] 
	    = vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v2;
    }
    if (vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v3) {
	vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay[2U] 
	    = vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v3;
    }
    if (vlSymsp->TOP__verilator_tb__memory.__Vdlyvset__bank_cas_delay__v4) {
	vlSymsp->TOP__verilator_tb__memory.__PVT__bank_cas_delay[3U] 
	    = vlSymsp->TOP__verilator_tb__memory.__Vdlyvval__bank_cas_delay__v4;
    }
}

void Vverilator_tb_sim_sdram__C8::_initial__TOP__verilator_tb__memory__3(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_initial__TOP__verilator_tb__memory__3\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at testbench/sim_sdram.sv:57
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_read_delay_count = 0U;
    // INITIAL at testbench/sim_sdram.sv:48
    vlSymsp->TOP__verilator_tb__memory.__PVT__refresh_delay = 0U;
    // INITIAL at testbench/sim_sdram.sv:59
    vlSymsp->TOP__verilator_tb__memory.__PVT__initialized = 0U;
    // INITIAL at testbench/sim_sdram.sv:51
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_w = 0U;
    // INITIAL at testbench/sim_sdram.sv:74
    vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active_row[0U] = 0U;
    vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active_row[1U] = 0U;
    vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active_row[2U] = 0U;
    vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active_row[3U] = 0U;
    vlSymsp->TOP__verilator_tb__memory.__PVT__unnamedblk1__DOT__i = 4U;
    // INITIAL at testbench/sim_sdram.sv:55
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_auto_precharge = 0U;
    // INITIAL at testbench/sim_sdram.sv:52
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_active = 0U;
    // INITIAL at testbench/sim_sdram.sv:54
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_bank = 0U;
    // INITIAL at testbench/sim_sdram.sv:53
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff = 0U;
    // INITIAL at testbench/sim_sdram.sv:43
    vlSymsp->TOP__verilator_tb__memory.__PVT__mode_register_ff = 0U;
    // INITIAL at testbench/sim_sdram.sv:58
    vlSymsp->TOP__verilator_tb__memory.__PVT__cke_ff = 0U;
    // INITIAL at testbench/sim_sdram.sv:44
    vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active = 0U;
}

void Vverilator_tb_sim_sdram__C8::_settle__TOP__verilator_tb__memory__4(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_settle__TOP__verilator_tb__memory__4\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_address 
	= ((vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active_row
	    [vlSymsp->TOP__verilator_tb__memory.__PVT__burst_bank] 
	    << 0xaU) | (((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_bank) 
			 << 8U) | (0xffU & ((8U & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__mode_register_ff))
					     ? ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_column_address) 
						^ (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff))
					     : ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_column_address) 
						+ (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff))))));
}

VL_INLINE_OPT void Vverilator_tb_sim_sdram__C8::_sequent__TOP__verilator_tb__memory__5(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_sequent__TOP__verilator_tb__memory__5\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en 
	= ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cke_ff) 
	   & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		 >> 3U)));
}

VL_INLINE_OPT void Vverilator_tb_sim_sdram__C8::_sequent__TOP__verilator_tb__memory__6(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_sequent__TOP__verilator_tb__memory__6\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb__memory.__PVT__burst_address 
	= ((vlSymsp->TOP__verilator_tb__memory.__PVT__bank_active_row
	    [vlSymsp->TOP__verilator_tb__memory.__PVT__burst_bank] 
	    << 0xaU) | (((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_bank) 
			 << 8U) | (0xffU & ((8U & (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__mode_register_ff))
					     ? ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_column_address) 
						^ (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff))
					     : ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_column_address) 
						+ (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_count_ff))))));
    vlSymsp->TOP__verilator_tb__memory.__PVT__output_reg 
	= vlSymsp->TOP__verilator_tb__memory.sdram_data
	[vlSymsp->TOP__verilator_tb__memory.__PVT__burst_address];
}

void Vverilator_tb_sim_sdram__C8::_settle__TOP__verilator_tb__memory__7(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_settle__TOP__verilator_tb__memory__7\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en 
	= ((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cke_ff) 
	   & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		 >> 3U)));
    vlSymsp->TOP__verilator_tb__memory.__PVT__output_reg 
	= vlSymsp->TOP__verilator_tb__memory.sdram_data
	[vlSymsp->TOP__verilator_tb__memory.__PVT__burst_address];
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_auto_refresh 
	= ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	     & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		   >> 2U))) & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
				  >> 1U))) & (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command));
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_activate 
	= ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	     & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		   >> 2U))) & ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
			       >> 1U)) & (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command));
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_read_burst 
	= ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	     & ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		>> 2U)) & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
			      >> 1U))) & (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command));
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_write_burst 
	= ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	     & ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		>> 2U)) & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
			      >> 1U))) & (~ (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command)));
}

VL_INLINE_OPT void Vverilator_tb_sim_sdram__C8::_sequent__TOP__verilator_tb__memory__8(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_sequent__TOP__verilator_tb__memory__8\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_auto_refresh 
	= ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	     & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		   >> 2U))) & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
				  >> 1U))) & (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command));
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_activate 
	= ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	     & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		   >> 2U))) & ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
			       >> 1U)) & (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command));
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_read_burst 
	= ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	     & ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		>> 2U)) & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
			      >> 1U))) & (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command));
    vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_write_burst 
	= ((((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_en) 
	     & ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
		>> 2U)) & (~ ((IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command) 
			      >> 1U))) & (~ (IData)(vlSymsp->TOP__verilator_tb.__PVT__sdram_controller__DOT__command)));
    vlSymsp->TOP__verilator_tb__memory.dram_dq__out__en0 
	= (((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_w) 
	    | (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_write_burst))
	    ? 0U : 0xffffffffU);
}

void Vverilator_tb_sim_sdram__C8::_settle__TOP__verilator_tb__memory__9(Vverilator_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_settle__TOP__verilator_tb__memory__9\n"); );
    Vverilator_tb* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__verilator_tb__memory.dram_dq__out__en0 
	= (((IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__burst_w) 
	    | (IData)(vlSymsp->TOP__verilator_tb__memory.__PVT__cmd_write_burst))
	    ? 0U : 0xffffffffU);
}

void Vverilator_tb_sim_sdram__C8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_ctor_var_reset\n"); );
    // Body
    __PVT__dram_clk = VL_RAND_RESET_I(1);
    __PVT__dram_cke = VL_RAND_RESET_I(1);
    __PVT__dram_cs_n = VL_RAND_RESET_I(1);
    __PVT__dram_ras_n = VL_RAND_RESET_I(1);
    __PVT__dram_cas_n = VL_RAND_RESET_I(1);
    __PVT__dram_we_n = VL_RAND_RESET_I(1);
    __PVT__dram_ba = VL_RAND_RESET_I(2);
    __PVT__dram_addr = VL_RAND_RESET_I(13);
    __PVT__dram_dq = VL_RAND_RESET_I(32);
    __PVT__mode_register_ff = VL_RAND_RESET_I(10);
    __PVT__bank_active = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    __PVT__bank_cas_delay[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    __PVT__bank_active_row[__Vi0] = VL_RAND_RESET_I(12);
    }}
    { int __Vi0=0; for (; __Vi0<4194304; ++__Vi0) {
	    sdram_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__refresh_delay = VL_RAND_RESET_I(16);
    __PVT__burst_w = VL_RAND_RESET_I(1);
    __PVT__burst_active = VL_RAND_RESET_I(1);
    __PVT__burst_count_ff = VL_RAND_RESET_I(4);
    __PVT__burst_bank = VL_RAND_RESET_I(2);
    __PVT__burst_auto_precharge = VL_RAND_RESET_I(1);
    __PVT__burst_column_address = VL_RAND_RESET_I(11);
    __PVT__burst_read_delay_count = VL_RAND_RESET_I(4);
    __PVT__cke_ff = VL_RAND_RESET_I(1);
    __PVT__initialized = VL_RAND_RESET_I(1);
    __PVT__burst_address = VL_RAND_RESET_I(22);
    __PVT__output_reg = VL_RAND_RESET_I(32);
    __PVT__cmd_en = VL_RAND_RESET_I(1);
    __PVT__cmd_auto_refresh = VL_RAND_RESET_I(1);
    __PVT__cmd_activate = VL_RAND_RESET_I(1);
    __PVT__cmd_write_burst = VL_RAND_RESET_I(1);
    __PVT__cmd_read_burst = VL_RAND_RESET_I(1);
    dram_dq__out = VL_RAND_RESET_I(32);
    dram_dq__en = VL_RAND_RESET_I(32);
    dram_dq__out__en0 = VL_RAND_RESET_I(32);
    __PVT__unnamedblk1__DOT__i = 0;
    __PVT__unnamedblk2__DOT__bank = 0;
    __Vdly__burst_count_ff = VL_RAND_RESET_I(4);
    __Vdly__bank_active = VL_RAND_RESET_I(4);
    __Vdlyvdim0__bank_active_row__v0 = VL_RAND_RESET_I(2);
    __Vdlyvval__bank_active_row__v0 = VL_RAND_RESET_I(12);
    __Vdlyvset__bank_active_row__v0 = VL_RAND_RESET_I(1);
    __Vdly__burst_read_delay_count = VL_RAND_RESET_I(4);
    __Vdly__burst_active = VL_RAND_RESET_I(1);
    __Vdly__refresh_delay = VL_RAND_RESET_I(16);
    __Vdlyvdim0__sdram_data__v0 = VL_RAND_RESET_I(22);
    __Vdlyvval__sdram_data__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__sdram_data__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__sdram_data__v1 = VL_RAND_RESET_I(22);
    __Vdlyvval__sdram_data__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__sdram_data__v1 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__bank_cas_delay__v0 = VL_RAND_RESET_I(2);
    __Vdlyvval__bank_cas_delay__v0 = VL_RAND_RESET_I(4);
    __Vdlyvset__bank_cas_delay__v0 = VL_RAND_RESET_I(1);
    __Vdlyvval__bank_cas_delay__v1 = VL_RAND_RESET_I(4);
    __Vdlyvset__bank_cas_delay__v1 = VL_RAND_RESET_I(1);
    __Vdlyvval__bank_cas_delay__v2 = VL_RAND_RESET_I(4);
    __Vdlyvset__bank_cas_delay__v2 = VL_RAND_RESET_I(1);
    __Vdlyvval__bank_cas_delay__v3 = VL_RAND_RESET_I(4);
    __Vdlyvset__bank_cas_delay__v3 = VL_RAND_RESET_I(1);
    __Vdlyvval__bank_cas_delay__v4 = VL_RAND_RESET_I(4);
    __Vdlyvset__bank_cas_delay__v4 = VL_RAND_RESET_I(1);
}

void Vverilator_tb_sim_sdram__C8::_configure_coverage(Vverilator_tb__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("        Vverilator_tb_sim_sdram__C8::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
