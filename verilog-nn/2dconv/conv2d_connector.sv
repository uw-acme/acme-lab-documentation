`timescale 1ns / 1ps

// top-level module for 2D Convolutional Neural Network
// this module serves as the connect for all 4 layers of the 2D CNN
// it has the system clock, clk_p, the system reset, and the input pixel as an input.
// the input pixel is a 16 bit signed number with 10 fractional bits and is read in 
// in the order of an 8x8 matrix
// this module outputs the outputSoftmax which is the overall output of the 2D CNN.
// this is 10 16 bit numbers, also with 10 fractional bits. it also outputs
// the signal outputValid which indicates when the module has seen all of the input
// matrix (here we are testing an 8x8 matrix so after 64 clock cycles), and this is 
// when the outputSoftmax will accurately reflect the data before the system will continue
// to read in more data
module conv2d_connector #(parameter filtDimension = 3,parameter bitWidth = 16, parameter inputWidth = 8, 
parameter weightWidth = 72, parameter biasWidth = 8, parameter outputSize = 16, parameter numFilt = 8, parameter NFRAC = 10)
(clk_p, reset, inputPixel, outputSoftmax);
	input clk_p, reset;
	input logic signed [bitWidth-1:0] inputPixel;
	logic signed [bitWidth-1:0] inputPixelCopy;
	
	logic clk;
	logic signed [bitWidth-1:0] convWeights             [weightWidth-1:0];
	logic signed [bitWidth-1:0] convBiases              [biasWidth-1:0];
	logic signed [bitWidth-1:0] dlBiases                [outputSize-1:0];
	logic signed [bitWidth-1:0] outputRelu              [inputWidth*inputWidth*numFilt-1:0];
	logic signed [bitWidth-1:0] copyOutputRelu          [inputWidth*inputWidth*numFilt-1:0];
	logic signed [bitWidth-1:0] outputDL                [outputSize-1:0];
    logic signed [bitWidth-1:0] outputConvMatrix        [inputWidth*inputWidth*numFilt/4-1:0]; 
    logic signed [bitWidth-1:0] outputLastLayer    [outputSize-1:0];   
    
    output logic signed [bitWidth-1:0] outputSoftmax    [outputSize-1:0]; 
	
	 // create clock
    assign clk = clk_p;
    
//    // read in input with register
    always_ff@(posedge clk) begin
        inputPixelCopy <= inputPixel;
    end
    
	// layer 1: convolve (input 8x8, output 128)
	// layer 2: relu is also done in here
	conv2Doutput_parameterized #(filtDimension,bitWidth, inputWidth, weightWidth, biasWidth, NFRAC) convolve
	(.clk(clk), .reset(reset), .inputPixel(inputPixelCopy), .outputMatrix(outputConvMatrix), .biases(data16_10::convBiases));
	
	
//	// data must be reversed to match HLS4ML output format
//	always_comb begin
//	   for(int i = 0; i < inputWidth**2*numFilt; i++) begin
//	       copyOutputRelu[i] = outputConvMatrix[(inputWidth**2*numFilt-1)-i];
//	   end
//    end	
	
//	// layer 3: dense latency (input 128, output 10)
//	denseLatencyParameterized #(bitWidth, NFRAC, inputWidth**2*numFilt, outputSize) dense
//    (.clk(clk), .biases(data16_10::dlBiases), .inputData(copyOutputRelu), .outputData(outputDL));

//	// layer 4: softmax (input 10, output 10)
//	softmaxParameterized #(outputSize, bitWidth, outputSize, NFRAC) softmax
//	(.dataIn(outputDL),.clk(clk), .dataOut(outputLastLayer));
	
	// to match order must again reverse data
	always_ff@(posedge clk) begin
	   for(int i = 0; i <outputSize; i++) begin
	       outputSoftmax[i] <= outputLastLayer[9-i];
       end
	end
	
endmodule


	

