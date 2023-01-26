`timescale 1ns / 1ps
/* This file contains the shiftAdd multiplication method.
*/

localparam DEPTH = 2;       // # of terms in the shiftAdd operation

// Define integer array type
typedef integer signed int_array[DEPTH:0];

// Constant Function:
// This function returns the absolute value of an integer
function integer signed abs_value(integer signed value);
    abs_value = value >= 0 ? value : -value;
endfunction

// Constant Function:
// Determines the next largest shift term and adds 1 to it.
// Returns zero if no shift-add term is needed.
function automatic integer signed determineOneShift(integer signed number, integer bits);
    integer n = bits;
    for (integer i = bits; i >= 0; i--) begin
        if (abs_value(abs_value(number) - 2**n) > abs_value(abs_value(number) - 2**i))
            n = i;
    end
    determineOneShift = number != 0 ? n+1 : 0;
endfunction

// Constant Function:
// Returns the number as well as the shift amounts in an array
function automatic int_array determineShifts(integer signed number, integer bits, integer depth);
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
module shift_add #(WEIGHT = 16'd1, DEPTH = 2, BITS = 17)(
    input logic signed [BITS-1:0] data_in,
    output logic signed [BITS*2-1:0] data_out
);
    integer signed shift[DEPTH:0] = determineShifts(WEIGHT, BITS, DEPTH);
    logic signed data_out_t;

    always_comb begin
        // make data_out an accumulator
        data_out = '0;

        // iterate through the values and apply shifts and adds/subtracts 
        // importantly, skip any zeros (they represent a term that shouldn't exist)
        // subtracts 1 from shift amount to derive real shift amount
        if (shift[0] == '0) begin
            for(integer i = 1; i <= DEPTH; i++) begin
                if      (shift[i] > 0) begin data_out = data_out + (data_in << shift[i] - 1);  end
                else if (shift[i] < 0) begin data_out = data_out - (data_in << (abs_value(shift[i])-1)); end
            end
        end

        // if the number is too complex (i.e. the weight couldn't be turned into 2 shift terms)
        else begin
            data_out = data_in * WEIGHT;
        end
    end
endmodule