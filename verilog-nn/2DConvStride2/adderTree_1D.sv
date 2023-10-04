`timescale 1ns / 1ps

// Helper module
// 
// This module is an adder tree. The module takes in an input 1D array,
// loads the data into a tree and fills any excess nodes with zeros,
// and sum the data in a pipelined manner.
//
// Inputs:
// - clk
// - reset
// - input_data
//
// Outputs:
// - output_data: a single number of size WIDTH
module adderTree_1D #(parameter N = 32, WIDTH = 17, INPUT_SIZE = 32) (
    input  logic                        clk,
    //input  logic                        reset,
    input  logic signed [WIDTH-1 : 0]   input_data  [INPUT_SIZE],
    output logic signed [WIDTH-1 : 0]   output_data
);
	localparam integer POW_OF_2   = $clog2(INPUT_SIZE);
    localparam integer POW_OF_4   = (POW_OF_2+1)/2;
    localparam integer BASE_LEVEL = 4**POW_OF_4;
    localparam integer NUM_NODES  = 2*BASE_LEVEL;
    
    logic [WIDTH-1:0] tree [0:NUM_NODES];
    
    // Load tree
    genvar i, j;
	generate
		for (i = BASE_LEVEL; i < 2*BASE_LEVEL; i++) begin // load in input data to base layer
            if (i < BASE_LEVEL + INPUT_SIZE)
                assign tree[i] = input_data[i-BASE_LEVEL];
            else // fill excess nodes in base layer with zeros
                assign tree[i] = '0;
		end
	endgenerate
	
	/*
	ADDER TREE STRUCTURE
	
	 4^2       4^1             4^0
	[16] ---- [4] ------------ [1]
	[17] -///      /    /    /
	[18] -//      /    /    /
	[19] -/      /    /    /
	            /    /    /
	[20] ---- [5]   /    /
	[21] -///      /    /
	[22] -//      /    /
	[23] -/      /    /
	            /    /
	[24] ---- [6]   /
	[25] -///      /
	[26] -//      /
	[27] -/      /
	            /
	[28] ---- [7]
	[29] -///
	[30] -//
	[31] -/
	
	*/
	
	// Adder tree
	generate
	   for (i = 0; i < POW_OF_4; i++) begin
	       for (j=4**i; j < 2*(4**i); j++) begin
	           always_ff @(posedge clk) begin
	               tree[j] <= tree[4*j]
	                        + tree[(4*j) + 1]
	                        + tree[(4*j) + 2]
	                        + tree[(4*j) + 3];
	           end
	       end
	   end
	endgenerate
	
	// Return the sum from the adder tree
	always_ff @(posedge clk) begin
        output_data <= tree[1];
    end
endmodule



module adderTree_1D_p4_tb();
    localparam  N           = 32, 
                WIDTH       = 17, 
                INPUT_SIZE  = 32,
                CLOCK_PERIOD = 10;
    
    logic                        clk;
    logic                        reset;
    logic signed [WIDTH-1 : 0]   input_data  [INPUT_SIZE];
    logic signed [WIDTH-1 : 0]   output_data;
    
    initial begin
        clk = 0;
        forever #(CLOCK_PERIOD/2) clk = ~clk;
    end
    
    adderTree_1D_p4 #(.N            ( N          ),
                      .WIDTH        ( WIDTH      ),
                      .INPUT_SIZE   ( INPUT_SIZE )
    ) dut (
    .clk,
    .reset,
    .input_data,
    .output_data
    );
    
    initial begin
        input_data =
        {
        17'd1,
        17'd2,
        17'd3,
        17'd4,
        17'd5,
        17'd6,
        17'd7,
        17'd8,
        
        17'd1,
        17'd2,
        17'd3,
        17'd4,
        17'd5,
        17'd6,
        17'd7,
        17'd8,
        
        17'd1,
        17'd2,
        17'd3,
        17'd4,
        17'd5,
        17'd6,
        17'd7,
        17'd8,
        
        17'd1,
        17'd2,
        17'd3,
        17'd4,
        17'd5,
        17'd6,
        17'd7,
        -17'd8
        };
        repeat(100) @(posedge clk);
        $finish;
    end
    
    
    
endmodule