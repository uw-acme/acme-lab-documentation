`timescale 1ns / 1ps

module softmaxParameterized # (parameter N=10, WORD_SIZE=16, NUM_OF_WORDS=10, NFRAC=10) (
    input logic signed [WORD_SIZE-1:0] dataIn [N-1:0],
    input logic clk,
    output logic signed [WORD_SIZE-1:0] dataOut [N-1:0]
    );
    logic signed [2*N-1:0] exp_table [2**N-1:0];
    logic signed [2*N-1:0] invert_table [2**N-1:0]; // the tables are 1024 values of 20 bit numbers
    logic signed [WORD_SIZE-1:0] dataIn1 [N-1:0];
    localparam MEM_WIDTH = 10;
    logic signed [2*MEM_WIDTH-1:0] tempSum;
    
    
    // Init tables
    initial begin
        $readmemh("C:/Users/stlp/Desktop/HLS_SOFTMAX_FILES/expTable20_10.txt", exp_table, 0, 2**MEM_WIDTH-1); // default table size
        $readmemh("C:/Users/stlp/Desktop/HLS_SOFTMAX_FILES/invertTable20_10.txt", invert_table, 0, 2**MEM_WIDTH-1); // default table size
    end
    logic signed [(20+(WORD_SIZE/2))-1:0] buffer [N-1:0]; // is size word_size + 11
    logic signed [2*MEM_WIDTH-1:0] expResult [N-1:0]; // was [2**MEM_WIDTH-1:0]
    logic signed [17:0] expSum; //idk
    logic signed [13:0] invertVal; //idk
    logic signed [N-1:0] lookupIndexes [10-1:0];
    logic [9:0] lookupIndex;
    logic [9:0] invertIndex; //idk
    always_comb begin
        //expSum = 0;
        for (int i = 0; i < NUM_OF_WORDS; i++) begin
            if(MEM_WIDTH == NFRAC) lookupIndex = dataIn[i][WORD_SIZE-1:WORD_SIZE-NFRAC]; // default : 15:5
            else if (MEM_WIDTH < NFRAC) lookupIndex = dataIn[i][17:8];//dataIn[i][WORD_SIZE-2:WORD_SIZE-MEM_WIDTH-1]; // top 10 bits
            else begin
                if(WORD_SIZE < MEM_WIDTH) lookupIndex = dataIn[i][WORD_SIZE-1];//{dataIn[i][WORD_SIZE-1:0], {(MEM_WIDTH - WORD_SIZE){'0}}};
                else lookupIndex = dataIn[i][WORD_SIZE-1:WORD_SIZE-MEM_WIDTH];//{dataIn1[i][WORD_SIZE-1:WORD_SIZE-NFRAC], {(MEM_WIDTH-NFRAC){'0}}}; // too small,fill with zeros at the end, NEED TO CHECK
            end
            lookupIndexes[i] = lookupIndex;
            expResult[i] = exp_table[lookupIndex];
           // expSum = expSum + expResult[i];
        end
    end
    
    adderTree_1D #(32, 2*MEM_WIDTH, NUM_OF_WORDS) add (.clk,.input_data(expResult),.output_data(tempSum));

    assign  invertIndex = tempSum[17:8]; ///always the same
    
    assign  invertVal = invert_table[invertIndex];
    
    //CHANGED
//    always_ff @(posedge clk) begin
//        for(int i=0; i<N; i++) begin
//            buffer[i] <= invertVal * expResult[i];
//        end
//    end
        
    genvar i;
        generate
            for(i=0; i<N; i++)begin
                mult_op_wrap #(.din_WIDTH       ( 2*MEM_WIDTH      ),
                               .dweight_WIDTH   ( 14        ),
                               .dout_WIDTH      ( 20+(WORD_SIZE/2))
                               ) mow(
                            .clk,
                            .reset  ( '0            ),
                            .ce     ( '1            ), // constant enable
                            .din    ( expResult[i]      ),
                            .dweight( invertVal  ),
                            .dout   ( buffer[i]  )
                        );    
        end
    endgenerate
    
    always_ff @(posedge clk) begin
        for(int i=0; i<N; i++) begin
            dataOut[i] <= buffer[i][(20+(WORD_SIZE/2))-1:(20+(WORD_SIZE/2))-WORD_SIZE]; //25:10 for 16 bits, 26:9 for 18 bits //24:11 for 14 bits //23:12 for 12 bits //21:14 for 8 bits
            // 16 + 9, 18 + 8, 14 + 10
        end
    end
endmodule

//module softmax_testbench();
//    logic signed[15:0] dataIn [0:9];
//    logic signed [15:0] dataOut [0:9];
//    logic clk;
    
//    parameter CLOCK_PERIOD = 100;
//    initial begin
//		clk <= 0;
//		forever #(CLOCK_PERIOD/2) clk <= ~clk;
//	end
    
//    softmaxFunction2 sf(.dataIn(dataIn), .clk(clk), .dataOut(dataOut));
//    initial begin
//        dataIn = { 16'h00c4,
//16'hff5b,
//16'h00d6,
//16'h00ea,
//16'hfe09,
//                 16'hfed9,
//16'hff29,16'h0145,
//16'hff0c, 
//16'hfec1}; @(posedge clk);
//        @(posedge clk);
//        @(posedge clk);
//        @(posedge clk);
//        @(posedge clk);
//        @(posedge clk);
//        $stop;
//    end
//endmodule