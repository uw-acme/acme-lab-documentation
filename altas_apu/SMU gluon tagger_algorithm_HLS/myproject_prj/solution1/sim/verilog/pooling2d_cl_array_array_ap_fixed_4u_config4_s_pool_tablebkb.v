// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
(* rom_style = "distributed" *) module pooling2d_cl_array_array_ap_fixed_4u_config4_s_pool_tablebkb_rom (
addr0, ce0, q0, clk);

parameter DWIDTH = 1;
parameter AWIDTH = 5;
parameter MEM_SIZE = 28;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input clk;

(* ram_style = "distributed" *)reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];

initial begin
    $readmemh("./pooling2d_cl_array_array_ap_fixed_4u_config4_s_pool_tablebkb_rom.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[addr0];
    end
end



endmodule

`timescale 1 ns / 1 ps
module pooling2d_cl_array_array_ap_fixed_4u_config4_s_pool_tablebkb(
    reset,
    clk,
    address0,
    ce0,
    q0);

parameter DataWidth = 32'd1;
parameter AddressRange = 32'd28;
parameter AddressWidth = 32'd5;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;



pooling2d_cl_array_array_ap_fixed_4u_config4_s_pool_tablebkb_rom pooling2d_cl_array_array_ap_fixed_4u_config4_s_pool_tablebkb_rom_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ));

endmodule

