`timescale 1ns / 1ps

module ramWriter(
    input logic clk,
    input logic reset,
    input logic validData,
    input logic [9:0] rAddr,
    output logic [9:0] wAddr,
    output logic validToWrite,
    output logic validToRead
    );
     
    enum {noImagesFull, writingToImageOne, waiting, writingToImageTwo, bothImagesFull} ps, ns;
    
    always_comb begin
        case(ps) 
        noImagesFull: if(validData) ns = writingToImageOne;
        writingToImageOne: if(wAddr < 80 ) ns = writingToImageOne;
                            else ns = waiting;
        waiting: if(rAddr < 81) ns = writingToImageTwo;
        writingToImageTwo: if(wAddr == 161) ns = bothImagesFull;
        bothImagesFull: if(rAddr > 80) ns = noImagesFull;
        endcase
    end
    
    
    assign validToRead = (rAddr < 81 && wAddr > 80) || (rAddr > 79 && wAddr <= 81 ) || (rAddr <79 && wAddr == 161) && ps != noImagesFull;
    
    
    always_ff@(posedge clk) begin
        if(reset) ps <= noImagesFull;
        else ps <= ns;
    end
    
    assign validToWrite = (ns!=waiting && ps!=bothImagesFull && wAddr != 161);
    
    always_ff @(posedge clk) begin
        if(ps == noImagesFull)wAddr <= 0;
        else if(ps == waiting || ps == bothImagesFull) begin
            wAddr <= wAddr;
        end else if(validData) begin
            if(wAddr == 70) wAddr <= 81;
            else if(wAddr == 81 && ns == waiting) wAddr <= wAddr;
            else if(wAddr == 151) wAddr <= 161; 
            else if (wAddr == 161 && ns == bothImagesFull) if(rAddr == 80) wAddr <= 0; else wAddr <= wAddr;
            else if((wAddr+2) % 9 == 0)wAddr <= wAddr + 2;
            else wAddr <= wAddr + 1;
        end        
    end
    
endmodule

module ramWriter_testbench();
	logic clk, reset;
	logic [7:0] rAddr, wAddr;
	logic validToWrite;
	logic validData;
	
	ramWriter dut (.*);
	
	parameter CLK_Period = 100;
	initial begin
		clk <= 1'b0;
		forever #(CLK_Period/2) clk <= ~clk;
	end
	
	initial begin
		reset <= 1; rAddr <= 0; validData <= 0; @(posedge clk);
		reset <= 0; validData <= 1; repeat(180) @(posedge clk);
		for(int i = 0; i< 200; i++) begin
		if(rAddr == 161) rAddr <= 0;
		else  rAddr <= rAddr + 1; @(posedge clk);
		end
	$stop;
	end
endmodule
// add a valid