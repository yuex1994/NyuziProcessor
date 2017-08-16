//
// Copyright 2011-2015 Jeff Bush
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

`include "../core/defines.sv"

//
// Top module for running CPU in Verilog simulation under Verilator.
//

module verilator_tb(
    input       clk,
    input       reset);

    localparam MEM_SIZE = 'h1000000;
    localparam NUM_PERIPHERALS = 6;

    int total_cycles;
    string filename;
    bit state_dump_en;
    int state_dump_fd;
    int finish_cycles;
    bit profile_en;
    int profile_fd;
    axi4_interface axi_bus_s[1:0]();
    axi4_interface axi_bus_m[1:0]();
    scalar_t loopback_uart_read_data;
    logic loopback_uart_tx;
    logic loopback_uart_rx;
    logic loopback_uart_mask;
    logic sd_cs_n;
    logic sd_di;
    logic sd_sclk;
    io_bus_interface peripheral_io_bus[NUM_PERIPHERALS - 1:0]();
    io_bus_interface nyuzi_io_bus();
    scalar_t peripheral_read_data[NUM_PERIPHERALS];
    enum logic[$clog2(NUM_PERIPHERALS) - 1:0] {
        IO_ONES,
        IO_LOOPBACK_UART,
        IO_PS2,
        IO_SDCARD,
        IO_TIMER,
        IO_VGA
    } io_bus_source;
    int cosim_timer_interval;
    int cosim_interrupt_delay;
    logic cosim_interrupt;
    logic uart_rx_interrupt;
    logic ps2_rx_interrupt;

    /*AUTOLOGIC*/
    // Beginning of automatic wires (for undeclared instantiated-module outputs)
    logic [12:0]        dram_addr;              // From sdram_controller of sdram_controller.v
    logic [1:0]         dram_ba;                // From sdram_controller of sdram_controller.v
    logic               dram_cas_n;             // From sdram_controller of sdram_controller.v
    logic               dram_cke;               // From sdram_controller of sdram_controller.v
    logic               dram_clk;               // From sdram_controller of sdram_controller.v
    logic               dram_cs_n;              // From sdram_controller of sdram_controller.v
    logic [SDRAM_DATA_WIDTH-1:0] dram_dq;       // To/From sdram_controller of sdram_controller.v, ...
    logic               dram_ras_n;             // From sdram_controller of sdram_controller.v
    logic               dram_we_n;              // From sdram_controller of sdram_controller.v
    logic               frame_interrupt;        // From vga_controller of vga_controller.v
    logic               perf_dram_page_hit;     // From sdram_controller of sdram_controller.v
    logic               perf_dram_page_miss;    // From sdram_controller of sdram_controller.v
    logic               processor_halt;         // From nyuzi of nyuzi.v
    logic               ps2_clk;                // From sim_ps2 of sim_ps2.v
    logic               ps2_data;               // From sim_ps2 of sim_ps2.v
    logic               sd_do;                  // From sim_sdmmc of sim_sdmmc.v
    logic               timer_interrupt;        // From timer of timer.v
    logic [7:0]         vga_b;                  // From vga_controller of vga_controller.v
    logic               vga_blank_n;            // From vga_controller of vga_controller.v
    logic               vga_clk;                // From vga_controller of vga_controller.v
    logic [7:0]         vga_g;                  // From vga_controller of vga_controller.v
    logic               vga_hs;                 // From vga_controller of vga_controller.v
    logic [7:0]         vga_r;                  // From vga_controller of vga_controller.v
    logic               vga_sync_n;             // From vga_controller of vga_controller.v
    logic               vga_vs;                 // From vga_controller of vga_controller.v
    // End of automatics

    `define CORE0 nyuzi.core_gen[0].core

`ifdef SIMULATE_BOOT_ROM
    // This will simulate with the boot ROM to test that it is generating
    // the proper memory transactions, but the bootrom doesn't work correctly
    // in the simulation environment, so it won't do anything else.
    localparam RESET_PC = 32'hfffee000;

    axi_rom #(.FILENAME("../software/bootrom/boot.hex")) boot_rom(
        .axi_bus(axi_bus_s[1]),
        .clk(clk),
        .reset(reset));
`else
    localparam RESET_PC = 32'h00000000;

    assign axi_bus_s[1].s_wready = 0;
    assign axi_bus_s[1].s_arready = 0;
    assign axi_bus_s[1].s_rvalid = 0;
`endif

    nyuzi #(.RESET_PC(RESET_PC)) nyuzi(
        .axi_bus(axi_bus_m[0]),
        .io_bus(nyuzi_io_bus),
        .interrupt_req({11'd0,
            frame_interrupt,
            ps2_rx_interrupt,
            uart_rx_interrupt,
            timer_interrupt,
            cosim_interrupt}),
        .*);

    //
    // AXI buses/memory subsystem
    //

    axi_interconnect axi_interconnect(
        .axi_bus_s(axi_bus_s),
        .axi_bus_m(axi_bus_m),
        .*);

    localparam SDRAM_NUM_BANKS = 4;
    localparam SDRAM_DATA_WIDTH = 32;
    localparam SDRAM_ROW_ADDR_WIDTH = 12;
    localparam SDRAM_COL_ADDR_WIDTH = $clog2(MEM_SIZE / ((1 << SDRAM_ROW_ADDR_WIDTH)
        * SDRAM_NUM_BANKS * (SDRAM_DATA_WIDTH / 8)));
`ifdef USE_SDRAM
    sdram_controller #(
        .DATA_WIDTH(SDRAM_DATA_WIDTH),
        .ROW_ADDR_WIDTH(SDRAM_ROW_ADDR_WIDTH),
        .COL_ADDR_WIDTH(SDRAM_COL_ADDR_WIDTH),
        .T_REFRESH(750),
        .T_POWERUP(5)
    ) sdram_controller(
        .axi_bus(axi_bus_s[0]),
        .*);
    localparam SDRAM_NUM_BANKS = 4;
    localparam SDRAM_ROW_ADDR_WIDTH = 12;
    localparam SDRAM_COL_ADDR_WIDTH = $clog2(MEM_SIZE / ((1 << SDRAM_ROW_ADDR_WIDTH) * SDRAM_NUM_BANKS * (SDRAM_DATA_WIDTH / 8)));
    sim_sdram #(
        .DATA_WIDTH(SDRAM_DATA_WIDTH),
        .ROW_ADDR_WIDTH(SDRAM_ROW_ADDR_WIDTH),
        .COL_ADDR_WIDTH(SDRAM_COL_ADDR_WIDTH),
        .MAX_REFRESH_INTERVAL(800)
    ) memory(.*);
