`timescale 1ns / 1ps

module ramCounter(
    input logic clk,
    input logic reset,
    input logic validData,
    input logic [7:0] rAddr,
    output logic [7:0] wAddr,
    input logic validToWrite,
    output logic validToRead
    );
    
   logic [1:0] imagesWritten, imagesRead;
   logic writing1Active, reading1Active, writing2Active, reading2Active;
   
   always_comb begin
   
   end
   
   always_ff @(posedge clk) begin
        if(reset) begin
            wAddr <= 0;
            imagesWritten <= 0;
            imagesRead <= 0;
        end else if (validData & wAddr == 0 && !reading1Active) begin
             writing1Active <= 1;
             wAddr <= wAddr + 1;
        end 
   end
    
endmodule

module ramCounter_testbench();
	logic clk, reset;
	logic [7:0] rAddr, wAddr;
	logic validToWrite;
	logic validData;
	
	ramCounter dut (.*);
	
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