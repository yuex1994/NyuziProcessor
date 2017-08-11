// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilator_tb.h for the primary calling header

#ifndef _Vverilator_tb_sim_sdram__C8_H_
#define _Vverilator_tb_sim_sdram__C8_H_

#include "verilated_heavy.h"
#include "Vverilator_tb__Inlines.h"
#include "Vverilator_tb__Dpi.h"

class Vverilator_tb__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vverilator_tb_sim_sdram__C8) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__dram_clk,0,0);
    VL_IN8(__PVT__dram_cke,0,0);
    VL_IN8(__PVT__dram_cs_n,0,0);
    VL_IN8(__PVT__dram_ras_n,0,0);
    VL_IN8(__PVT__dram_cas_n,0,0);
    VL_IN8(__PVT__dram_we_n,0,0);
    VL_IN8(__PVT__dram_ba,1,0);
    //char	__VpadToAlign7[1];
    VL_IN16(__PVT__dram_addr,12,0);
    //char	__VpadToAlign10[2];
    VL_IN(__PVT__dram_dq,31,0);
    VL_OUT(dram_dq__out,31,0);
    VL_OUT(dram_dq__en,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__bank_active,3,0);
    VL_SIG8(__PVT__burst_w,0,0);
    VL_SIG8(__PVT__burst_active,0,0);
    VL_SIG8(__PVT__burst_count_ff,3,0);
    VL_SIG8(__PVT__burst_bank,1,0);
    VL_SIG8(__PVT__burst_auto_precharge,0,0);
    VL_SIG8(__PVT__burst_read_delay_count,3,0);
    VL_SIG8(__PVT__cke_ff,0,0);
    VL_SIG8(__PVT__initialized,0,0);
    VL_SIG8(__PVT__cmd_en,0,0);
    VL_SIG8(__PVT__cmd_auto_refresh,0,0);
    VL_SIG8(__PVT__cmd_activate,0,0);
    VL_SIG8(__PVT__cmd_write_burst,0,0);
    VL_SIG8(__PVT__cmd_read_burst,0,0);
    VL_SIG16(__PVT__mode_register_ff,9,0);
    VL_SIG16(__PVT__refresh_delay,15,0);
    VL_SIG16(__PVT__burst_column_address,10,0);
    VL_SIG(__PVT__burst_address,21,0);
    VL_SIG(__PVT__output_reg,31,0);
    VL_SIG(__PVT__unnamedblk1__DOT__i,31,0);
    VL_SIG(__PVT__unnamedblk2__DOT__bank,31,0);
    VL_SIG8(__PVT__bank_cas_delay[4],3,0);
    //char	__VpadToAlign68[4];
    VL_SIG16(__PVT__bank_active_row[4],11,0);
    VL_SIG(sdram_data[4194304],31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__burst_count_ff,3,0);
    VL_SIG8(__Vdly__bank_active,3,0);
    VL_SIG8(__Vdlyvdim0__bank_active_row__v0,1,0);
    VL_SIG8(__Vdlyvset__bank_active_row__v0,0,0);
    VL_SIG8(__Vdly__burst_read_delay_count,3,0);
    VL_SIG8(__Vdly__burst_active,0,0);
    VL_SIG8(__Vdlyvset__sdram_data__v0,0,0);
    VL_SIG8(__Vdlyvset__sdram_data__v1,0,0);
    VL_SIG8(__Vdlyvdim0__bank_cas_delay__v0,1,0);
    VL_SIG8(__Vdlyvval__bank_cas_delay__v0,3,0);
    VL_SIG8(__Vdlyvset__bank_cas_delay__v0,0,0);
    VL_SIG8(__Vdlyvval__bank_cas_delay__v1,3,0);
    VL_SIG8(__Vdlyvset__bank_cas_delay__v1,0,0);
    VL_SIG8(__Vdlyvval__bank_cas_delay__v2,3,0);
    VL_SIG8(__Vdlyvset__bank_cas_delay__v2,0,0);
    VL_SIG8(__Vdlyvval__bank_cas_delay__v3,3,0);
    VL_SIG8(__Vdlyvset__bank_cas_delay__v3,0,0);
    VL_SIG8(__Vdlyvval__bank_cas_delay__v4,3,0);
    VL_SIG8(__Vdlyvset__bank_cas_delay__v4,0,0);
    //char	__VpadToAlign16777319[1];
    VL_SIG16(__Vdlyvval__bank_active_row__v0,11,0);
    VL_SIG16(__Vdly__refresh_delay,15,0);
    VL_SIG(dram_dq__out__en0,31,0);
    VL_SIG(__Vdlyvdim0__sdram_data__v0,21,0);
    VL_SIG(__Vdlyvval__sdram_data__v0,31,0);
    VL_SIG(__Vdlyvdim0__sdram_data__v1,21,0);
    VL_SIG(__Vdlyvval__sdram_data__v1,31,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign16777348[4];
    Vverilator_tb__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vverilator_tb_sim_sdram__C8& operator= (const Vverilator_tb_sim_sdram__C8&);	///< Copying not allowed
    Vverilator_tb_sim_sdram__C8(const Vverilator_tb_sim_sdram__C8&);	///< Copying not allowed
  public:
    Vverilator_tb_sim_sdram__C8(const char* name="TOP");
    ~Vverilator_tb_sim_sdram__C8();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vverilator_tb__Syms* symsp, bool first);
  private:
    void	_configure_coverage(Vverilator_tb__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_initial__TOP__verilator_tb__memory__1(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_initial__TOP__verilator_tb__memory__3(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__verilator_tb__memory__2(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__verilator_tb__memory__5(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__verilator_tb__memory__6(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__verilator_tb__memory__8(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__memory__4(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__memory__7(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__memory__9(Vverilator_tb__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
