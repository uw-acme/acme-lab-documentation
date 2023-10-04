// Dual-Port Block RAM with Two Write Ports

// File: rams_tdp_rf_rf.v

module rams_tdp_rf_rf (clka,clkb,ena,enb,wea,web,addra,addrb,dia,dib,doa,dob);

input clka,clkb,ena,enb,wea,web;

input [9:0] addra,addrb;

input [15:0] dia,dib;

output [15:0] doa,dob;



reg [15:0] ram [161:0];

reg [15:0] doa,dob;

integer i;

initial for (i=0; i<162; i=i+1) ram[i] = 0;


always @(posedge clka) begin

if (ena)

begin

if (wea)

ram[addra] <= dia;

doa <= ram[addra];

end

end

always @(posedge clkb)

begin

if (enb)

begin

if (web)

ram[addrb] <= dib;

dob <= ram[addrb];

end

end

//integer i;
//always @(posedge clka) begin
//    for(i = 0; i <81; i= i +1) begin
//        if( (i + 1) % 9 == 0 )begin 
//            ram[i] <= 0;
//        end else if (i >= 72 && i <= 81) begin
//            ram[i] <= 0;
//        end
//    end
//    for(i = 81; i <162; i= i +1) begin
//        if( (i + 1) % 9 == 0 )begin 
//            ram[i] <= 0;
//        end else if (i >= 153 && i <= 161) begin
//            ram[i] <= 0;
//        end
//    end
//end


endmodule