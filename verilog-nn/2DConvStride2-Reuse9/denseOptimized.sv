`timescale 1ns / 1ps

module denseOptimized #(parameter ITER=0)(
    input logic clk,
    input logic reset,
    input logic [4:0] outputCounter,
    input logic signed [15:0] currentData, 
    input logic [4:0] counter1,
    input logic [4:0] counter2,
    input logic delayTwice,
    input logic delayTemp,
    input logic signed [15:0] bias,
    input logic start,
    output logic valid,
    output logic signed [15:0] outputSum
);
    logic [2:0] coiunter;
    logic signed [15:0] weights;
    logic signed [15:0] sum;


    
    always_ff @(posedge clk) begin
        if(reset || start ) sum <= 0;
        else if(counter2 == 8) sum <= sum;
        else sum <= sum + temp4;
    end

//    enum {start, first, second, third, finish} ps, ns, ls;
    
//    assign valid = (ps == finish && ls == third);
//    always_comb begin
//        case(ps)
//            start: if(delayTemp) ns = first;
//            first: ns = second;
//            second: ns = third;
//            third: if(finished) ns = finish; else ns = first;
//            finish: if(delayTemp) ns = first;
//        endcase
//    end
    
//    always_ff@(posedge clk) begin
//        if(reset) ps <= start;
//        else ps <= ns;
//        ls <= ps;
//    end
    logic signed [31:0] temp1;
    logic signed [15:0] temp4;
    
    assign weights = data16_10::dlWeights[2047 - counter2 - (counter1)*8 - 128*ITER];


    
    assign temp1 = currentData * weights;
    
    assign temp4 = temp1[25:10];


    assign outputSum = sum + bias;
    
//    always_comb begin
//        if(ps == first) begin
//        weights[0] = data16_10::dlWeights[2047 - 0 - (counter2)*8 - 128*ITER];
//        weights[1] = data16_10::dlWeights[2047 - 1 - (counter2)*8 - 128*ITER];
//        weights[2] = data16_10::dlWeights[2047 - 2 - (counter2)*8 - 128*ITER];
//        end else if (ps == second) begin
//        weights[0] = data16_10::dlWeights[2047 - 3 - (counter2)*8 - 128*ITER];
//        weights[1] = data16_10::dlWeights[2047 - 4 - (counter2)*8 - 128*ITER];
//        weights[2] = data16_10::dlWeights[2047 - 5 - (counter2)*8 - 128*ITER];
//        end else begin
//        weights[0] = data16_10::dlWeights[2047 - 6 - (counter2)*8 - 128*ITER];
//        weights[1] = data16_10::dlWeights[2047 - 7 - (counter2)*8 - 128*ITER];
//        end
//    end
    
//    assign firstSignal = (ps == first);
//    assign secondSignal = (ps == second);
//    assign thirdSignal = (ps == third);
endmodule
