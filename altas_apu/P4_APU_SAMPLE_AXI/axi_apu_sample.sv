//////////////////////////////////////////////////////////////////////////////////
// Company: University of Washington
// Engineer: Ethan Jiang, Bowen Zuo
// 
// Create Date: 2022/05/02 17:41:41
// Design Name: sample APU follows AXI protocol 
// Module Name: axi_apu_sample
// Description: This is an APU sample that follows the AXI protocol
//////////////////////////////////////////////////////////////////////////////////
module axi_apu_sample (
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
    
    logic first_write;
    logic [127:0] A, B, C;
    logic [10:0] evTID;
    enum {S0, S1, S2, S3, S4, S5} ps, ns;
    
    // state update
    always_comb begin
        ns = S0;
        case (ps)
        S0: ns = (|TID_rd) ? S1 : S0;   // may need to change to TID_rd!=0
        S1: if (!TVALID_rd) ns = S1; else if (!TLAST_rd) ns = S2; else ns = S5; 
        S2: if (!TVALID_rd) ns = S2; else if (!TLAST_rd) ns = S3; else ns = S5; 
        S3: ns = S4;
        S4: ns = TREADY_wr ? S1 : S4;
        S5: ns = TREADY_wr ? S0 : S5;
        endcase
    end
    
    // outputs
    always_comb begin
        TREADY_rd = 0; TVALID_wr = 0; TDATA_wr = 0; TSTRB_wr = 0; TKEEP_wr = 0; TLAST_wr = 0; TID_wr = 0;
        case (ps)
        S1: TREADY_rd = TVALID_rd;
        S2: TREADY_rd = TVALID_rd;
        S3: TID_wr = first_write ? evTID : 0;
        S4: begin TSTRB_wr = 16'hffff; TKEEP_wr = 16'hffff; TDATA_wr = C; TVALID_wr = 1; end
        S5: begin TSTRB_wr = 16'hffff; TKEEP_wr = 16'hffff; TDATA_wr = C; TVALID_wr = 1; TLAST_wr = 1; end
        endcase
    end
    
    always_ff @(posedge clk) begin
        ps <= ARESETn ? ns : S0;
        case (ps)
        S0: if (TID_rd!=0) evTID <= TID_rd;
            else begin evTID <= 0;A <= 0; B <= 0; C <= 0; first_write <= 1; end
        S1: if (TVALID_rd) begin A <= TDATA_rd; if (TLAST_rd) C <= TDATA_rd; end
        S2: if (TVALID_rd) begin B <= TDATA_rd; if (TLAST_rd) C <= A+TDATA_rd; end
        S3: begin C <= A+B; if (first_write) first_write <= 0; end
        S5: if (TREADY_wr) begin evTID <= 0;A <= 0; B <= 0; C <= 0; first_write <= 1; end
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