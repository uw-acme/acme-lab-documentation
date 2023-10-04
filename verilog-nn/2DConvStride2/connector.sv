`timescale 1ns / 1ps

module connector(
    input logic clk,
    input logic reset,
    input logic newImage,
    input logic [15:0] inputPixel,
    output logic acceptData
    );
    
    logic [6:0] wAddr, rAddr;
    logic [6:0] rAddr1, rAddr2;
    logic [6:0] wAddr1, wAddr2;
    logic [15:0] rData;
    logic delay;
    logic [15:0] outputFifo1, outputFifo2;
    logic [15:0] currentData [2:0];
    logic [15:0] filtMatrix [2:0][2:0];
    logic oscillator;
    logic switchColumn;
    logic [3:0] finished;
    logic processingOddState;
    
    always_ff @(posedge clk) begin
        if(reset)oscillator <= 0;
        else oscillator <= oscillator + 1;
    end
    
    always_ff @(posedge clk) begin
        wAddr1 <= wAddr;
        wAddr2 <= wAddr1;
    end
    
    always_ff @(posedge clk) begin
        rAddr1 <= rAddr;
        rAddr2 <= rAddr1;
    end
    
    rams_tdp_rf_rf RAM (.clka(clk),.clkb(clk),.ena(1'b1),.enb(1'b1),.wea(1'b1),.web(1'b0),.addra({3'b0,wAddr}),.addrb({3'b0,rAddr}),.dia(inputPixel),.dib(),.doa(),.dob(rData));
    
    ramController ctrl (.clk, .reset, .newImage, .wAddr, .rAddr, .acceptData, .delay, .switchColumn, .finished, .processingOddState);
    
    conv2dFIFO_parameterized FIFO1(.clock(clk), .reset, .inputData(filtMatrix[0][2]), .outputData(outputFifo1), .delay(shiftDelay1));
    
    conv2dFIFO_parameterized FIFO2(.clock(clk), .reset, .inputData(filtMatrix[1][2]), .outputData(outputFifo2), .delay(shiftDelay1));
    logic [6:0]prevAddr1, prevAddr2;
    logic shiftDelay1, shiftDelay2;
    always_ff@(posedge clk) begin
        prevAddr1 <= rAddr;
        prevAddr2 <= prevAddr1;
        shiftDelay1 <= delay;    
        shiftDelay2 <= shiftDelay1;   
    end
    always_ff @(posedge clk) begin
        if(rAddr == 0) begin
            if(prevAddr1 == 1) begin
            filtMatrix[2][2] <= filtMatrix[2][1];
            filtMatrix[2][1] <= filtMatrix[2][0];
            filtMatrix[2][0] <= outputFifo2;
            filtMatrix[1][2] <= filtMatrix[1][1];
            filtMatrix[1][1] <= filtMatrix[1][0];
            filtMatrix[1][0] <= outputFifo1;
            filtMatrix[0][2] <= filtMatrix[0][1];
            filtMatrix[0][1] <= filtMatrix[0][0];
            if(shiftDelay2) filtMatrix[0][0] <= filtMatrix[0][0];
            else filtMatrix[0][0] <= rData;
            end
        end else if(prevAddr1 != rAddr ) begin
        filtMatrix[2][2] <= filtMatrix[2][1];
        filtMatrix[2][1] <= filtMatrix[2][0];
        filtMatrix[2][0] <= outputFifo2;
        filtMatrix[1][2] <= filtMatrix[1][1];
        filtMatrix[1][1] <= filtMatrix[1][0];
        filtMatrix[1][0] <= outputFifo1;
        filtMatrix[0][2] <= filtMatrix[0][1];
        filtMatrix[0][1] <= filtMatrix[0][0];
        //if(shiftDelay2) filtMatrix[0][0] <= filtMatrix[0][0];
        filtMatrix[0][0] <= rData;
        end
    end
    
    
    always_comb begin
     if(finished[2]) begin
         currentData[2] = filtMatrix[2][0];
         currentData[1] = filtMatrix[1][0];
         currentData[0] = filtMatrix[0][0];    
     end else if (finished[1]) begin
         currentData[2] = filtMatrix[2][1];
         currentData[1] = filtMatrix[1][1];
         currentData[0] = filtMatrix[0][1];
     end else begin
         if(switchColumn && rAddr > 21) begin
         currentData[2] = filtMatrix[2][1];
         currentData[1] = filtMatrix[1][1];
         currentData[0] = filtMatrix[0][1];
         end else begin
         currentData[2] = filtMatrix[2][2];
         currentData[1] = filtMatrix[1][2];
         currentData[0] = filtMatrix[0][2];
         end
     end
    end
    
    logic [6:0] outputAddr;
    logic [1:0] counter;
    always_ff @ (posedge clk) begin
        if(rAddr == 21) begin outputAddr <= 0; counter <= 0; end
        else if (outputAddr == 15) outputAddr <= outputAddr;
        else if (finished != 0) outputAddr <= outputAddr + 1;
        else if (counter %2 ==0 && counter != 0 ) begin outputAddr <= outputAddr + 1; counter <= 0; end
        else if (processingOddState) begin outputAddr <= outputAddr; counter <= 0; end
        else counter <= counter +1;
    end
    
endmodule


module connector_testbench();
    logic clk, reset, newImage;
    logic [15:0] inputPixel;
    logic acceptData; 
    connector dut (.*);
    
    int inputData [0:80];
    
    // Set up a simulated clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clk <= 0;
		forever #(CLOCK_PERIOD/2) clk <= ~clk; // Forever toggle the clock
	end
	
	integer i,j;
	
	initial begin
	inputData = {0,1,2,3,4,5,6,7,
                    8,9,10,11,12,13,14,15,
                    16,17,18,19,20,21,22,23,
                    24,25,26,27,28,29,30,31,
                    32,33,34,35,36,37,38,39,
                    40,41,42,43,44,45,46,47,
                    48,49,50,51,52,53,54,55,
                    56,57,58,59,60,61,62,63,
                    64,65,66,67,68,69,70,71,
                    72,73,74,75,76,77,78,79,80
                     };
	reset <= 1; newImage <= 0;                 @(posedge clk);
    reset <= 0;   
    for(int i =0; i < 64; i++) begin
           reset<=0; inputPixel <= inputData[i]; @(posedge clk);
    end

	                   repeat(100) @(posedge clk);@(posedge clk);
    newImage <= 1;                             @(posedge clk);
	$stop; // End the simulation.
	end
endmodule 

