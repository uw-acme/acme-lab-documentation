// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pooling2d_cl_array_array_ap_fixed_4u_config4_s_HH_
#define _pooling2d_cl_array_array_ap_fixed_4u_config4_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pooling2d_cl_array_array_ap_fixed_4u_config4_s_pool_tablebkb.h"
#include "fifo_w16_d28_A.h"

namespace ap_rtl {

struct pooling2d_cl_array_array_ap_fixed_4u_config4_s : public sc_module {
    // Port declarations 34
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<16> > data_V_data_0_V_dout;
    sc_in< sc_logic > data_V_data_0_V_empty_n;
    sc_out< sc_logic > data_V_data_0_V_read;
    sc_in< sc_lv<16> > data_V_data_1_V_dout;
    sc_in< sc_logic > data_V_data_1_V_empty_n;
    sc_out< sc_logic > data_V_data_1_V_read;
    sc_in< sc_lv<16> > data_V_data_2_V_dout;
    sc_in< sc_logic > data_V_data_2_V_empty_n;
    sc_out< sc_logic > data_V_data_2_V_read;
    sc_in< sc_lv<16> > data_V_data_3_V_dout;
    sc_in< sc_logic > data_V_data_3_V_empty_n;
    sc_out< sc_logic > data_V_data_3_V_read;
    sc_out< sc_lv<16> > res_V_data_0_V_din;
    sc_in< sc_logic > res_V_data_0_V_full_n;
    sc_out< sc_logic > res_V_data_0_V_write;
    sc_out< sc_lv<16> > res_V_data_1_V_din;
    sc_in< sc_logic > res_V_data_1_V_full_n;
    sc_out< sc_logic > res_V_data_1_V_write;
    sc_out< sc_lv<16> > res_V_data_2_V_din;
    sc_in< sc_logic > res_V_data_2_V_full_n;
    sc_out< sc_logic > res_V_data_2_V_write;
    sc_out< sc_lv<16> > res_V_data_3_V_din;
    sc_in< sc_logic > res_V_data_3_V_full_n;
    sc_out< sc_logic > res_V_data_3_V_write;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    pooling2d_cl_array_array_ap_fixed_4u_config4_s(sc_module_name name);
    SC_HAS_PROCESS(pooling2d_cl_array_array_ap_fixed_4u_config4_s);

    ~pooling2d_cl_array_array_ap_fixed_4u_config4_s();

    sc_trace_file* mVcdFile;

