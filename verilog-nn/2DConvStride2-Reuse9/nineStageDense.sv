`timescale 1ns / 1ps
import data16_10::*;
module nineStageDense(
    input logic clock,
    input logic reset,
    input logic start,
    input logic delay,
    input logic signed [15:0] inputData,
    input logic [9:0] rAddr,
    output logic signed [15:0] outputData,
    output logic valid,
    input logic [3:0] index,
    input logic [1:0] delayThreeCycles,
    output logic delayTemp,
    output logic [1:0] weightCount
    );
    logic [1:0] delayTest;
    always_ff@(posedge clock) begin delayTest <= delayThreeCycles; end
    logic signed [15:0] tempOutputData;
    logic signed[15:0] temp [2:0];
    //logic [1:0] weightCount;
    logic signed [15:0] weights1;
    int i;
    logic [3:0] test;
    assign test = (9*index) + (3*delayTest) + weightCount;

    assign weights1 = data16_10::convWeights[(9*index) + ((3*delayTest) + weightCount)];
    
    threeCycleMultAdd topRow    (.clock,.reset,.inputData(inputData),.weight(weights1),.outputData(temp[2]),
    .start(rAddr % 3 ==0), .rAddr, .delay(weightCount ==2 && delayTest == 2), .weightCount(weightCount), .increase(delayTest ==2), .delayTemp);
 
    
    assign tempOutputData = temp[2] + data16_10::convBiases[7-index];
    assign outputData = tempOutputData[15] ? 16'd0 : tempOutputData;
    
endmodule
`timescale 1ns / 1ps
module threeCycleMultAdd(
    input logic clock,
    input logic reset,
    input logic start,
    input logic delay,
    input logic signed [15:0] inputData,
    input logic signed [15:0] weight,
    input logic [9:0] rAddr,
    output logic signed[15:0] outputData,
    output logic [1:0] weightCount,
    input logic increase,
    output logic delayTemp
    );
    logic [9:0] tempRAddr;
    logic ah;
    logic signed [15:0] temp;
    logic signed [31:0] tempSum;
    always_ff@(posedge clock) begin
        ah <= delayTemp;
        delayTemp <= delay;
        tempRAddr <= rAddr;
        if(reset) temp <= 0;
        else if (rAddr ==0 ||  rAddr == 9 || rAddr == 81 || rAddr == 90) temp <= tempSum[25:10];
        //else if (rAddr == 80) temp <= temp;
        else if (delayTemp) temp <= tempSum[25:10];
        else temp <= temp + tempSum[25:10];
    end

    
    assign tempSum = inputData * weight;
    
    always_ff @(posedge clock) begin
        if(reset) weightCount <= 32'd0;
        else if (rAddr ==0 || tempRAddr == 0 ) weightCount <= 32'd0;
        else if ( rAddr == 81) weightCount <= 32'd0;
        else if(increase) if(weightCount == 2) weightCount <= 0; else weightCount <= weightCount + 32'b1;
    end
    assign outputData = temp;
endmodule


module threeStageDense_testbench();
    logic clock,reset;
    logic [15:0] inputData [2:0];
    logic [15:0] weights [2:0];
    logic [15:0] outputData;
    logic valid;
    
    threeStageDense dut (.*);
    
    // Set up a simulated clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clock <= 0;
		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
	end
	
	integer i,j;
	
	initial begin
	reset <= 1; @(posedge clock);
    reset <= 0; inputData <= {16'd1, 16'd2, 16'd3};     weights <= {16'd2, 16'd2, 16'd2};   repeat(3) @(posedge clock);
    inputData <= {16'd4, 16'd5, 16'd6}; repeat(3) @(posedge clock);
    @(posedge clock);
	$stop; // End the simulation.
	end
endmodule 

