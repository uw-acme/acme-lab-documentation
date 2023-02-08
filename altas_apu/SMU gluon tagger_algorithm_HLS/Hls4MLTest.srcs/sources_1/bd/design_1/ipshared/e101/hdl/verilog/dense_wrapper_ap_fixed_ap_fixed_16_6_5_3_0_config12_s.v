// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s (
        ap_clk,
        ap_rst,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        data_4_V_read,
        data_5_V_read,
        data_6_V_read,
        data_7_V_read,
        data_8_V_read,
        data_9_V_read,
        data_10_V_read,
        data_11_V_read,
        data_12_V_read,
        data_13_V_read,
        data_14_V_read,
        data_15_V_read,
        ap_return_0,
        ap_return_1
);


input   ap_clk;
input   ap_rst;
input  [15:0] data_0_V_read;
input  [15:0] data_1_V_read;
input  [15:0] data_2_V_read;
input  [15:0] data_3_V_read;
input  [15:0] data_4_V_read;
input  [15:0] data_5_V_read;
input  [15:0] data_6_V_read;
input  [15:0] data_7_V_read;
input  [15:0] data_8_V_read;
input  [15:0] data_9_V_read;
input  [15:0] data_10_V_read;
input  [15:0] data_11_V_read;
input  [15:0] data_12_V_read;
input  [15:0] data_13_V_read;
input  [15:0] data_14_V_read;
input  [15:0] data_15_V_read;
output  [15:0] ap_return_0;
output  [15:0] ap_return_1;