    pooling2d_cl_array_array_ap_fixed_4u_config4_s_pool_tablebkb* pool_table_height23_U;
    pooling2d_cl_array_array_ap_fixed_4u_config4_s_pool_tablebkb* pool_table_width25_U;
    fifo_w16_d28_A* data_window_0_V_V_fifo_U;
    fifo_w16_d28_A* data_window_1_V_V_fifo_U;
    fifo_w16_d28_A* data_window_2_V_V_fifo_U;
    fifo_w16_d28_A* data_window_3_V_V_fifo_U;
    fifo_w16_d28_A* data_window_4_V_V_fifo_U;
    fifo_w16_d28_A* data_window_5_V_V_fifo_U;
    fifo_w16_d28_A* data_window_6_V_V_fifo_U;
    fifo_w16_d28_A* data_window_7_V_V_fifo_U;
    fifo_w16_d28_A* data_window_8_V_V_fifo_U;
    fifo_w16_d28_A* data_window_9_V_V_fifo_U;
    fifo_w16_d28_A* data_window_10_V_V_fifo_U;
    fifo_w16_d28_A* data_window_11_V_V_fifo_U;
    fifo_w16_d28_A* data_window_12_V_V_fifo_U;
    fifo_w16_d28_A* data_window_13_V_V_fifo_U;
    fifo_w16_d28_A* data_window_14_V_V_fifo_U;
    fifo_w16_d28_A* data_window_15_V_V_fifo_U;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<5> > pool_table_height23_address0;
    sc_signal< sc_logic > pool_table_height23_ce0;
    sc_signal< sc_lv<1> > pool_table_height23_q0;
    sc_signal< sc_lv<5> > pool_table_width25_address0;
    sc_signal< sc_logic > pool_table_width25_ce0;
    sc_signal< sc_lv<1> > pool_table_width25_q0;
    sc_signal< sc_logic > data_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln142_reg_1143;
    sc_signal< sc_lv<1> > icmp_ln142_reg_1143_pp0_iter1_reg;
    sc_signal< sc_logic > data_V_data_1_V_blk_n;
    sc_signal< sc_logic > data_V_data_2_V_blk_n;
    sc_signal< sc_logic > data_V_data_3_V_blk_n;
    sc_signal< sc_logic > res_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<1> > icmp_ln879_reg_1180;
    sc_signal< sc_lv<1> > icmp_ln879_reg_1180_pp0_iter3_reg;
    sc_signal< sc_logic > res_V_data_1_V_blk_n;
    sc_signal< sc_logic > res_V_data_2_V_blk_n;
    sc_signal< sc_logic > res_V_data_3_V_blk_n;
    sc_signal< sc_lv<10> > indvar_flatten_reg_746;
    sc_signal< sc_lv<5> > h_idx_assign_reg_757;
    sc_signal< sc_lv<5> > wp_idx_reg_768;
    sc_signal< sc_lv<1> > icmp_ln142_fu_779_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< sc_logic > io_acc_block_signal_op95;
    sc_signal< sc_logic > data_window_2_V_V_full_n;
    sc_signal< sc_logic > data_window_2_V_V_write;
    sc_signal< sc_lv<2> > or_ln_reg_1172;
    sc_signal< sc_logic > data_window_1_V_V_full_n;
    sc_signal< sc_logic > data_window_1_V_V_write;
    sc_signal< sc_logic > data_window_0_V_V_full_n;
    sc_signal< sc_logic > data_window_0_V_V_write;
    sc_signal< sc_logic > data_window_3_V_V_full_n;
    sc_signal< sc_logic > data_window_3_V_V_write;
    sc_signal< sc_logic > data_window_6_V_V_full_n;
    sc_signal< sc_logic > data_window_6_V_V_write;
    sc_signal< sc_logic > data_window_5_V_V_full_n;
    sc_signal< sc_logic > data_window_5_V_V_write;
    sc_signal< sc_logic > data_window_4_V_V_full_n;
    sc_signal< sc_logic > data_window_4_V_V_write;
    sc_signal< sc_logic > data_window_7_V_V_full_n;
    sc_signal< sc_logic > data_window_7_V_V_write;
    sc_signal< sc_logic > data_window_10_V_V_full_n;
    sc_signal< sc_logic > data_window_10_V_V_write;
    sc_signal< sc_lv<4> > or_ln1_reg_1176;
    sc_signal< sc_logic > data_window_9_V_V_full_n;
    sc_signal< sc_logic > data_window_9_V_V_write;
    sc_signal< sc_logic > data_window_8_V_V_full_n;
    sc_signal< sc_logic > data_window_8_V_V_write;
    sc_signal< sc_logic > data_window_11_V_V_full_n;
    sc_signal< sc_logic > data_window_11_V_V_write;
    sc_signal< bool > ap_predicate_op122_write_state4;
    sc_signal< sc_logic > data_window_14_V_V_full_n;
    sc_signal< sc_logic > data_window_14_V_V_write;
    sc_signal< sc_logic > data_window_13_V_V_full_n;
    sc_signal< sc_logic > data_window_13_V_V_write;
    sc_signal< sc_logic > data_window_12_V_V_full_n;
    sc_signal< sc_logic > data_window_12_V_V_write;
    sc_signal< sc_logic > data_window_15_V_V_full_n;
    sc_signal< sc_logic > data_window_15_V_V_write;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< sc_lv<16> > data_window_0_V_V_dout;
    sc_signal< sc_logic > data_window_0_V_V_empty_n;
    sc_signal< sc_logic > data_window_0_V_V_read;
    sc_signal< sc_lv<1> > icmp_ln879_reg_1180_pp0_iter2_reg;
    sc_signal< sc_lv<16> > data_window_1_V_V_dout;
    sc_signal< sc_logic > data_window_1_V_V_empty_n;
    sc_signal< sc_logic > data_window_1_V_V_read;
    sc_signal< sc_lv<16> > data_window_2_V_V_dout;
    sc_signal< sc_logic > data_window_2_V_V_empty_n;
    sc_signal< sc_logic > data_window_2_V_V_read;
    sc_signal< sc_lv<16> > data_window_3_V_V_dout;
    sc_signal< sc_logic > data_window_3_V_V_empty_n;
    sc_signal< sc_logic > data_window_3_V_V_read;
    sc_signal< sc_lv<16> > data_window_4_V_V_dout;
    sc_signal< sc_logic > data_window_4_V_V_empty_n;
    sc_signal< sc_logic > data_window_4_V_V_read;
    sc_signal< sc_lv<16> > data_window_5_V_V_dout;
    sc_signal< sc_logic > data_window_5_V_V_empty_n;
    sc_signal< sc_logic > data_window_5_V_V_read;
    sc_signal< sc_lv<16> > data_window_6_V_V_dout;
    sc_signal< sc_logic > data_window_6_V_V_empty_n;
    sc_signal< sc_logic > data_window_6_V_V_read;
    sc_signal< sc_lv<16> > data_window_7_V_V_dout;
    sc_signal< sc_logic > data_window_7_V_V_empty_n;
    sc_signal< sc_logic > data_window_7_V_V_read;
    sc_signal< sc_lv<16> > data_window_8_V_V_dout;
    sc_signal< sc_logic > data_window_8_V_V_empty_n;
    sc_signal< sc_logic > data_window_8_V_V_read;
    sc_signal< sc_lv<16> > data_window_9_V_V_dout;
    sc_signal< sc_logic > data_window_9_V_V_empty_n;
    sc_signal< sc_logic > data_window_9_V_V_read;
    sc_signal< sc_lv<16> > data_window_10_V_V_dout;
    sc_signal< sc_logic > data_window_10_V_V_empty_n;
    sc_signal< sc_logic > data_window_10_V_V_read;
    sc_signal< sc_lv<16> > data_window_11_V_V_dout;
    sc_signal< sc_logic > data_window_11_V_V_empty_n;
    sc_signal< sc_logic > data_window_11_V_V_read;
    sc_signal< sc_lv<16> > data_window_12_V_V_dout;
    sc_signal< sc_logic > data_window_12_V_V_empty_n;
    sc_signal< sc_logic > data_window_12_V_V_read;
    sc_signal< sc_lv<16> > data_window_13_V_V_dout;
    sc_signal< sc_logic > data_window_13_V_V_empty_n;
    sc_signal< sc_logic > data_window_13_V_V_read;
    sc_signal< sc_lv<16> > data_window_14_V_V_dout;
    sc_signal< sc_logic > data_window_14_V_V_empty_n;
    sc_signal< sc_logic > data_window_14_V_V_read;
    sc_signal< sc_lv<16> > data_window_15_V_V_dout;
    sc_signal< sc_logic > data_window_15_V_V_empty_n;
    sc_signal< sc_logic > data_window_15_V_V_read;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > io_acc_block_signal_op179;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<10> > add_ln142_fu_785_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<5> > select_ln81_2_fu_811_p3;
    sc_signal< sc_lv<5> > select_ln81_2_reg_1152;
    sc_signal< sc_lv<5> > i_iw_fu_829_p2;
    sc_signal< sc_lv<2> > or_ln_fu_835_p3;
    sc_signal< sc_lv<4> > or_ln1_fu_843_p4;
    sc_signal< sc_lv<1> > icmp_ln879_fu_853_p2;
    sc_signal< sc_lv<16> > select_ln94_fu_897_p3;
    sc_signal< sc_lv<16> > select_ln94_reg_1184;
    sc_signal< sc_lv<16> > select_ln94_24_fu_911_p3;
    sc_signal< sc_lv<16> > select_ln94_24_reg_1190;
    sc_signal< sc_lv<16> > select_ln94_26_fu_925_p3;
    sc_signal< sc_lv<16> > select_ln94_26_reg_1196;
    sc_signal< sc_lv<16> > select_ln94_27_fu_939_p3;
    sc_signal< sc_lv<16> > select_ln94_27_reg_1202;
    sc_signal< sc_lv<16> > select_ln94_29_fu_953_p3;
    sc_signal< sc_lv<16> > select_ln94_29_reg_1208;
    sc_signal< sc_lv<16> > select_ln94_30_fu_967_p3;
    sc_signal< sc_lv<16> > select_ln94_30_reg_1214;
    sc_signal< sc_lv<16> > select_ln94_32_fu_981_p3;
    sc_signal< sc_lv<16> > select_ln94_32_reg_1220;
    sc_signal< sc_lv<16> > select_ln94_33_fu_995_p3;
    sc_signal< sc_lv<16> > select_ln94_33_reg_1226;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<5> > ap_phi_mux_h_idx_assign_phi_fu_761_p4;
    sc_signal< sc_lv<64> > zext_ln81_fu_819_p1;
    sc_signal< sc_lv<64> > zext_ln89_fu_824_p1;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<1> > icmp_ln143_fu_791_p2;
    sc_signal< sc_lv<5> > add_ln142_2_fu_805_p2;
    sc_signal< sc_lv<5> > select_ln81_fu_797_p3;
    sc_signal< sc_lv<1> > icmp_ln1496_fu_891_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_24_fu_905_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_26_fu_919_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_27_fu_933_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_29_fu_947_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_30_fu_961_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_32_fu_975_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_33_fu_989_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_25_fu_1003_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_28_fu_1014_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_31_fu_1025_p2;
    sc_signal< sc_lv<1> > icmp_ln1496_34_fu_1036_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state7;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<10> ap_const_lv10_310;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<5> ap_const_lv5_1C;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln142_2_fu_805_p2();
    void thread_add_ln142_fu_785_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_h_idx_assign_phi_fu_761_p4();
    void thread_ap_predicate_op122_write_state4();
    void thread_ap_ready();
    void thread_data_V_data_0_V_blk_n();
    void thread_data_V_data_0_V_read();
    void thread_data_V_data_1_V_blk_n();
    void thread_data_V_data_1_V_read();
    void thread_data_V_data_2_V_blk_n();
    void thread_data_V_data_2_V_read();
    void thread_data_V_data_3_V_blk_n();
    void thread_data_V_data_3_V_read();
    void thread_data_window_0_V_V_read();
    void thread_data_window_0_V_V_write();
    void thread_data_window_10_V_V_read();
    void thread_data_window_10_V_V_write();
    void thread_data_window_11_V_V_read();
    void thread_data_window_11_V_V_write();
    void thread_data_window_12_V_V_read();
    void thread_data_window_12_V_V_write();
    void thread_data_window_13_V_V_read();
    void thread_data_window_13_V_V_write();
    void thread_data_window_14_V_V_read();
    void thread_data_window_14_V_V_write();
    void thread_data_window_15_V_V_read();
    void thread_data_window_15_V_V_write();
    void thread_data_window_1_V_V_read();
    void thread_data_window_1_V_V_write();
    void thread_data_window_2_V_V_read();
    void thread_data_window_2_V_V_write();
    void thread_data_window_3_V_V_read();
    void thread_data_window_3_V_V_write();
    void thread_data_window_4_V_V_read();
    void thread_data_window_4_V_V_write();
    void thread_data_window_5_V_V_read();
    void thread_data_window_5_V_V_write();
    void thread_data_window_6_V_V_read();
    void thread_data_window_6_V_V_write();
    void thread_data_window_7_V_V_read();
    void thread_data_window_7_V_V_write();
    void thread_data_window_8_V_V_read();
    void thread_data_window_8_V_V_write();
    void thread_data_window_9_V_V_read();
    void thread_data_window_9_V_V_write();
    void thread_i_iw_fu_829_p2();
    void thread_icmp_ln142_fu_779_p2();
    void thread_icmp_ln143_fu_791_p2();
    void thread_icmp_ln1496_24_fu_905_p2();
    void thread_icmp_ln1496_25_fu_1003_p2();
    void thread_icmp_ln1496_26_fu_919_p2();
    void thread_icmp_ln1496_27_fu_933_p2();
    void thread_icmp_ln1496_28_fu_1014_p2();
    void thread_icmp_ln1496_29_fu_947_p2();
    void thread_icmp_ln1496_30_fu_961_p2();
    void thread_icmp_ln1496_31_fu_1025_p2();
    void thread_icmp_ln1496_32_fu_975_p2();
    void thread_icmp_ln1496_33_fu_989_p2();
    void thread_icmp_ln1496_34_fu_1036_p2();
    void thread_icmp_ln1496_fu_891_p2();
    void thread_icmp_ln879_fu_853_p2();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op179();
    void thread_io_acc_block_signal_op95();
    void thread_or_ln1_fu_843_p4();
    void thread_or_ln_fu_835_p3();
    void thread_pool_table_height23_address0();
    void thread_pool_table_height23_ce0();
    void thread_pool_table_width25_address0();
    void thread_pool_table_width25_ce0();
    void thread_real_start();
    void thread_res_V_data_0_V_blk_n();
    void thread_res_V_data_0_V_din();
    void thread_res_V_data_0_V_write();
    void thread_res_V_data_1_V_blk_n();
    void thread_res_V_data_1_V_din();
    void thread_res_V_data_1_V_write();
    void thread_res_V_data_2_V_blk_n();
    void thread_res_V_data_2_V_din();
    void thread_res_V_data_2_V_write();
    void thread_res_V_data_3_V_blk_n();
    void thread_res_V_data_3_V_din();
    void thread_res_V_data_3_V_write();
    void thread_select_ln81_2_fu_811_p3();
    void thread_select_ln81_fu_797_p3();
    void thread_select_ln94_24_fu_911_p3();
    void thread_select_ln94_26_fu_925_p3();
    void thread_select_ln94_27_fu_939_p3();
    void thread_select_ln94_29_fu_953_p3();
    void thread_select_ln94_30_fu_967_p3();
    void thread_select_ln94_32_fu_981_p3();
    void thread_select_ln94_33_fu_995_p3();
    void thread_select_ln94_fu_897_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_zext_ln81_fu_819_p1();
    void thread_zext_ln89_fu_824_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif