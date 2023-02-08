// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module softmax_latency_array_array_softmax_config13_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        data_V_data_0_V_dout,
        data_V_data_0_V_empty_n,
        data_V_data_0_V_read,
        data_V_data_1_V_dout,
        data_V_data_1_V_empty_n,
        data_V_data_1_V_read,
        res_V_data_0_V_TREADY,
        res_V_data_0_V_TDATA,
        res_V_data_0_V_TVALID,
        res_V_data_1_V_TDATA,
        res_V_data_1_V_TVALID,
        res_V_data_1_V_TREADY,
        data_V_data_0_V_blk_n,
        data_V_data_1_V_blk_n,
        res_V_data_0_V_TDATA_blk_n,
        res_V_data_1_V_TDATA_blk_n
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [15:0] data_V_data_0_V_dout;
input   data_V_data_0_V_empty_n;
output   data_V_data_0_V_read;
input  [15:0] data_V_data_1_V_dout;
input   data_V_data_1_V_empty_n;
output   data_V_data_1_V_read;
input   res_V_data_0_V_TREADY;
output  [15:0] res_V_data_0_V_TDATA;
output   res_V_data_0_V_TVALID;
output  [15:0] res_V_data_1_V_TDATA;
output   res_V_data_1_V_TVALID;
input   res_V_data_1_V_TREADY;
output   data_V_data_0_V_blk_n;
output   data_V_data_1_V_blk_n;
output   res_V_data_0_V_TDATA_blk_n;
output   res_V_data_1_V_TDATA_blk_n;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg data_V_data_0_V_read;
reg data_V_data_1_V_read;
reg res_V_data_0_V_TVALID;
reg res_V_data_1_V_TVALID;
reg data_V_data_0_V_blk_n;
reg data_V_data_1_V_blk_n;
reg res_V_data_0_V_TDATA_blk_n;
reg res_V_data_1_V_TDATA_blk_n;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_idle_pp0;
wire    io_acc_block_signal_op7;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_state6_pp0_stage0_iter5;
reg    ap_block_pp0_stage0_11001;
wire   [9:0] exp_table11_address0;
reg    exp_table11_ce0;
wire   [17:0] exp_table11_q0;
wire   [9:0] exp_table11_address1;
reg    exp_table11_ce1;
wire   [17:0] exp_table11_q1;
wire   [9:0] invert_table12_address0;
reg    invert_table12_ce0;
wire   [13:0] invert_table12_q0;
reg   [9:0] y_V_reg_269;
reg   [9:0] y_V_1_reg_274;
reg  signed [17:0] exp_res_0_V_reg_289;
reg  signed [17:0] exp_res_0_V_reg_289_pp0_iter3_reg;
reg  signed [17:0] exp_res_0_V_reg_289_pp0_iter4_reg;
reg  signed [17:0] exp_res_1_V_reg_295;
reg  signed [17:0] exp_res_1_V_reg_295_pp0_iter3_reg;
reg  signed [17:0] exp_res_1_V_reg_295_pp0_iter4_reg;
reg   [13:0] inv_exp_sum_V_reg_306;
reg    ap_block_pp0_stage0_subdone;
wire   [63:0] zext_ln157_fu_207_p1;
wire   [63:0] zext_ln157_1_fu_211_p1;
wire   [63:0] zext_ln166_fu_229_p1;
reg    ap_block_pp0_stage0_01001;
wire  signed [17:0] mul_ln1118_fu_152_p0;
wire  signed [13:0] mul_ln1118_fu_152_p1;
wire  signed [25:0] sext_ln167_fu_234_p1;
wire  signed [17:0] mul_ln1118_1_fu_153_p0;
wire  signed [13:0] mul_ln1118_1_fu_153_p1;
wire   [17:0] exp_sum_V_fu_215_p2;
wire   [9:0] y_V_2_fu_219_p4;
wire   [25:0] mul_ln1118_fu_152_p2;
wire   [25:0] mul_ln1118_1_fu_153_p2;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_0to4;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
end

softmax_latency_array_array_softmax_config13_s_exp_table11 #(
    .DataWidth( 18 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
exp_table11_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(exp_table11_address0),
    .ce0(exp_table11_ce0),
    .q0(exp_table11_q0),
    .address1(exp_table11_address1),
    .ce1(exp_table11_ce1),
    .q1(exp_table11_q1)
);

