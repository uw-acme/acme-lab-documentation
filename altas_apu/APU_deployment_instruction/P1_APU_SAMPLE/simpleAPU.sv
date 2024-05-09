`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Zhixing Jiang, Bowen Zuo
// Create Date: 2022/02/25 15:38:13
// Module Name: simpleAPU
// Project Name: simpleAPU
// Target Devices: VCU118
// Description: a simple APU testing i/o interface.
//////////////////////////////////////////////////////////////////////////////////
module simpleAPU(
    // up stream i/o
    output logic rd_en1,
    output logic [7:0] rd_addr1,
    input logic [127:0] rd_data1,
    
    output logic rd_en2,
    output logic [7:0] rd_addr2,
    input logic [127:0] rd_data2,
    // event id i/o
    input logic rd_EvTID_ready,
    output logic rd_EvTID_DONE,
    output logic wr_EvTID_DONE,
    // down stream i/o
    output logic wr_en,
    output logic [7:0] wr_addr,
    output logic [127:0] wr_data,
    
    input logic clk,
    input logic reset
    );
    parameter DEPTH = 3;
    parameter DELAY = DEPTH+1;
    
    logic ready,rd_en, en, rd_done_d1, en_d1;
    logic [127:0] top_rd, top_wr;
    logic [127:0] data_layer1, data_layer2, data_layer3;    // algrithm layers
    logic [7:0] rd_addr;
    logic [DELAY-1:0] shift_reg;        // used for delay a signal
    assign ready = rd_EvTID_ready&~rd_EvTID_DONE&~rd_done_d1; // modify the rd_EvTID_ready signial, that after rd_done, ready turn off for 1 cycle, when ready is true addr can be accepted by upstream mem
    assign en = ready;          // when en is true, data will come in the next cyc
    assign rd_en1 = rd_en;      // when rd_en is false, data wont come in the current cyc
    assign rd_en2 = rd_en;
    assign wr_en = shift_reg[DELAY-1];
    assign rd_addr1 = rd_addr;
    assign rd_addr2 = rd_addr;
   
    enum {not_ready, read1, read2, read3} ps, ns;   //FSM,  read1: save top, read2:normal read state, read3: sent rd_done
    //FSM, state updates for read port
    always_comb begin
        case (ps)
            not_ready:  if(ready&en)    ns = read1;
                        else            ns = not_ready;
            read1:      ns = read2;
            read2:      if(en&(top_rd[7:0]==rd_addr))  ns = read3;     
                        else           ns = read2;
            read3:      ns = not_ready;
        endcase
        
        if (ps==not_ready)  rd_en = en;
        else                rd_en = 1; 
        if (ps==read3)  rd_EvTID_DONE = 1;
        else            rd_EvTID_DONE = 0;
    end
    
    always_ff @(posedge clk) begin
        if(reset) begin
            ps <= not_ready;
            rd_done_d1 <= 0;
            en_d1 <= 0;
        end else begin
            ps <= ns;
            rd_done_d1 <= rd_EvTID_DONE;
            en_d1 <= en;
        end
        
        shift_reg <= { shift_reg[DELAY-2:0], en};   // delay the en signal
          
        if(ps == read1) top_rd <= rd_data1;
        else            top_rd <= top_rd;

        if((ns==read1)|(ns==read2)&en)          rd_addr <= rd_addr+1;
        else if ((ns==read3)|(ns==read2)&~en)   rd_addr <= rd_addr;
        else                                    rd_addr <= 0;
    end

    enum {off, write, wr_done} wr_ps, wr_ns;
    //FSM, state updates for write port
    always_comb begin
        case(wr_ps)
            off:    if(wr_en)                   wr_ns = write;
            write:  if((wr_addr==top_wr[7:0])&wr_en)  wr_ns = wr_done;
            wr_done:   wr_ns = off;
        endcase
        
        if(wr_ps==wr_done)    wr_EvTID_DONE = 1;
        else                wr_EvTID_DONE = 0;
        if((wr_ps==off)&wr_en)    wr_data = top_rd;
        else                    wr_data = data_layer3;
    end 
    
    always_ff @(posedge clk) begin
        if(reset) begin
            wr_ps <= off;
        end else begin
            wr_ps <= wr_ns;
        end
    
        if((wr_ps==off)&wr_en)   top_wr <= top_rd;
        else                    top_wr <= top_wr;
        
        if((wr_ps==off)&wr_en|(wr_ps==write)&wr_en) wr_addr <= wr_addr+1;
        else if((wr_ps==write)&~wr_en)            wr_addr <= wr_addr;
        else                                    wr_addr <= 0;
    end
    
    // algorithm
    always_ff @(posedge clk) begin
        data_layer1 <= rd_data1+rd_data2;
        data_layer2 <= data_layer1;
        data_layer3 <= data_layer2;
    end
    
    //assertion:
    always_comb begin
        if (ps==read3) assert (rd_en == 1);
        if (rd_done_d1==1) assert (rd_en == 0);
        if (rd_en==0) assert ((rd_data1 == 0)|(rd_data1 == 'x));
        if ((ps==read1)|(ps==read2)) assert ( top_rd[7:0] > rd_addr);
    end

endmodule



