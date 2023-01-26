`timescale 1ns / 1ps

// sumOneColumnParameterized is intented to be used n times for a dense latency layer that has n outputs.
// This module goes through and multiplies the input data by the corresponding weight and then sums
// all of that data and the corresponding bias.
import data16_10::*;
module sumOneColumnParameterized #(parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 128, ITER=0) (clk, data, bias, out, resetForTree );
    input logic clk;
    input logic signed [WIDTH-1:0] data     [0:INPUT_SIZE-1];
    input logic signed [WIDTH-1:0] bias;
    input logic                     resetForTree;
    logic signed [WIDTH-1:0] weightSet [0:INPUT_SIZE-1];
    logic signed [WIDTH*2-1:0] tempMult     [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0]   mult         [0:INPUT_SIZE-1];
    logic signed [WIDTH-1:0] result;
    
    output logic signed [WIDTH-1:0] out;
    
    // multiply input by corresponding weight
    genvar y;
    generate
        for(y=0; y < INPUT_SIZE; y++) begin
              // below line can see which weights are being used
//            assign weightSet[y] = data12_6::dlWeights[(y*10+(9-ITER))];
             // uses shift add
             shift_add_with_mult #(data4_2::dlWeights[(y*10+(9-ITER))], 3, WIDTH,NFRAC) sa (.clk(clk),.data_in(data[y]), .data_out(tempMult[y]));
             // does not use shift add
             // assign tempMult[y] = data[y]*data18_9::dlWeights[(y*10+(9-ITER))];   
        end
   endgenerate 
    
//    // fixed point multiplication, taking middle bits
//    always_ff @(posedge clk) begin
//        for(int i = 0; i<INPUT_SIZE; i++) begin
//            mult[i] <= tempMult[i][NFRAC+WIDTH-1:NFRAC];
//        end
//    end
    
    always_comb begin
        for(int i = 0; i<INPUT_SIZE; i++) begin
            mult[i] = tempMult[i][NFRAC+WIDTH-1:NFRAC];
        end
    end
    
    // sum the column
    adderTree_1D  #(NFRAC, WIDTH, INPUT_SIZE) sums (.clk(clk), .input_data(mult), .output_data(result));

    // add bias
    assign out = result + bias;


endmodule