reg   [9:0] trunc_ln708_5_reg_4615;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
reg   [9:0] trunc_ln708_7_reg_4620;
reg   [9:0] trunc_ln708_8_reg_4625;
reg   [9:0] trunc_ln708_s_reg_4630;
reg   [8:0] trunc_ln708_14_reg_4635;
reg   [6:0] trunc_ln708_15_reg_4640;
reg   [8:0] trunc_ln708_18_reg_4645;
reg   [8:0] trunc_ln708_23_reg_4650;
reg   [9:0] trunc_ln708_25_reg_4655;
reg   [9:0] trunc_ln708_26_reg_4660;
reg   [9:0] trunc_ln708_27_reg_4665;
reg   [9:0] trunc_ln708_28_reg_4670;
wire   [9:0] add_ln703_fu_4395_p2;
reg   [9:0] add_ln703_reg_4675;
wire   [9:0] add_ln703_3_fu_4401_p2;
reg   [9:0] add_ln703_3_reg_4680;
wire   [9:0] add_ln703_4_fu_4407_p2;
reg   [9:0] add_ln703_4_reg_4685;
wire   [9:0] add_ln703_7_fu_4413_p2;
reg   [9:0] add_ln703_7_reg_4690;
wire   [9:0] add_ln703_10_fu_4419_p2;
reg   [9:0] add_ln703_10_reg_4695;
wire   [9:0] add_ln703_16_fu_4425_p2;
reg   [9:0] add_ln703_16_reg_4700;
wire   [9:0] add_ln703_19_fu_4431_p2;
reg   [9:0] add_ln703_19_reg_4705;
wire   [9:0] add_ln703_20_fu_4437_p2;
reg   [9:0] add_ln703_20_reg_4710;
wire   [9:0] add_ln703_23_fu_4443_p2;
reg   [9:0] add_ln703_23_reg_4715;
wire   [9:0] add_ln703_26_fu_4449_p2;
reg   [9:0] add_ln703_26_reg_4720;
wire   [9:0] add_ln703_6_fu_4480_p2;
reg   [9:0] add_ln703_6_reg_4725;
wire   [9:0] add_ln703_9_fu_4490_p2;
reg   [9:0] add_ln703_9_reg_4730;
wire   [9:0] add_ln703_13_fu_4511_p2;
reg   [9:0] add_ln703_13_reg_4735;
wire   [9:0] add_ln703_22_fu_4529_p2;
reg   [9:0] add_ln703_22_reg_4740;
wire   [9:0] add_ln703_25_fu_4539_p2;
reg   [9:0] add_ln703_25_reg_4745;
wire   [9:0] add_ln703_29_fu_4556_p2;
reg   [9:0] add_ln703_29_reg_4750;
wire  signed [15:0] mul_ln1118_11_fu_255_p0;
wire  signed [23:0] sext_ln1118_8_fu_3960_p1;
wire    ap_block_pp0_stage0;
wire  signed [15:0] mul_ln1118_13_fu_256_p0;
wire  signed [15:0] mul_ln1118_7_fu_257_p0;
wire  signed [23:0] sext_ln1118_6_fu_3908_p1;
wire  signed [15:0] mul_ln1118_12_fu_258_p0;
wire  signed [15:0] mul_ln1118_23_fu_260_p0;
wire  signed [23:0] sext_ln1118_27_fu_4343_p1;
wire  signed [15:0] mul_ln1118_16_fu_261_p0;
wire  signed [22:0] sext_ln1118_18_fu_4159_p1;
wire  signed [15:0] mul_ln1118_26_fu_262_p0;
wire  signed [23:0] sext_ln1118_28_fu_4369_p1;
wire  signed [15:0] mul_ln1118_5_fu_263_p0;
wire  signed [23:0] sext_ln1118_5_fu_3882_p1;
wire  signed [15:0] mul_ln1118_3_fu_265_p0;
wire  signed [15:0] mul_ln1118_2_fu_267_p0;
wire  signed [15:0] mul_ln1118_8_fu_268_p0;
wire  signed [23:0] sext_ln1118_7_fu_3934_p1;
wire  signed [15:0] mul_ln1118_17_fu_269_p0;
wire  signed [15:0] mul_ln1118_22_fu_270_p0;
wire  signed [23:0] sext_ln1118_26_fu_4317_p1;
wire  signed [15:0] mul_ln1118_9_fu_271_p0;
wire  signed [15:0] mul_ln1118_21_fu_272_p0;
wire  signed [15:0] mul_ln1118_19_fu_273_p0;
wire  signed [23:0] sext_ln1118_22_fu_4244_p1;
wire  signed [15:0] mul_ln1118_fu_274_p0;
wire  signed [15:0] mul_ln1118_10_fu_275_p0;
wire  signed [15:0] mul_ln1118_15_fu_276_p0;
wire  signed [15:0] mul_ln1118_4_fu_278_p0;
wire  signed [15:0] mul_ln1118_18_fu_279_p0;
wire  signed [15:0] mul_ln1118_24_fu_280_p0;
wire  signed [15:0] mul_ln1118_25_fu_281_p0;
wire  signed [15:0] mul_ln1118_20_fu_282_p0;
wire  signed [15:0] mul_ln1118_6_fu_283_p0;
wire  signed [15:0] mul_ln1118_14_fu_285_p0;
wire  signed [15:0] sext_ln1118_fu_3797_p0;
wire  signed [15:0] sext_ln1118_2_fu_3802_p0;
wire   [23:0] mul_ln1118_fu_274_p2;
wire   [22:0] mul_ln1118_2_fu_267_p2;
wire   [8:0] trunc_ln708_2_fu_3817_p4;
wire  signed [15:0] sext_ln1118_3_fu_3831_p0;
wire   [23:0] mul_ln1118_3_fu_265_p2;
wire  signed [15:0] shl_ln_fu_3846_p1;
wire  signed [15:0] shl_ln1118_1_fu_3854_p1;
wire   [17:0] shl_ln1118_1_fu_3854_p3;
wire  signed [23:0] sext_ln1118_4_fu_3862_p1;
wire   [23:0] shl_ln_fu_3846_p3;
wire   [23:0] add_ln1118_fu_3866_p2;
wire   [23:0] mul_ln1118_4_fu_278_p2;
wire   [23:0] mul_ln1118_5_fu_263_p2;
wire   [23:0] mul_ln1118_6_fu_283_p2;
wire   [23:0] mul_ln1118_7_fu_257_p2;
wire   [23:0] mul_ln1118_8_fu_268_p2;
wire   [23:0] mul_ln1118_9_fu_271_p2;
wire   [23:0] mul_ln1118_10_fu_275_p2;
wire   [23:0] mul_ln1118_11_fu_255_p2;
wire  signed [15:0] sext_ln1118_9_fu_3986_p0;
wire   [23:0] mul_ln1118_12_fu_258_p2;
wire  signed [15:0] shl_ln1118_2_fu_4001_p1;
wire   [23:0] shl_ln1118_2_fu_4001_p3;
wire  signed [15:0] shl_ln1118_3_fu_4015_p1;
wire   [18:0] shl_ln1118_3_fu_4015_p3;
wire   [23:0] sub_ln1118_fu_4009_p2;
wire  signed [23:0] sext_ln1118_10_fu_4023_p1;
wire   [23:0] sub_ln1118_1_fu_4027_p2;
wire  signed [15:0] sext_ln1118_11_fu_4043_p0;
wire   [23:0] mul_ln1118_13_fu_256_p2;
wire  signed [15:0] shl_ln1118_4_fu_4058_p1;
wire   [21:0] shl_ln1118_4_fu_4058_p3;
wire  signed [15:0] shl_ln1118_5_fu_4070_p1;
wire   [17:0] shl_ln1118_5_fu_4070_p3;
wire  signed [22:0] sext_ln1118_13_fu_4078_p1;
wire  signed [22:0] sext_ln1118_12_fu_4066_p1;
wire   [22:0] add_ln1118_1_fu_4082_p2;
wire  signed [15:0] sext_ln1118_14_fu_4098_p0;
wire  signed [15:0] shl_ln1118_6_fu_4103_p1;
wire   [19:0] shl_ln1118_6_fu_4103_p3;
wire  signed [20:0] sext_ln1118_15_fu_4111_p1;
wire  signed [15:0] shl_ln1118_7_fu_4121_p1;
wire   [17:0] shl_ln1118_7_fu_4121_p3;
wire   [20:0] sub_ln1118_2_fu_4115_p2;
wire  signed [20:0] sext_ln1118_16_fu_4129_p1;
wire   [20:0] sub_ln1118_3_fu_4133_p2;
wire   [23:0] mul_ln1118_14_fu_285_p2;
wire   [22:0] mul_ln1118_15_fu_276_p2;
wire   [8:0] trunc_ln708_17_fu_4165_p4;
wire   [22:0] mul_ln1118_16_fu_261_p2;
wire  signed [15:0] sext_ln1118_19_fu_4189_p0;
wire  signed [15:0] shl_ln1118_8_fu_4194_p1;
wire   [22:0] shl_ln1118_8_fu_4194_p3;
wire  signed [15:0] shl_ln1118_9_fu_4206_p1;
wire   [18:0] shl_ln1118_9_fu_4206_p3;
wire  signed [23:0] sext_ln1118_21_fu_4214_p1;
wire  signed [23:0] sext_ln1118_20_fu_4202_p1;
wire   [23:0] add_ln1118_2_fu_4218_p2;
wire   [23:0] mul_ln1118_17_fu_269_p2;
wire   [23:0] mul_ln1118_18_fu_279_p2;
wire   [23:0] mul_ln1118_19_fu_273_p2;
wire  signed [15:0] sext_ln1118_23_fu_4270_p0;
wire  signed [15:0] sext_ln1118_24_fu_4275_p0;
wire  signed [15:0] shl_ln1118_s_fu_4279_p1;
wire   [21:0] shl_ln1118_s_fu_4279_p3;
wire  signed [22:0] sext_ln1118_24_fu_4275_p1;
wire  signed [22:0] sext_ln1118_25_fu_4287_p1;
wire   [22:0] add_ln1118_3_fu_4291_p2;
wire   [23:0] mul_ln1118_20_fu_282_p2;
wire   [23:0] mul_ln1118_21_fu_272_p2;
wire   [23:0] mul_ln1118_22_fu_270_p2;
wire   [23:0] mul_ln1118_23_fu_260_p2;
wire   [23:0] mul_ln1118_24_fu_280_p2;
wire   [23:0] mul_ln1118_25_fu_281_p2;
wire   [23:0] mul_ln1118_26_fu_262_p2;
wire   [9:0] trunc_ln708_3_fu_3836_p4;
wire   [9:0] trunc_ln_fu_3807_p4;
wire   [9:0] trunc_ln708_1_fu_3966_p4;
wire   [9:0] trunc_ln708_9_fu_3940_p4;
wire   [9:0] trunc_ln708_13_fu_4048_p4;
wire   [9:0] trunc_ln708_11_fu_3991_p4;
wire   [9:0] trunc_ln708_21_fu_4250_p4;
wire   [9:0] trunc_ln708_19_fu_4224_p4;
wire  signed [9:0] sext_ln708_2_fu_4175_p1;
wire   [9:0] trunc_ln708_29_fu_4375_p4;
wire   [9:0] trunc_ln708_6_fu_3898_p4;
wire   [9:0] trunc_ln708_4_fu_3872_p4;
wire   [9:0] trunc_ln708_12_fu_4033_p4;
wire   [9:0] trunc_ln708_10_fu_3976_p4;
wire   [9:0] trunc_ln708_20_fu_4234_p4;
wire   [9:0] trunc_ln708_16_fu_4149_p4;
wire   [9:0] trunc_ln708_24_fu_4307_p4;
wire   [9:0] trunc_ln708_22_fu_4260_p4;
wire  signed [9:0] sext_ln708_fu_3827_p1;
wire   [9:0] trunc_ln708_30_fu_4385_p4;
wire   [9:0] add_ln703_1_fu_4467_p2;
wire   [9:0] add_ln703_2_fu_4471_p2;
wire   [9:0] add_ln703_5_fu_4476_p2;
wire   [9:0] add_ln703_8_fu_4486_p2;
wire  signed [7:0] sext_ln1118_17_fu_4458_p1;
wire   [7:0] add_ln703_11_fu_4495_p2;
wire  signed [9:0] sext_ln708_4_fu_4464_p1;
wire  signed [9:0] sext_ln703_fu_4501_p1;
wire   [9:0] add_ln703_12_fu_4505_p2;
wire   [9:0] add_ln703_17_fu_4516_p2;
wire   [9:0] add_ln703_18_fu_4520_p2;
wire   [9:0] add_ln703_21_fu_4525_p2;
wire   [9:0] add_ln703_24_fu_4535_p2;
wire  signed [9:0] sext_ln708_3_fu_4461_p1;
wire  signed [9:0] sext_ln708_1_fu_4455_p1;
wire   [9:0] add_ln703_27_fu_4544_p2;
wire   [9:0] add_ln703_28_fu_4550_p2;
wire   [9:0] add_ln703_14_fu_4561_p2;
wire   [9:0] add_ln703_30_fu_4570_p2;
wire   [9:0] p_Val2_s_fu_4565_p2;
wire   [13:0] res_0_V_write_assign_fu_4579_p3;
wire   [9:0] acc_1_V_fu_4574_p2;
wire   [13:0] res_1_V_write_assign_fu_4591_p3;
wire  signed [15:0] sext_ln728_fu_4587_p1;
wire  signed [15:0] sext_ln728_1_fu_4599_p1;
reg   [15:0] data_0_V_read_int_reg;
reg   [15:0] data_1_V_read_int_reg;
reg   [15:0] data_2_V_read_int_reg;
reg   [15:0] data_3_V_read_int_reg;
reg   [15:0] data_4_V_read_int_reg;
reg   [15:0] data_5_V_read_int_reg;
reg   [15:0] data_6_V_read_int_reg;
reg   [15:0] data_7_V_read_int_reg;
reg   [15:0] data_8_V_read_int_reg;
reg   [15:0] data_9_V_read_int_reg;
reg   [15:0] data_10_V_read_int_reg;
reg   [15:0] data_11_V_read_int_reg;
reg   [15:0] data_12_V_read_int_reg;
reg   [15:0] data_13_V_read_int_reg;
reg   [15:0] data_14_V_read_int_reg;
reg   [15:0] data_15_V_read_int_reg;

