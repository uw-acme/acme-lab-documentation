`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: University of Washington
// Engineer: Ethan Jiang, Bowen Zuo
// 
// Create Date: 2022/05/02 17:41:41
// Design Name: upstream_adp for AXI 
// Module Name: upstream_adp
// Description: This is an upstream_adp adptor following AXI-streaming protocol, is designed to convert the old protocol signals of GEP to AXI signals
//////////////////////////////////////////////////////////////////////////////////


module upstream_adp #(parameter ADDR_WIDTH=10) (
    input logic clk,
    input logic ARESETn,    // active low
    
    // up stream i/o
    output logic rd_en,
    output logic [ADDR_WIDTH-1:0] rd_addr,
    input logic [127:0] rd_data,
    
    // event id i/o
    input logic rd_EvTID_ready,
    output logic rd_EvTID_DONE,
    
    // down stream i/o
    output logic TVALID,
    input logic TREADY,
    output logic [127:0] TDATA, // 16 bytes
    output logic [15:0] TSTRB, TKEEP,  // each bit refer to one bype in TDATA
    output logic TLAST, // true when last transfer is valid
    output logic [10:0] TID     // a.k.a BCID
    );
    
    
    logic ready, rd_done_d1;    // redeclare the rd_EvTID_ready signial, that after rd_done, ready turn off for 1 cycle.
    logic [127:0] top_rd;
    logic [ADDR_WIDTH-1:0] addr_temp;
    enum {S0, S1, S2} ps, ns;   // S0 idle, S1 save toppointer, S2 output data
    
    // state update
    always_comb begin
        ns = S0;
        case (ps)
        S0: ns = ready ? S1 : S0;
        S1: ns =  S2; 
        S2: if(TREADY&(addr_temp-1==top_rd[ADDR_WIDTH-1:0])) ns = S0; else ns = S2;
        endcase
    end
    
    // state reset, addr updates
    always_ff @(posedge clk) begin
        ps <= ARESETn ? ns : S0;
        case(ps)
        S0: begin   if(ready) addr_temp <= 1; else addr_temp <= 0; 
                    TLAST <= 0;  end
        S1: begin   top_rd <= rd_data; addr_temp <= addr_temp+1; end    //
//        S1: begin   top_rd <= 128'hff; addr_temp <= addr_temp+1; end // use this when using thee sandbox
        S2: begin   if(TREADY) begin addr_temp <= addr_temp+1; if (addr_temp-1==top_rd[ADDR_WIDTH-1:0]) addr_temp <=0; end
                    TLAST <= (rd_addr==top_rd[ADDR_WIDTH-1:0]); end
        endcase
        rd_done_d1 <= rd_EvTID_DONE;
    end
    
    // output signals in each state
    always_comb begin
        rd_en = 1; rd_addr = addr_temp; rd_EvTID_DONE = 0;
        TVALID = 1; TKEEP = 0; TSTRB = 0; TID = 0; TDATA = rd_data;
        case(ps)
        S0: begin rd_addr = addr_temp; TVALID = 0; rd_en = ready;TDATA = 0;end
//        S1: begin rd_addr = addr_temp; TVALID = 0; TID = rd_data[20:10];end      // use this when the event_id feature is added into the tv and sandbox
        S1: begin rd_addr = addr_temp; TVALID = 0; TID = 11'd8;end   // use this for sandbox and TV, there is a bug in sandbox that no event ID exsist
        S2: begin TKEEP = 16'hffff; TSTRB = 16'hffff; 
                  if(~TREADY) rd_addr = addr_temp - 1; 
                  else begin  rd_addr = addr_temp; if(addr_temp-1==top_rd[ADDR_WIDTH-1:0]) rd_EvTID_DONE = 1; end
            end
        endcase
    end
    
    assign ready = rd_EvTID_ready&~rd_done_d1;
    
//    // assertions:
//    // assertion one, when rd_evt_ready is false, rd_en cannot be true
//    property check_ready_en; @(posedge clk)
//        ~rd_EvTID_ready |-> ~rd_en;
//    endproperty
//    assert property (check_ready_en);
    
//    // assertion two, done only stays for one cycle
//    property check_done; @(posedge clk)
//        rd_EvTID_DONE |=> ~rd_EvTID_DONE;
//    endproperty
//    assert property (check_done);
    
//    // assertion three, after done, rd_en need to be false
//    property check_done_en; @(posedge clk)
//        rd_EvTID_DONE |=> ~rd_en;
//    endproperty
//    assert property (check_done_en);
    
    
endmodule
