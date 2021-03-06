// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vverilator_tb__Syms_H_
#define _Vverilator_tb__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vverilator_tb.h"
#include "Vverilator_tb___024unit.h"
#include "Vverilator_tb_io_bus_interface.h"
#include "Vverilator_tb_axi4_interface.h"
#include "Vverilator_tb_reciprocal_rom.h"

// SYMS CLASS
class Vverilator_tb__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vverilator_tb*                 TOPp;
    Vverilator_tb_axi4_interface   TOP__verilator_tb__DOT__axi_bus_m__BRA__0__KET__;
    Vverilator_tb_axi4_interface   TOP__verilator_tb__DOT__axi_bus_m__BRA__1__KET__;
    Vverilator_tb_axi4_interface   TOP__verilator_tb__DOT__axi_bus_s__BRA__0__KET__;
    Vverilator_tb_axi4_interface   TOP__verilator_tb__DOT__axi_bus_s__BRA__1__KET__;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__0__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__10__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__11__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__12__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__13__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__14__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__15__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__1__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__2__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__3__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__4__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__5__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__6__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__7__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__8__KET____DOT__rom;
    Vverilator_tb_reciprocal_rom   TOP__verilator_tb__DOT__nyuzi__DOT__core_gen__BRA__0__KET____DOT__core__DOT__int_execute_stage__DOT__lane_alu_gen__BRA__9__KET____DOT__rom;
    Vverilator_tb_io_bus_interface TOP__verilator_tb__DOT__nyuzi__DOT__interconnect_io_bus;
    Vverilator_tb_io_bus_interface TOP__verilator_tb__DOT__nyuzi__DOT__perf_io_bus;
    Vverilator_tb_io_bus_interface TOP__verilator_tb__DOT__nyuzi_io_bus;
    Vverilator_tb_io_bus_interface TOP__verilator_tb__DOT__peripheral_io_bus__BRA__1__KET__;
    Vverilator_tb_io_bus_interface TOP__verilator_tb__DOT__peripheral_io_bus__BRA__2__KET__;
    Vverilator_tb_io_bus_interface TOP__verilator_tb__DOT__peripheral_io_bus__BRA__3__KET__;
    Vverilator_tb_io_bus_interface TOP__verilator_tb__DOT__peripheral_io_bus__BRA__5__KET__;
    
    // COVERAGE
    
    // SCOPE NAMES
    VerilatedScope __Vscope_verilator_tb__loopback_uart__rx_fifo;
    VerilatedScope __Vscope_verilator_tb__loopback_uart__uart_receive;
    VerilatedScope __Vscope_verilator_tb__memory;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__control_registers;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__dcache_data_stage;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__dcache_tag_stage;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__dcache_tag_stage__dtlb;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__dcache_tag_stage__lru;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__ifetch_data_stage;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__ifetch_tag_stage__cache_lru;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__ifetch_tag_stage__itlb;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__ifetch_tag_stage__thread_select_arbiter;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__io_request_gen__BRA__0__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__io_request_gen__BRA__1__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__io_request_gen__BRA__2__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__io_request_gen__BRA__3__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__io_request_queue__request_arbiter;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__request_arbiter;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__wait_logic_gen__BRA__0__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__wait_logic_gen__BRA__1__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__wait_logic_gen__BRA__2__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_dcache__wait_logic_gen__BRA__3__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__request_arbiter;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__wait_logic_gen__BRA__0__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__wait_logic_gen__BRA__1__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__wait_logic_gen__BRA__2__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_load_miss_queue_icache__wait_logic_gen__BRA__3__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__request_arbiter;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__thread_store_buf_gen__BRA__0__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__thread_store_buf_gen__BRA__1__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__thread_store_buf_gen__BRA__2__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__l1_l2_interface__l1_store_queue__thread_store_buf_gen__BRA__3__KET__;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_logic_gen__BRA__0__KET____instruction_fifo;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_logic_gen__BRA__1__KET____instruction_fifo;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_logic_gen__BRA__2__KET____instruction_fifo;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_logic_gen__BRA__3__KET____instruction_fifo;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__thread_select_stage__thread_select_arbiter;
    VerilatedScope __Vscope_verilator_tb__nyuzi__core_gen__BRA__0__KET____core__writeback_stage;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__l2_cache_pending_miss_cam;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__l2_cache_pending_miss_cam__cam_pending_miss;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__l2_cache_pending_miss_cam__cam_pending_miss__test;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__sync_fifo_pending_load;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_axi_bus_interface__sync_fifo_pending_writeback;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_cache_arb_stage;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_cache_read_stage;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_cache_tag_stage__cache_lru;
    VerilatedScope __Vscope_verilator_tb__nyuzi__l2_cache__l2_cache_update_stage;
    VerilatedScope __Vscope_verilator_tb__ps2_controller__input_fifo;
    VerilatedScope __Vscope_verilator_tb__sim_sdmmc;
    VerilatedScope __Vscope_verilator_tb__spi_controller;
    VerilatedScope __Vscope_verilator_tb__trace_logger;
    VerilatedScope __Vscope_verilator_tb__trace_logger__dump_trace_event;
    
    // CREATORS
    Vverilator_tb__Syms(Vverilator_tb* topp, const char* namep);
    ~Vverilator_tb__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
