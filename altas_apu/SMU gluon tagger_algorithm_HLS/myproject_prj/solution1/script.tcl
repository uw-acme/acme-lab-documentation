############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project myproject_prj
set_top myproject
add_files firmware/myproject.cpp -cflags "-std=c++0x"
add_files -tb tb_data -cflags "-Wno-unknown-pragmas"
add_files -tb firmware/weights -cflags "-Wno-unknown-pragmas"
add_files -tb myproject_test.cpp -cflags "-std=c++0x -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xcvu9p-flgb2104-2L-e}
create_clock -period 5 -name default
config_array_partition -maximum_size 4096
config_compile -name_max_length 60
#source "./myproject_prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format sysgen
