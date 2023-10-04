`timescale 1ns / 1ps

/* This file contains the shiftAdd multiplication method.
*/

localparam DEPTH = 3;       // # of terms in the shiftAdd operation

// Define integer array type
typedef integer signed int_array[DEPTH:0];

// Constant Function:
// This function returns the absolute value of an integer
function integer signed abs_value(input integer signed value);
    abs_value = value >= 0 ? value : -value;
endfunction

// Constant Function:
// Determines the next largest shift term and adds 1 to it.
// Returns zero if no shift-add term is needed.
function automatic integer signed determineOneShift(input integer signed number, input integer bits);
    integer n = bits;
    for (integer i = bits; i >= 0; i--) begin
        if (abs_value(abs_value(number) - 2**n) > abs_value(abs_value(number) - 2**i))
            n = i;
    end
    determineOneShift = number != 0 ? n+1 : 0;
endfunction

// Constant Function:
// Returns the number as well as the shift amounts in an array
function automatic int_array determineShifts(input integer signed number, input integer bits, input integer depth);
    for (integer i = 1; i <= depth; i++) begin
        // determine the shift amount + 1 and add it the output array
        integer n = determineOneShift(number, bits);

        // make sure the shift amount is positive if its meant to be added and negative if meant to be subtracted
        determineShifts[i] = number >= 0 ? n : -n; 

        // update the number
        if (number != 0) number = (number >= 0) ? number - 2**(n-1) : number + 2**(n-1);
    end
    
    // return the remainder of the number. If it is != 0 then the value was too complex
    determineShifts[0] = number;
endfunction

// The actual shiftAdd module
module shift_add_with_mult #(parameter signed WEIGHT  = 17'd1,
                   parameter        DEPTH   = 3,
                                    BITS    = 16,
                                    NFRAC   = 10
                   )(
    input logic                 clk,
    input logic [BITS-1:0]      data_in,
    output logic [BITS*2-1:0]   data_out
);
    localparam integer signed shift[DEPTH:0] = determineShifts(WEIGHT, BITS, DEPTH);
    logic signed [BITS*2-1:0]       data_in_ex;
    logic signed [BITS*2-1:0]       data_out_accum;
    logic signed [BITS+NFRAC-1:0]   data_out_tmp;
    
    assign data_in_ex = $signed(data_in);
    
    if (shift[0] == '0) begin
        always_comb begin
            // make data_out_tmp an accumulator
            data_out_tmp = '0;

            // iterate through the values and apply shifts and adds/subtracts 
            // importantly, skip any zeros (they represent a term that shouldn't exist)
            // subtracts 1 from shift amount to derive real shift amount
            for(integer i = 1; i <= DEPTH; i++) begin
                if      (shift[i] > 0) begin data_out_tmp = data_out_tmp + (data_in_ex << (shift[i] - 1));  end
                else if (shift[i] < 0) begin data_out_tmp = data_out_tmp - (data_in_ex << (abs_value(shift[i])-1)); end
            end
        end
        always_ff @(posedge clk) begin
            data_out <= $signed(data_out_tmp);
        end
        // if the number is too complex (i.e. the weight couldn't be turned into 2 shift terms)
        // either multiply with wrapper for niche cases with larger than DSP width ports and
        // a couple weight conditions
        // Otherwise just use a normal multiplier (likely to be done in LUTs)
    end else begin
        // muliplication warapper
        // if weight is small enough (in magnitude) it is not necessary to mutiply by
        // all of the bits since the lower bits contain all the information
        if (BITS > 18 && ((WEIGHT[BITS-1:17] == '1) || (WEIGHT[BITS-1:17] == '0))) begin
            mult_op_wrap #(.din_WIDTH       ( BITS      ),
                           .dweight_WIDTH   ( 18        ),
                           .dout_WIDTH      ( BITS+NFRAC)
                           ) mow(
                .clk,
                .reset  ( '0            ),
                .ce     ( '1            ), // constant enable
                .din    ( data_in       ),
                .dweight( WEIGHT[17:0]  ),
                .dout   ( data_out_tmp  )
            );
            assign data_out = $signed(data_out_tmp);
        
        // Use normal multiplication operator
        end else begin
            always_comb begin
                data_out_tmp = $signed(data_in) * $signed(WEIGHT);
            end
            always_ff @(posedge clk) begin
                data_out <= $signed(data_out_tmp);
            end
        end
    end

endmodule


`timescale 1 ns / 1 ps

/* Internal Multiplication module
*/
module mult_op (clk, ce, a, b, p);

parameter din_WIDTH     = 32'd1;
parameter dweight_WIDTH = 32'd1;
parameter dout_WIDTH    = 32'd1;

input clk;
input ce;
input[din_WIDTH-1 : 0]      a;
input[dweight_WIDTH-1 : 0]  b;
output[dout_WIDTH-1 : 0]    p;

reg signed  [din_WIDTH-1 : 0]     a_reg0;
reg signed  [dweight_WIDTH-1 : 0] b_reg0;
wire signed [dout_WIDTH-1 : 0]    tmp_product;
reg signed  [dout_WIDTH-1 : 0]    buff0;

assign p = buff0;
assign tmp_product = a_reg0 * b_reg0;

always @ (posedge clk) begin
    if (ce) begin
        a_reg0 <= a;
        b_reg0 <= b;
        buff0 <= tmp_product;
    end
end
endmodule



`timescale 1 ns / 1 ps

/* Wrapper for multiplication module
*/
module mult_op_wrap (
    clk,
    reset,
    ce,
    din,
    dweight,
    dout
);

parameter din_WIDTH     = 32'd1;
parameter dweight_WIDTH = 32'd1;
parameter dout_WIDTH    = 32'd1;
input clk;
input reset;
input ce;
input [din_WIDTH-1:0]       din;
input [dweight_WIDTH-1:0]   dweight;
output [dout_WIDTH-1:0]     dout;



mult_op #(.din_WIDTH    ( din_WIDTH     ),
          .dweight_WIDTH( dweight_WIDTH ),
          .dout_WIDTH   ( dout_WIDTH    )
    ) internal_operation (
    .clk( clk ),
    .ce( ce     ),
    .a( din     ),
    .b( dweight ),
    .p( dout    ));

endmodule








/*  ------------------------------------
    Testbench for shift-add module
    ------------------------------------
*/
module shift_add_tb();
    localparam WEIGHT = -17'd5,
               DEPTH  = 2,
               BITS   = 17,
               NFRAC  = 10;
    
    logic [BITS-1:0]   data_in;
    logic [2*BITS-1:0] data_out;
    
    shift_add #(.WEIGHT ( WEIGHT ),
                .DEPTH  ( DEPTH  ),
                .BITS   ( BITS   ),
                .NFRAC  ( NFRAC  )
    ) dut (.*);
    
    logic clk;
    localparam CLK_PERIOD = 10;
    
    initial begin
        clk <= '0;
        forever #(CLK_PERIOD/2) clk <= ~clk;
    end
    
    initial begin
        data_in = 17'd5; repeat(3) @(posedge clk);
        $stop;
    end
    
endmodule
