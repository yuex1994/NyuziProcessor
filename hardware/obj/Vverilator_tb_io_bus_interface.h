// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilator_tb.h for the primary calling header

#ifndef _Vverilator_tb_io_bus_interface_H_
#define _Vverilator_tb_io_bus_interface_H_

#include "verilated_heavy.h"
#include "Vverilator_tb__Inlines.h"
class Vverilator_tb__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vverilator_tb_io_bus_interface) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    VL_SIG8(write_en,0,0);
    VL_SIG8(read_en,0,0);
    //char	__VpadToAlign6[2];
    VL_SIG(read_data,31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign20[4];
    Vverilator_tb__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vverilator_tb_io_bus_interface& operator= (const Vverilator_tb_io_bus_interface&);	///< Copying not allowed
    Vverilator_tb_io_bus_interface(const Vverilator_tb_io_bus_interface&);	///< Copying not allowed
  public:
    Vverilator_tb_io_bus_interface(const char* name="TOP");
    ~Vverilator_tb_io_bus_interface();
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
