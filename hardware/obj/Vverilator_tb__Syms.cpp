// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vverilator_tb__Syms.h"
#include "Vverilator_tb.h"
#include "Vverilator_tb___024unit.h"
#include "Vverilator_tb_io_bus_interface.h"
#include "Vverilator_tb_axi4_interface.h"
#include "Vverilator_tb_reciprocal_rom.h"

// FUNCTIONS
Vverilator_tb__Syms::Vverilator_tb__Syms(Vverilator_tb* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__verilator_tb__DOT__axi_bus_m__BRA__0__KET__ (Verilated::catName(topp->name(),"verilator_tb.axi_bus_m[0]"))
	, TOP__verilator_tb__DOT__axi_bus_m__BRA__1__KET__ (Verilated::catName(topp->name(),"verilator_tb.axi_bus_m[1]"))
	, TOP__verilator_tb__DOT__axi_bus_s__BRA__0__KET__ (Verilated::catName(topp->name(),"verilator_tb.axi_bus_s[0]"))
	, TOP__verilator_tb__DOT__axi_bus_s__BRA__1__KET__ (Verilated::catName(topp->name(),"verilator_tb.axi_bus_s[1]"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[0].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[10].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[11].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[12].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[13].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[14].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[15].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[1].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[2].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[3].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[4].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[5].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[6].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[7].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[8].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom (Verilated::catName(topp->name(),"verilator_tb.nyuzi.core_gen[0].core.int_execute_stage.lane_alu_gen[9].rom"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__interconnect_io_bus (Verilated::catName(topp->name(),"verilator_tb.nyuzi.interconnect_io_bus"))
	, TOP__verilator_tb__DOT__nyuzi__DOT__perf_io_bus (Verilated::catName(topp->name(),"verilator_tb.nyuzi.perf_io_bus"))
	, TOP__verilator_tb__DOT__nyuzi_io_bus (Verilated::catName(topp->name(),"verilator_tb.nyuzi_io_bus"))
	, TOP__verilator_tb__DOT__peripheral_io_bus__BRA__1__KET__ (Verilated::catName(topp->name(),"verilator_tb.peripheral_io_bus[1]"))
	, TOP__verilator_tb__DOT__peripheral_io_bus__BRA__2__KET__ (Verilated::catName(topp->name(),"verilator_tb.peripheral_io_bus[2]"))
	, TOP__verilator_tb__DOT__peripheral_io_bus__BRA__3__KET__ (Verilated::catName(topp->name(),"verilator_tb.peripheral_io_bus[3]"))
	, TOP__verilator_tb__DOT__peripheral_io_bus__BRA__5__KET__ (Verilated::catName(topp->name(),"verilator_tb.peripheral_io_bus[5]"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__verilator_tb__DOT__axi_bus_m__BRA__0__KET__  = &TOP__verilator_tb__DOT__axi_bus_m__BRA__0__KET__;
    TOPp->__PVT__verilator_tb__DOT__axi_bus_m__BRA__1__KET__  = &TOP__verilator_tb__DOT__axi_bus_m__BRA__1__KET__;
    TOPp->__PVT__verilator_tb__DOT__axi_bus_s__BRA__0__KET__  = &TOP__verilator_tb__DOT__axi_bus_s__BRA__0__KET__;
    TOPp->__PVT__verilator_tb__DOT__axi_bus_s__BRA__1__KET__  = &TOP__verilator_tb__DOT__axi_bus_s__BRA__1__KET__;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom  = &TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__interconnect_io_bus  = &TOP__verilator_tb__DOT__nyuzi__DOT__interconnect_io_bus;
    TOPp->__PVT__verilator_tb__DOT__nyuzi__DOT__perf_io_bus  = &TOP__verilator_tb__DOT__nyuzi__DOT__perf_io_bus;
    TOPp->__PVT__verilator_tb__DOT__nyuzi_io_bus  = &TOP__verilator_tb__DOT__nyuzi_io_bus;
    TOPp->__PVT__verilator_tb__DOT__peripheral_io_bus__BRA__1__KET__  = &TOP__verilator_tb__DOT__peripheral_io_bus__BRA__1__KET__;
    TOPp->__PVT__verilator_tb__DOT__peripheral_io_bus__BRA__2__KET__  = &TOP__verilator_tb__DOT__peripheral_io_bus__BRA__2__KET__;
    TOPp->__PVT__verilator_tb__DOT__peripheral_io_bus__BRA__3__KET__  = &TOP__verilator_tb__DOT__peripheral_io_bus__BRA__3__KET__;
    TOPp->__PVT__verilator_tb__DOT__peripheral_io_bus__BRA__5__KET__  = &TOP__verilator_tb__DOT__peripheral_io_bus__BRA__5__KET__;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__verilator_tb__DOT__axi_bus_m__BRA__0__KET__.__Vconfigure(this, true);
    TOP__verilator_tb__DOT__axi_bus_m__BRA__1__KET__.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__axi_bus_s__BRA__0__KET__.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__axi_bus_s__BRA__1__KET__.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom.__Vconfigure(this, true);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi__DOT__interconnect_io_bus.__Vconfigure(this, true);
    TOP__verilator_tb__DOT__nyuzi__DOT__perf_io_bus.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__nyuzi_io_bus.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__peripheral_io_bus__BRA__1__KET__.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__peripheral_io_bus__BRA__2__KET__.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__peripheral_io_bus__BRA__3__KET__.__Vconfigure(this, false);
    TOP__verilator_tb__DOT__peripheral_io_bus__BRA__5__KET__.__Vconfigure(this, false);
    // Setup scope names
    __Vscope_verilator_tb__loopback_uart__rx_fifo.configure(this,name(),"verilator_tb.loopback_uart.rx_fifo");
    __Vscope_verilator_tb__loopback_uart__uart_receive.configure(this,name(),"verilator_tb.loopback_uart.uart_receive");
    __Vscope_verilator_tb__memory.configure(this,name(),"verilator_tb.memory");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__control_registers.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.control_registers");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__dcache_data_stage.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.dcache_data_stage");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__dcache_tag_stage.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.dcache_tag_stage");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__dcache_tag_stage__dtlb.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.dcache_tag_stage.dtlb");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__dcache_tag_stage__lru.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.dcache_tag_stage.lru");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__ifetch_data_stage.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.ifetch_data_stage");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__ifetch_tag_stage__cache_lru.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.ifetch_tag_stage.cache_lru");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__ifetch_tag_stage__itlb.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.ifetch_tag_stage.itlb");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__ifetch_tag_stage__thread_select_arbiter.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.ifetch_tag_stage.thread_select_arbiter");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.io_request_queue");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__io_request_gen__BRA__0__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.io_request_queue.io_request_gen[0]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__io_request_gen__BRA__1__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.io_request_queue.io_request_gen[1]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__io_request_gen__BRA__2__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.io_request_queue.io_request_gen[2]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__io_request_gen__BRA__3__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.io_request_queue.io_request_gen[3]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__request_arbiter.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.io_request_queue.request_arbiter");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_dcache");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__request_arbiter.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_dcache.request_arbiter");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__wait_logic_gen__BRA__0__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_dcache.wait_logic_gen[0]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__wait_logic_gen__BRA__1__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_dcache.wait_logic_gen[1]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__wait_logic_gen__BRA__2__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_dcache.wait_logic_gen[2]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__wait_logic_gen__BRA__3__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_dcache.wait_logic_gen[3]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_icache");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__request_arbiter.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_icache.request_arbiter");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__wait_logic_gen__BRA__0__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_icache.wait_logic_gen[0]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__wait_logic_gen__BRA__1__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_icache.wait_logic_gen[1]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__wait_logic_gen__BRA__2__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_icache.wait_logic_gen[2]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__wait_logic_gen__BRA__3__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_load_miss_queue_icache.wait_logic_gen[3]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_store_queue");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__request_arbiter.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_store_queue.request_arbiter");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__thread_store_buf_gen__BRA__0__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_store_queue.thread_store_buf_gen[0]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__thread_store_buf_gen__BRA__1__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_store_queue.thread_store_buf_gen[1]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__thread_store_buf_gen__BRA__2__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_store_queue.thread_store_buf_gen[2]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__thread_store_buf_gen__BRA__3__KET__.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.l1_l2_interface.l1_store_queue.thread_store_buf_gen[3]");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.thread_select_stage");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_logic_gen__BRA__0__KET____instruction_fifo.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.thread_select_stage.thread_logic_gen[0].instruction_fifo");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_logic_gen__BRA__1__KET____instruction_fifo.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.thread_select_stage.thread_logic_gen[1].instruction_fifo");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_logic_gen__BRA__2__KET____instruction_fifo.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.thread_select_stage.thread_logic_gen[2].instruction_fifo");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_logic_gen__BRA__3__KET____instruction_fifo.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.thread_select_stage.thread_logic_gen[3].instruction_fifo");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_select_arbiter.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.thread_select_stage.thread_select_arbiter");
    __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__writeback_stage.configure(this,name(),"verilator_tb.nyuzi.core_gen[0].core.writeback_stage");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_axi_bus_interface");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__l2_cache_pending_miss_cam.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_axi_bus_interface.l2_cache_pending_miss_cam");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__l2_cache_pending_miss_cam__cam_pending_miss.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_axi_bus_interface.l2_cache_pending_miss_cam.cam_pending_miss");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__l2_cache_pending_miss_cam__cam_pending_miss__test.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_axi_bus_interface.l2_cache_pending_miss_cam.cam_pending_miss.test");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__sync_fifo_pending_load.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_axi_bus_interface.sync_fifo_pending_load");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__sync_fifo_pending_writeback.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_axi_bus_interface.sync_fifo_pending_writeback");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_cache_arb_stage.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_cache_arb_stage");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_cache_read_stage.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_cache_read_stage");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_cache_tag_stage__cache_lru.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_cache_tag_stage.cache_lru");
    __Vscope_verilator_tb__nyuzi__l2_cache__l2_cache_update_stage.configure(this,name(),"verilator_tb.nyuzi.l2_cache.l2_cache_update_stage");
    __Vscope_verilator_tb__ps2_controller__input_fifo.configure(this,name(),"verilator_tb.ps2_controller.input_fifo");
    __Vscope_verilator_tb__sim_sdmmc.configure(this,name(),"verilator_tb.sim_sdmmc");
    __Vscope_verilator_tb__spi_controller.configure(this,name(),"verilator_tb.spi_controller");
    __Vscope_verilator_tb__trace_logger.configure(this,name(),"verilator_tb.trace_logger");
    __Vscope_verilator_tb__trace_logger__dump_trace_event.configure(this,name(),"verilator_tb.trace_logger.dump_trace_event");
}