always @ (posedge ap_clk) begin
    data_0_V_read_int_reg <= data_0_V_read;
end

always @ (posedge ap_clk) begin
    data_10_V_read_int_reg <= data_10_V_read;
end

always @ (posedge ap_clk) begin
    data_11_V_read_int_reg <= data_11_V_read;
end

always @ (posedge ap_clk) begin
    data_12_V_read_int_reg <= data_12_V_read;
end

always @ (posedge ap_clk) begin
    data_13_V_read_int_reg <= data_13_V_read;
end

always @ (posedge ap_clk) begin
    data_14_V_read_int_reg <= data_14_V_read;
end

always @ (posedge ap_clk) begin
    data_15_V_read_int_reg <= data_15_V_read;
end

always @ (posedge ap_clk) begin
    data_1_V_read_int_reg <= data_1_V_read;
end

always @ (posedge ap_clk) begin
    data_2_V_read_int_reg <= data_2_V_read;
end

always @ (posedge ap_clk) begin
    data_3_V_read_int_reg <= data_3_V_read;
end

always @ (posedge ap_clk) begin
    data_4_V_read_int_reg <= data_4_V_read;
end

always @ (posedge ap_clk) begin
    data_5_V_read_int_reg <= data_5_V_read;
end

always @ (posedge ap_clk) begin
    data_6_V_read_int_reg <= data_6_V_read;