`else
    axi_sram memory(
        .axi_bus(axi_bus_s[0]),
	.loader_we(0),
	.loader_addr(0),
	.loader_data(0),
	.*);
`endif
    // The s1 interface is not connected to anything in this configuration.
    assign axi_bus_m[1].m_awvalid = 0;
    assign axi_bus_m[1].m_wvalid = 0;
    assign axi_bus_m[1].m_arvalid = 0;
    assign axi_bus_m[1].m_rready = 0;
    assign axi_bus_m[1].m_bready = 0;

    //
    // Peripherals
    //

    assign loopback_uart_rx = loopback_uart_tx & loopback_uart_mask;
    uart #(.BASE_ADDRESS('h140)) loopback_uart(
        .io_bus(peripheral_io_bus[IO_LOOPBACK_UART]),
        .rx_interrupt(uart_rx_interrupt),
        .uart_tx(loopback_uart_tx),
        .uart_rx(loopback_uart_rx),
        .*);

    sim_sdmmc sim_sdmmc(.*);

    spi_controller #(.BASE_ADDRESS('hc0)) spi_controller(
        .io_bus(peripheral_io_bus[IO_SDCARD]),
        .spi_clk(sd_sclk),
        .spi_cs_n(sd_cs_n),
        .spi_miso(sd_do),
        .spi_mosi(sd_di),
        .*);

    sim_ps2 sim_ps2(.*);

    ps2_controller #(.BASE_ADDRESS('h80)) ps2_controller(
        .io_bus(peripheral_io_bus[IO_PS2]),
        .rx_interrupt(ps2_rx_interrupt),
        .*);

    timer #(.BASE_ADDRESS('h240)) timer(
        .io_bus(peripheral_io_bus[IO_TIMER]),
        .*);

