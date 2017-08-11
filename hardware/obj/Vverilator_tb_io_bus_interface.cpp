// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_tb.h for the primary calling header

#include "Vverilator_tb_io_bus_interface.h" // For This
#include "Vverilator_tb__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vverilator_tb_io_bus_interface) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vverilator_tb_io_bus_interface::__Vconfigure(Vverilator_tb__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vverilator_tb_io_bus_interface::~Vverilator_tb_io_bus_interface() {
}

//--------------------
// Internal Methods

void Vverilator_tb_io_bus_interface::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("            Vverilator_tb_io_bus_interface::_ctor_var_reset\n"); );
    // Body
    write_en = VL_RAND_RESET_I(1);
    read_en = VL_RAND_RESET_I(1);
    read_data = VL_RAND_RESET_I(32);
}

void Vverilator_tb_io_bus_interface::_configure_coverage(Vverilator_tb__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("            Vverilator_tb_io_bus_interface::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