end

always @ (posedge ap_clk) begin
    data_7_V_read_int_reg <= data_7_V_read;
end

always @ (posedge ap_clk) begin
    data_8_V_read_int_reg <= data_8_V_read;
end

always @ (posedge ap_clk) begin
    data_9_V_read_int_reg <= data_9_V_read;
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        add_ln703_10_reg_4695 <= add_ln703_10_fu_4419_p2;
        add_ln703_13_reg_4735 <= add_ln703_13_fu_4511_p2;
        add_ln703_16_reg_4700 <= add_ln703_16_fu_4425_p2;
        add_ln703_19_reg_4705 <= add_ln703_19_fu_4431_p2;
        add_ln703_20_reg_4710 <= add_ln703_20_fu_4437_p2;
        add_ln703_22_reg_4740 <= add_ln703_22_fu_4529_p2;
        add_ln703_23_reg_4715 <= add_ln703_23_fu_4443_p2;
        add_ln703_25_reg_4745 <= add_ln703_25_fu_4539_p2;
        add_ln703_26_reg_4720 <= add_ln703_26_fu_4449_p2;
        add_ln703_29_reg_4750 <= add_ln703_29_fu_4556_p2;
        add_ln703_3_reg_4680 <= add_ln703_3_fu_4401_p2;
        add_ln703_4_reg_4685 <= add_ln703_4_fu_4407_p2;
        add_ln703_6_reg_4725 <= add_ln703_6_fu_4480_p2;
        add_ln703_7_reg_4690 <= add_ln703_7_fu_4413_p2;
        add_ln703_9_reg_4730 <= add_ln703_9_fu_4490_p2;
        add_ln703_reg_4675 <= add_ln703_fu_4395_p2;
        trunc_ln708_14_reg_4635 <= {{add_ln1118_1_fu_4082_p2[22:14]}};
        trunc_ln708_15_reg_4640 <= {{sub_ln1118_3_fu_4133_p2[20:14]}};
        trunc_ln708_18_reg_4645 <= {{mul_ln1118_16_fu_261_p2[22:14]}};
        trunc_ln708_23_reg_4650 <= {{add_ln1118_3_fu_4291_p2[22:14]}};
        trunc_ln708_25_reg_4655 <= {{mul_ln1118_21_fu_272_p2[23:14]}};
        trunc_ln708_26_reg_4660 <= {{mul_ln1118_22_fu_270_p2[23:14]}};
        trunc_ln708_27_reg_4665 <= {{mul_ln1118_23_fu_260_p2[23:14]}};
        trunc_ln708_28_reg_4670 <= {{mul_ln1118_24_fu_280_p2[23:14]}};
        trunc_ln708_5_reg_4615 <= {{mul_ln1118_4_fu_278_p2[23:14]}};
        trunc_ln708_7_reg_4620 <= {{mul_ln1118_6_fu_283_p2[23:14]}};
        trunc_ln708_8_reg_4625 <= {{mul_ln1118_7_fu_257_p2[23:14]}};
        trunc_ln708_s_reg_4630 <= {{mul_ln1118_9_fu_271_p2[23:14]}};
    end
end

assign acc_1_V_fu_4574_p2 = (add_ln703_22_reg_4740 + add_ln703_30_fu_4570_p2);

