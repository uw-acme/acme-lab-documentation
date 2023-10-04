`timescale 1ns / 1ps

module denseOptimized #(parameter ITER=0)(
    input logic clk,
    input logic reset,
    input logic [4:0] outputCounter,
    input logic signed [15:0] currentData [2:0], 
    input logic [4:0] counter2,
    input logic delayTwice,
    input logic delayTemp,
    input logic [9:0] rAddr,
    input logic delayValidToReadTwice,
    input logic signed [15:0] bias,
    input logic finished,
    output logic firstSignal,
    output logic secondSignal,
    output logic thirdSignal,
    output logic valid,
    output logic signed [15:0] outputSum
);


    enum {start, first, second, third, finish} ps, ns, ls;
    
    logic signed [15:0] sum;
    assign valid = (ps == finish && ls == third);
    always_comb begin
        case(ps)
            start: if(delayTemp) ns = first;
            first: ns = second;
            second: ns = third;
            third: if(finished) ns = finish; else ns = first;
            finish: if(delayTemp) ns = first;
        endcase
    end
    
    always_ff@(posedge clk) begin
        if(reset) ps <= start;
        else ps <= ns;
        ls <= ps;
    end
    logic signed [31:0] temp1, temp2, temp3;
    logic signed [15:0] temp4, temp5, temp6;

    
    assign temp1 = currentData[0] * weights[0];
    assign temp2 = currentData[1] * weights[1];
    assign temp3 = currentData[2] * weights[2];
    
    assign temp4 = temp1[25:10];
    assign temp5 = temp2[25:10];
    assign temp6 = temp3[25:10];
    
    
    always_ff@(posedge clk)begin
        if(ps ==start) sum <= 0;
        else if (ps == finish) sum <= 0;
        else if(ps == first) sum <= sum + temp4 + temp5 + temp6;
        else if (ps == second) sum <= sum + temp4 + temp5 + temp6;
        else if (ps == third) sum <= sum + temp4 + temp5;
    end

    assign outputSum = sum + bias;
    
    logic signed [15:0] weights [2:0];
    always_comb begin
        if(ps == first) begin
        weights[0] = data16_10::dlWeights[2047 - 0 - (counter2)*8 - 128*ITER];
        weights[1] = data16_10::dlWeights[2047 - 1 - (counter2)*8 - 128*ITER];
        weights[2] = data16_10::dlWeights[2047 - 2 - (counter2)*8 - 128*ITER];
        end else if (ps == second) begin
        weights[0] = data16_10::dlWeights[2047 - 3 - (counter2)*8 - 128*ITER];
        weights[1] = data16_10::dlWeights[2047 - 4 - (counter2)*8 - 128*ITER];
        weights[2] = data16_10::dlWeights[2047 - 5 - (counter2)*8 - 128*ITER];
        end else begin
        weights[0] = data16_10::dlWeights[2047 - 6 - (counter2)*8 - 128*ITER];
        weights[1] = data16_10::dlWeights[2047 - 7 - (counter2)*8 - 128*ITER];
        end
    end
    
    assign firstSignal = (ps == first);
    assign secondSignal = (ps == second);
    assign thirdSignal = (ps == third);
endmodule
