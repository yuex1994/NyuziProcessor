// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_tb.h for the primary calling header

#include "Vverilator_tb_axi4_interface.h" // For This
#include "Vverilator_tb__Syms.h"

#include "verilated_dpi.h"

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
    __PVT__m_awaddr = VL_RAND_RESET_I(32);
    __PVT__m_awlen = VL_RAND_RESET_I(8);
    __PVT__m_awsize = VL_RAND_RESET_I(3);
    __PVT__m_awburst = VL_RAND_RESET_I(2);
    __PVT__m_awcache = VL_RAND_RESET_I(4);
    __PVT__m_awvalid = VL_RAND_RESET_I(1);
    __PVT__s_awready = VL_RAND_RESET_I(1);
    __PVT__m_wdata = VL_RAND_RESET_I(32);
    __PVT__m_wstrb = VL_RAND_RESET_I(4);
    __PVT__m_wlast = VL_RAND_RESET_I(1);
    __PVT__m_wvalid = VL_RAND_RESET_I(1);
    __PVT__s_wready = VL_RAND_RESET_I(1);
    __PVT__s_bvalid = VL_RAND_RESET_I(1);
    __PVT__m_araddr = VL_RAND_RESET_I(32);
    __PVT__m_arlen = VL_RAND_RESET_I(8);
    __PVT__m_arsize = VL_RAND_RESET_I(3);
    __PVT__m_arburst = VL_RAND_RESET_I(2);
    __PVT__m_arcache = VL_RAND_RESET_I(4);
    __PVT__m_arvalid = VL_RAND_RESET_I(1);
    __PVT__s_arready = VL_RAND_RESET_I(1);
    __PVT__s_rdata = VL_RAND_RESET_I(32);
    __PVT__s_rvalid = VL_RAND_RESET_I(1);
    __PVT__m_rready = VL_RAND_RESET_I(1);
}

void Vverilator_tb_axi4_interface::_configure_coverage(Vverilator_tb__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("              Vverilator_tb_axi4_interface::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