assign add_ln1118_1_fu_4082_p2 = ($signed(sext_ln1118_13_fu_4078_p1) + $signed(sext_ln1118_12_fu_4066_p1));

assign add_ln1118_2_fu_4218_p2 = ($signed(sext_ln1118_21_fu_4214_p1) + $signed(sext_ln1118_20_fu_4202_p1));

assign add_ln1118_3_fu_4291_p2 = ($signed(sext_ln1118_24_fu_4275_p1) + $signed(sext_ln1118_25_fu_4287_p1));

assign add_ln1118_fu_3866_p2 = ($signed(sext_ln1118_4_fu_3862_p1) + $signed(shl_ln_fu_3846_p3));

assign add_ln703_10_fu_4419_p2 = ($signed(sext_ln708_2_fu_4175_p1) + $signed(trunc_ln708_29_fu_4375_p4));

assign add_ln703_11_fu_4495_p2 = ($signed(sext_ln1118_17_fu_4458_p1) + $signed(8'd244));

assign add_ln703_12_fu_4505_p2 = ($signed(sext_ln708_4_fu_4464_p1) + $signed(sext_ln703_fu_4501_p1));

assign add_ln703_13_fu_4511_p2 = (add_ln703_10_reg_4695 + add_ln703_12_fu_4505_p2);

assign add_ln703_14_fu_4561_p2 = (add_ln703_9_reg_4730 + add_ln703_13_reg_4735);

assign add_ln703_16_fu_4425_p2 = (trunc_ln708_6_fu_3898_p4 + trunc_ln708_4_fu_3872_p4);

assign add_ln703_17_fu_4516_p2 = (trunc_ln708_s_reg_4630 + trunc_ln708_8_reg_4625);

assign add_ln703_18_fu_4520_p2 = (add_ln703_16_reg_4700 + add_ln703_17_fu_4516_p2);

assign add_ln703_19_fu_4431_p2 = (trunc_ln708_12_fu_4033_p4 + trunc_ln708_10_fu_3976_p4);

assign add_ln703_1_fu_4467_p2 = (trunc_ln708_7_reg_4620 + trunc_ln708_5_reg_4615);

assign add_ln703_20_fu_4437_p2 = (trunc_ln708_20_fu_4234_p4 + trunc_ln708_16_fu_4149_p4);

assign add_ln703_21_fu_4525_p2 = (add_ln703_19_reg_4705 + add_ln703_20_reg_4710);

assign add_ln703_22_fu_4529_p2 = (add_ln703_18_fu_4520_p2 + add_ln703_21_fu_4525_p2);

assign add_ln703_23_fu_4443_p2 = (trunc_ln708_24_fu_4307_p4 + trunc_ln708_22_fu_4260_p4);

assign add_ln703_24_fu_4535_p2 = (trunc_ln708_28_reg_4670 + trunc_ln708_26_reg_4660);

assign add_ln703_25_fu_4539_p2 = (add_ln703_23_reg_4715 + add_ln703_24_fu_4535_p2);

assign add_ln703_26_fu_4449_p2 = ($signed(sext_ln708_fu_3827_p1) + $signed(trunc_ln708_30_fu_4385_p4));

assign add_ln703_27_fu_4544_p2 = ($signed(sext_ln708_3_fu_4461_p1) + $signed(10'd11));

assign add_ln703_28_fu_4550_p2 = ($signed(sext_ln708_1_fu_4455_p1) + $signed(add_ln703_27_fu_4544_p2));

assign add_ln703_29_fu_4556_p2 = (add_ln703_26_reg_4720 + add_ln703_28_fu_4550_p2);

assign add_ln703_2_fu_4471_p2 = (add_ln703_reg_4675 + add_ln703_1_fu_4467_p2);

assign add_ln703_30_fu_4570_p2 = (add_ln703_25_reg_4745 + add_ln703_29_reg_4750);

assign add_ln703_3_fu_4401_p2 = (trunc_ln708_1_fu_3966_p4 + trunc_ln708_9_fu_3940_p4);

assign add_ln703_4_fu_4407_p2 = (trunc_ln708_13_fu_4048_p4 + trunc_ln708_11_fu_3991_p4);

assign add_ln703_5_fu_4476_p2 = (add_ln703_3_reg_4680 + add_ln703_4_reg_4685);

assign add_ln703_6_fu_4480_p2 = (add_ln703_2_fu_4471_p2 + add_ln703_5_fu_4476_p2);

assign add_ln703_7_fu_4413_p2 = (trunc_ln708_21_fu_4250_p4 + trunc_ln708_19_fu_4224_p4);

assign add_ln703_8_fu_4486_p2 = (trunc_ln708_27_reg_4665 + trunc_ln708_25_reg_4655);

assign add_ln703_9_fu_4490_p2 = (add_ln703_7_reg_4690 + add_ln703_8_fu_4486_p2);

assign add_ln703_fu_4395_p2 = (trunc_ln708_3_fu_3836_p4 + trunc_ln_fu_3807_p4);

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_return_0 = sext_ln728_fu_4587_p1;

assign ap_return_1 = sext_ln728_1_fu_4599_p1;

assign mul_ln1118_10_fu_275_p0 = sext_ln1118_8_fu_3960_p1;

assign mul_ln1118_10_fu_275_p2 = ($signed(mul_ln1118_10_fu_275_p0) * $signed('h115));

assign mul_ln1118_11_fu_255_p0 = sext_ln1118_8_fu_3960_p1;

assign mul_ln1118_11_fu_255_p2 = ($signed(mul_ln1118_11_fu_255_p0) * $signed('h191));

assign mul_ln1118_12_fu_258_p0 = sext_ln1118_9_fu_3986_p0;

assign mul_ln1118_12_fu_258_p2 = ($signed(mul_ln1118_12_fu_258_p0) * $signed('hD3));

assign mul_ln1118_13_fu_256_p0 = sext_ln1118_11_fu_4043_p0;

assign mul_ln1118_13_fu_256_p2 = ($signed(mul_ln1118_13_fu_256_p0) * $signed('h43));

assign mul_ln1118_14_fu_285_p0 = sext_ln1118_14_fu_4098_p0;

assign mul_ln1118_14_fu_285_p2 = ($signed(mul_ln1118_14_fu_285_p0) * $signed(-'hCA));

assign mul_ln1118_15_fu_276_p0 = sext_ln1118_18_fu_4159_p1;

assign mul_ln1118_15_fu_276_p2 = ($signed(mul_ln1118_15_fu_276_p0) * $signed(-'h37));

assign mul_ln1118_16_fu_261_p0 = sext_ln1118_18_fu_4159_p1;

assign mul_ln1118_16_fu_261_p2 = ($signed(mul_ln1118_16_fu_261_p0) * $signed(-'h3D));

assign mul_ln1118_17_fu_269_p0 = sext_ln1118_19_fu_4189_p0;

assign mul_ln1118_17_fu_269_p2 = ($signed(mul_ln1118_17_fu_269_p0) * $signed('h114));

assign mul_ln1118_18_fu_279_p0 = sext_ln1118_22_fu_4244_p1;

assign mul_ln1118_18_fu_279_p2 = ($signed(mul_ln1118_18_fu_279_p0) * $signed('h4D));

assign mul_ln1118_19_fu_273_p0 = sext_ln1118_22_fu_4244_p1;

assign mul_ln1118_19_fu_273_p2 = ($signed(mul_ln1118_19_fu_273_p0) * $signed(-'h1CC));

assign mul_ln1118_20_fu_282_p0 = sext_ln1118_23_fu_4270_p0;

assign mul_ln1118_20_fu_282_p2 = ($signed(mul_ln1118_20_fu_282_p0) * $signed('h166));

assign mul_ln1118_21_fu_272_p0 = sext_ln1118_26_fu_4317_p1;

assign mul_ln1118_21_fu_272_p2 = ($signed(mul_ln1118_21_fu_272_p0) * $signed('h1C8));

assign mul_ln1118_22_fu_270_p0 = sext_ln1118_26_fu_4317_p1;

assign mul_ln1118_22_fu_270_p2 = ($signed(mul_ln1118_22_fu_270_p0) * $signed('h126));

assign mul_ln1118_23_fu_260_p0 = sext_ln1118_27_fu_4343_p1;

assign mul_ln1118_23_fu_260_p2 = ($signed(mul_ln1118_23_fu_260_p0) * $signed(-'h14D));

assign mul_ln1118_24_fu_280_p0 = sext_ln1118_27_fu_4343_p1;

assign mul_ln1118_24_fu_280_p2 = ($signed(mul_ln1118_24_fu_280_p0) * $signed('h121));

assign mul_ln1118_25_fu_281_p0 = sext_ln1118_28_fu_4369_p1;

assign mul_ln1118_25_fu_281_p2 = ($signed(mul_ln1118_25_fu_281_p0) * $signed('h118));

assign mul_ln1118_26_fu_262_p0 = sext_ln1118_28_fu_4369_p1;

assign mul_ln1118_26_fu_262_p2 = ($signed(mul_ln1118_26_fu_262_p0) * $signed('h119));

assign mul_ln1118_2_fu_267_p0 = sext_ln1118_fu_3797_p0;

assign mul_ln1118_2_fu_267_p2 = ($signed(mul_ln1118_2_fu_267_p0) * $signed(-'h3B));

assign mul_ln1118_3_fu_265_p0 = sext_ln1118_3_fu_3831_p0;

assign mul_ln1118_3_fu_265_p2 = ($signed(mul_ln1118_3_fu_265_p0) * $signed(-'hB4));

assign mul_ln1118_4_fu_278_p0 = sext_ln1118_5_fu_3882_p1;

assign mul_ln1118_4_fu_278_p2 = ($signed(mul_ln1118_4_fu_278_p0) * $signed('h4B));

assign mul_ln1118_5_fu_263_p0 = sext_ln1118_5_fu_3882_p1;

assign mul_ln1118_5_fu_263_p2 = ($signed(mul_ln1118_5_fu_263_p0) * $signed('h10D));

assign mul_ln1118_6_fu_283_p0 = sext_ln1118_6_fu_3908_p1;

assign mul_ln1118_6_fu_283_p2 = ($signed(mul_ln1118_6_fu_283_p0) * $signed('h11C));

assign mul_ln1118_7_fu_257_p0 = sext_ln1118_6_fu_3908_p1;

assign mul_ln1118_7_fu_257_p2 = ($signed(mul_ln1118_7_fu_257_p0) * $signed(-'hB2));

assign mul_ln1118_8_fu_268_p0 = sext_ln1118_7_fu_3934_p1;

assign mul_ln1118_8_fu_268_p2 = ($signed(mul_ln1118_8_fu_268_p0) * $signed('h94));

assign mul_ln1118_9_fu_271_p0 = sext_ln1118_7_fu_3934_p1;

assign mul_ln1118_9_fu_271_p2 = ($signed(mul_ln1118_9_fu_271_p0) * $signed('h91));

assign mul_ln1118_fu_274_p0 = sext_ln1118_2_fu_3802_p0;

assign mul_ln1118_fu_274_p2 = ($signed(mul_ln1118_fu_274_p0) * $signed('hBF));

assign p_Val2_s_fu_4565_p2 = (add_ln703_6_reg_4725 + add_ln703_14_fu_4561_p2);

assign res_0_V_write_assign_fu_4579_p3 = {{p_Val2_s_fu_4565_p2}, {4'd0}};

assign res_1_V_write_assign_fu_4591_p3 = {{acc_1_V_fu_4574_p2}, {4'd0}};

assign sext_ln1118_10_fu_4023_p1 = $signed(shl_ln1118_3_fu_4015_p3);

assign sext_ln1118_11_fu_4043_p0 = data_7_V_read_int_reg;

assign sext_ln1118_12_fu_4066_p1 = $signed(shl_ln1118_4_fu_4058_p3);

assign sext_ln1118_13_fu_4078_p1 = $signed(shl_ln1118_5_fu_4070_p3);

assign sext_ln1118_14_fu_4098_p0 = data_8_V_read_int_reg;

assign sext_ln1118_15_fu_4111_p1 = $signed(shl_ln1118_6_fu_4103_p3);

assign sext_ln1118_16_fu_4129_p1 = $signed(shl_ln1118_7_fu_4121_p3);

assign sext_ln1118_17_fu_4458_p1 = $signed(trunc_ln708_15_reg_4640);

assign sext_ln1118_18_fu_4159_p1 = $signed(data_9_V_read_int_reg);

assign sext_ln1118_19_fu_4189_p0 = data_10_V_read_int_reg;

assign sext_ln1118_20_fu_4202_p1 = $signed(shl_ln1118_8_fu_4194_p3);

assign sext_ln1118_21_fu_4214_p1 = $signed(shl_ln1118_9_fu_4206_p3);

assign sext_ln1118_22_fu_4244_p1 = $signed(data_11_V_read_int_reg);

assign sext_ln1118_23_fu_4270_p0 = data_12_V_read_int_reg;

assign sext_ln1118_24_fu_4275_p0 = data_12_V_read_int_reg;

assign sext_ln1118_24_fu_4275_p1 = sext_ln1118_24_fu_4275_p0;

assign sext_ln1118_25_fu_4287_p1 = $signed(shl_ln1118_s_fu_4279_p3);

assign sext_ln1118_26_fu_4317_p1 = $signed(data_13_V_read_int_reg);

assign sext_ln1118_27_fu_4343_p1 = $signed(data_14_V_read_int_reg);

assign sext_ln1118_28_fu_4369_p1 = $signed(data_15_V_read_int_reg);

assign sext_ln1118_2_fu_3802_p0 = data_0_V_read_int_reg;

assign sext_ln1118_3_fu_3831_p0 = data_1_V_read_int_reg;

assign sext_ln1118_4_fu_3862_p1 = $signed(shl_ln1118_1_fu_3854_p3);

assign sext_ln1118_5_fu_3882_p1 = $signed(data_2_V_read_int_reg);

assign sext_ln1118_6_fu_3908_p1 = $signed(data_3_V_read_int_reg);

assign sext_ln1118_7_fu_3934_p1 = $signed(data_4_V_read_int_reg);

assign sext_ln1118_8_fu_3960_p1 = $signed(data_5_V_read_int_reg);

assign sext_ln1118_9_fu_3986_p0 = data_6_V_read_int_reg;

assign sext_ln1118_fu_3797_p0 = data_0_V_read_int_reg;

assign sext_ln703_fu_4501_p1 = $signed(add_ln703_11_fu_4495_p2);

assign sext_ln708_1_fu_4455_p1 = $signed(trunc_ln708_14_reg_4635);

assign sext_ln708_2_fu_4175_p1 = $signed(trunc_ln708_17_fu_4165_p4);

assign sext_ln708_3_fu_4461_p1 = $signed(trunc_ln708_18_reg_4645);

assign sext_ln708_4_fu_4464_p1 = $signed(trunc_ln708_23_reg_4650);

assign sext_ln708_fu_3827_p1 = $signed(trunc_ln708_2_fu_3817_p4);

assign sext_ln728_1_fu_4599_p1 = $signed(res_1_V_write_assign_fu_4591_p3);

assign sext_ln728_fu_4587_p1 = $signed(res_0_V_write_assign_fu_4579_p3);

assign shl_ln1118_1_fu_3854_p1 = data_1_V_read_int_reg;

assign shl_ln1118_1_fu_3854_p3 = {{shl_ln1118_1_fu_3854_p1}, {2'd0}};

assign shl_ln1118_2_fu_4001_p1 = data_6_V_read_int_reg;

assign shl_ln1118_2_fu_4001_p3 = {{shl_ln1118_2_fu_4001_p1}, {8'd0}};

assign shl_ln1118_3_fu_4015_p1 = data_6_V_read_int_reg;

assign shl_ln1118_3_fu_4015_p3 = {{shl_ln1118_3_fu_4015_p1}, {3'd0}};

assign shl_ln1118_4_fu_4058_p1 = data_7_V_read_int_reg;

assign shl_ln1118_4_fu_4058_p3 = {{shl_ln1118_4_fu_4058_p1}, {6'd0}};

assign shl_ln1118_5_fu_4070_p1 = data_7_V_read_int_reg;

assign shl_ln1118_5_fu_4070_p3 = {{shl_ln1118_5_fu_4070_p1}, {2'd0}};

assign shl_ln1118_6_fu_4103_p1 = data_8_V_read_int_reg;

assign shl_ln1118_6_fu_4103_p3 = {{shl_ln1118_6_fu_4103_p1}, {4'd0}};

assign shl_ln1118_7_fu_4121_p1 = data_8_V_read_int_reg;

assign shl_ln1118_7_fu_4121_p3 = {{shl_ln1118_7_fu_4121_p1}, {2'd0}};

assign shl_ln1118_8_fu_4194_p1 = data_10_V_read_int_reg;

assign shl_ln1118_8_fu_4194_p3 = {{shl_ln1118_8_fu_4194_p1}, {7'd0}};

assign shl_ln1118_9_fu_4206_p1 = data_10_V_read_int_reg;

assign shl_ln1118_9_fu_4206_p3 = {{shl_ln1118_9_fu_4206_p1}, {3'd0}};

assign shl_ln1118_s_fu_4279_p1 = data_12_V_read_int_reg;

assign shl_ln1118_s_fu_4279_p3 = {{shl_ln1118_s_fu_4279_p1}, {6'd0}};

assign shl_ln_fu_3846_p1 = data_1_V_read_int_reg;

assign shl_ln_fu_3846_p3 = {{shl_ln_fu_3846_p1}, {8'd0}};

assign sub_ln1118_1_fu_4027_p2 = ($signed(sub_ln1118_fu_4009_p2) - $signed(sext_ln1118_10_fu_4023_p1));

assign sub_ln1118_2_fu_4115_p2 = ($signed(21'd0) - $signed(sext_ln1118_15_fu_4111_p1));

assign sub_ln1118_3_fu_4133_p2 = ($signed(sub_ln1118_2_fu_4115_p2) - $signed(sext_ln1118_16_fu_4129_p1));

assign sub_ln1118_fu_4009_p2 = (24'd0 - shl_ln1118_2_fu_4001_p3);

assign trunc_ln708_10_fu_3976_p4 = {{mul_ln1118_11_fu_255_p2[23:14]}};

assign trunc_ln708_11_fu_3991_p4 = {{mul_ln1118_12_fu_258_p2[23:14]}};

assign trunc_ln708_12_fu_4033_p4 = {{sub_ln1118_1_fu_4027_p2[23:14]}};

assign trunc_ln708_13_fu_4048_p4 = {{mul_ln1118_13_fu_256_p2[23:14]}};

assign trunc_ln708_16_fu_4149_p4 = {{mul_ln1118_14_fu_285_p2[23:14]}};

assign trunc_ln708_17_fu_4165_p4 = {{mul_ln1118_15_fu_276_p2[22:14]}};

assign trunc_ln708_19_fu_4224_p4 = {{add_ln1118_2_fu_4218_p2[23:14]}};

assign trunc_ln708_1_fu_3966_p4 = {{mul_ln1118_10_fu_275_p2[23:14]}};

assign trunc_ln708_20_fu_4234_p4 = {{mul_ln1118_17_fu_269_p2[23:14]}};

assign trunc_ln708_21_fu_4250_p4 = {{mul_ln1118_18_fu_279_p2[23:14]}};

assign trunc_ln708_22_fu_4260_p4 = {{mul_ln1118_19_fu_273_p2[23:14]}};

assign trunc_ln708_24_fu_4307_p4 = {{mul_ln1118_20_fu_282_p2[23:14]}};

assign trunc_ln708_29_fu_4375_p4 = {{mul_ln1118_25_fu_281_p2[23:14]}};

assign trunc_ln708_2_fu_3817_p4 = {{mul_ln1118_2_fu_267_p2[22:14]}};

assign trunc_ln708_30_fu_4385_p4 = {{mul_ln1118_26_fu_262_p2[23:14]}};

assign trunc_ln708_3_fu_3836_p4 = {{mul_ln1118_3_fu_265_p2[23:14]}};

assign trunc_ln708_4_fu_3872_p4 = {{add_ln1118_fu_3866_p2[23:14]}};

assign trunc_ln708_6_fu_3898_p4 = {{mul_ln1118_5_fu_263_p2[23:14]}};

assign trunc_ln708_9_fu_3940_p4 = {{mul_ln1118_8_fu_268_p2[23:14]}};

assign trunc_ln_fu_3807_p4 = {{mul_ln1118_fu_274_p2[23:14]}};

endmodule //dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config12_s