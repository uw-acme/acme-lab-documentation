`timescale 1ns / 1ps

module readController(
    input logic clk,
    input logic reset,
    input logic validToRead,
    output logic [9:0] rAddr1,
    output logic [9:0] rAddr2,
    output logic [9:0] rAddr3,
    output logic delay
    );
    
    logic oscillator;
    always_ff @(posedge clk) begin
        if(reset) begin
            rAddr1 <= 0;
            oscillator <= 0; delay <= 0;
        end else if (validToRead) begin
            if( rAddr1 == 62) begin
                rAddr1 <= 81; delay <= 0;
            end else if( rAddr1 == 143) begin
                rAddr1 <= 0; delay <= 0;
            end else if((rAddr1+1) % 9 ==0) begin
                    rAddr1 <= ((rAddr1 + 1) + 9); delay <= 1;
            end else if((rAddr1) % 9 == 2 || (rAddr1) % 9 == 4 || (rAddr1 ) % 9 == 6) begin
                if(oscillator) begin rAddr1 <= rAddr1 + 1; delay <= 0; end
                else begin rAddr1 <= rAddr1; oscillator <= oscillator + 1; delay <= 1; end
            end else begin
                rAddr1 <= rAddr1 + 1;
                oscillator <= 0; delay <= 0;
            end
        end
    end
    
    assign rAddr2 =  rAddr1 + 9;
    assign rAddr3 = rAddr2 + 9;
    
endmodule

module readController_testbench();
	logic clk, reset;
	logic [8:0] rAddr1, rAddr2, rAddr3;
	logic validToRead;
	
	readController dut (.*);
	
	parameter CLK_Period = 100;
	initial begin
		clk <= 1'b0;
		forever #(CLK_Period/2) clk <= ~clk;
	end
	
	initial begin
		reset <= 1; validToRead <= 0;@(posedge clk);
		reset <= 0;                  @(posedge clk);
		validToRead <= 1; repeat(81) @(posedge clk);
		validToRead <= 0;            @(posedge clk);
		validToRead <= 1; repeat(100)@(posedge clk);
	$stop;
	end
endmodule
