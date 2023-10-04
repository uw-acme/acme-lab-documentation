`timescale 1ns / 1ps


module denseConnector(
    input logic [4:0] outputCounter
    );
    
    logic signed [15:0] weights [2:0];
    always_comb begin
        weights[0] = data16_10::dlWeights[2047 - 0];
        weights[1] = data16_10::dlWeights[2047 - 1];
        weights[2] = data16_10::dlWeights[2047 - 2];
    end
    assign weights = data16_10::dlWeights[2047 - y - 128*ITER]
endmodule
