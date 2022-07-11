//////////////////////////////////////////////////////////////////////////////////
// Company: University of Washington
// Engineer: Ethan Jiang, Bowen Zuo
// 
// Create Date: 2022/05/02 17:41:41
// Design Name: downstream adptor following AXI-streaming protocol
// Module Name: downstream_adp
// Description: This is an downstream adptor following AXI-streaming protocol, is designed to convert AXI signals back to the old protocol signals of GEP.
//////////////////////////////////////////////////////////////////////////////////
module downstream_adp #(parameter ADDR_WIDTH=10) (
    input logic clk,
    input logic ARESETn,    // active low
    
    // down stream i/o
    output logic wr_en,
    output logic [ADDR_WIDTH-1:0] wr_addr,
    output logic [127:0] wr_data,
    
    // event id i/o
    output logic wr_EvTID_DONE,
    
    // up stream i/o
    input logic TVALID,
    output logic TREADY,
    input logic [127:0] TDATA, // 16 bytes
    input logic [15:0] TSTRB, TKEEP,  // each bit refer to one bype in TDATA, defult1
    input logic TLAST, // true when last transfer is valid
    input logic [10:0] TID     // a.k.a BCID
    );
    
    logic [127:0] addr_temp;
    enum {S0, S1, S2} ps, ns;   // S0 idle, S1 write data, S2 write top
    
    // state update
    always_comb begin
        ns = S0;
        case (ps)
        S0: ns = (TID!=0) ? S1 : S0;
        S1: ns = TLAST ? S2 : S1; 
        S2: ns = S0;
        endcase
    end
    
    // state reset, addr updates
    always_ff @(posedge clk) begin
        ps <= ARESETn ? ns : S0;
        case(ps)
        S0: begin addr_temp[ADDR_WIDTH-1:0] <= 1; addr_temp[127:21]<= 0; if(TID!=0) addr_temp[20:10] <= TID; end
        S1: if(TVALID&!TLAST)addr_temp[ADDR_WIDTH-1:0] <= addr_temp[ADDR_WIDTH-1:0]+1;
        S2: addr_temp <= 0;
        endcase
    end
    
    // output signals in each state
    always_comb begin
        wr_en = 0; wr_addr = addr_temp[ADDR_WIDTH-1:0]; wr_EvTID_DONE = 0;
        TREADY = 0; wr_data = TDATA;
        case(ps)
        S1: if (TVALID) begin TREADY = 1; wr_en = 1; end
        S2: begin wr_addr = 0; wr_data = addr_temp; wr_EvTID_DONE = 1; wr_en = 1; end
        endcase
    end
    
//    // assertions:
//    // assertion one, wr_EvTID_DONE can only stay high for one cycle. 
//    property check_done; @(posedge clk)
//        wr_EvTID_DONE |=> ~wr_EvTID_DONE;
//    endproperty
//    assert property (check_done);
    
//    // assertion two, when wr_EvTID_DONE is true, wr_en cannot be true. 
//    property check_wr_en; @(posedge clk)
//        wr_EvTID_DONE |-> ~wr_en;
//    endproperty
//    assert property (check_wr_en);

endmodule
