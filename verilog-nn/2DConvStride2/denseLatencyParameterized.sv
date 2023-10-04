`timescale 1ns / 1ps
// dense latency layer
import data16_10::*;
module denseLatencyParameterized #(parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 128, OUTPUT_SIZE = 16)
( clk, biases, inputData, outputData );
    input logic clk;
    input logic signed [WIDTH-1:0]  biases      [OUTPUT_SIZE-1:0];
    input logic signed [WIDTH-1:0]  inputData   [INPUT_SIZE-1:0];
    //input logic resetForTree;
    logic signed [WIDTH-1:0]        tempWeights [INPUT_SIZE-1:0];
    output logic signed [WIDTH-1:0] outputData  [OUTPUT_SIZE-1:0];
    logic signed [WIDTH-1:0]  inputData1   [INPUT_SIZE-1:0];
    
   
	genvar i;
	generate
	   for(i = 0; i<OUTPUT_SIZE; i++) begin: denseSums
	       sumOneColumnParameterized #(WIDTH, NFRAC, INPUT_SIZE, i) sumColumns
	       (.clk(clk), .data(inputData), .bias(biases[15-i]), .out(outputData[15-i]), .resetForTree(resetForTree));
	   end
    endgenerate
endmodule
