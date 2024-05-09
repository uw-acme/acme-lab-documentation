# DNN APU

This repository contains a sample Algorithm Processing Unit (APU) that deploys a deep neural network (DNN). The DNN model is generated following `hls4ml` tutorial 1.

## Overview

- `DNN_APU.sv`: This is the top-level module for the APU.
- `DNN_MODEL`: This directory contains the deep neural network model, which serves as a submodule of the APU.

## Integration Instructions

Before synthesis, it's necessary to include the algorithm's Verilog representation in the project. Remember to modify the I/O names in the Verilog code to ensure they match with those in your project configuration.

### Example Verilog Integration

```verilog
// Algorithm from hls4ml
myproject hls4ml(
    .ap_clk(clk),
    .ap_rst(reset),
    .ap_start(en_d1),
    .ap_done(),
    .ap_idle(),
    .ap_ready(),
    .fc1_input_V_ap_vld(en_d1),
    .fc1_input_V({rd_data1,rd_data2}),
    .layer13_out_0_V(hlsOut[15:0]),
    .layer13_out_0_V_ap_vld(),
    .layer13_out_1_V(hlsOut[31:16]),
    .layer13_out_1_V_ap_vld(),
    .layer13_out_2_V(hlsOut[47:32]),
    .layer13_out_2_V_ap_vld(),
    .layer13_out_3_V(hlsOut[63:48]),
    .layer13_out_3_V_ap_vld(),
    .layer13_out_4_V(hlsOut[79:64]),
    .layer13_out_4_V_ap_vld(),
    .const_size_in_1(),
    .const_size_in_1_ap_vld(),
    .const_size_out_1(),
    .const_size_out_1_ap_vld()
);
assign hlsOut[127:80] = 48'd0;
