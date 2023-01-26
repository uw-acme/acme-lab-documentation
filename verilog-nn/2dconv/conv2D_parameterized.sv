// This module does the bulk of the convolution work. It goes through and takes the inputs from the input matrix
// once every clock cycle. It creates a matrix that holds the values that are currently being used for the 
// convolution and after each clock cycle, the values that are removed from that matrix go in to a buffer
// for all but the top row as they will be used again.
`timescale 1ns / 1ps
module conv2D_parameterized 
#(parameter filtDimension = 3,parameter bitWidth = 16, parameter inputWidth = 8)
(clock, reset, inputPixel, zeroedMatrix);
	input logic clock, reset;
	input logic signed [bitWidth-1:0] inputPixel;
	
	logic signed [bitWidth-1:0] currentConvMatrix [filtDimension-1:0][filtDimension-1:0];
	logic signed [bitWidth-1:0] outputFifo [filtDimension-1:0];
	logic [filtDimension-1:0] counterX;
	logic [filtDimension-1:0] counterY;
	logic [2*filtDimension-1:0] initialCounter;
	
	output logic signed [bitWidth-1:0] zeroedMatrix [filtDimension-1:0][filtDimension-1:0];
	
	logic signed [bitWidth-1:0] zeroedMatrixCopy [filtDimension-1:0][filtDimension-1:0];
	
	// control counters
	// allows to know which row and column should be brought into bottom right
	// spot of the matrix
	always_ff @(posedge clock) begin
		if(reset) begin
			counterX <= '0;
			counterY <= '0;
			initialCounter <= 0;
		end else begin
		    if(initialCounter == inputWidth+1) begin
                counterY <= counterY + 1'b1;
                if(counterY == inputWidth-1) begin // if reaches end of row go to next column
                counterX <= counterX + 1'b1;
                end
            end else begin
                initialCounter <= initialCounter + 1'b1;
            end
   		end
	end
	
	integer x,y;
	// shift values
    always_ff @(posedge clock) begin
        for(x=0; x<filtDimension; x++) begin
            for(y=0; y<filtDimension; y++) begin
                if(reset) begin
                    currentConvMatrix[filtDimension-1][filtDimension-1] <= inputPixel;
                end else begin
                        // move in value from buffer
                        if(y==filtDimension-1 && x!= filtDimension -1)begin
                            currentConvMatrix[x][y] <= outputFifo[x];
                        end else if(x==filtDimension-1 && y==filtDimension-1) begin
                            // bringing in new value
                            currentConvMatrix[x][y] <= inputPixel;
                        end else begin
                            // shift normally
                            currentConvMatrix[x][y]<= currentConvMatrix[x][y+1];
                        end
                end
            end
        end
	end
		
	//put zeroes into 3x3 matrix
	integer a,b;
	always_comb begin
		for(a=0; a<filtDimension; a++) begin
			for(b=0; b<filtDimension; b++) begin
			    zeroedMatrix[a][b] = currentConvMatrix[a][b];
//				if(counterY == 0) begin
//				    zeroedMatrix[a][0] = 17'd0;
				if (counterY == inputWidth - 1) begin
				    zeroedMatrix[a][filtDimension-1] = 17'd0;
				end 
//				if(counterX == 0) begin
//				    zeroedMatrix[0][b] = 17'd0;
				if(counterX == inputWidth-1) begin
				    zeroedMatrix[filtDimension-1][b] = 17'd0;
				end
            end
		end
	end
	
	// create buffers to hold onto values as they are moved out of one row and into the row above
	// their previous one
	genvar i;
	generate 
	   for(i = 0; i<filtDimension-1; i++) begin: buffers
	       conv2dFIFO_parameterized #(filtDimension,bitWidth,inputWidth) bufferEachRow
	       (.inputData(currentConvMatrix[i+1][0]), .clock(clock), .outputData(outputFifo[i]));
	   end
	endgenerate
	
endmodule

module conv2D_parameterized_testbench();
	logic clock, reset;
	logic signed [15:0] zeroedMatrix[2:0][2:0];
    logic signed [15:0] inputPixel;
	
	conv2D_parameterized #(3,16,10) dut(.*);
	
	// Set up a simulated clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clock <= 0;
		forever #(CLOCK_PERIOD/2) clock <= ~clock; // Forever toggle the clock
	end
	integer i,j;
	
	initial begin
	reset <= 1; @(posedge clock);
	reset <= 0; 
	inputPixel = 16'd1;
	repeat(8) @(posedge clock);
	inputPixel = 16'd2; repeat(8) @(posedge clock);
	inputPixel = 16'd3; repeat(8) @(posedge clock);
	$stop; // End the simulation.
	end
endmodule 
	
	
	
	
	

