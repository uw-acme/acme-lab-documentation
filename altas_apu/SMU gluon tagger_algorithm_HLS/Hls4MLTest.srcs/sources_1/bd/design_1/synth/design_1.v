//Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2018.3 (lin64) Build 2405991 Thu Dec  6 23:36:41 MST 2018
//Date        : Tue Jul 20 18:01:38 2021
//Host        : gpu1.fondrenscience.smu.edu running 64-bit CentOS Linux release 7.8.2003 (Core)
//Command     : generate_target design_1.bd
//Design      : design_1
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "design_1,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=design_1,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=3,numReposBlks=3,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,da_board_cnt=2,da_clkrst_cnt=1,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "design_1.hwdef" *) 
module design_1
   (clk_100MHz,
    reset);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK_100MHZ CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK_100MHZ, CLK_DOMAIN design_1_clk_100MHz, FREQ_HZ 100000000, INSERT_VIP 0, PHASE 0.000" *) input clk_100MHz;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.RESET RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.RESET, INSERT_VIP 0, POLARITY ACTIVE_HIGH" *) input reset;

  wire clk_100MHz_1;
  wire clk_wiz_clk_out1;
  wire pcie3_7x_0_user_clk;
  wire reset_1;

  assign clk_100MHz_1 = clk_100MHz;
  assign reset_1 = reset;
  design_1_clk_wiz_0 clk_wiz
       (.clk_in1(clk_100MHz_1),
        .clk_out1(clk_wiz_clk_out1),
        .reset(reset_1));
  design_1_myproject_0_0 myproject_0
       (.ap_clk(pcie3_7x_0_user_clk),
        .ap_rst_n(1'b0),
        .ap_start(1'b0),
        .conv2d_input_V_data_0_V_TDATA({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .conv2d_input_V_data_0_V_TVALID(1'b0),
        .layer13_out_V_data_0_V_TREADY(1'b1),
        .layer13_out_V_data_1_V_TREADY(1'b1));
  design_1_pcie3_7x_0_0 pcie3_7x_0
       (.cfg_config_space_enable(1'b1),
        .cfg_ds_bus_number({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_ds_device_number({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_ds_function_number({1'b0,1'b0,1'b0}),
        .cfg_ds_port_number({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_dsn({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_err_cor_in(1'b0),
        .cfg_err_uncor_in(1'b0),
        .cfg_fc_sel({1'b0,1'b0,1'b0}),
        .cfg_flr_done({1'b0,1'b0}),
        .cfg_hot_reset_in(1'b0),
        .cfg_interrupt_int({1'b0,1'b0,1'b0,1'b0}),
        .cfg_interrupt_msi_attr({1'b0,1'b0,1'b0}),
        .cfg_interrupt_msi_function_number({1'b0,1'b0,1'b0}),
        .cfg_interrupt_msi_int({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_interrupt_msi_pending_status({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_interrupt_msi_select({1'b0,1'b0,1'b0,1'b0}),
        .cfg_interrupt_msi_tph_present(1'b0),
        .cfg_interrupt_msi_tph_st_tag({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_interrupt_msi_tph_type({1'b0,1'b0}),
        .cfg_interrupt_pending({1'b0,1'b0}),
        .cfg_link_training_enable(1'b1),
        .cfg_mgmt_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_mgmt_byte_enable({1'b0,1'b0,1'b0,1'b0}),
        .cfg_mgmt_read(1'b0),
        .cfg_mgmt_type1_cfg_reg_access(1'b0),
        .cfg_mgmt_write(1'b0),
        .cfg_mgmt_write_data({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_msg_transmit(1'b0),
        .cfg_msg_transmit_data({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .cfg_msg_transmit_type({1'b0,1'b0,1'b0}),
        .cfg_per_func_status_control({1'b0,1'b0,1'b0}),
        .cfg_per_function_number({1'b0,1'b0,1'b0}),
        .cfg_per_function_output_request(1'b0),
        .cfg_power_state_change_ack(1'b0),
        .cfg_req_pm_transition_l23_ready(1'b0),
        .cfg_subsys_vend_id({1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b0,1'b1,1'b1,1'b1,1'b0}),
        .cfg_vf_flr_done({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .m_axis_cq_tready(1'b1),
        .m_axis_rc_tready(1'b1),
        .pci_exp_rxn(1'b0),
        .pci_exp_rxp(1'b0),
        .pcie_cq_np_req(1'b1),
        .pipe_dclk_in(1'b0),
        .pipe_mmcm_lock_in(1'b1),
        .pipe_mmcm_rst_n(1'b1),
        .pipe_oobclk_in(1'b0),
        .pipe_pclk_in(1'b0),
        .pipe_rxoutclk_in(1'b0),
        .pipe_rxusrclk_in(1'b0),
        .pipe_userclk1_in(1'b0),
        .pipe_userclk2_in(1'b0),
        .s_axis_cc_tdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_cc_tkeep({1'b1,1'b1}),
        .s_axis_cc_tlast(1'b0),
        .s_axis_cc_tuser({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_cc_tvalid(1'b0),
        .s_axis_rq_tdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_rq_tkeep({1'b1,1'b1}),
        .s_axis_rq_tlast(1'b0),
        .s_axis_rq_tuser({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_rq_tvalid(1'b0),
        .sys_clk(clk_wiz_clk_out1),
        .sys_reset(1'b0),
        .user_clk(pcie3_7x_0_user_clk));
endmodule
