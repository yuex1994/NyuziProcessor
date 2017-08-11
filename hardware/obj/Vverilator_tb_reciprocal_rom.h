// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilator_tb.h for the primary calling header

#ifndef _Vverilator_tb_reciprocal_rom_H_
#define _Vverilator_tb_reciprocal_rom_H_

#include "verilated_heavy.h"
#include "Vverilator_tb__Inlines.h"
class Vverilator_tb__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vverilator_tb_reciprocal_rom) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(significand,5,0);
    VL_OUT8(reciprocal_estimate,5,0);
    //char	__VpadToAlign2[2];
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    static VL_ST_SIG8(__Vtable1_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable2_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable3_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable4_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable5_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable6_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable7_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable8_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable9_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable10_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable11_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable12_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable13_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable14_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable15_reciprocal_estimate[64],5,0);
    static VL_ST_SIG8(__Vtable16_reciprocal_estimate[64],5,0);
    VL_SIG8(__Vtableidx1,5,0);
    VL_SIG8(__Vtableidx2,5,0);
    VL_SIG8(__Vtableidx3,5,0);
    VL_SIG8(__Vtableidx4,5,0);
    VL_SIG8(__Vtableidx5,5,0);
    VL_SIG8(__Vtableidx6,5,0);
    VL_SIG8(__Vtableidx7,5,0);
    VL_SIG8(__Vtableidx8,5,0);
    VL_SIG8(__Vtableidx9,5,0);
    VL_SIG8(__Vtableidx10,5,0);
    VL_SIG8(__Vtableidx11,5,0);
    VL_SIG8(__Vtableidx12,5,0);
    VL_SIG8(__Vtableidx13,5,0);
    VL_SIG8(__Vtableidx14,5,0);
    VL_SIG8(__Vtableidx15,5,0);
    VL_SIG8(__Vtableidx16,5,0);
    
    // INTERNAL VARIABLES
  private:
    Vverilator_tb__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vverilator_tb_reciprocal_rom& operator= (const Vverilator_tb_reciprocal_rom&);	///< Copying not allowed
    Vverilator_tb_reciprocal_rom(const Vverilator_tb_reciprocal_rom&);	///< Copying not allowed
  public:
    Vverilator_tb_reciprocal_rom(const char* name="TOP");
    ~Vverilator_tb_reciprocal_rom();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vverilator_tb__Syms* symsp, bool first);
  private:
    void	_configure_coverage(Vverilator_tb__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom__1(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom__11(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom__12(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom__13(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom__14(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom__15(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom__16(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom__2(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom__3(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom__4(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom__5(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom__6(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom__7(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom__8(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom__9(Vverilator_tb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom__10(Vverilator_tb__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
