`timescale 1ns / 1ps

// sumOneColumnParameterized is intented to be used n times for a dense latency layer that has n outputs.
// This module goes through and multiplies the input data by the corresponding weight and then sums
// all of that data and the corresponding bias.
import data16_10::*;
module sumOneColumnParameterized #(parameter WIDTH = 16, NFRAC = 10, INPUT_SIZE = 128, ITER=0) (clk, data, bias, out, resetForTree );
    input logic clk;
    input logic signed [WIDTH-1:0] data     [INPUT_SIZE-1:0];
    input logic signed [WIDTH-1:0] bias;
    input logic                     resetForTree;
    logic signed [WIDTH-1:0] weightSet [INPUT_SIZE-1:0];
    logic signed [WIDTH*2-1:0] tempMult     [INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0]   mult         [INPUT_SIZE-1:0];
    logic signed [WIDTH-1:0] result;
    
    output logic signed [WIDTH-1:0] out;
    logic signed [WIDTH-1:0] tempOut;
    
    
    // multiply input by corresponding weight
    genvar y;
    generate
        for(y=0; y < 128; y++) begin
              // below line can see which weights are being used
              assign weightSet[y] = data16_10::dlWeights[2047 - y - 128*ITER];
             // uses shift add
             //shift_add_with_mult #(data16_10::dlWeights[2047 - y - 128*ITER]) sa ( .clk(clk), .data_in(data[y]), .data_out(tempMult[y]));
             // does not use shift add
             assign tempMult[y] = data[y]*data16_10::dlWeights[2047 - y - 128*ITER];   
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
            mult[i] = tempMult[i][25:10];
        end
    end
    
    // sum the column
    adderTree_1D  #(NFRAC, WIDTH, INPUT_SIZE) sums (.clk(clk), .input_data(mult), .output_data(result));

    // add bias
    assign tempOut = result + bias;
    
    // this is relu layer!!!!
	always_comb begin
       if (tempOut[WIDTH-1] == 1'b1) begin
          out = {WIDTH{1'b0}};
       end else begin
           out = tempOut;
       end
    end


endmodule