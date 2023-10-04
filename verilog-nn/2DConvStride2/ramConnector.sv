`timescale 1ns / 1ps

module ramConnector(
    input logic clk,
    input logic reset,
    input logic signed [15:0] inputPixel,
//    output logic signed [15:0] outputMatrix [127:0],
      output logic signed [15:0] overallOut [15:0]
    );
    logic [9:0] wAddr, rAddr1, rAddr2, rAddr3;
    logic [15:0] rData1, rData2, rData3;
    logic [9:0] rAddrMin;
    //logic writing1Active, reading1Active, writing2Active, reading2Active;
    logic validToWrite, validToRead;
    logic validData;
    logic delay;
    
    
//    assign writing1Active = (wAddr > 0 && wAddr < 81);
//    assign writing2Active = (wAddr > 81 && wAddr <= 161);
//    assign reading1Active = (rAddr1 > 0 && rAddr1 < 81);
//    assign reading2Active = (rAddr1 > 81 && rAddr1 <= 161);
    
    ramWriter writer (.clk, .reset, .validData(1'b1), .rAddr(rAddr1), .wAddr, .validToWrite, .validToRead);
    
    readController reader (.clk, .reset, .validToRead, .rAddr1, .rAddr2, .rAddr3, .delay);
    
    rams_tdp_rf_rf RAM1 (.clka(clk),.clkb(clk),.ena(1'b1),.enb(1'b1),.wea(validToWrite),.web(1'b0),.addra(wAddr),
                        .addrb(rAddr1),.dia(inputPixel),.dib(16'bx),.doa(),.dob(rData1));
    rams_tdp_rf_rf RAM2 (.clka(clk),.clkb(clk),.ena(1'b1),.enb(1'b1),.wea(validToWrite),.web(1'b0),.addra(wAddr),
                        .addrb(rAddr2),.dia(inputPixel),.dib(16'bx),.doa(),.dob(rData2));
    rams_tdp_rf_rf RAM3 (.clka(clk),.clkb(clk),.ena(1'b1),.enb(1'b1),.wea(validToWrite),.web(1'b0),.addra(wAddr),
                        .addrb(rAddr3),.dia(inputPixel),.dib(16'bx),.doa(),.dob(rData3));
  
//   logic signed [15:0] tempOutput [7:0];
   logic signed [15:0] reluOutput [7:0];
   logic valid;
   logic delayValidToRead, delayValidToReadTwice;
   always_ff@(posedge clk) begin
    if(reset) delayValidToRead <= 0;
    else delayValidToRead <= validToRead;
    
    if(reset) delayValidToReadTwice <= 0;
    else delayValidToReadTwice <= delayValidToRead;
   end
   
   genvar i; 
   generate 
    for(i = 0; i <8; i++) begin
    threeStageDense denseTest (.clock(clk),. reset, .inputData({rData1, rData2, rData3}),.weights({16'b1, 16'b1, 16'b1}),
                            .outputData(reluOutput[i]),.valid, .start(delayValidToRead), .rAddr(rAddr1), .delay, .index(i));
    end
   endgenerate               
    logic [4:0] outputCounter;         
    always_ff @(posedge clk) begin
        if(reset) outputCounter <= 0;
        else if(delayTemp) if(outputCounter == 17) outputCounter <= 0;
                        else outputCounter <= outputCounter + 1;
        else if((rAddr1 == 81&&delayThree) || rAddr1 ==0) outputCounter <= 0;
    end   
    logic delayTemp, delayTwice, delayThree;
    always_ff @(posedge clk) begin 
        if(reset) delayTemp <= 0;
        else delayTemp <= delay;
        delayTwice <= delayTemp;
        delayThree <= delayTwice;
    end
     
     logic [9:0] prevAddr1, prevAddr2;
     
     always_ff @(posedge clk) begin
        prevAddr1 <= rAddr1;
        prevAddr2 <= prevAddr1;
     end
     
     logic signed [15:0] test [7:0];
     logic signed [15:0] temp [7:0];
     logic delayTempContinue;
     enum {waiting, one, two ,three} ps, ns;
     always_comb begin
        case(ps) 
            waiting: if(delayTemp) ns = two; else ns = waiting;
            one: if(validOut[0]) ns = waiting; else ns = two;
            two: if(validOut[0]) ns = waiting; else ns = three;
            three: if(validOut[0]) ns = waiting; else ns = one;
        endcase
     end
     
     always_ff@(posedge clk) begin
        if(reset) ps <= waiting;
        else ps <= ns;
     end
     assign delayTempContinue = (ps==one);
    
    always_ff @(posedge clk) begin
    if(rAddr1 == 0 && prevAddr1 != 0) begin
        temp[0] <= reluOutput[0];
        temp[1] <= reluOutput[1];
        temp[2] <= reluOutput[2];
        temp[3] <= reluOutput[3];
        temp[4] <= reluOutput[4];
        temp[5] <= reluOutput[5];
        temp[6] <= reluOutput[6];
        temp[7] <= reluOutput[7];
    end
    else if((delayTemp || (delayTempContinue))) begin
        if(rAddr1 == 0) begin 
        test[0] <= temp[0];
        test[1] <= temp[1];
        test[2] <= temp[2];
        test[3] <= temp[3];
        test[4] <= temp[4];
        test[5] <= temp[5];
        test[6] <= temp[6];
        test[7] <= temp[7];
        end else begin
        test[0] <= reluOutput[0];
        test[1] <= reluOutput[1];
        test[2] <= reluOutput[2];
        test[3] <= reluOutput[3];
        test[4] <= reluOutput[4];
        test[5] <= reluOutput[5];
        test[6] <= reluOutput[6];
        test[7] <= reluOutput[7];
        end
    end
    end 
    
    logic [4:0] counter1, counter2, counter3, counter4;
    logic oscillator;
    
    always_ff @(posedge clk) begin
        if(outputCounter ==0 && counter1 == 15 && oscillator) begin counter1 <= 5'd15; oscillator <= 0;end
        else begin counter1 <= outputCounter; oscillator <= 1; end
        
        counter2 <= counter1;
        counter3 <= counter2;
        counter4 <= counter3;
    end
    
    logic signed [15:0] currentData [2:0];
    logic [15:0] first, second, third;
    logic [15:0] validOut;
    logic signed [15:0] outputData [15:0]; logic nextFirst;
   genvar j; 
   generate 
    for(j = 0; j <16; j++) begin
    denseOptimized #(j) newDense (.clk(clk), .reset(reset),.outputCounter(outputCounter),.currentData(currentData),.delayTwice(delayThree),
                            .delayValidToReadTwice(delayValidToReadTwice),.bias(data16_10::dlBiases[15-j]),
                            .firstSignal(first[j]), .secondSignal(second[j]), .thirdSignal(third[j]), .delayTemp(delayTemp), .rAddr(prevAddr1),
                            .finished(counter2 == 0), .counter2(counter3), .valid(validOut[j]), .outputSum(outputData[j]));
    end
   endgenerate    
 
   int k;
   always_ff@(posedge clk) begin
    if(validOut[0])begin
        for(k = 0; k < 16; k ++) begin
            if(outputData[k][15] ==1) overallOut[k] <= 0;
           else  overallOut[k] <= outputData[k];
        end
    end
   end
//    denseOptimized newDense (.clk(clk), .reset(reset),.outputCounter(outputCounter),.currentData(currentData),.delayTwice(delayThree),
//                            .delayValidToReadTwice(delayValidToReadTwice),.bias(data16_10::dlBiases[0]),
//                            .firstSignal(first), .secondSignal(second), .thirdSignal(third), .delayTemp(delayTemp), .rAddr(prevAddr1),
//                            .finished(counter2 == 0), .counter2(counter3));
     
     always_comb begin
        if(first[0]) begin
            currentData[0] = test[0];
            currentData[1] = test[1];
            currentData[2] = test[2];
        end else if (second[0]) begin
            currentData[0] = test[3];
            currentData[1] = test[4];
            currentData[2] = test[5];
        end else if (third[0]) begin
          currentData[0] = test[6];
          currentData[1] = test[7];
        end
     end                       
                
    
endmodule



module ramConnector_testbench();
    logic clk, reset, newImage;
    logic signed [15:0] inputPixel;
    logic acceptData; 
    logic signed [15:0] outputMatrix [127:0];
    ramConnector dut (.*);
    
    int inputData [0:107];
    
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
                    72,73,74,75,76,77,78,79,80,
                    81,82,83,84,85,86,87,88,89,
                    90,91,92,93,94,95,96,97,98,
                    99,0,0,0,0,0,0,0,0
                     };
	reset <= 1;                @(posedge clk);
    reset <= 0;                @(posedge clk);
    for(int i =0; i < 100; i++) begin
           reset<=0; //inputPixel <= inputData[i]; @(posedge clk);
           inputPixel <= 1;
    end

	                   repeat(150) @(posedge clk);@(posedge clk);
                                 @(posedge clk);
	$stop; // End the simulation.
	end
endmodule 
