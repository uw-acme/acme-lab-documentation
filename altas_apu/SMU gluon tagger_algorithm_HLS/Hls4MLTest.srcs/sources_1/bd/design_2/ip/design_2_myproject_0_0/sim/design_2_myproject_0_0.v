// (c) Copyright 1995-2021 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:myproject:1.0
// IP Revision: 2107201628

`timescale 1ns/1ps

(* IP_DEFINITION_SOURCE = "HLS" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module design_2_myproject_0_0 (
  const_size_in_1_ap_vld,
  const_size_out_1_ap_vld,
  conv2d_input_V_data_0_V_TVALID,
  conv2d_input_V_data_0_V_TREADY,
  conv2d_input_V_data_0_V_TDATA,
  layer13_out_V_data_0_V_TVALID,
  layer13_out_V_data_0_V_TREADY,
  layer13_out_V_data_0_V_TDATA,
  layer13_out_V_data_1_V_TVALID,
  layer13_out_V_data_1_V_TREADY,
  layer13_out_V_data_1_V_TDATA,
  const_size_in_1,
  const_size_out_1,
  ap_clk,
  ap_rst_n,
  ap_start,
  ap_done,
  ap_ready,
  ap_idle
);

output wire const_size_in_1_ap_vld;
output wire const_size_out_1_ap_vld;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 conv2d_input_V_data_0_V TVALID" *)
input wire conv2d_input_V_data_0_V_TVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 conv2d_input_V_data_0_V TREADY" *)
output wire conv2d_input_V_data_0_V_TREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME conv2d_input_V_data_0_V, TDATA_NUM_BYTES 2, TUSER_WIDTH 0, TDEST_WIDTH 0, TID_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 0, HAS_TLAST 0, FREQ_HZ 62500000, PHASE 0.000, CLK_DOMAIN design_2_pcie3_7x_0_0_user_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 conv2d_input_V_data_0_V TDATA" *)
input wire [15 : 0] conv2d_input_V_data_0_V_TDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 layer13_out_V_data_0_V TVALID" *)
output wire layer13_out_V_data_0_V_TVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 layer13_out_V_data_0_V TREADY" *)
input wire layer13_out_V_data_0_V_TREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME layer13_out_V_data_0_V, TDATA_NUM_BYTES 2, TUSER_WIDTH 0, TDEST_WIDTH 0, TID_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 0, HAS_TLAST 0, FREQ_HZ 62500000, PHASE 0.000, CLK_DOMAIN design_2_pcie3_7x_0_0_user_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 layer13_out_V_data_0_V TDATA" *)
output wire [15 : 0] layer13_out_V_data_0_V_TDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 layer13_out_V_data_1_V TVALID" *)
output wire layer13_out_V_data_1_V_TVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 layer13_out_V_data_1_V TREADY" *)
input wire layer13_out_V_data_1_V_TREADY;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME layer13_out_V_data_1_V, TDATA_NUM_BYTES 2, TUSER_WIDTH 0, TDEST_WIDTH 0, TID_WIDTH 0, HAS_TREADY 1, HAS_TSTRB 0, HAS_TKEEP 0, HAS_TLAST 0, FREQ_HZ 62500000, PHASE 0.000, CLK_DOMAIN design_2_pcie3_7x_0_0_user_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 layer13_out_V_data_1_V TDATA" *)
output wire [15 : 0] layer13_out_V_data_1_V_TDATA;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME const_size_in_1, LAYERED_METADATA undef" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 const_size_in_1 DATA" *)
output wire [15 : 0] const_size_in_1;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME const_size_out_1, LAYERED_METADATA undef" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 const_size_out_1 DATA" *)
output wire [15 : 0] const_size_out_1;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF conv2d_input_V_data_0_V:layer13_out_V_data_0_V:layer13_out_V_data_1_V, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 62500000, PHASE 0.000, CLK_DOMAIN design_2_pcie3_7x_0_0_user_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *)
input wire ap_start;
(* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *)
output wire ap_done;
(* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *)
output wire ap_ready;
(* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *)
output wire ap_idle;

  myproject inst (
    .const_size_in_1_ap_vld(const_size_in_1_ap_vld),
    .const_size_out_1_ap_vld(const_size_out_1_ap_vld),
    .conv2d_input_V_data_0_V_TVALID(conv2d_input_V_data_0_V_TVALID),
    .conv2d_input_V_data_0_V_TREADY(conv2d_input_V_data_0_V_TREADY),
    .conv2d_input_V_data_0_V_TDATA(conv2d_input_V_data_0_V_TDATA),
    .layer13_out_V_data_0_V_TVALID(layer13_out_V_data_0_V_TVALID),
    .layer13_out_V_data_0_V_TREADY(layer13_out_V_data_0_V_TREADY),
    .layer13_out_V_data_0_V_TDATA(layer13_out_V_data_0_V_TDATA),
    .layer13_out_V_data_1_V_TVALID(layer13_out_V_data_1_V_TVALID),
    .layer13_out_V_data_1_V_TREADY(layer13_out_V_data_1_V_TREADY),
    .layer13_out_V_data_1_V_TDATA(layer13_out_V_data_1_V_TDATA),
    .const_size_in_1(const_size_in_1),
    .const_size_out_1(const_size_out_1),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .ap_start(ap_start),
    .ap_done(ap_done),
    .ap_ready(ap_ready),
    .ap_idle(ap_idle)
  );
endmodule
