# Create a project (optional if running non-project mode)
# create_project waiz_benchmark ./vivado_proj -part xc7a200tsbg484-1

# --- Dense weights ---
read_verilog -sv "./pkg_sel.svh"
read_verilog -sv [glob ./weights/dense_*_weights_biases_pkgs/dense*.sv]
# --- Dense layer ---
read_verilog -sv "./verilog-modules/adderTree_p4.sv"
read_verilog -sv "./verilog-modules/adderTree.sv"
read_verilog -sv "./shift_add.sv"
read_verilog -sv "./denseLayer.sv"

# --- ReLU layer ---
read_verilog -sv "./verilog-modules/reluActivationLayer.sv"

# --- Softmax layer ---
read_verilog -sv "./verilog-modules/softmaxLayer.sv"

# --- Top level module ---
read_verilog -sv "./waiz_benchmark_top_level.sv"
read_verilog -sv "./waiz_benchmark.sv"

# (Optional) Testbench files (if you want synthesis, usually skip these)
# read_verilog -sv "./waiz_benchmark_tb.sv"

# --- Set top module ---
synth_design -top waiz_benchmark -part xc7vx690tffg1761-2

# --- Implementation flow ---
opt_design
place_design
route_design

# --- Reports ---
report_utilization -hierarchical -file reports/util_hier.rpt
report_timing_summary -file reports/timing_post_route.rpt
report_power -file reports/power_post_route.rpt

# --- Save design checkpoint for GUI inspection ---
write_checkpoint -force impl_final.dcp
