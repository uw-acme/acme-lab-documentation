`timescale 1ns / 1ps
// top level encoder module
module encoder(
    input logic clk_p,
    input logic reset,
    input logic signed [15:0] inputData,
    output logic signed [15:0] outputData [15:0]
    );
    
    // layer 1 + 2: convolution (stride 2 & reuse 3) and relu
    logic signed [15:0] outputConv [127:0];
    ramConnector conv(.clk(clk_p), .reset(reset),.inputPixel(inputData),.overallOut(outputData));
    
    
//    // layer 3: dense latency (input 128, output 16)
//    // includes layer 4: reluLayer
//	denseLatencyParameterized #(16, 10, 128, 16) dense
//    (.clk(clk), .biases(data16_10::dlBiases), .inputData(outputConv), .outputData(outputData));
endmodule

module encoder_testbench();
    logic clk_p, reset, newImage;
    logic signed [15:0] inputData;
    logic signed [15:0] outputData [15:0];
    logic acceptData; 
    encoder dut (.*);
    
    int data [0:107];
    logic clk;
    assign clk_p = clk;
    
    // Set up a simulated clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clk <= 0;
		forever #(CLOCK_PERIOD/2) clk <= ~clk; // Forever toggle the clock
	end
	
	integer i,j;
	
	initial begin
	data = {0,1,2,3,4,5,6,7,
                    8,9,10,11,12,13,14,15,
                    16,17,18,19,20,21,22,23,
                    24,25,26,27,28,29,30,31,
                    32,33,34,35,36,37,38,39,
                    40,41,42,43,44,45,46,47,
                    48,49,50,51,52,53,54,55,
                    56,57,58,59,60,61,62,63,
                    64,65,66,67,68,69,70,71,
                    72,73,74,75,76,77,78,79,80,
                    81,82,83,84,85,86,87,88,89,
                    90,91,92,93,94,95,96,97,98,
                    99,0,0,0,0,0,0,0,0
                     };
	reset <= 1;                @(posedge clk);
    reset <= 0;                @(posedge clk);
    for(int i =0; i < 100; i++) begin
           reset<=0; //inputPixel <= data[i]; @(posedge clk);
           inputData <= 1;
    end

	                   repeat(350) @(posedge clk);@(posedge clk);
                                 @(posedge clk);
	$stop; // End the simulation.
	end
endmodule 