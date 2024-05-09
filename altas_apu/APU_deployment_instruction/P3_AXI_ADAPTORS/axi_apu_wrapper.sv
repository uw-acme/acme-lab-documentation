`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: University of Washington
// Engineer: Ethan Jiang, Bowen Zuo
// 
// Create Date: 2022/05/02 17:41:41
// Design Name: APU wrapper for AXI
// Description: The APU wrapper contains the AXI adaaptors, and the AXI APU.
//////////////////////////////////////////////////////////////////////////////////
module axi_apu_wrapper #(parameter ADDR_WIDTH=10) (
clk,reset,
rd_EvTID_ready,rd_EvTID_done,wr_EvTID_done,
input0_rd_en,input0_rd_addr,input0_rd_data,
input1_rd_en,input1_rd_addr,input1_rd_data,
wr_en_out,wr_addr_out,wr_data_out
);

    // Control signals
    input logic clk;
    input logic reset;
    input logic rd_EvTID_ready;
    output logic rd_EvTID_done;
    output logic wr_EvTID_done;
    // Memory control signals for input0
    output logic input0_rd_en;
    output logic [ADDR_WIDTH-1:0] input0_rd_addr;
    input logic [127:0] input0_rd_data;
    // Memory control signals for input1
    output logic input1_rd_en;
    output logic [ADDR_WIDTH-1:0] input1_rd_addr;
    input logic [127:0] input1_rd_data;
    // Output signals for toy_x
    output logic wr_en_out;
    output logic [ADDR_WIDTH-1:0] wr_addr_out;
    output logic [127:0] wr_data_out;
    
    logic TVALID_rd, TREADY_rd, TLAST_rd, TVALID_wr, TREADY_wr, TLAST_wr;
    logic [127:0] TDATA_rd, TDATA_wr;
    logic [15:0] TSTRB_rd, TKEEP_rd, TSTRB_wr, TKEEP_wr; // When using hls4ml in the APU, there is no need to consider TSTRB and TKEEP
    logic [10:0] TID_rd, TID_wr;
    
    upstream_adp #(ADDR_WIDTH) adp_up0 (
                            .clk(clk),
                            .ARESETn(~reset), 
                            .rd_en(input0_rd_en), .rd_addr(input0_rd_addr), .rd_data(input0_rd_data),
                            .rd_EvTID_ready(rd_EvTID_ready), .rd_EvTID_DONE(rd_EvTID_done),
                            .TVALID(TVALID_rd), .TREADY(TREADY_rd), .TDATA(TDATA_rd), .TSTRB(TSTRB_rd), .TKEEP(TKEEP_rd), .TLAST(TLAST_rd), .TID(TID_rd)); 

//    // each read port needs to connected to an adaptor. In this example cause, only one read port required, and thus only using the adp_up0
//    upstream_adp adp_up1 (
//                            .clk(clk),
//                            .ARESETn(~reset), 
//                            .rd_en(input1_rd_en), .rd_addr(input1_rd_addr), .rd_data(input1_rd_data),
//                            .rd_EvTID_ready(rd_EvTID_ready), .rd_EvTID_DONE(),       // wire the done signal to the adaptor which would process the last read.
//                            .TVALID(), .TREADY(), .TDATA(), .TSTRB(), .TKEEP(), .TLAST(), .TID(TID_rd)); 

//    // the axi apu general exmaple:
//    axi_apu_sample AXI_toy (
//                            .ARESETn(~reset), .clk(clk),
//                            .TVALID_rd(TVALID_rd), .TREADY_rd(TREADY_rd), .TDATA_rd(TDATA_rd), .TSTRB_rd(TSTRB_rd), .TKEEP_rd(TKEEP_rd), .TLAST_rd(TLAST_rd), .TID_rd(TID_rd),
//                            .TVALID_wr(TVALID_wr), .TREADY_wr(TREADY_wr), .TDATA_wr(TDATA_wr), .TSTRB_wr(TSTRB_wr), .TKEEP_wr(TKEEP_wr), .TLAST_wr(TLAST_wr), .TID_wr(TID_wr));
    // hls4ml exmaple:
    conv_2d_apu conv2d (
                            .ARESETn(~reset), .clk(clk),
                            .TVALID_rd(TVALID_rd), .TREADY_rd(TREADY_rd), .TDATA_rd(TDATA_rd), .TSTRB_rd(TSTRB_rd), .TKEEP_rd(TKEEP_rd), .TLAST_rd(TLAST_rd), .TID_rd(TID_rd),
                            .TVALID_wr(TVALID_wr), .TREADY_wr(TREADY_wr), .TDATA_wr(TDATA_wr), .TSTRB_wr(TSTRB_wr), .TKEEP_wr(TKEEP_wr), .TLAST_wr(TLAST_wr), .TID_wr(TID_wr));
    
    
    downstream_adp #(ADDR_WIDTH) adp_down (
                            .clk(clk), .ARESETn(~reset),
                            .wr_en(wr_en_out), .wr_addr(wr_addr_out), .wr_data(wr_data_out), .wr_EvTID_DONE(wr_EvTID_done),
                            .TVALID(TVALID_wr), .TREADY(TREADY_wr), .TDATA(TDATA_wr), .TSTRB(TSTRB_wr), .TKEEP(TKEEP_wr), .TLAST(TLAST_wr), .TID(TID_wr));    
endmodule
