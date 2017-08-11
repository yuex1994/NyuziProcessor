// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilator_tb.h for the primary calling header

#ifndef _Vverilator_tb_axi4_interface_H_
#define _Vverilator_tb_axi4_interface_H_

#include "verilated_heavy.h"
#include "Vverilator_tb__Inlines.h"
class Vverilator_tb__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vverilator_tb_axi4_interface) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    VL_SIG8(m_awlen,7,0);
    VL_SIG8(m_awsize,2,0);
    VL_SIG8(m_awburst,1,0);
    VL_SIG8(m_awcache,3,0);
    VL_SIG8(m_awvalid,0,0);
    VL_SIG8(s_awready,0,0);
    VL_SIG8(m_wstrb,3,0);
    VL_SIG8(m_wlast,0,0);
    VL_SIG8(m_wvalid,0,0);
    VL_SIG8(s_wready,0,0);
    VL_SIG8(s_bvalid,0,0);
    VL_SIG8(m_arlen,7,0);
    VL_SIG8(m_arsize,2,0);
    VL_SIG8(m_arburst,1,0);
    VL_SIG8(m_arcache,3,0);
    VL_SIG8(m_arvalid,0,0);
    VL_SIG8(s_arready,0,0);
    VL_SIG8(s_rvalid,0,0);
    VL_SIG8(m_rready,0,0);
    //char	__VpadToAlign23[1];
    VL_SIG(m_awaddr,31,0);
    VL_SIG(m_wdata,31,0);
    VL_SIG(m_araddr,31,0);
    VL_SIG(s_rdata,31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vverilator_tb__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vverilator_tb_axi4_interface& operator= (const Vverilator_tb_axi4_interface&);	///< Copying not allowed
    Vverilator_tb_axi4_interface(const Vverilator_tb_axi4_interface&);	///< Copying not allowed
  public:
    Vverilator_tb_axi4_interface(const char* name="TOP");
    ~Vverilator_tb_axi4_interface();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vverilator_tb__Syms* symsp, bool first);
  private:
    void	_configure_coverage(Vverilator_tb__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
