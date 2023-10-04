`timescale 1ns / 1ps

module ramController(
    input logic clk, 
    input logic reset, 
    input logic newImage,
    output logic [6:0] wAddr, 
    output logic [6:0] rAddr,
    output logic acceptData,
    output logic delay,
    output logic switchColumn,
    output logic [3:0] finished,
    output logic processingOddState
    );
    
    
    logic evenRow;
    logic [3:0] countRows;
    logic [2:0] internalCount;
    logic oscillator;
    
   
    
    // when to accept data --> handshake signals
    always_comb begin
        if(reset || newImage) acceptData = 1;
        else if (wAddr >= 72) acceptData = 0;
        else if ((wAddr+1) % 9 == 0 && wAddr != 0) acceptData = 0;
        else acceptData = 1;
    end
    
    always_ff @(posedge clk) begin
        if(reset || newImage) internalCount <= 0;
        else if (ps == delayEven & ns == processingEven1) internalCount <= internalCount + 1;
        else if (ps == processingOdd && ns == processingEven1) internalCount <= 0;
    end
    
    enum { start, initialReads, processingEven1, processingEven2, delayEven, processingOdd, processingOddTemp, finished1,
            finished2, finished3} ps, ns;
    
    always_comb begin
        case (ps)
        start: if(wAddr < 1 ) ns = start;
               else           ns = initialReads;
        initialReads: if(rAddr == 19) ns = processingEven1;
                      else ns = initialReads; 
        processingEven1: ns = processingEven2;
        processingEven2: if  (internalCount == 4) ns = processingOdd;
                         else ns = delayEven;
        delayEven:  if(countRows == 9) ns = finished1;
                    else if  (internalCount == 4) ns = processingOdd;
                    else if(evenRow) ns = processingEven1;
                   else ns = processingOddTemp;
        processingOddTemp: ns = processingOdd;
        processingOdd:  if(countRows == 9) ns = finished1;
                        else if(evenRow) ns = processingEven1;
                        else ns = processingOdd;
        finished1: ns = finished2;
        finished2: ns = finished3;
        finished3: if(newImage) ns = initialReads;
                  else ns = finished3;
        endcase  
    end
    
    
    always_ff @(posedge clk) begin
        case (ps)
        start: rAddr <= 0;
        initialReads: rAddr <= rAddr +1;
        processingEven1: rAddr <= rAddr +1;
        processingEven2: if(rAddr<80)rAddr <= rAddr +1;
        delayEven: rAddr <= rAddr;
        processingOdd: if(rAddr<80)rAddr <= rAddr +1;
        processingOddTemp: rAddr <= rAddr +1;
        finished: rAddr <= rAddr;
        endcase  
        
        if(reset) ps <= start;
        else ps <= ns;
    end    
    
    assign delay = (ps == delayEven || ps == finished);
    logic [6:0] prevAddr1;
    
    always_ff @(posedge clk) begin
        prevAddr1 <= rAddr;
    end
    
     // handles writing data
    always_ff @(posedge clk) begin
        if(reset) oscillator <= 0;
        else oscillator <= oscillator + 1;
        if(reset || newImage) wAddr <= 0;
        else if (wAddr < 80) wAddr <= wAddr+1;
        
        // toggle even row
        if(reset || newImage) begin evenRow <= 1; countRows <= 0; end
        else if((prevAddr1 +1) % 9 == 0 &&  prevAddr1 != rAddr && ps != finished && ns != finished) begin  evenRow <= evenRow + 1; countRows <= countRows +1; end
    end
    
    //assign switchColumn = (ps == processingEven2)|| (ps ==processingOdd && ns == processingOdd) ;
    always_ff @(posedge clk) begin
        if(ps == processingOdd || ps == processingOddTemp) switchColumn <= 1;
        else if (ns == processingEven2) switchColumn <=1;
        else switchColumn <=0;
    
    
    end
    
    assign finished = {1'b0, ns==finished3, ns==finished2, ns==finished1};
    assign processingOddState = (ns==processingOdd);
endmodule

module ramController_testbench();
    logic clk, reset, newImage;
    logic [6:0] wAddr;
    logic [6:0] rAddr;
    logic acceptData;
    logic delay; 
    ramController dut (.*);
    
    // Set up a simulated clock.
	parameter CLOCK_PERIOD=100;
	initial begin
		clk <= 0;
		forever #(CLOCK_PERIOD/2) clk <= ~clk; // Forever toggle the clock
	end
	
	integer i,j;
	
	initial begin
	reset <= 1; newImage <= 0;                 @(posedge clk);
    reset <= 0;                      repeat(3) @(posedge clk);
                                    repeat(99) @(posedge clk);
    newImage <= 1;                             @(posedge clk);
	$stop; // End the simulation.
	end
endmodule 
