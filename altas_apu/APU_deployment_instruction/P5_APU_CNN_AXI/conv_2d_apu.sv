`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: University of Washington
// Engineer: Ethan Jiang, Bowen Zuo
// 
// Create Date: 2022/05/19 13:17:16
// Module Name: conv_2d_apu
// Project Name: deployment of conv_2d to APU
// Target Devices: VCU118
//////////////////////////////////////////////////////////////////////////////////
module conv_2d_apu (
    input logic ARESETn,clk,
    // upstream i/o
    input logic TVALID_rd,
    output  logic TREADY_rd,
    input logic [127:0] TDATA_rd, // 16 bytes
    input logic [15:0] TSTRB_rd, TKEEP_rd,  // each bit refer to one bype in TDATA
    input logic TLAST_rd, // true when last transfer is valid
    input logic [10:0] TID_rd,     // a.k.a BCID
    // downsteam i/o
    output logic TVALID_wr,
    input logic TREADY_wr,
    output logic [127:0] TDATA_wr, // 16 bytes
    output logic [15:0] TSTRB_wr, TKEEP_wr,  // each bit refer to one bype in TDATA
    output logic TLAST_wr, // true when last transfer is valid
    output logic [10:0] TID_wr     // a.k.a BCID
    );
    
    logic signed [7:0] count;
    enum {S0, S1, S2} ps, ns;
    
    // logics of hls4ml generated verilog
    logic  [23:0] input1_V_data_0_V_TDATA;
    logic  [23:0] layer6_out_V_data_0_V_TDATA;
    logic  [23:0] layer6_out_V_data_1_V_TDATA;
    logic  [23:0] layer6_out_V_data_2_V_TDATA;
    logic  [23:0] layer6_out_V_data_3_V_TDATA;
    logic  [23:0] layer6_out_V_data_4_V_TDATA;
    logic  [23:0] layer6_out_V_data_5_V_TDATA;
    logic  [23:0] layer6_out_V_data_6_V_TDATA;
    logic  [23:0] layer6_out_V_data_7_V_TDATA;
    logic  [23:0] layer6_out_V_data_8_V_TDATA;
    logic  [23:0] layer6_out_V_data_9_V_TDATA;
    logic  [15:0] const_size_in_1;
    logic  [15:0] const_size_out_1;
    logic   ap_clk;
    logic   ap_rst_n;
    logic   const_size_in_1_ap_vld;
    logic   const_size_out_1_ap_vld;
    logic   ap_start;
    logic   ap_done;
    logic   input1_V_data_0_V_TVALID;
    logic   input1_V_data_0_V_TREADY;
    logic   layer6_out_V_data_0_V_TVALID;
    logic   layer6_out_V_data_0_V_TREADY;
    logic   layer6_out_V_data_1_V_TVALID;
    logic   layer6_out_V_data_1_V_TREADY;
    logic   layer6_out_V_data_2_V_TVALID;
    logic   layer6_out_V_data_2_V_TREADY;
    logic   layer6_out_V_data_3_V_TVALID;
    logic   layer6_out_V_data_3_V_TREADY;
    logic   layer6_out_V_data_4_V_TVALID;
    logic   layer6_out_V_data_4_V_TREADY;
    logic   layer6_out_V_data_5_V_TVALID;
    logic   layer6_out_V_data_5_V_TREADY;
    logic   layer6_out_V_data_6_V_TVALID;
    logic   layer6_out_V_data_6_V_TREADY;
    logic   layer6_out_V_data_7_V_TVALID;
    logic   layer6_out_V_data_7_V_TREADY;
    logic   layer6_out_V_data_8_V_TVALID;
    logic   layer6_out_V_data_8_V_TREADY;
    logic   layer6_out_V_data_9_V_TVALID;
    logic   layer6_out_V_data_9_V_TREADY;
    logic   ap_ready;
    logic   ap_idle;
    
    assign ap_clk = clk;
    assign ap_start = (ps==S0)|(ps==S1);
    conv2d20_10 con2d (.*);

    // state update
    always_comb begin
        ns = S0;
        case (ps)
        S0: ns = (|TID_rd) ? S1 : S0; 
        S1: ns = (TLAST_rd&input1_V_data_0_V_TREADY) ? S2 : S1;
        S2: if ((layer6_out_V_data_0_V_TVALID)|(count<=0)) begin
                if (TREADY_wr) ns = S0; else ns = S2;
            end else ns = S2;
        endcase
    end
    
    // outputs
    always_comb begin
        input1_V_data_0_V_TVALID = TVALID_rd; TREADY_rd = input1_V_data_0_V_TREADY; input1_V_data_0_V_TDATA = TDATA_rd[23:0];
        TID_wr = 0; ap_rst_n = 1;
        TVALID_wr = layer6_out_V_data_0_V_TVALID; 
        TDATA_wr = {  layer6_out_V_data_9_V_TDATA[7:0], layer6_out_V_data_8_V_TDATA[7:0], 
                      layer6_out_V_data_7_V_TDATA[7:0], layer6_out_V_data_6_V_TDATA[7:0], 
                      layer6_out_V_data_5_V_TDATA[7:0], layer6_out_V_data_4_V_TDATA[7:0], 
                      layer6_out_V_data_3_V_TDATA[7:0], layer6_out_V_data_2_V_TDATA[7:0], 
                      layer6_out_V_data_1_V_TDATA[7:0], layer6_out_V_data_0_V_TDATA[7:0]};
        TSTRB_wr = 0; TKEEP_wr = 0; TLAST_wr = 0;
        layer6_out_V_data_0_V_TREADY = TREADY_wr;   // the output of hls4ml's conv model are synchronized, so all is assigned TREADY_wr
        layer6_out_V_data_1_V_TREADY = TREADY_wr;
        layer6_out_V_data_2_V_TREADY = TREADY_wr;
        layer6_out_V_data_3_V_TREADY = TREADY_wr;
        layer6_out_V_data_4_V_TREADY = TREADY_wr;
        layer6_out_V_data_5_V_TREADY = TREADY_wr;
        layer6_out_V_data_6_V_TREADY = TREADY_wr;
        layer6_out_V_data_7_V_TREADY = TREADY_wr;
        layer6_out_V_data_8_V_TREADY = TREADY_wr;
        layer6_out_V_data_9_V_TREADY = TREADY_wr;
        
        case (ps)
        S0: begin TID_wr = TID_rd; ap_rst_n = 0; end
        S1: begin TSTRB_wr = {16{layer6_out_V_data_0_V_TVALID}}; TKEEP_wr = {16{layer6_out_V_data_0_V_TVALID}}; end
        S2: begin if(layer6_out_V_data_0_V_TVALID) begin TSTRB_wr = 16'hffff; TKEEP_wr = 16'hffff; TLAST_wr = 1; end
                  else if(count<=0) begin TSTRB_wr = 16'h0000; TKEEP_wr = 16'h0000; TLAST_wr = 1; TVALID_wr = 1; end
            end
        endcase
    end
    
    always_ff @(posedge clk) begin
        ps <= ARESETn ? ns : S0;
        case (ps)
        S0: count <=60;
        S2: count <= TVALID_wr ? count : count-1;
        endcase
    end

// Assertions: AXI assertion
//    property AXI4STREAM_ERRM_TVALID_RESET(logic TVALID, logic ARESETn);
//        @(posedge clk) ($rose(ARESETn)) |=> ~TVALID;
//    endproperty
//    assert property (AXI4STREAM_ERRM_TVALID_RESET (TVALID_wr, ARESETn))
//    else $error("@%0dns Assertion Failed, TVALID is LOW for the first cycle after ARESETn goes HIGH", $time);
//    assert property (AXI4STREAM_ERRM_TVALID_RESET (TVALID_rd, ARESETn))
//    else $error("@%0dns Assertion Failed, TVALID is LOW for the first cycle after ARESETn goes HIGH", $time);
    
//    property AXI4STREAM_ERRM_TID_STABLE(logic TVALID, logic TREADY, logic TID);
//        @(posedge clk) TVALID&~TREADY |-> ($stable(TID));
//    endproperty
//    assert property (AXI4STREAM_ERRM_TID_STABLE (TVALID_wr, TREADY_wr, TID_wr))
//    else $error("@%0dns Assertion Failed, TID remains stable when TVALID is asserted, and TREADY is LOW", $time);
//    assert property (AXI4STREAM_ERRM_TID_STABLE (TVALID_rd, TREADY_rd, TID_rd))
//    else $error("@%0dns Assertion Failed, TID remains stable when TVALID is asserted, and TREADY is LOW", $time);
    
//    property AXI4STREAM_ERRM_TDATA_STABLE (logic TVALID, logic TREADY, logic [127:0] TDATA);
//        @(posedge clk) TVALID&~TREADY |-> ($stable(TDATA));
//    endproperty
//    assert property (AXI4STREAM_ERRM_TDATA_STABLE (TVALID_wr, TREADY_wr, TDATA_wr))
//    else $error("@%0dns Assertion Failed, TDATA remains stable when TVALID is asserted, and TREADY is LOW", $time);
//    assert property (AXI4STREAM_ERRM_TDATA_STABLE (TVALID_rd, TREADY_rd,TDATA_rd))
//    else $error("@%0dns Assertion Failed, TDATA remains stable when TVALID is asserted, and TREADY is LOW", $time);
    
    
//    property AXI4STREAM_ERRM_TLAST_STABLE (logic TVALID, logic TREADY, logic TLAST);
//        @(posedge clk) TVALID&~TREADY |-> ($stable(TLAST));
//    endproperty
//    assert property (AXI4STREAM_ERRM_TLAST_STABLE (TVALID_wr, TREADY_wr, TLAST_wr))
//    else $error("@%0dns Assertion Failed, TDATA remains stable when TVALID is asserted, and TREADY is LOW", $time);
//    assert property (AXI4STREAM_ERRM_TLAST_STABLE (TVALID_rd, TREADY_rd, TLAST_rd))
//    else $error("@%0dns Assertion Failed, TDATA remains stable when TVALID is asserted, and TREADY is LOW", $time);
    
//    property AXI4STREAM_ERRM_TVALID_STABLE (logic TVALID, logic TREADY);
//        @(posedge clk) $rose(TVALID) |-> (TVALID throughout TREADY[->1]);
//    endproperty
//    assert property (AXI4STREAM_ERRM_TVALID_STABLE (TVALID_wr, TREADY_wr))
//    else $error("@%0dns Assertion Failed, When TVALID is asserted, then it must remain asserted until TREADY is HIGH", $time);
//    assert property (AXI4STREAM_ERRM_TVALID_STABLE (TVALID_rd, TREADY_rd))
//    else $error("@%0dns Assertion Failed, When TVALID is asserted, then it must remain asserted until TREADY is HIGH", $time);
  
    
endmodule



module testbench_conv_2d_apu();
    parameter ClockDelay = 50;
    logic ARESETn,clk;
    // upstream i/o
    logic TVALID_rd;
    logic TREADY_rd;    //output
    logic [127:0] TDATA_rd; // 16 bytes
    logic [15:0] TSTRB_rd, TKEEP_rd;  // each bit refer to one bype in TDATA
    logic TLAST_rd; // true when last transfer is valid
    logic [10:0] TID_rd;     // a.k.a BCID
    // downsteam i/o
    logic TVALID_wr;
    logic TREADY_wr;    //input
    logic [127:0] TDATA_wr; // 16 bytes
    logic [15:0] TSTRB_wr, TKEEP_wr;  // each bit refer to one bype in TDATA
    logic TLAST_wr; // true when last transfer is valid
    logic [10:0] TID_wr;     // a.k.a BCID
    
    conv_2d_apu dut (.*);

	initial begin // Set up the clock
		clk <= 0;
		forever #(ClockDelay/2) clk <= ~clk;
	end
    
    initial begin
        
        ARESETn<=0; TVALID_rd<=0; TDATA_rd<=0; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(2)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=0; TDATA_rd<=0; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(2)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=0; TDATA_rd<=0; TLAST_rd<=0; TID_rd<=7; TREADY_wr<=0; repeat(1)   @(posedge clk);
        
        ARESETn<=1; TVALID_rd<=1; TDATA_rd<=9; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(100)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=1; TDATA_rd<=3; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(50)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=1; TDATA_rd<=7; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=1; repeat(1)   @(posedge clk);
        
        ARESETn<=1; TVALID_rd<=1; TDATA_rd<=9; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(100)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=1; TDATA_rd<=8; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(50)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=1; TDATA_rd<=7; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=1; repeat(1)   @(posedge clk);
        
        ARESETn<=1; TVALID_rd<=1; TDATA_rd<=7; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(70)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=1; TDATA_rd<=7; TLAST_rd<=1; TID_rd<=0; TREADY_wr<=1; repeat(1)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=0; TDATA_rd<=0; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(50)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=0; TDATA_rd<=0; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(1)   @(posedge clk);
        
        ARESETn<=1; TVALID_rd<=0; TDATA_rd<=0; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(80)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=0; TDATA_rd<=0; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=1; repeat(1)   @(posedge clk);
        ARESETn<=1; TVALID_rd<=0; TDATA_rd<=0; TLAST_rd<=0; TID_rd<=0; TREADY_wr<=0; repeat(50)   @(posedge clk);
		$stop;
	end
endmodule