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

`include "defines.sv"

//
// SRAM with an AXI interface and external loader interface
//
module axi_sram
    #(parameter MEM_SIZE = 'h40000) // Number of 32-bit words

    (input                      clk,
    input                       reset,

    // AXI interface
    axi4_interface.slave        axi_bus,

    // External loader interface. It is valid to access these when the
    // part is in reset; the reset signal only applies to the AXI state machine.
    input                       loader_we,
    input[31:0]                 loader_addr,
    input[31:0]                 loader_data);

    typedef enum {
        STATE_IDLE,
        STATE_READ_BURST,
        STATE_WRITE_BURST,
        STATE_WRITE_ACK
    } axi_state_t;

    logic[31:0] burst_address;
    logic[31:0] burst_address_nxt;
    logic[7:0] burst_count;
    logic[7:0] burst_count_nxt;

logic[31:0] SREG_0;
logic[31:0] SREG_1;
logic[31:0] SREG_10;
logic[31:0] SREG_11;
logic[31:0] SREG_12;
logic[31:0] SREG_13;
logic[31:0] SREG_14;
logic[31:0] SREG_15;
logic[31:0] SREG_16;
logic[31:0] SREG_17;
logic[31:0] SREG_18;
logic[31:0] SREG_19;
logic[31:0] SREG_2;
logic[31:0] SREG_20;
logic[31:0] SREG_21;
logic[31:0] SREG_22;
logic[31:0] SREG_23;
logic[31:0] SREG_24;
logic[31:0] SREG_25;
logic[31:0] SREG_26;
logic[31:0] SREG_27;
logic[31:0] SREG_28;
logic[31:0] SREG_29;
logic[31:0] SREG_3;
logic[31:0] SREG_30;
logic[31:0] SREG_31;
logic[31:0] SREG_4;
logic[31:0] SREG_5;
logic[31:0] SREG_6;
logic[31:0] SREG_7;
logic[31:0] SREG_8;
logic[31:0] SREG_9;
logic[31:0] VREG_0_0;
logic[31:0] VREG_0_1;
logic[31:0] VREG_0_10;
logic[31:0] VREG_0_11;
logic[31:0] VREG_0_12;
logic[31:0] VREG_0_13;
logic[31:0] VREG_0_14;
logic[31:0] VREG_0_15;
logic[31:0] VREG_0_2;
logic[31:0] VREG_0_3;
logic[31:0] VREG_0_4;
logic[31:0] VREG_0_5;
logic[31:0] VREG_0_6;
logic[31:0] VREG_0_7;
logic[31:0] VREG_0_8;
logic[31:0] VREG_0_9;
logic[31:0] VREG_10_0;
logic[31:0] VREG_10_1;
logic[31:0] VREG_10_10;
logic[31:0] VREG_10_11;
logic[31:0] VREG_10_12;
logic[31:0] VREG_10_13;
logic[31:0] VREG_10_14;
logic[31:0] VREG_10_15;
logic[31:0] VREG_10_2;
logic[31:0] VREG_10_3;
logic[31:0] VREG_10_4;
logic[31:0] VREG_10_5;
logic[31:0] VREG_10_6;
logic[31:0] VREG_10_7;
logic[31:0] VREG_10_8;
logic[31:0] VREG_10_9;
logic[31:0] VREG_11_0;
logic[31:0] VREG_11_1;
logic[31:0] VREG_11_10;
logic[31:0] VREG_11_11;
logic[31:0] VREG_11_12;
logic[31:0] VREG_11_13;
logic[31:0] VREG_11_14;
logic[31:0] VREG_11_15;
logic[31:0] VREG_11_2;
logic[31:0] VREG_11_3;
logic[31:0] VREG_11_4;
logic[31:0] VREG_11_5;
logic[31:0] VREG_11_6;
logic[31:0] VREG_11_7;
logic[31:0] VREG_11_8;
logic[31:0] VREG_11_9;
logic[31:0] VREG_12_0;
logic[31:0] VREG_12_1;
logic[31:0] VREG_12_10;
logic[31:0] VREG_12_11;
logic[31:0] VREG_12_12;
logic[31:0] VREG_12_13;
logic[31:0] VREG_12_14;
logic[31:0] VREG_12_15;
logic[31:0] VREG_12_2;
logic[31:0] VREG_12_3;
logic[31:0] VREG_12_4;
logic[31:0] VREG_12_5;
logic[31:0] VREG_12_6;
logic[31:0] VREG_12_7;
logic[31:0] VREG_12_8;
logic[31:0] VREG_12_9;
logic[31:0] VREG_13_0;
logic[31:0] VREG_13_1;
logic[31:0] VREG_13_10;
logic[31:0] VREG_13_11;
logic[31:0] VREG_13_12;
logic[31:0] VREG_13_13;
logic[31:0] VREG_13_14;
logic[31:0] VREG_13_15;
logic[31:0] VREG_13_2;
logic[31:0] VREG_13_3;
logic[31:0] VREG_13_4;
logic[31:0] VREG_13_5;
logic[31:0] VREG_13_6;
logic[31:0] VREG_13_7;
logic[31:0] VREG_13_8;
logic[31:0] VREG_13_9;
logic[31:0] VREG_14_0;
logic[31:0] VREG_14_1;
logic[31:0] VREG_14_10;
logic[31:0] VREG_14_11;
logic[31:0] VREG_14_12;
logic[31:0] VREG_14_13;
logic[31:0] VREG_14_14;
logic[31:0] VREG_14_15;
logic[31:0] VREG_14_2;
logic[31:0] VREG_14_3;
logic[31:0] VREG_14_4;
logic[31:0] VREG_14_5;
logic[31:0] VREG_14_6;
logic[31:0] VREG_14_7;
logic[31:0] VREG_14_8;
logic[31:0] VREG_14_9;
logic[31:0] VREG_15_0;
logic[31:0] VREG_15_1;
logic[31:0] VREG_15_10;
logic[31:0] VREG_15_11;
logic[31:0] VREG_15_12;
logic[31:0] VREG_15_13;
logic[31:0] VREG_15_14;
logic[31:0] VREG_15_15;
logic[31:0] VREG_15_2;
logic[31:0] VREG_15_3;
logic[31:0] VREG_15_4;
logic[31:0] VREG_15_5;
logic[31:0] VREG_15_6;
logic[31:0] VREG_15_7;
logic[31:0] VREG_15_8;
logic[31:0] VREG_15_9;
logic[31:0] VREG_16_0;
logic[31:0] VREG_16_1;
logic[31:0] VREG_16_10;
logic[31:0] VREG_16_11;
logic[31:0] VREG_16_12;
logic[31:0] VREG_16_13;
logic[31:0] VREG_16_14;
logic[31:0] VREG_16_15;
logic[31:0] VREG_16_2;
logic[31:0] VREG_16_3;
logic[31:0] VREG_16_4;
logic[31:0] VREG_16_5;
logic[31:0] VREG_16_6;
logic[31:0] VREG_16_7;
logic[31:0] VREG_16_8;
logic[31:0] VREG_16_9;
logic[31:0] VREG_17_0;
logic[31:0] VREG_17_1;
logic[31:0] VREG_17_10;
logic[31:0] VREG_17_11;
logic[31:0] VREG_17_12;
logic[31:0] VREG_17_13;
logic[31:0] VREG_17_14;
logic[31:0] VREG_17_15;
logic[31:0] VREG_17_2;
logic[31:0] VREG_17_3;
logic[31:0] VREG_17_4;
logic[31:0] VREG_17_5;
logic[31:0] VREG_17_6;
logic[31:0] VREG_17_7;
logic[31:0] VREG_17_8;
logic[31:0] VREG_17_9;
logic[31:0] VREG_18_0;
logic[31:0] VREG_18_1;
logic[31:0] VREG_18_10;
logic[31:0] VREG_18_11;
logic[31:0] VREG_18_12;
logic[31:0] VREG_18_13;
logic[31:0] VREG_18_14;
logic[31:0] VREG_18_15;
logic[31:0] VREG_18_2;
logic[31:0] VREG_18_3;
logic[31:0] VREG_18_4;
logic[31:0] VREG_18_5;
logic[31:0] VREG_18_6;
logic[31:0] VREG_18_7;
logic[31:0] VREG_18_8;
logic[31:0] VREG_18_9;
logic[31:0] VREG_19_0;
logic[31:0] VREG_19_1;
logic[31:0] VREG_19_10;
logic[31:0] VREG_19_11;
logic[31:0] VREG_19_12;
logic[31:0] VREG_19_13;
logic[31:0] VREG_19_14;
logic[31:0] VREG_19_15;
logic[31:0] VREG_19_2;
logic[31:0] VREG_19_3;
logic[31:0] VREG_19_4;
logic[31:0] VREG_19_5;
logic[31:0] VREG_19_6;
logic[31:0] VREG_19_7;
logic[31:0] VREG_19_8;
logic[31:0] VREG_19_9;
logic[31:0] VREG_1_0;
logic[31:0] VREG_1_1;
logic[31:0] VREG_1_10;
logic[31:0] VREG_1_11;
logic[31:0] VREG_1_12;
logic[31:0] VREG_1_13;
logic[31:0] VREG_1_14;
logic[31:0] VREG_1_15;
logic[31:0] VREG_1_2;
logic[31:0] VREG_1_3;
logic[31:0] VREG_1_4;
logic[31:0] VREG_1_5;
logic[31:0] VREG_1_6;
logic[31:0] VREG_1_7;
logic[31:0] VREG_1_8;
logic[31:0] VREG_1_9;
logic[31:0] VREG_20_0;
logic[31:0] VREG_20_1;
logic[31:0] VREG_20_10;
logic[31:0] VREG_20_11;
logic[31:0] VREG_20_12;
logic[31:0] VREG_20_13;
logic[31:0] VREG_20_14;
logic[31:0] VREG_20_15;
logic[31:0] VREG_20_2;
logic[31:0] VREG_20_3;
logic[31:0] VREG_20_4;
logic[31:0] VREG_20_5;
logic[31:0] VREG_20_6;
logic[31:0] VREG_20_7;
logic[31:0] VREG_20_8;
logic[31:0] VREG_20_9;
logic[31:0] VREG_21_0;
logic[31:0] VREG_21_1;
logic[31:0] VREG_21_10;
logic[31:0] VREG_21_11;
logic[31:0] VREG_21_12;
logic[31:0] VREG_21_13;
logic[31:0] VREG_21_14;
logic[31:0] VREG_21_15;
logic[31:0] VREG_21_2;
logic[31:0] VREG_21_3;
logic[31:0] VREG_21_4;
logic[31:0] VREG_21_5;
logic[31:0] VREG_21_6;
logic[31:0] VREG_21_7;
logic[31:0] VREG_21_8;
logic[31:0] VREG_21_9;
logic[31:0] VREG_22_0;
logic[31:0] VREG_22_1;
logic[31:0] VREG_22_10;
logic[31:0] VREG_22_11;
logic[31:0] VREG_22_12;
logic[31:0] VREG_22_13;
logic[31:0] VREG_22_14;
logic[31:0] VREG_22_15;
logic[31:0] VREG_22_2;
logic[31:0] VREG_22_3;
logic[31:0] VREG_22_4;
logic[31:0] VREG_22_5;
logic[31:0] VREG_22_6;
logic[31:0] VREG_22_7;
logic[31:0] VREG_22_8;
logic[31:0] VREG_22_9;
logic[31:0] VREG_23_0;
logic[31:0] VREG_23_1;
logic[31:0] VREG_23_10;
logic[31:0] VREG_23_11;
logic[31:0] VREG_23_12;
logic[31:0] VREG_23_13;
logic[31:0] VREG_23_14;
logic[31:0] VREG_23_15;
logic[31:0] VREG_23_2;
logic[31:0] VREG_23_3;
logic[31:0] VREG_23_4;
logic[31:0] VREG_23_5;
logic[31:0] VREG_23_6;
logic[31:0] VREG_23_7;
logic[31:0] VREG_23_8;
logic[31:0] VREG_23_9;
logic[31:0] VREG_24_0;
logic[31:0] VREG_24_1;
logic[31:0] VREG_24_10;
logic[31:0] VREG_24_11;
logic[31:0] VREG_24_12;
logic[31:0] VREG_24_13;
logic[31:0] VREG_24_14;
logic[31:0] VREG_24_15;
logic[31:0] VREG_24_2;
logic[31:0] VREG_24_3;
logic[31:0] VREG_24_4;
logic[31:0] VREG_24_5;
logic[31:0] VREG_24_6;
logic[31:0] VREG_24_7;
logic[31:0] VREG_24_8;
logic[31:0] VREG_24_9;
logic[31:0] VREG_25_0;
logic[31:0] VREG_25_1;
logic[31:0] VREG_25_10;
logic[31:0] VREG_25_11;
logic[31:0] VREG_25_12;
logic[31:0] VREG_25_13;
logic[31:0] VREG_25_14;
logic[31:0] VREG_25_15;
logic[31:0] VREG_25_2;
logic[31:0] VREG_25_3;
logic[31:0] VREG_25_4;
logic[31:0] VREG_25_5;
logic[31:0] VREG_25_6;
logic[31:0] VREG_25_7;
logic[31:0] VREG_25_8;
logic[31:0] VREG_25_9;
logic[31:0] VREG_26_0;
logic[31:0] VREG_26_1;
logic[31:0] VREG_26_10;
logic[31:0] VREG_26_11;
logic[31:0] VREG_26_12;
logic[31:0] VREG_26_13;
logic[31:0] VREG_26_14;
logic[31:0] VREG_26_15;
logic[31:0] VREG_26_2;
logic[31:0] VREG_26_3;
logic[31:0] VREG_26_4;
logic[31:0] VREG_26_5;
logic[31:0] VREG_26_6;
logic[31:0] VREG_26_7;
logic[31:0] VREG_26_8;
logic[31:0] VREG_26_9;
logic[31:0] VREG_27_0;
logic[31:0] VREG_27_1;
logic[31:0] VREG_27_10;
logic[31:0] VREG_27_11;
logic[31:0] VREG_27_12;
logic[31:0] VREG_27_13;
logic[31:0] VREG_27_14;
logic[31:0] VREG_27_15;
logic[31:0] VREG_27_2;
logic[31:0] VREG_27_3;
logic[31:0] VREG_27_4;
logic[31:0] VREG_27_5;
logic[31:0] VREG_27_6;
logic[31:0] VREG_27_7;
logic[31:0] VREG_27_8;
logic[31:0] VREG_27_9;
logic[31:0] VREG_28_0;
logic[31:0] VREG_28_1;
logic[31:0] VREG_28_10;
logic[31:0] VREG_28_11;
logic[31:0] VREG_28_12;
logic[31:0] VREG_28_13;
logic[31:0] VREG_28_14;
logic[31:0] VREG_28_15;
logic[31:0] VREG_28_2;
logic[31:0] VREG_28_3;
logic[31:0] VREG_28_4;
logic[31:0] VREG_28_5;
logic[31:0] VREG_28_6;
logic[31:0] VREG_28_7;
logic[31:0] VREG_28_8;
logic[31:0] VREG_28_9;
logic[31:0] VREG_29_0;
logic[31:0] VREG_29_1;
logic[31:0] VREG_29_10;
logic[31:0] VREG_29_11;
logic[31:0] VREG_29_12;
logic[31:0] VREG_29_13;
logic[31:0] VREG_29_14;
logic[31:0] VREG_29_15;
logic[31:0] VREG_29_2;
logic[31:0] VREG_29_3;
logic[31:0] VREG_29_4;
logic[31:0] VREG_29_5;
logic[31:0] VREG_29_6;
logic[31:0] VREG_29_7;
logic[31:0] VREG_29_8;
logic[31:0] VREG_29_9;
logic[31:0] VREG_2_0;
logic[31:0] VREG_2_1;
logic[31:0] VREG_2_10;
logic[31:0] VREG_2_11;
logic[31:0] VREG_2_12;
logic[31:0] VREG_2_13;
logic[31:0] VREG_2_14;
logic[31:0] VREG_2_15;
logic[31:0] VREG_2_2;
logic[31:0] VREG_2_3;
logic[31:0] VREG_2_4;
logic[31:0] VREG_2_5;
logic[31:0] VREG_2_6;
logic[31:0] VREG_2_7;
logic[31:0] VREG_2_8;
logic[31:0] VREG_2_9;
logic[31:0] VREG_30_0;
logic[31:0] VREG_30_1;
logic[31:0] VREG_30_10;
logic[31:0] VREG_30_11;
logic[31:0] VREG_30_12;
logic[31:0] VREG_30_13;
logic[31:0] VREG_30_14;
logic[31:0] VREG_30_15;
logic[31:0] VREG_30_2;
logic[31:0] VREG_30_3;
logic[31:0] VREG_30_4;
logic[31:0] VREG_30_5;
logic[31:0] VREG_30_6;
logic[31:0] VREG_30_7;
logic[31:0] VREG_30_8;
logic[31:0] VREG_30_9;
logic[31:0] VREG_31_0;
logic[31:0] VREG_31_1;
logic[31:0] VREG_31_10;
logic[31:0] VREG_31_11;
logic[31:0] VREG_31_12;
logic[31:0] VREG_31_13;
logic[31:0] VREG_31_14;
logic[31:0] VREG_31_15;
logic[31:0] VREG_31_2;
logic[31:0] VREG_31_3;
logic[31:0] VREG_31_4;
logic[31:0] VREG_31_5;
logic[31:0] VREG_31_6;
logic[31:0] VREG_31_7;
logic[31:0] VREG_31_8;
logic[31:0] VREG_31_9;
logic[31:0] VREG_3_0;
logic[31:0] VREG_3_1;
logic[31:0] VREG_3_10;
logic[31:0] VREG_3_11;
logic[31:0] VREG_3_12;
logic[31:0] VREG_3_13;
logic[31:0] VREG_3_14;
logic[31:0] VREG_3_15;
logic[31:0] VREG_3_2;
logic[31:0] VREG_3_3;
logic[31:0] VREG_3_4;
logic[31:0] VREG_3_5;
logic[31:0] VREG_3_6;
logic[31:0] VREG_3_7;
logic[31:0] VREG_3_8;
logic[31:0] VREG_3_9;
logic[31:0] VREG_4_0;
logic[31:0] VREG_4_1;
logic[31:0] VREG_4_10;
logic[31:0] VREG_4_11;
logic[31:0] VREG_4_12;
logic[31:0] VREG_4_13;
logic[31:0] VREG_4_14;
logic[31:0] VREG_4_15;
logic[31:0] VREG_4_2;
logic[31:0] VREG_4_3;
logic[31:0] VREG_4_4;
logic[31:0] VREG_4_5;
logic[31:0] VREG_4_6;
logic[31:0] VREG_4_7;
logic[31:0] VREG_4_8;
logic[31:0] VREG_4_9;
logic[31:0] VREG_5_0;
logic[31:0] VREG_5_1;
logic[31:0] VREG_5_10;
logic[31:0] VREG_5_11;
logic[31:0] VREG_5_12;
logic[31:0] VREG_5_13;
logic[31:0] VREG_5_14;
logic[31:0] VREG_5_15;
logic[31:0] VREG_5_2;
logic[31:0] VREG_5_3;
logic[31:0] VREG_5_4;
logic[31:0] VREG_5_5;
logic[31:0] VREG_5_6;
logic[31:0] VREG_5_7;
logic[31:0] VREG_5_8;
logic[31:0] VREG_5_9;
logic[31:0] VREG_6_0;
logic[31:0] VREG_6_1;
logic[31:0] VREG_6_10;
logic[31:0] VREG_6_11;
logic[31:0] VREG_6_12;
logic[31:0] VREG_6_13;
logic[31:0] VREG_6_14;
logic[31:0] VREG_6_15;
logic[31:0] VREG_6_2;
logic[31:0] VREG_6_3;
logic[31:0] VREG_6_4;
logic[31:0] VREG_6_5;
logic[31:0] VREG_6_6;
logic[31:0] VREG_6_7;
logic[31:0] VREG_6_8;
logic[31:0] VREG_6_9;
logic[31:0] VREG_7_0;
logic[31:0] VREG_7_1;
logic[31:0] VREG_7_10;
logic[31:0] VREG_7_11;
logic[31:0] VREG_7_12;
logic[31:0] VREG_7_13;
logic[31:0] VREG_7_14;
logic[31:0] VREG_7_15;
logic[31:0] VREG_7_2;
logic[31:0] VREG_7_3;
logic[31:0] VREG_7_4;
logic[31:0] VREG_7_5;
logic[31:0] VREG_7_6;
logic[31:0] VREG_7_7;
logic[31:0] VREG_7_8;
logic[31:0] VREG_7_9;
logic[31:0] VREG_8_0;
logic[31:0] VREG_8_1;
logic[31:0] VREG_8_10;
logic[31:0] VREG_8_11;
logic[31:0] VREG_8_12;
logic[31:0] VREG_8_13;
logic[31:0] VREG_8_14;
logic[31:0] VREG_8_15;
logic[31:0] VREG_8_2;
logic[31:0] VREG_8_3;
logic[31:0] VREG_8_4;
logic[31:0] VREG_8_5;
logic[31:0] VREG_8_6;
logic[31:0] VREG_8_7;
logic[31:0] VREG_8_8;
logic[31:0] VREG_8_9;
logic[31:0] VREG_9_0;
logic[31:0] VREG_9_1;
logic[31:0] VREG_9_10;
logic[31:0] VREG_9_11;
logic[31:0] VREG_9_12;
logic[31:0] VREG_9_13;
logic[31:0] VREG_9_14;
logic[31:0] VREG_9_15;
logic[31:0] VREG_9_2;
logic[31:0] VREG_9_3;
logic[31:0] VREG_9_4;
logic[31:0] VREG_9_5;
logic[31:0] VREG_9_6;
logic[31:0] VREG_9_7;
logic[31:0] VREG_9_8;
logic[31:0] VREG_9_9;

    axi_state_t state;
    axi_state_t state_nxt;
    logic do_read;
    logic do_write;
    logic[31:0] wr_addr;
    logic[31:0] wr_data;

    localparam SRAM_ADDR_WIDTH = $clog2(MEM_SIZE);
    logic [SRAM_ADDR_WIDTH - 1:0] read2_addr;
    logic read2_en;
    logic [31:0] read2_data;
    always_comb
    begin
        if (loader_we)
        begin
            wr_addr = 32'(loader_addr[31:2]);
            wr_data = loader_data;
        end
        else // do write
        begin
            wr_addr = burst_address;
            wr_data = axi_bus.m_wdata;
        end
    end


    logic[31:0] imem_raddr_ila;
    logic[31:0] imem_rdata_ila;
    logic step;
    assign step = 1'b1;
    assign read2_addr = imem_raddr_ila[SRAM_ADDR_WIDTH-1:0];
    assign imem_rdata_ila = {read2_data[7:0], read2_data[15:8], read2_data[23:16], read2_data[31:24]};
    assign read2_en = 1'b1;
    logic[31:0] pc;
    logic[31:0] vector_mask_register; 
    NyGPU core_ila(.imem_raddr_ila(imem_raddr_ila),
    		   .imem_rdata_ila(imem_rdata_ila),
		   .clk(clk),
		   .rst(reset),
		   .step(step),
		   .*);
    sram_2r1w #(.SIZE(MEM_SIZE), .DATA_WIDTH(32)) memory(
        .clk(clk),
        .read1_en(do_read),
        .read1_addr(burst_address_nxt[SRAM_ADDR_WIDTH - 1:0]),
        .read1_data(axi_bus.s_rdata),
	.read2_en(read2_en),
	.read2_addr(read2_addr),
	.read2_data(read2_data),
        .write_en(loader_we || do_write),
        .write_addr(wr_addr[SRAM_ADDR_WIDTH - 1:0]),
        .write_data(wr_data));

    assign axi_bus.s_awready = axi_bus.s_arready;

    // Drive external bus signals
    always_comb
    begin
        axi_bus.s_rvalid = 0;
        axi_bus.s_wready = 0;
        axi_bus.s_bvalid = 0;
        axi_bus.s_arready = 0;
        case (state)
            STATE_IDLE:        axi_bus.s_arready = 1;    // and s_awready
            STATE_READ_BURST:  axi_bus.s_rvalid = 1;
            STATE_WRITE_BURST: axi_bus.s_wready = 1;
            STATE_WRITE_ACK:   axi_bus.s_bvalid = 1;
        endcase
    end

    // Next state logic
    always_comb
    begin
        do_read = 0;
        do_write = 0;
        burst_address_nxt = burst_address;
        burst_count_nxt = burst_count;
        state_nxt = state;

        unique case (state)
            STATE_IDLE:
            begin
                // I've cheated here.  It's legal per the spec for s_arready/s_awready to go low
                // but not if m_arvalid/m_awvalid are already asserted (respectively), because
                // the client would assume the transfer completed (AMBA AXI and ACE protocol
                // spec rev E A3.2.1: "If READY is asserted, it is permitted to deassert READY
                // before VALID is asserted.")  I know that the client never asserts both
                // simultaneously, so I don't bother latching addresses separately.
                if (axi_bus.m_awvalid)
                begin
                    burst_address_nxt = 32'(axi_bus.m_awaddr[31:2]);
                    burst_count_nxt = axi_bus.m_awlen;
                    state_nxt = STATE_WRITE_BURST;
                end
                else if (axi_bus.m_arvalid)
                begin
                    do_read = 1;
                    burst_address_nxt = 32'(axi_bus.m_araddr[31:2]);
                    burst_count_nxt = axi_bus.m_arlen;
                    state_nxt = STATE_READ_BURST;
                end
            end

            STATE_READ_BURST:
            begin
                if (axi_bus.m_rready)
                begin
                    if (burst_count == 0)
                        state_nxt = STATE_IDLE;
                    else
                    begin
                        burst_address_nxt = burst_address + 1;
                        burst_count_nxt = burst_count - 1;
                        do_read = 1;
                    end
                end
            end

            STATE_WRITE_BURST:
            begin
                if (axi_bus.m_wvalid)
                begin
                    do_write = 1;
                    if (burst_count == 0)
                        state_nxt = STATE_WRITE_ACK;
                    else
                    begin
                        burst_address_nxt = burst_address + 1;
                        burst_count_nxt = burst_count - 1;
                    end
                end
            end

            STATE_WRITE_ACK:
            begin
                if (axi_bus.m_bready)
                    state_nxt = STATE_IDLE;
            end

            default:
                state_nxt = STATE_IDLE;
        endcase
    end

    always_ff @(posedge clk, posedge reset)
    begin
        if (reset)
        begin
            state <= STATE_IDLE;
            /*AUTORESET*/
            // Beginning of autoreset for uninitialized flops
            burst_address <= '0;
            burst_count <= '0;
            // End of automatics
        end
        else
        begin
`ifdef SIMULATION
            if (burst_address > MEM_SIZE)
            begin
                // Note that this isn't necessarily indicative of a hardware bug:
                // it could just be a bad memory address produced by software.
                $display("L2 cache accessed invalid address %x", burst_address);
                $finish;
            end
`endif

            burst_address <= burst_address_nxt;
            burst_count <= burst_count_nxt;
            state <= state_nxt;
        end
    end
endmodule