`ifdef SIMULATE_VGA
    // There is no automated test for VGA currently, so I test as follows:
    // - Modify the makefile to add --trace-depth 1 to VERILATOR_OPTIONS
    // - Rebuild hardware: DUMP_WAVEFORM=1 make
    // - Run one of the apps (like mandelbrot) for maybe 20 seconds, ctrl-C to stop
    // - Look the resulting waveform in GtkWave to check that the timings are correct.
    vga_controller #(.BASE_ADDRESS('h180)) vga_controller(
        .io_bus(peripheral_io_bus[IO_VGA]),
        .axi_bus(axi_bus_m[1]),
        .*);
`endif

    assign peripheral_io_bus[IO_ONES].read_data = 32'hffffffff;

    assign nyuzi_io_bus.read_data = peripheral_read_data[io_bus_source];

    genvar io_idx;
    generate
        for (io_idx = 0; io_idx < NUM_PERIPHERALS; io_idx++)
        begin : io_gen
            assign peripheral_io_bus[io_idx].write_en = nyuzi_io_bus.write_en;
            assign peripheral_io_bus[io_idx].read_en = nyuzi_io_bus.read_en;
            assign peripheral_io_bus[io_idx].address = nyuzi_io_bus.address;
            assign peripheral_io_bus[io_idx].write_data = nyuzi_io_bus.write_data;
            assign peripheral_read_data[io_idx] = peripheral_io_bus[io_idx].read_data;
        end
    endgenerate

    always_ff @(posedge clk, posedge reset)
    begin
        if (reset)
        begin
            cosim_interrupt_delay <= 0;
            cosim_interrupt <= 0;
        end
        else if (cosim_interrupt_delay == 0)
        begin
            cosim_interrupt_delay <= cosim_timer_interval;
            cosim_interrupt <= 1;
        end
        else
        begin
            cosim_interrupt_delay <= cosim_interrupt_delay - 1;
            cosim_interrupt <= 0;
        end
    end

    // Device registers
    always_ff @(posedge clk, posedge reset)
    begin
        if (reset)
        begin
            loopback_uart_mask <= 1;
            cosim_timer_interval <= 1000;
        end
        else
        begin
            if (nyuzi_io_bus.write_en)
            begin
                case (nyuzi_io_bus.address)
                    // Serial output
                    'h48:
                    begin
                        $write("%c", nyuzi_io_bus.write_data[7:0]);
                        $fflush(1);
                    end

                    // Loopback UART: force framing error
                    'h1c: loopback_uart_mask <= nyuzi_io_bus.write_data[0];

                    // Set timer interval
                    'h20: cosim_timer_interval <= nyuzi_io_bus.write_data;
                endcase
            end

            if (nyuzi_io_bus.read_en)
            begin
                casez (nyuzi_io_bus.address[15:0])
                    // Hack for cosimulation tests
                    'h04,
                    'h08,
                    'h40: // Serial status
                        io_bus_source <= IO_ONES;

                    // PS2
                    'h8?: io_bus_source <= IO_PS2;

                    // SPI (SD card)
                    'hc?: io_bus_source <= IO_SDCARD;

                    // Loopback UART
                    'h14?: io_bus_source <= IO_LOOPBACK_UART;

                    default: io_bus_source <= IO_ONES;  // XXX Might want random source
                endcase
            end
        end
    end

    //
    // Simulator option/execution handling
    //

    trace_logger trace_logger(
        .wb_writeback_en(`CORE0.wb_writeback_en),
        .wb_writeback_is_vector(`CORE0.wb_writeback_is_vector),
        .wb_writeback_reg(`CORE0.wb_writeback_reg),
        .wb_writeback_value(`CORE0.wb_writeback_value),
        .wb_writeback_mask(`CORE0.wb_writeback_mask),
        .wb_writeback_thread_idx(`CORE0.wb_writeback_thread_idx),
        .wb_rollback_thread_idx(`CORE0.wb_rollback_thread_idx),
        .wb_rollback_pc(`CORE0.wb_rollback_pc),
        .debug_is_sync_store(`CORE0.writeback_stage.__debug_is_sync_store),
        .debug_wb_pipeline(`CORE0.writeback_stage.__debug_wb_pipeline),
        .debug_wb_pc(`CORE0.writeback_stage.__debug_wb_pc),
        .ix_instruction_valid(`CORE0.ix_instruction_valid),
        .ix_instruction_pc(`CORE0.ix_instruction.pc),
        .ix_instruction_has_dest(`CORE0.ix_instruction.has_dest ),
        .ix_instruction_dest_reg(`CORE0.ix_instruction.dest_reg),
        .ix_instruction_dest_is_vector(`CORE0.ix_instruction.dest_is_vector),
        .ix_instruction_has_trap(`CORE0.ix_instruction.has_trap),
        .ix_instruction_trap_cause(`CORE0.ix_instruction.trap_cause),
        .dd_instruction_valid(`CORE0.dd_instruction_valid),
        .dd_instruction_has_dest(`CORE0.dd_instruction.has_dest),
        .dd_instruction_dest_reg(`CORE0.dd_instruction.dest_reg),
        .dd_instruction_dest_is_vector(`CORE0.dd_instruction.dest_is_vector),
        .dd_rollback_en(`CORE0.dd_rollback_en),
        .dd_instruction_pc(`CORE0.dd_instruction.pc),
        .dd_store_en(`CORE0.dd_store_en),
        .dd_store_mask(`CORE0.dd_store_mask),
        .dd_store_data(`CORE0.dd_store_data),
        .dd_instruction_memory_access_type(`CORE0.dd_instruction.memory_access_type),
        .dd_instruction_is_load(`CORE0.dd_instruction.is_load),
        .dt_instruction_pc(`CORE0.dt_instruction.pc),
        .dt_thread_idx(`CORE0.dt_thread_idx),
        .dt_request_virt_addr(`CORE0.dt_request_vaddr),
        .sq_rollback_en(`CORE0.sq_rollback_en),
        .sq_store_sync_success(`CORE0.sq_store_sync_success),
        .wb_trap_pc(`CORE0.wb_trap_pc),
        .*);

    task flush_l2_line;
        input l2_tag_t tag;
        input l2_set_idx_t set;
        input l2_way_idx_t way;
    begin
        for (int line_offset = 0; line_offset < `CACHE_LINE_WORDS; line_offset++)
        begin
            memory.memory.data[(int'(tag) * `L2_SETS + int'(set)) * `CACHE_LINE_WORDS + line_offset] =
                int'(nyuzi.l2_cache.l2_cache_read_stage.sram_l2_data.data[{way, set}]
                 >> ((`CACHE_LINE_WORDS - 1 - line_offset) * 32));
        end
    end
    endtask

    // Manually copy lines from the L2 cache back to memory so we can
    // validate it there.
    `define L2_TAG_WAY nyuzi.l2_cache.l2_cache_tag_stage.way_tags_gen

    task flush_l2_cache;
    begin
        for (int set = 0; set < `L2_SETS; set++)
        begin
            // XXX these need to be manually commented out when changing
            // the number of L2 ways, since (per IEEE 1800-2012) an
            // instance select must be a constant expression.
            if (`L2_TAG_WAY[0].line_valid[set])
                flush_l2_line(`L2_TAG_WAY[0].sram_tags.data[set], l2_set_idx_t'(set), l2_way_idx_t'(0));

            if (`L2_TAG_WAY[1].line_valid[set])
                flush_l2_line(`L2_TAG_WAY[1].sram_tags.data[set], l2_set_idx_t'(set), l2_way_idx_t'(1));

            if (`L2_TAG_WAY[2].line_valid[set])
                flush_l2_line(`L2_TAG_WAY[2].sram_tags.data[set], l2_set_idx_t'(set), l2_way_idx_t'(2));

            if (`L2_TAG_WAY[3].line_valid[set])
                flush_l2_line(`L2_TAG_WAY[3].sram_tags.data[set], l2_set_idx_t'(set), l2_way_idx_t'(3));

            if (`L2_TAG_WAY[4].line_valid[set])
                flush_l2_line(`L2_TAG_WAY[4].sram_tags.data[set], l2_set_idx_t'(set), l2_way_idx_t'(4));

            if (`L2_TAG_WAY[5].line_valid[set])
                flush_l2_line(`L2_TAG_WAY[5].sram_tags.data[set], l2_set_idx_t'(set), l2_way_idx_t'(5));

            if (`L2_TAG_WAY[6].line_valid[set])
                flush_l2_line(`L2_TAG_WAY[6].sram_tags.data[set], l2_set_idx_t'(set), l2_way_idx_t'(6));

            if (`L2_TAG_WAY[7].line_valid[set])
                flush_l2_line(`L2_TAG_WAY[7].sram_tags.data[set], l2_set_idx_t'(set), l2_way_idx_t'(7));
        end
    end
    endtask

    initial
    begin
        $display("cores %0d|threads per core %0d|l1i$ %0dk %0d ways|l1d$ %0dk %0d ways|l2$ %0dk %0d ways|itlb %0d entries|dtlb %0d entries",
            `NUM_CORES, `THREADS_PER_CORE,
            `L1I_WAYS * `L1I_SETS * `CACHE_LINE_BYTES / 1024, `L1I_WAYS,
            `L1D_WAYS * `L1D_SETS * `CACHE_LINE_BYTES / 1024, `L1D_WAYS,
            `L2_WAYS * `L2_SETS * `CACHE_LINE_BYTES / 1024, `L2_WAYS,
            `ITLB_ENTRIES, `DTLB_ENTRIES);

        if ($test$plusargs("statetrace") != 0)
        begin
            state_dump_en = 1;
            state_dump_fd = $fopen("statetrace.txt", "w");
        end
        else
            state_dump_en = 0;

        if ($value$plusargs("profile=%s", filename) != 0)
        begin
            profile_en = 1;
            profile_fd = $fopen(filename, "w");
        end
        else
            profile_en = 0;

        for (int i = 0; i < MEM_SIZE; i++)
            memory.memory.data[i] = 0;

        if ($value$plusargs("bin=%s", filename) != 0) begin
            $readmemh(filename, memory.memory.data);
	    memory.core_ila.pc = 0;
	    memory.vector_mask_register = 0;
	        memory.core_ila.SREG_0 = 0;
        memory.core_ila.SREG_1 = 0;
        memory.core_ila.SREG_10 = 0;
        memory.core_ila.SREG_11 = 0;
        memory.core_ila.SREG_12 = 0;
        memory.core_ila.SREG_13 = 0;
        memory.core_ila.SREG_14 = 0;
        memory.core_ila.SREG_15 = 0;
        memory.core_ila.SREG_16 = 0;
        memory.core_ila.SREG_17 = 0;
        memory.core_ila.SREG_18 = 0;
        memory.core_ila.SREG_19 = 0;
        memory.core_ila.SREG_2 = 0;
        memory.core_ila.SREG_20 = 0;
        memory.core_ila.SREG_21 = 0;
        memory.core_ila.SREG_22 = 0;
        memory.core_ila.SREG_23 = 0;
        memory.core_ila.SREG_24 = 0;
        memory.core_ila.SREG_25 = 0;
        memory.core_ila.SREG_26 = 0;
        memory.core_ila.SREG_27 = 0;
        memory.core_ila.SREG_28 = 0;
        memory.core_ila.SREG_29 = 0;
        memory.core_ila.SREG_3 = 0;
        memory.core_ila.SREG_30 = 0;
        memory.core_ila.SREG_31 = 0;
        memory.core_ila.SREG_4 = 0;
        memory.core_ila.SREG_5 = 0;
        memory.core_ila.SREG_6 = 0;
        memory.core_ila.SREG_7 = 0;
        memory.core_ila.SREG_8 = 0;
        memory.core_ila.SREG_9 = 0;
        memory.core_ila.VREG_0_0 = 0;
        memory.core_ila.VREG_0_1 = 0;
        memory.core_ila.VREG_0_10 = 0;
        memory.core_ila.VREG_0_11 = 0;
        memory.core_ila.VREG_0_12 = 0;
        memory.core_ila.VREG_0_13 = 0;
        memory.core_ila.VREG_0_14 = 0;
        memory.core_ila.VREG_0_15 = 0;
        memory.core_ila.VREG_0_2 = 0;
        memory.core_ila.VREG_0_3 = 0;
        memory.core_ila.VREG_0_4 = 0;
        memory.core_ila.VREG_0_5 = 0;
        memory.core_ila.VREG_0_6 = 0;
        memory.core_ila.VREG_0_7 = 0;
        memory.core_ila.VREG_0_8 = 0;
        memory.core_ila.VREG_0_9 = 0;
        memory.core_ila.VREG_10_0 = 0;
        memory.core_ila.VREG_10_1 = 0;
        memory.core_ila.VREG_10_10 = 0;
        memory.core_ila.VREG_10_11 = 0;
        memory.core_ila.VREG_10_12 = 0;
        memory.core_ila.VREG_10_13 = 0;
        memory.core_ila.VREG_10_14 = 0;
        memory.core_ila.VREG_10_15 = 0;
        memory.core_ila.VREG_10_2 = 0;
        memory.core_ila.VREG_10_3 = 0;
        memory.core_ila.VREG_10_4 = 0;
        memory.core_ila.VREG_10_5 = 0;
        memory.core_ila.VREG_10_6 = 0;
        memory.core_ila.VREG_10_7 = 0;
        memory.core_ila.VREG_10_8 = 0;
        memory.core_ila.VREG_10_9 = 0;
        memory.core_ila.VREG_11_0 = 0;
        memory.core_ila.VREG_11_1 = 0;
        memory.core_ila.VREG_11_10 = 0;
        memory.core_ila.VREG_11_11 = 0;
        memory.core_ila.VREG_11_12 = 0;
        memory.core_ila.VREG_11_13 = 0;
        memory.core_ila.VREG_11_14 = 0;
        memory.core_ila.VREG_11_15 = 0;
        memory.core_ila.VREG_11_2 = 0;
        memory.core_ila.VREG_11_3 = 0;
        memory.core_ila.VREG_11_4 = 0;
        memory.core_ila.VREG_11_5 = 0;
        memory.core_ila.VREG_11_6 = 0;
        memory.core_ila.VREG_11_7 = 0;
        memory.core_ila.VREG_11_8 = 0;
        memory.core_ila.VREG_11_9 = 0;
        memory.core_ila.VREG_12_0 = 0;
        memory.core_ila.VREG_12_1 = 0;
        memory.core_ila.VREG_12_10 = 0;
        memory.core_ila.VREG_12_11 = 0;
        memory.core_ila.VREG_12_12 = 0;
        memory.core_ila.VREG_12_13 = 0;
        memory.core_ila.VREG_12_14 = 0;
        memory.core_ila.VREG_12_15 = 0;
        memory.core_ila.VREG_12_2 = 0;
        memory.core_ila.VREG_12_3 = 0;
        memory.core_ila.VREG_12_4 = 0;
        memory.core_ila.VREG_12_5 = 0;
        memory.core_ila.VREG_12_6 = 0;
        memory.core_ila.VREG_12_7 = 0;
        memory.core_ila.VREG_12_8 = 0;
        memory.core_ila.VREG_12_9 = 0;
        memory.core_ila.VREG_13_0 = 0;
        memory.core_ila.VREG_13_1 = 0;
        memory.core_ila.VREG_13_10 = 0;
        memory.core_ila.VREG_13_11 = 0;
        memory.core_ila.VREG_13_12 = 0;
        memory.core_ila.VREG_13_13 = 0;
        memory.core_ila.VREG_13_14 = 0;
        memory.core_ila.VREG_13_15 = 0;
        memory.core_ila.VREG_13_2 = 0;
        memory.core_ila.VREG_13_3 = 0;
        memory.core_ila.VREG_13_4 = 0;
        memory.core_ila.VREG_13_5 = 0;
        memory.core_ila.VREG_13_6 = 0;
        memory.core_ila.VREG_13_7 = 0;
        memory.core_ila.VREG_13_8 = 0;
        memory.core_ila.VREG_13_9 = 0;
        memory.core_ila.VREG_14_0 = 0;
        memory.core_ila.VREG_14_1 = 0;
        memory.core_ila.VREG_14_10 = 0;
        memory.core_ila.VREG_14_11 = 0;
        memory.core_ila.VREG_14_12 = 0;
        memory.core_ila.VREG_14_13 = 0;
        memory.core_ila.VREG_14_14 = 0;
        memory.core_ila.VREG_14_15 = 0;
        memory.core_ila.VREG_14_2 = 0;
        memory.core_ila.VREG_14_3 = 0;
        memory.core_ila.VREG_14_4 = 0;
        memory.core_ila.VREG_14_5 = 0;
        memory.core_ila.VREG_14_6 = 0;
        memory.core_ila.VREG_14_7 = 0;
        memory.core_ila.VREG_14_8 = 0;
        memory.core_ila.VREG_14_9 = 0;
        memory.core_ila.VREG_15_0 = 0;
        memory.core_ila.VREG_15_1 = 0;
        memory.core_ila.VREG_15_10 = 0;
        memory.core_ila.VREG_15_11 = 0;
        memory.core_ila.VREG_15_12 = 0;
        memory.core_ila.VREG_15_13 = 0;
        memory.core_ila.VREG_15_14 = 0;
        memory.core_ila.VREG_15_15 = 0;
        memory.core_ila.VREG_15_2 = 0;
        memory.core_ila.VREG_15_3 = 0;
        memory.core_ila.VREG_15_4 = 0;
        memory.core_ila.VREG_15_5 = 0;
        memory.core_ila.VREG_15_6 = 0;
        memory.core_ila.VREG_15_7 = 0;
        memory.core_ila.VREG_15_8 = 0;
        memory.core_ila.VREG_15_9 = 0;
        memory.core_ila.VREG_16_0 = 0;
        memory.core_ila.VREG_16_1 = 0;
        memory.core_ila.VREG_16_10 = 0;
        memory.core_ila.VREG_16_11 = 0;
        memory.core_ila.VREG_16_12 = 0;
        memory.core_ila.VREG_16_13 = 0;
        memory.core_ila.VREG_16_14 = 0;
        memory.core_ila.VREG_16_15 = 0;
        memory.core_ila.VREG_16_2 = 0;
        memory.core_ila.VREG_16_3 = 0;
        memory.core_ila.VREG_16_4 = 0;
        memory.core_ila.VREG_16_5 = 0;
        memory.core_ila.VREG_16_6 = 0;
        memory.core_ila.VREG_16_7 = 0;
        memory.core_ila.VREG_16_8 = 0;
        memory.core_ila.VREG_16_9 = 0;
        memory.core_ila.VREG_17_0 = 0;
        memory.core_ila.VREG_17_1 = 0;
        memory.core_ila.VREG_17_10 = 0;
        memory.core_ila.VREG_17_11 = 0;
        memory.core_ila.VREG_17_12 = 0;
        memory.core_ila.VREG_17_13 = 0;
        memory.core_ila.VREG_17_14 = 0;
        memory.core_ila.VREG_17_15 = 0;
        memory.core_ila.VREG_17_2 = 0;
        memory.core_ila.VREG_17_3 = 0;
        memory.core_ila.VREG_17_4 = 0;
        memory.core_ila.VREG_17_5 = 0;
        memory.core_ila.VREG_17_6 = 0;
        memory.core_ila.VREG_17_7 = 0;
        memory.core_ila.VREG_17_8 = 0;
        memory.core_ila.VREG_17_9 = 0;
        memory.core_ila.VREG_18_0 = 0;
        memory.core_ila.VREG_18_1 = 0;
        memory.core_ila.VREG_18_10 = 0;
        memory.core_ila.VREG_18_11 = 0;
        memory.core_ila.VREG_18_12 = 0;
        memory.core_ila.VREG_18_13 = 0;
        memory.core_ila.VREG_18_14 = 0;
        memory.core_ila.VREG_18_15 = 0;
        memory.core_ila.VREG_18_2 = 0;
        memory.core_ila.VREG_18_3 = 0;
        memory.core_ila.VREG_18_4 = 0;
        memory.core_ila.VREG_18_5 = 0;
        memory.core_ila.VREG_18_6 = 0;
        memory.core_ila.VREG_18_7 = 0;
        memory.core_ila.VREG_18_8 = 0;
        memory.core_ila.VREG_18_9 = 0;
        memory.core_ila.VREG_19_0 = 0;
        memory.core_ila.VREG_19_1 = 0;
        memory.core_ila.VREG_19_10 = 0;
        memory.core_ila.VREG_19_11 = 0;
        memory.core_ila.VREG_19_12 = 0;
        memory.core_ila.VREG_19_13 = 0;
        memory.core_ila.VREG_19_14 = 0;
        memory.core_ila.VREG_19_15 = 0;
        memory.core_ila.VREG_19_2 = 0;
        memory.core_ila.VREG_19_3 = 0;
        memory.core_ila.VREG_19_4 = 0;
        memory.core_ila.VREG_19_5 = 0;
        memory.core_ila.VREG_19_6 = 0;
        memory.core_ila.VREG_19_7 = 0;
        memory.core_ila.VREG_19_8 = 0;
        memory.core_ila.VREG_19_9 = 0;
        memory.core_ila.VREG_1_0 = 0;
        memory.core_ila.VREG_1_1 = 0;
        memory.core_ila.VREG_1_10 = 0;
        memory.core_ila.VREG_1_11 = 0;
        memory.core_ila.VREG_1_12 = 0;
        memory.core_ila.VREG_1_13 = 0;
        memory.core_ila.VREG_1_14 = 0;
        memory.core_ila.VREG_1_15 = 0;
        memory.core_ila.VREG_1_2 = 0;
        memory.core_ila.VREG_1_3 = 0;
        memory.core_ila.VREG_1_4 = 0;
        memory.core_ila.VREG_1_5 = 0;
        memory.core_ila.VREG_1_6 = 0;
        memory.core_ila.VREG_1_7 = 0;
        memory.core_ila.VREG_1_8 = 0;
        memory.core_ila.VREG_1_9 = 0;
        memory.core_ila.VREG_20_0 = 0;
        memory.core_ila.VREG_20_1 = 0;
        memory.core_ila.VREG_20_10 = 0;
        memory.core_ila.VREG_20_11 = 0;
        memory.core_ila.VREG_20_12 = 0;
        memory.core_ila.VREG_20_13 = 0;
        memory.core_ila.VREG_20_14 = 0;
        memory.core_ila.VREG_20_15 = 0;
        memory.core_ila.VREG_20_2 = 0;
        memory.core_ila.VREG_20_3 = 0;
        memory.core_ila.VREG_20_4 = 0;
        memory.core_ila.VREG_20_5 = 0;
        memory.core_ila.VREG_20_6 = 0;
        memory.core_ila.VREG_20_7 = 0;
        memory.core_ila.VREG_20_8 = 0;
        memory.core_ila.VREG_20_9 = 0;
        memory.core_ila.VREG_21_0 = 0;
        memory.core_ila.VREG_21_1 = 0;
        memory.core_ila.VREG_21_10 = 0;
        memory.core_ila.VREG_21_11 = 0;
        memory.core_ila.VREG_21_12 = 0;
        memory.core_ila.VREG_21_13 = 0;
        memory.core_ila.VREG_21_14 = 0;
        memory.core_ila.VREG_21_15 = 0;
        memory.core_ila.VREG_21_2 = 0;
        memory.core_ila.VREG_21_3 = 0;
        memory.core_ila.VREG_21_4 = 0;
        memory.core_ila.VREG_21_5 = 0;
        memory.core_ila.VREG_21_6 = 0;
        memory.core_ila.VREG_21_7 = 0;
        memory.core_ila.VREG_21_8 = 0;
        memory.core_ila.VREG_21_9 = 0;
        memory.core_ila.VREG_22_0 = 0;
        memory.core_ila.VREG_22_1 = 0;
        memory.core_ila.VREG_22_10 = 0;
        memory.core_ila.VREG_22_11 = 0;
        memory.core_ila.VREG_22_12 = 0;
        memory.core_ila.VREG_22_13 = 0;
        memory.core_ila.VREG_22_14 = 0;
        memory.core_ila.VREG_22_15 = 0;
        memory.core_ila.VREG_22_2 = 0;
        memory.core_ila.VREG_22_3 = 0;
        memory.core_ila.VREG_22_4 = 0;
        memory.core_ila.VREG_22_5 = 0;
        memory.core_ila.VREG_22_6 = 0;
        memory.core_ila.VREG_22_7 = 0;
        memory.core_ila.VREG_22_8 = 0;
        memory.core_ila.VREG_22_9 = 0;
        memory.core_ila.VREG_23_0 = 0;
        memory.core_ila.VREG_23_1 = 0;
        memory.core_ila.VREG_23_10 = 0;
        memory.core_ila.VREG_23_11 = 0;
        memory.core_ila.VREG_23_12 = 0;
        memory.core_ila.VREG_23_13 = 0;
        memory.core_ila.VREG_23_14 = 0;
        memory.core_ila.VREG_23_15 = 0;
        memory.core_ila.VREG_23_2 = 0;
        memory.core_ila.VREG_23_3 = 0;
        memory.core_ila.VREG_23_4 = 0;
        memory.core_ila.VREG_23_5 = 0;
        memory.core_ila.VREG_23_6 = 0;
        memory.core_ila.VREG_23_7 = 0;
        memory.core_ila.VREG_23_8 = 0;
        memory.core_ila.VREG_23_9 = 0;
        memory.core_ila.VREG_24_0 = 0;
        memory.core_ila.VREG_24_1 = 0;
        memory.core_ila.VREG_24_10 = 0;
        memory.core_ila.VREG_24_11 = 0;
        memory.core_ila.VREG_24_12 = 0;
        memory.core_ila.VREG_24_13 = 0;
        memory.core_ila.VREG_24_14 = 0;
        memory.core_ila.VREG_24_15 = 0;
        memory.core_ila.VREG_24_2 = 0;
        memory.core_ila.VREG_24_3 = 0;
        memory.core_ila.VREG_24_4 = 0;
        memory.core_ila.VREG_24_5 = 0;
        memory.core_ila.VREG_24_6 = 0;
        memory.core_ila.VREG_24_7 = 0;
        memory.core_ila.VREG_24_8 = 0;
        memory.core_ila.VREG_24_9 = 0;
        memory.core_ila.VREG_25_0 = 0;
        memory.core_ila.VREG_25_1 = 0;
        memory.core_ila.VREG_25_10 = 0;
        memory.core_ila.VREG_25_11 = 0;
        memory.core_ila.VREG_25_12 = 0;
        memory.core_ila.VREG_25_13 = 0;
        memory.core_ila.VREG_25_14 = 0;
        memory.core_ila.VREG_25_15 = 0;
        memory.core_ila.VREG_25_2 = 0;
        memory.core_ila.VREG_25_3 = 0;
        memory.core_ila.VREG_25_4 = 0;
        memory.core_ila.VREG_25_5 = 0;
        memory.core_ila.VREG_25_6 = 0;
        memory.core_ila.VREG_25_7 = 0;
        memory.core_ila.VREG_25_8 = 0;
        memory.core_ila.VREG_25_9 = 0;
        memory.core_ila.VREG_26_0 = 0;
        memory.core_ila.VREG_26_1 = 0;
        memory.core_ila.VREG_26_10 = 0;
        memory.core_ila.VREG_26_11 = 0;
        memory.core_ila.VREG_26_12 = 0;
        memory.core_ila.VREG_26_13 = 0;
        memory.core_ila.VREG_26_14 = 0;
        memory.core_ila.VREG_26_15 = 0;
        memory.core_ila.VREG_26_2 = 0;
        memory.core_ila.VREG_26_3 = 0;
        memory.core_ila.VREG_26_4 = 0;
        memory.core_ila.VREG_26_5 = 0;
        memory.core_ila.VREG_26_6 = 0;
        memory.core_ila.VREG_26_7 = 0;
        memory.core_ila.VREG_26_8 = 0;
        memory.core_ila.VREG_26_9 = 0;
        memory.core_ila.VREG_27_0 = 0;
        memory.core_ila.VREG_27_1 = 0;
        memory.core_ila.VREG_27_10 = 0;
        memory.core_ila.VREG_27_11 = 0;
        memory.core_ila.VREG_27_12 = 0;
        memory.core_ila.VREG_27_13 = 0;
        memory.core_ila.VREG_27_14 = 0;
        memory.core_ila.VREG_27_15 = 0;
        memory.core_ila.VREG_27_2 = 0;
        memory.core_ila.VREG_27_3 = 0;
        memory.core_ila.VREG_27_4 = 0;
        memory.core_ila.VREG_27_5 = 0;
        memory.core_ila.VREG_27_6 = 0;
        memory.core_ila.VREG_27_7 = 0;
        memory.core_ila.VREG_27_8 = 0;
        memory.core_ila.VREG_27_9 = 0;
        memory.core_ila.VREG_28_0 = 0;
        memory.core_ila.VREG_28_1 = 0;
        memory.core_ila.VREG_28_10 = 0;
        memory.core_ila.VREG_28_11 = 0;
        memory.core_ila.VREG_28_12 = 0;
        memory.core_ila.VREG_28_13 = 0;
        memory.core_ila.VREG_28_14 = 0;
        memory.core_ila.VREG_28_15 = 0;
        memory.core_ila.VREG_28_2 = 0;
        memory.core_ila.VREG_28_3 = 0;
        memory.core_ila.VREG_28_4 = 0;
        memory.core_ila.VREG_28_5 = 0;
        memory.core_ila.VREG_28_6 = 0;
        memory.core_ila.VREG_28_7 = 0;
        memory.core_ila.VREG_28_8 = 0;
        memory.core_ila.VREG_28_9 = 0;
        memory.core_ila.VREG_29_0 = 0;
        memory.core_ila.VREG_29_1 = 0;
        memory.core_ila.VREG_29_10 = 0;
        memory.core_ila.VREG_29_11 = 0;
        memory.core_ila.VREG_29_12 = 0;
        memory.core_ila.VREG_29_13 = 0;
        memory.core_ila.VREG_29_14 = 0;
        memory.core_ila.VREG_29_15 = 0;
        memory.core_ila.VREG_29_2 = 0;
        memory.core_ila.VREG_29_3 = 0;
        memory.core_ila.VREG_29_4 = 0;
        memory.core_ila.VREG_29_5 = 0;
        memory.core_ila.VREG_29_6 = 0;
        memory.core_ila.VREG_29_7 = 0;
        memory.core_ila.VREG_29_8 = 0;
        memory.core_ila.VREG_29_9 = 0;
        memory.core_ila.VREG_2_0 = 0;
        memory.core_ila.VREG_2_1 = 0;
        memory.core_ila.VREG_2_10 = 0;
        memory.core_ila.VREG_2_11 = 0;
        memory.core_ila.VREG_2_12 = 0;
        memory.core_ila.VREG_2_13 = 0;
        memory.core_ila.VREG_2_14 = 0;
        memory.core_ila.VREG_2_15 = 0;
        memory.core_ila.VREG_2_2 = 0;
        memory.core_ila.VREG_2_3 = 0;
        memory.core_ila.VREG_2_4 = 0;
        memory.core_ila.VREG_2_5 = 0;
        memory.core_ila.VREG_2_6 = 0;
        memory.core_ila.VREG_2_7 = 0;
        memory.core_ila.VREG_2_8 = 0;
        memory.core_ila.VREG_2_9 = 0;
        memory.core_ila.VREG_30_0 = 0;
        memory.core_ila.VREG_30_1 = 0;
        memory.core_ila.VREG_30_10 = 0;
        memory.core_ila.VREG_30_11 = 0;
        memory.core_ila.VREG_30_12 = 0;
        memory.core_ila.VREG_30_13 = 0;
        memory.core_ila.VREG_30_14 = 0;
        memory.core_ila.VREG_30_15 = 0;
        memory.core_ila.VREG_30_2 = 0;
        memory.core_ila.VREG_30_3 = 0;
        memory.core_ila.VREG_30_4 = 0;
        memory.core_ila.VREG_30_5 = 0;
        memory.core_ila.VREG_30_6 = 0;
        memory.core_ila.VREG_30_7 = 0;
        memory.core_ila.VREG_30_8 = 0;
        memory.core_ila.VREG_30_9 = 0;
        memory.core_ila.VREG_31_0 = 0;
        memory.core_ila.VREG_31_1 = 0;
        memory.core_ila.VREG_31_10 = 0;
        memory.core_ila.VREG_31_11 = 0;
        memory.core_ila.VREG_31_12 = 0;
        memory.core_ila.VREG_31_13 = 0;
        memory.core_ila.VREG_31_14 = 0;
        memory.core_ila.VREG_31_15 = 0;
        memory.core_ila.VREG_31_2 = 0;
        memory.core_ila.VREG_31_3 = 0;
        memory.core_ila.VREG_31_4 = 0;
        memory.core_ila.VREG_31_5 = 0;
        memory.core_ila.VREG_31_6 = 0;
        memory.core_ila.VREG_31_7 = 0;
        memory.core_ila.VREG_31_8 = 0;
        memory.core_ila.VREG_31_9 = 0;
        memory.core_ila.VREG_3_0 = 0;
        memory.core_ila.VREG_3_1 = 0;
        memory.core_ila.VREG_3_10 = 0;
        memory.core_ila.VREG_3_11 = 0;
        memory.core_ila.VREG_3_12 = 0;
        memory.core_ila.VREG_3_13 = 0;
        memory.core_ila.VREG_3_14 = 0;
        memory.core_ila.VREG_3_15 = 0;
        memory.core_ila.VREG_3_2 = 0;
        memory.core_ila.VREG_3_3 = 0;
        memory.core_ila.VREG_3_4 = 0;
        memory.core_ila.VREG_3_5 = 0;
        memory.core_ila.VREG_3_6 = 0;
        memory.core_ila.VREG_3_7 = 0;
        memory.core_ila.VREG_3_8 = 0;
        memory.core_ila.VREG_3_9 = 0;
        memory.core_ila.VREG_4_0 = 0;
        memory.core_ila.VREG_4_1 = 0;
        memory.core_ila.VREG_4_10 = 0;
        memory.core_ila.VREG_4_11 = 0;
        memory.core_ila.VREG_4_12 = 0;
        memory.core_ila.VREG_4_13 = 0;
        memory.core_ila.VREG_4_14 = 0;
        memory.core_ila.VREG_4_15 = 0;
        memory.core_ila.VREG_4_2 = 0;
        memory.core_ila.VREG_4_3 = 0;
        memory.core_ila.VREG_4_4 = 0;
        memory.core_ila.VREG_4_5 = 0;
        memory.core_ila.VREG_4_6 = 0;
        memory.core_ila.VREG_4_7 = 0;
        memory.core_ila.VREG_4_8 = 0;
        memory.core_ila.VREG_4_9 = 0;
        memory.core_ila.VREG_5_0 = 0;
        memory.core_ila.VREG_5_1 = 0;
        memory.core_ila.VREG_5_10 = 0;
        memory.core_ila.VREG_5_11 = 0;
        memory.core_ila.VREG_5_12 = 0;
        memory.core_ila.VREG_5_13 = 0;
        memory.core_ila.VREG_5_14 = 0;
        memory.core_ila.VREG_5_15 = 0;
        memory.core_ila.VREG_5_2 = 0;
        memory.core_ila.VREG_5_3 = 0;
        memory.core_ila.VREG_5_4 = 0;
        memory.core_ila.VREG_5_5 = 0;
        memory.core_ila.VREG_5_6 = 0;
        memory.core_ila.VREG_5_7 = 0;
        memory.core_ila.VREG_5_8 = 0;
        memory.core_ila.VREG_5_9 = 0;
        memory.core_ila.VREG_6_0 = 0;
        memory.core_ila.VREG_6_1 = 0;
        memory.core_ila.VREG_6_10 = 0;
        memory.core_ila.VREG_6_11 = 0;
        memory.core_ila.VREG_6_12 = 0;
        memory.core_ila.VREG_6_13 = 0;
        memory.core_ila.VREG_6_14 = 0;
        memory.core_ila.VREG_6_15 = 0;
        memory.core_ila.VREG_6_2 = 0;
        memory.core_ila.VREG_6_3 = 0;
        memory.core_ila.VREG_6_4 = 0;
        memory.core_ila.VREG_6_5 = 0;
        memory.core_ila.VREG_6_6 = 0;
        memory.core_ila.VREG_6_7 = 0;
        memory.core_ila.VREG_6_8 = 0;
        memory.core_ila.VREG_6_9 = 0;
        memory.core_ila.VREG_7_0 = 0;
        memory.core_ila.VREG_7_1 = 0;
        memory.core_ila.VREG_7_10 = 0;
        memory.core_ila.VREG_7_11 = 0;
        memory.core_ila.VREG_7_12 = 0;
        memory.core_ila.VREG_7_13 = 0;
        memory.core_ila.VREG_7_14 = 0;
        memory.core_ila.VREG_7_15 = 0;
        memory.core_ila.VREG_7_2 = 0;
        memory.core_ila.VREG_7_3 = 0;
        memory.core_ila.VREG_7_4 = 0;
        memory.core_ila.VREG_7_5 = 0;
        memory.core_ila.VREG_7_6 = 0;
        memory.core_ila.VREG_7_7 = 0;
        memory.core_ila.VREG_7_8 = 0;
        memory.core_ila.VREG_7_9 = 0;
        memory.core_ila.VREG_8_0 = 0;
        memory.core_ila.VREG_8_1 = 0;
        memory.core_ila.VREG_8_10 = 0;
        memory.core_ila.VREG_8_11 = 0;
        memory.core_ila.VREG_8_12 = 0;
        memory.core_ila.VREG_8_13 = 0;
        memory.core_ila.VREG_8_14 = 0;
        memory.core_ila.VREG_8_15 = 0;
        memory.core_ila.VREG_8_2 = 0;
        memory.core_ila.VREG_8_3 = 0;
        memory.core_ila.VREG_8_4 = 0;
        memory.core_ila.VREG_8_5 = 0;
        memory.core_ila.VREG_8_6 = 0;
        memory.core_ila.VREG_8_7 = 0;
        memory.core_ila.VREG_8_8 = 0;
        memory.core_ila.VREG_8_9 = 0;
        memory.core_ila.VREG_9_0 = 0;
        memory.core_ila.VREG_9_1 = 0;
        memory.core_ila.VREG_9_10 = 0;
        memory.core_ila.VREG_9_11 = 0;
        memory.core_ila.VREG_9_12 = 0;
        memory.core_ila.VREG_9_13 = 0;
        memory.core_ila.VREG_9_14 = 0;
        memory.core_ila.VREG_9_15 = 0;
        memory.core_ila.VREG_9_2 = 0;
        memory.core_ila.VREG_9_3 = 0;
        memory.core_ila.VREG_9_4 = 0;
        memory.core_ila.VREG_9_5 = 0;
        memory.core_ila.VREG_9_6 = 0;
        memory.core_ila.VREG_9_7 = 0;
        memory.core_ila.VREG_9_8 = 0;
        memory.core_ila.VREG_9_9 = 0;    
	end    
        else
        begin
            $display("No memory image file specified with +bin");
            $finish;
        end
    end

    final
    begin
        int mem_dump_start;
        int mem_dump_length;
        int dump_fp;

        $display("ran for %0d cycles", total_cycles);
        if ($value$plusargs("memdumpbase=%x", mem_dump_start) != 0
            && $value$plusargs("memdumplen=%x", mem_dump_length) != 0
            && $value$plusargs("memdumpfile=%s", filename) != 0)
        begin
            if ($test$plusargs("autoflushl2") != 0)
                flush_l2_cache;

            dump_fp = $fopen(filename, "wb");
            for (int i = 0; i < mem_dump_length; i += 4)
            begin
                $c("fputc(", memory.memory.data[(mem_dump_start + i) / 4][31:24], ", VL_CVT_I_FP(", dump_fp, "));");
                $c("fputc(", memory.memory.data[(mem_dump_start + i) / 4][23:16], ", VL_CVT_I_FP(", dump_fp, "));");
                $c("fputc(", memory.memory.data[(mem_dump_start + i) / 4][15:8], ", VL_CVT_I_FP(", dump_fp, "));");
                $c("fputc(", memory.memory.data[(mem_dump_start + i) / 4][7:0], ", VL_CVT_I_FP(", dump_fp, "));");
            end

            $fclose(dump_fp);
        end

        if (state_dump_en)
            $fclose(state_dump_fd);

        if (profile_en)
            $fclose(profile_fd);

        // Do this last so emulator doesn't kill us with SIGPIPE during cosimulation.
        if (processor_halt)
            $display("***HALTED***");
    end

    always_ff @(posedge clk, posedge reset)
    begin
        if (reset)
        begin
            finish_cycles <= '0;
            total_cycles <= '0;
        end
        else
        begin
            if (processor_halt)
            begin
                // Run some number of cycles after halt is triggered to flush pending
                // instructions, L2 cache transactions, and the trace reorder queue.
                if (finish_cycles == 0)
                    finish_cycles <= 2000;
                else if (finish_cycles == 1)
                    $finish;
                else
                    finish_cycles <= finish_cycles - 1;
            end
            else
                total_cycles <= total_cycles + 1;    // Don't count cycles after halt

            if (state_dump_en)
            begin
                for (int i = 0; i < `THREADS_PER_CORE; i++)
                begin
                    if (i != 0)
                        $fwrite(state_dump_fd, ",");

                    $fwrite(state_dump_fd, "%d", `CORE0.thread_select_stage.thread_state[i]);
                end

                $fwrite(state_dump_fd, "\n");
            end

            // Randomly sample a program counter for a thread and output to profile file
            if (profile_en && ($random() & 63) == 0)
                $fwrite(profile_fd, "%x\n", `CORE0.ifetch_tag_stage.next_program_counter[$random() % `THREADS_PER_CORE]);
        end
    end
endmodule
