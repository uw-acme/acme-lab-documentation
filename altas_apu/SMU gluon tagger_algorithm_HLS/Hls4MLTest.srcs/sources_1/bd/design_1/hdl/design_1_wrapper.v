//Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2018.3 (lin64) Build 2405991 Thu Dec  6 23:36:41 MST 2018
//Date        : Tue Jul 20 18:01:39 2021
//Host        : gpu1.fondrenscience.smu.edu running 64-bit CentOS Linux release 7.8.2003 (Core)
//Command     : generate_target design_1_wrapper.bd
//Design      : design_1_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module design_1_wrapper
   (clk_100MHz,
    reset);
  input clk_100MHz;
  input reset;

  wire clk_100MHz;
  wire reset;

  design_1 design_1_i
       (.clk_100MHz(clk_100MHz),
        .reset(reset));
endmodule
