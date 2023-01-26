// this module creates line buffers using SRL 16 to hold onto data as it is moved from one row onto the one above it.
// therefore it only taks as input the system clock and the current inputData, or the data being moved out of a given row
// and it outputs the outputData or what should be moved into the row above 
`timescale 1ns / 1ps
module conv2dFIFO_parameterized #(parameter filtDimension = 3,parameter bitWidth = 8, parameter inputWidth = 8) 
(clock, inputData, outputData);
	input logic clock;
	input logic  signed [bitWidth-1:0] inputData;
	output logic signed [bitWidth-1:0] outputData;
	
	//[4:0][bitWidth-1:0], FIFO buffer
	logic [inputWidth-filtDimension-1:0][bitWidth-1:0] sr_data;

	// each cycle shift all bits to the left by one and shift in the inputData
	always_ff @(posedge clock) begin
		 sr_data <= {sr_data[inputWidth-filtDimension-2:0], inputData};
	end

	// output the rightmost bit (msb) which is getting shifted out of the sr_data the following cycle
	assign outputData = sr_data[inputWidth-filtDimension-1];

endmodule

module conv2dFIFO_parameterized_testbench();
	logic [2:0] inputData;
	logic clock, reset;
	logic [2:0] outputData;
	
	conv2dFIFO_parameterized #(3,3,8) dut (.*);
	
	parameter CLK_Period = 100;
	initial begin
		clock <= 1'b0;
		forever #(CLK_Period/2) clock <= ~clock;
	end
	
	initial begin
		reset <= 1; @(posedge clock);
		reset <= 0; inputData <= 3'd3; @(posedge clock);
		inputData <= 3'd4; @(posedge clock);
		inputData <= 3'd2; @(posedge clock);
		inputData <= 3'd1; @(posedge clock);
		inputData <= 3'd6; @(posedge clock);
		inputData <= 3'd4; repeat(7)@(posedge clock);
		inputData <= 3'd6; repeat(7)@(posedge clock);
	
	$stop;
	end
endmodule
