`timescale 1ns / 1ps
import data16_10::*;
module threeStageDense(
    input logic clock,
    input logic reset,
    input logic start,
    input logic delay,
    input logic signed [15:0] inputData [2:0],
    input logic [15:0] weights [2:0],
    input logic [9:0] rAddr,
    output logic signed [15:0] outputData,
    output logic valid,
    input logic [3:0] index
    );
    logic signed [15:0] tempOutputData;
    logic signed[15:0] temp [2:0];
    logic [1:0] weightCount;
    logic signed [15:0] weights1 [2:0];
    int i;
    always_comb begin
        for(i=0; i<3; i++) begin
        if(weightCount == 0) begin
            weights1[i] = data16_10::convWeights[9*index+3*i];
        end else if (weightCount ==1 ) begin
            weights1[i] = data16_10::convWeights[9*index+3*i+1];
        end else begin
            weights1[i] = data16_10::convWeights[9*index+3*i+2];
        end
        end
//weights1[0] = 1;
//weights1[1] = 1;
//weights1[2] = 1;
    end
    
    logic signed [15:0] test;
    logic signed [15:0] bias;
    logic signed [31:0] mult1, mult2, mult3, mult4, mult5, mult6, mult7;
    logic signed [15:0] wtf;
 
//    enum {firstAdd, secondAdd, thirdAdd} ps, ns;
    
//    always_comb begin
//        case(ps)
//            firstAdd: if(rAddr % 3 ==0) ns = secondAdd;
//            secondAdd: ns = thirdAdd;
//            thirdAdd: ns = firstAdd;
//        endcase
//    end
    
//    always_ff @(posedge clock) begin
//        if(reset) ps <= firstAdd;
//        else ps <= ns;
//    end
    
    threeCycleMultAdd topRow    (.clock,.reset,.inputData(inputData[2]),.weight(weights1[0]),.outputData(temp[2]), .alternate(ps==firstAdd),
    .start(rAddr % 3 ==0), .rAddr, .delay, .weightCount(weightCount));
    threeCycleMultAdd middleRow (.clock,.reset,.inputData(inputData[1]),.weight(weights1[1]),.outputData(temp[1]), .alternate(ps==firstAdd), 
    .start(rAddr % 3 ==0), .rAddr, .delay, .weightCount() );
    threeCycleMultAdd bottomRow (.clock,.reset,.inputData(inputData[0]),.weight(weights1[2]),.outputData(temp[0]), .alternate(ps==firstAdd),
     .start(rAddr % 3 ==0), .rAddr, .delay, .weightCount() );
 
    
    assign tempOutputData = temp[2] + temp[1] + temp[0] + data16_10::convBiases[7-index];
    assign outputData = tempOutputData[15] ? 16'd0 : tempOutputData;
    
    
   
    
endmodule

module threeCycleMultAdd(
    input logic clock,
    input logic reset,
    input logic start,
    input logic delay,
    input logic signed [15:0] inputData,
    input logic signed [15:0] weight,
    input logic [9:0] rAddr,
    input logic alternate,
    output logic signed[15:0] outputData,
    output logic [1:0] weightCount
    );
    logic [9:0] tempRAddr;
    logic delayTemp;
    logic wtf;
    assign wtf = delayTemp && ~(((rAddr-1) %9) ==0);
    logic signed [15:0] temp;
    always_ff@(posedge clock) begin
        delayTemp <= delay;
        tempRAddr <= rAddr;
        if(reset) temp <= 0;
        else if (rAddr ==0) temp <= 0;
        else if ((delayTemp || tempRAddr == 81)) temp <= tempSum[25:10];
        //else if (wtf) temp <= tempSum[25:10];
        //else if ((rAddr) % 9 ==0) temp <= temp +tempSum[25:10]; 
        //else if (rAddr % 9 ==0) temp <= inputData;
        
        //else if(start) temp <= inputData;
        //else if(!start) temp <= temp;
        //else if ((rAddr-1) % 9 ==0) temp <= temp;
        else temp <= temp + tempSum[25:10];
    end
    
    logic signed [31:0] tempSum;
    assign tempSum = inputData * weight;
    
    always_ff @(posedge clock) begin
        if(reset) weightCount <= 32'd0;
        else if (rAddr ==0) weightCount <= 32'd0;
        else if (delay || rAddr == 81) weightCount <= 32'd0;
        else weightCount <= weightCount + 32'b1;
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

