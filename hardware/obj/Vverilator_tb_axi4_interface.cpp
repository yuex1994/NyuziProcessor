// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_tb.h for the primary calling header

#include "Vverilator_tb_axi4_interface.h" // For This
#include "Vverilator_tb__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vverilator_tb_axi4_interface) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vverilator_tb_axi4_interface::__Vconfigure(Vverilator_tb__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vverilator_tb_axi4_interface::~Vverilator_tb_axi4_interface() {
}

//--------------------
// Internal Methods

void Vverilator_tb_axi4_interface::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_axi4_interface::_ctor_var_reset\n"); );
    // Body
    m_awaddr = VL_RAND_RESET_I(32);
    m_awlen = VL_RAND_RESET_I(8);
    m_awsize = VL_RAND_RESET_I(3);
    m_awburst = VL_RAND_RESET_I(2);
    m_awcache = VL_RAND_RESET_I(4);
    m_awvalid = VL_RAND_RESET_I(1);
    s_awready = VL_RAND_RESET_I(1);
    m_wdata = VL_RAND_RESET_I(32);
    m_wstrb = VL_RAND_RESET_I(4);
    m_wlast = VL_RAND_RESET_I(1);
    m_wvalid = VL_RAND_RESET_I(1);
    s_wready = VL_RAND_RESET_I(1);
    s_bvalid = VL_RAND_RESET_I(1);
    m_araddr = VL_RAND_RESET_I(32);
    m_arlen = VL_RAND_RESET_I(8);
    m_arsize = VL_RAND_RESET_I(3);
    m_arburst = VL_RAND_RESET_I(2);
    m_arcache = VL_RAND_RESET_I(4);
    m_arvalid = VL_RAND_RESET_I(1);
    s_arready = VL_RAND_RESET_I(1);
    s_rdata = VL_RAND_RESET_I(32);
    s_rvalid = VL_RAND_RESET_I(1);
    m_rready = VL_RAND_RESET_I(1);
}

void Vverilator_tb_axi4_interface::_configure_coverage(Vverilator_tb__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_axi4_interface::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