softmax_latency_array_array_softmax_config13_s_invert_tabfYi #(
    .DataWidth( 14 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
invert_table12_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(invert_table12_address0),
    .ce0(invert_table12_ce0),
    .q0(invert_table12_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        exp_res_0_V_reg_289 <= exp_table11_q0;
        exp_res_1_V_reg_295 <= exp_table11_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        exp_res_0_V_reg_289_pp0_iter3_reg <= exp_res_0_V_reg_289;
        exp_res_0_V_reg_289_pp0_iter4_reg <= exp_res_0_V_reg_289_pp0_iter3_reg;
        exp_res_1_V_reg_295_pp0_iter3_reg <= exp_res_1_V_reg_295;
        exp_res_1_V_reg_295_pp0_iter4_reg <= exp_res_1_V_reg_295_pp0_iter3_reg;
        inv_exp_sum_V_reg_306 <= invert_table12_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        y_V_1_reg_274 <= {{data_V_data_1_V_dout[15:6]}};
        y_V_reg_269 <= {{data_V_data_0_V_dout[15:6]}};
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b0 == ap_block_pp0_stage0) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter5 == 1'b1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_0to4 = 1'b1;
    end else begin
        ap_idle_pp0_0to4 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to4 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n;
    end else begin
        data_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_0_V_read = 1'b1;
    end else begin
        data_V_data_0_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n;
    end else begin
        data_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        data_V_data_1_V_read = 1'b1;
    end else begin
        data_V_data_1_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table11_ce0 = 1'b1;
    end else begin
        exp_table11_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table11_ce1 = 1'b1;
    end else begin
        exp_table11_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        invert_table12_ce0 = 1'b1;
    end else begin
        invert_table12_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        res_V_data_0_V_TDATA_blk_n = res_V_data_0_V_TREADY;
    end else begin
        res_V_data_0_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        res_V_data_0_V_TVALID = 1'b1;
    end else begin
        res_V_data_0_V_TVALID = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        res_V_data_1_V_TDATA_blk_n = res_V_data_1_V_TREADY;
    end else begin
        res_V_data_1_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter5 == 1'b1))) begin
        res_V_data_1_V_TVALID = 1'b1;
    end else begin
        res_V_data_1_V_TVALID = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((ap_start == 1'b1) & ((ap_start == 1'b0) | (io_acc_block_signal_op7 == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = (((res_V_data_0_V_TREADY == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b1)) | ((ap_start == 1'b1) & ((ap_start == 1'b0) | (io_acc_block_signal_op7 == 1'b0))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = (((res_V_data_0_V_TREADY == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b1)) | ((ap_start == 1'b1) & ((ap_start == 1'b0) | (io_acc_block_signal_op7 == 1'b0))));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = ((ap_start == 1'b0) | (io_acc_block_signal_op7 == 1'b0));
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start;

assign exp_sum_V_fu_215_p2 = ($signed(exp_res_0_V_reg_289) + $signed(exp_res_1_V_reg_295));

assign exp_table11_address0 = zext_ln157_fu_207_p1;

assign exp_table11_address1 = zext_ln157_1_fu_211_p1;

assign invert_table12_address0 = zext_ln166_fu_229_p1;

assign io_acc_block_signal_op7 = (data_V_data_1_V_empty_n & data_V_data_0_V_empty_n);

assign mul_ln1118_1_fu_153_p0 = exp_res_1_V_reg_295_pp0_iter4_reg;

assign mul_ln1118_1_fu_153_p1 = sext_ln167_fu_234_p1;

assign mul_ln1118_1_fu_153_p2 = ($signed(mul_ln1118_1_fu_153_p0) * $signed(mul_ln1118_1_fu_153_p1));

assign mul_ln1118_fu_152_p0 = exp_res_0_V_reg_289_pp0_iter4_reg;

assign mul_ln1118_fu_152_p1 = sext_ln167_fu_234_p1;

assign mul_ln1118_fu_152_p2 = ($signed(mul_ln1118_fu_152_p0) * $signed(mul_ln1118_fu_152_p1));

assign res_V_data_0_V_TDATA = {{mul_ln1118_fu_152_p2[25:10]}};

assign res_V_data_1_V_TDATA = {{mul_ln1118_1_fu_153_p2[25:10]}};

assign sext_ln167_fu_234_p1 = $signed(inv_exp_sum_V_reg_306);

assign y_V_2_fu_219_p4 = {{exp_sum_V_fu_215_p2[17:8]}};

assign zext_ln157_1_fu_211_p1 = y_V_1_reg_274;

assign zext_ln157_fu_207_p1 = y_V_reg_269;

assign zext_ln166_fu_229_p1 = y_V_2_fu_219_p4;

endmodule //softmax_latency_array_array_softmax_config13_s