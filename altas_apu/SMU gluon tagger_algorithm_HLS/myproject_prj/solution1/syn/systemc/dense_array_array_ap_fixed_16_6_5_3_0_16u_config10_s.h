// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dense_array_array_ap_fixed_16_6_5_3_0_16u_config10_s_HH_
#define _dense_array_array_ap_fixed_16_6_5_3_0_16u_config10_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s.h"

namespace ap_rtl {

struct dense_array_array_ap_fixed_16_6_5_3_0_16u_config10_s : public sc_module {
    // Port declarations 106
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
    sc_in< sc_lv<16> > data_stream_V_data_0_V_dout;
    sc_in< sc_logic > data_stream_V_data_0_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_0_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_1_V_dout;
    sc_in< sc_logic > data_stream_V_data_1_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_1_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_2_V_dout;
    sc_in< sc_logic > data_stream_V_data_2_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_2_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_3_V_dout;
    sc_in< sc_logic > data_stream_V_data_3_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_3_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_4_V_dout;
    sc_in< sc_logic > data_stream_V_data_4_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_4_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_5_V_dout;
    sc_in< sc_logic > data_stream_V_data_5_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_5_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_6_V_dout;
    sc_in< sc_logic > data_stream_V_data_6_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_6_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_7_V_dout;
    sc_in< sc_logic > data_stream_V_data_7_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_7_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_8_V_dout;
    sc_in< sc_logic > data_stream_V_data_8_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_8_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_9_V_dout;
    sc_in< sc_logic > data_stream_V_data_9_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_9_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_10_V_dout;
    sc_in< sc_logic > data_stream_V_data_10_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_10_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_11_V_dout;
    sc_in< sc_logic > data_stream_V_data_11_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_11_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_12_V_dout;
    sc_in< sc_logic > data_stream_V_data_12_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_12_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_13_V_dout;
    sc_in< sc_logic > data_stream_V_data_13_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_13_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_14_V_dout;
    sc_in< sc_logic > data_stream_V_data_14_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_14_V_read;
    sc_in< sc_lv<16> > data_stream_V_data_15_V_dout;
    sc_in< sc_logic > data_stream_V_data_15_V_empty_n;
    sc_out< sc_logic > data_stream_V_data_15_V_read;
    sc_out< sc_lv<16> > res_stream_V_data_0_V_din;
    sc_in< sc_logic > res_stream_V_data_0_V_full_n;
    sc_out< sc_logic > res_stream_V_data_0_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_1_V_din;
    sc_in< sc_logic > res_stream_V_data_1_V_full_n;
    sc_out< sc_logic > res_stream_V_data_1_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_2_V_din;
    sc_in< sc_logic > res_stream_V_data_2_V_full_n;
    sc_out< sc_logic > res_stream_V_data_2_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_3_V_din;
    sc_in< sc_logic > res_stream_V_data_3_V_full_n;
    sc_out< sc_logic > res_stream_V_data_3_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_4_V_din;
    sc_in< sc_logic > res_stream_V_data_4_V_full_n;
    sc_out< sc_logic > res_stream_V_data_4_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_5_V_din;
    sc_in< sc_logic > res_stream_V_data_5_V_full_n;
    sc_out< sc_logic > res_stream_V_data_5_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_6_V_din;
    sc_in< sc_logic > res_stream_V_data_6_V_full_n;
    sc_out< sc_logic > res_stream_V_data_6_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_7_V_din;
    sc_in< sc_logic > res_stream_V_data_7_V_full_n;
    sc_out< sc_logic > res_stream_V_data_7_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_8_V_din;
    sc_in< sc_logic > res_stream_V_data_8_V_full_n;
    sc_out< sc_logic > res_stream_V_data_8_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_9_V_din;
    sc_in< sc_logic > res_stream_V_data_9_V_full_n;
    sc_out< sc_logic > res_stream_V_data_9_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_10_V_din;
    sc_in< sc_logic > res_stream_V_data_10_V_full_n;
    sc_out< sc_logic > res_stream_V_data_10_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_11_V_din;
    sc_in< sc_logic > res_stream_V_data_11_V_full_n;
    sc_out< sc_logic > res_stream_V_data_11_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_12_V_din;
    sc_in< sc_logic > res_stream_V_data_12_V_full_n;
    sc_out< sc_logic > res_stream_V_data_12_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_13_V_din;
    sc_in< sc_logic > res_stream_V_data_13_V_full_n;
    sc_out< sc_logic > res_stream_V_data_13_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_14_V_din;
    sc_in< sc_logic > res_stream_V_data_14_V_full_n;
    sc_out< sc_logic > res_stream_V_data_14_V_write;
    sc_out< sc_lv<16> > res_stream_V_data_15_V_din;
    sc_in< sc_logic > res_stream_V_data_15_V_full_n;
    sc_out< sc_logic > res_stream_V_data_15_V_write;


    // Module declarations
    dense_array_array_ap_fixed_16_6_5_3_0_16u_config10_s(sc_module_name name);
    SC_HAS_PROCESS(dense_array_array_ap_fixed_16_6_5_3_0_16u_config10_s);

    ~dense_array_array_ap_fixed_16_6_5_3_0_16u_config10_s();

    sc_trace_file* mVcdFile;

    dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s* grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > data_stream_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > data_stream_V_data_1_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_2_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_3_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_4_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_5_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_6_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_7_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_8_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_9_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_10_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_11_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_12_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_13_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_14_V_blk_n;
    sc_signal< sc_logic > data_stream_V_data_15_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > res_stream_V_data_1_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_2_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_3_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_4_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_5_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_6_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_7_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_8_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_9_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_10_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_11_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_12_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_13_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_14_V_blk_n;
    sc_signal< sc_logic > res_stream_V_data_15_V_blk_n;
    sc_signal< sc_lv<5> > i_in_0_reg_1636;
    sc_signal< sc_lv<1> > icmp_ln41_fu_1907_p2;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< sc_logic > io_acc_block_signal_op565;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<5> > i_in_fu_1913_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<4> > trunc_ln203_fu_1919_p1;
    sc_signal< sc_lv<4> > trunc_ln203_reg_5916;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_0;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_1;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_2;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_3;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_4;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_5;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_6;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_7;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_8;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_9;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_10;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_11;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_12;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_13;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_14;
    sc_signal< sc_lv<16> > grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config10_s_fu_1647_ap_return_15;
    sc_signal< sc_lv<16> > data_240_V_fu_524;
    sc_signal< sc_lv<16> > data_241_V_fu_528;
    sc_signal< sc_lv<16> > data_242_V_fu_532;
    sc_signal< sc_lv<16> > data_243_V_fu_536;
    sc_signal< sc_lv<16> > data_244_V_fu_540;
    sc_signal< sc_lv<16> > data_245_V_fu_544;
    sc_signal< sc_lv<16> > data_246_V_fu_548;
    sc_signal< sc_lv<16> > data_247_V_fu_552;
    sc_signal< sc_lv<16> > data_248_V_fu_556;
    sc_signal< sc_lv<16> > data_249_V_fu_560;
    sc_signal< sc_lv<16> > data_250_V_fu_564;
    sc_signal< sc_lv<16> > data_251_V_fu_568;
    sc_signal< sc_lv<16> > data_252_V_fu_572;
    sc_signal< sc_lv<16> > data_253_V_fu_576;
    sc_signal< sc_lv<16> > data_254_V_fu_580;
    sc_signal< sc_lv<16> > data_255_V_fu_584;
    sc_signal< sc_lv<16> > data_240_V_1_fu_588;
    sc_signal< sc_lv<16> > data_241_V_1_fu_592;
    sc_signal< sc_lv<16> > data_242_V_1_fu_596;
    sc_signal< sc_lv<16> > data_243_V_1_fu_600;
    sc_signal< sc_lv<16> > data_244_V_1_fu_604;
    sc_signal< sc_lv<16> > data_245_V_1_fu_608;
    sc_signal< sc_lv<16> > data_246_V_1_fu_612;
    sc_signal< sc_lv<16> > data_247_V_1_fu_616;
    sc_signal< sc_lv<16> > data_248_V_1_fu_620;
    sc_signal< sc_lv<16> > data_249_V_1_fu_624;
    sc_signal< sc_lv<16> > data_250_V_1_fu_628;
    sc_signal< sc_lv<16> > data_251_V_1_fu_632;
    sc_signal< sc_lv<16> > data_252_V_1_fu_636;
    sc_signal< sc_lv<16> > data_253_V_1_fu_640;
    sc_signal< sc_lv<16> > data_254_V_1_fu_644;
    sc_signal< sc_lv<16> > data_255_V_1_fu_648;
    sc_signal< sc_lv<16> > data_240_V_2_fu_652;
    sc_signal< sc_lv<16> > data_241_V_2_fu_656;
    sc_signal< sc_lv<16> > data_242_V_2_fu_660;
    sc_signal< sc_lv<16> > data_243_V_2_fu_664;
    sc_signal< sc_lv<16> > data_244_V_2_fu_668;
    sc_signal< sc_lv<16> > data_245_V_2_fu_672;
    sc_signal< sc_lv<16> > data_246_V_2_fu_676;
    sc_signal< sc_lv<16> > data_247_V_2_fu_680;
    sc_signal< sc_lv<16> > data_248_V_2_fu_684;
    sc_signal< sc_lv<16> > data_249_V_2_fu_688;
    sc_signal< sc_lv<16> > data_250_V_2_fu_692;
    sc_signal< sc_lv<16> > data_251_V_2_fu_696;
    sc_signal< sc_lv<16> > data_252_V_2_fu_700;
    sc_signal< sc_lv<16> > data_253_V_2_fu_704;
    sc_signal< sc_lv<16> > data_254_V_2_fu_708;
    sc_signal< sc_lv<16> > data_255_V_2_fu_712;
    sc_signal< sc_lv<16> > data_240_V_3_fu_716;
    sc_signal< sc_lv<16> > data_241_V_3_fu_720;
    sc_signal< sc_lv<16> > data_242_V_3_fu_724;
    sc_signal< sc_lv<16> > data_243_V_3_fu_728;
    sc_signal< sc_lv<16> > data_244_V_3_fu_732;
    sc_signal< sc_lv<16> > data_245_V_3_fu_736;
    sc_signal< sc_lv<16> > data_246_V_3_fu_740;
    sc_signal< sc_lv<16> > data_247_V_3_fu_744;
    sc_signal< sc_lv<16> > data_248_V_3_fu_748;
    sc_signal< sc_lv<16> > data_249_V_3_fu_752;
    sc_signal< sc_lv<16> > data_250_V_3_fu_756;
    sc_signal< sc_lv<16> > data_251_V_3_fu_760;
    sc_signal< sc_lv<16> > data_252_V_3_fu_764;
    sc_signal< sc_lv<16> > data_253_V_3_fu_768;
    sc_signal< sc_lv<16> > data_254_V_3_fu_772;
    sc_signal< sc_lv<16> > data_255_V_3_fu_776;
    sc_signal< sc_lv<16> > data_240_V_4_fu_780;
    sc_signal< sc_lv<16> > data_241_V_4_fu_784;
    sc_signal< sc_lv<16> > data_242_V_4_fu_788;
    sc_signal< sc_lv<16> > data_243_V_4_fu_792;
    sc_signal< sc_lv<16> > data_244_V_4_fu_796;
    sc_signal< sc_lv<16> > data_245_V_4_fu_800;
    sc_signal< sc_lv<16> > data_246_V_4_fu_804;
    sc_signal< sc_lv<16> > data_247_V_4_fu_808;
    sc_signal< sc_lv<16> > data_248_V_4_fu_812;
    sc_signal< sc_lv<16> > data_249_V_4_fu_816;
    sc_signal< sc_lv<16> > data_250_V_4_fu_820;
    sc_signal< sc_lv<16> > data_251_V_4_fu_824;
    sc_signal< sc_lv<16> > data_252_V_4_fu_828;
    sc_signal< sc_lv<16> > data_253_V_4_fu_832;
    sc_signal< sc_lv<16> > data_254_V_4_fu_836;
    sc_signal< sc_lv<16> > data_255_V_4_fu_840;
    sc_signal< sc_lv<16> > data_240_V_5_fu_844;
    sc_signal< sc_lv<16> > data_241_V_5_fu_848;
    sc_signal< sc_lv<16> > data_242_V_5_fu_852;
    sc_signal< sc_lv<16> > data_243_V_5_fu_856;
    sc_signal< sc_lv<16> > data_244_V_5_fu_860;
    sc_signal< sc_lv<16> > data_245_V_5_fu_864;
    sc_signal< sc_lv<16> > data_246_V_5_fu_868;
    sc_signal< sc_lv<16> > data_247_V_5_fu_872;
    sc_signal< sc_lv<16> > data_248_V_5_fu_876;
    sc_signal< sc_lv<16> > data_249_V_5_fu_880;
    sc_signal< sc_lv<16> > data_250_V_5_fu_884;
    sc_signal< sc_lv<16> > data_251_V_5_fu_888;
    sc_signal< sc_lv<16> > data_252_V_5_fu_892;
    sc_signal< sc_lv<16> > data_253_V_5_fu_896;
    sc_signal< sc_lv<16> > data_254_V_5_fu_900;
    sc_signal< sc_lv<16> > data_255_V_5_fu_904;
    sc_signal< sc_lv<16> > data_240_V_6_fu_908;
    sc_signal< sc_lv<16> > data_241_V_6_fu_912;
    sc_signal< sc_lv<16> > data_242_V_6_fu_916;
    sc_signal< sc_lv<16> > data_243_V_6_fu_920;
    sc_signal< sc_lv<16> > data_244_V_6_fu_924;
    sc_signal< sc_lv<16> > data_245_V_6_fu_928;
    sc_signal< sc_lv<16> > data_246_V_6_fu_932;
    sc_signal< sc_lv<16> > data_247_V_6_fu_936;
    sc_signal< sc_lv<16> > data_248_V_6_fu_940;
    sc_signal< sc_lv<16> > data_249_V_6_fu_944;
    sc_signal< sc_lv<16> > data_250_V_6_fu_948;
    sc_signal< sc_lv<16> > data_251_V_6_fu_952;
    sc_signal< sc_lv<16> > data_252_V_6_fu_956;
    sc_signal< sc_lv<16> > data_253_V_6_fu_960;
    sc_signal< sc_lv<16> > data_254_V_6_fu_964;
    sc_signal< sc_lv<16> > data_255_V_6_fu_968;
    sc_signal< sc_lv<16> > data_240_V_7_fu_972;
    sc_signal< sc_lv<16> > data_241_V_7_fu_976;
    sc_signal< sc_lv<16> > data_242_V_7_fu_980;
    sc_signal< sc_lv<16> > data_243_V_7_fu_984;
    sc_signal< sc_lv<16> > data_244_V_7_fu_988;
    sc_signal< sc_lv<16> > data_245_V_7_fu_992;
    sc_signal< sc_lv<16> > data_246_V_7_fu_996;
    sc_signal< sc_lv<16> > data_247_V_7_fu_1000;
    sc_signal< sc_lv<16> > data_248_V_7_fu_1004;
    sc_signal< sc_lv<16> > data_249_V_7_fu_1008;
    sc_signal< sc_lv<16> > data_250_V_7_fu_1012;
    sc_signal< sc_lv<16> > data_251_V_7_fu_1016;
    sc_signal< sc_lv<16> > data_252_V_7_fu_1020;
    sc_signal< sc_lv<16> > data_253_V_7_fu_1024;
    sc_signal< sc_lv<16> > data_254_V_7_fu_1028;
    sc_signal< sc_lv<16> > data_255_V_7_fu_1032;
    sc_signal< sc_lv<16> > data_240_V_8_fu_1036;
    sc_signal< sc_lv<16> > data_241_V_8_fu_1040;
    sc_signal< sc_lv<16> > data_242_V_8_fu_1044;
    sc_signal< sc_lv<16> > data_243_V_8_fu_1048;
    sc_signal< sc_lv<16> > data_244_V_8_fu_1052;
    sc_signal< sc_lv<16> > data_245_V_8_fu_1056;
    sc_signal< sc_lv<16> > data_246_V_8_fu_1060;
    sc_signal< sc_lv<16> > data_247_V_8_fu_1064;
    sc_signal< sc_lv<16> > data_248_V_8_fu_1068;
    sc_signal< sc_lv<16> > data_249_V_8_fu_1072;
    sc_signal< sc_lv<16> > data_250_V_8_fu_1076;
    sc_signal< sc_lv<16> > data_251_V_8_fu_1080;
    sc_signal< sc_lv<16> > data_252_V_8_fu_1084;
    sc_signal< sc_lv<16> > data_253_V_8_fu_1088;
    sc_signal< sc_lv<16> > data_254_V_8_fu_1092;
    sc_signal< sc_lv<16> > data_255_V_8_fu_1096;
    sc_signal< sc_lv<16> > data_240_V_9_fu_1100;
    sc_signal< sc_lv<16> > data_241_V_9_fu_1104;
    sc_signal< sc_lv<16> > data_242_V_9_fu_1108;
    sc_signal< sc_lv<16> > data_243_V_9_fu_1112;
    sc_signal< sc_lv<16> > data_244_V_9_fu_1116;
    sc_signal< sc_lv<16> > data_245_V_9_fu_1120;
    sc_signal< sc_lv<16> > data_246_V_9_fu_1124;
    sc_signal< sc_lv<16> > data_247_V_9_fu_1128;
    sc_signal< sc_lv<16> > data_248_V_9_fu_1132;
    sc_signal< sc_lv<16> > data_249_V_9_fu_1136;
    sc_signal< sc_lv<16> > data_250_V_9_fu_1140;
    sc_signal< sc_lv<16> > data_251_V_9_fu_1144;
    sc_signal< sc_lv<16> > data_252_V_9_fu_1148;
    sc_signal< sc_lv<16> > data_253_V_9_fu_1152;
    sc_signal< sc_lv<16> > data_254_V_9_fu_1156;
    sc_signal< sc_lv<16> > data_255_V_9_fu_1160;
    sc_signal< sc_lv<16> > data_240_V_10_fu_1164;
    sc_signal< sc_lv<16> > data_241_V_10_fu_1168;
    sc_signal< sc_lv<16> > data_242_V_10_fu_1172;
    sc_signal< sc_lv<16> > data_243_V_10_fu_1176;
    sc_signal< sc_lv<16> > data_244_V_10_fu_1180;
    sc_signal< sc_lv<16> > data_245_V_10_fu_1184;
    sc_signal< sc_lv<16> > data_246_V_10_fu_1188;
    sc_signal< sc_lv<16> > data_247_V_10_fu_1192;
    sc_signal< sc_lv<16> > data_248_V_10_fu_1196;
    sc_signal< sc_lv<16> > data_249_V_10_fu_1200;
    sc_signal< sc_lv<16> > data_250_V_10_fu_1204;
    sc_signal< sc_lv<16> > data_251_V_10_fu_1208;
    sc_signal< sc_lv<16> > data_252_V_10_fu_1212;
    sc_signal< sc_lv<16> > data_253_V_10_fu_1216;
    sc_signal< sc_lv<16> > data_254_V_10_fu_1220;
    sc_signal< sc_lv<16> > data_255_V_10_fu_1224;
    sc_signal< sc_lv<16> > data_240_V_11_fu_1228;
    sc_signal< sc_lv<16> > data_241_V_11_fu_1232;
    sc_signal< sc_lv<16> > data_242_V_11_fu_1236;
    sc_signal< sc_lv<16> > data_243_V_11_fu_1240;
    sc_signal< sc_lv<16> > data_244_V_11_fu_1244;
    sc_signal< sc_lv<16> > data_245_V_11_fu_1248;
    sc_signal< sc_lv<16> > data_246_V_11_fu_1252;
    sc_signal< sc_lv<16> > data_247_V_11_fu_1256;
    sc_signal< sc_lv<16> > data_248_V_11_fu_1260;
    sc_signal< sc_lv<16> > data_249_V_11_fu_1264;
    sc_signal< sc_lv<16> > data_250_V_11_fu_1268;
    sc_signal< sc_lv<16> > data_251_V_11_fu_1272;
    sc_signal< sc_lv<16> > data_252_V_11_fu_1276;
    sc_signal< sc_lv<16> > data_253_V_11_fu_1280;
    sc_signal< sc_lv<16> > data_254_V_11_fu_1284;
    sc_signal< sc_lv<16> > data_255_V_11_fu_1288;
    sc_signal< sc_lv<16> > data_240_V_12_fu_1292;
    sc_signal< sc_lv<16> > data_241_V_12_fu_1296;
    sc_signal< sc_lv<16> > data_242_V_12_fu_1300;
    sc_signal< sc_lv<16> > data_243_V_12_fu_1304;
    sc_signal< sc_lv<16> > data_244_V_12_fu_1308;
    sc_signal< sc_lv<16> > data_245_V_12_fu_1312;
    sc_signal< sc_lv<16> > data_246_V_12_fu_1316;
    sc_signal< sc_lv<16> > data_247_V_12_fu_1320;
    sc_signal< sc_lv<16> > data_248_V_12_fu_1324;
    sc_signal< sc_lv<16> > data_249_V_12_fu_1328;
    sc_signal< sc_lv<16> > data_250_V_12_fu_1332;
    sc_signal< sc_lv<16> > data_251_V_12_fu_1336;
    sc_signal< sc_lv<16> > data_252_V_12_fu_1340;
    sc_signal< sc_lv<16> > data_253_V_12_fu_1344;
    sc_signal< sc_lv<16> > data_254_V_12_fu_1348;
    sc_signal< sc_lv<16> > data_255_V_12_fu_1352;
    sc_signal< sc_lv<16> > data_240_V_13_fu_1356;
    sc_signal< sc_lv<16> > data_241_V_13_fu_1360;
    sc_signal< sc_lv<16> > data_242_V_13_fu_1364;
    sc_signal< sc_lv<16> > data_243_V_13_fu_1368;
    sc_signal< sc_lv<16> > data_244_V_13_fu_1372;
    sc_signal< sc_lv<16> > data_245_V_13_fu_1376;
    sc_signal< sc_lv<16> > data_246_V_13_fu_1380;
    sc_signal< sc_lv<16> > data_247_V_13_fu_1384;
    sc_signal< sc_lv<16> > data_248_V_13_fu_1388;
    sc_signal< sc_lv<16> > data_249_V_13_fu_1392;
    sc_signal< sc_lv<16> > data_250_V_13_fu_1396;
    sc_signal< sc_lv<16> > data_251_V_13_fu_1400;
    sc_signal< sc_lv<16> > data_252_V_13_fu_1404;
    sc_signal< sc_lv<16> > data_253_V_13_fu_1408;
    sc_signal< sc_lv<16> > data_254_V_13_fu_1412;
    sc_signal< sc_lv<16> > data_255_V_13_fu_1416;
    sc_signal< sc_lv<16> > data_240_V_14_fu_1420;
    sc_signal< sc_lv<16> > data_241_V_14_fu_1424;
    sc_signal< sc_lv<16> > data_242_V_14_fu_1428;
    sc_signal< sc_lv<16> > data_243_V_14_fu_1432;
    sc_signal< sc_lv<16> > data_244_V_14_fu_1436;
    sc_signal< sc_lv<16> > data_245_V_14_fu_1440;
    sc_signal< sc_lv<16> > data_246_V_14_fu_1444;
    sc_signal< sc_lv<16> > data_247_V_14_fu_1448;
    sc_signal< sc_lv<16> > data_248_V_14_fu_1452;
    sc_signal< sc_lv<16> > data_249_V_14_fu_1456;
    sc_signal< sc_lv<16> > data_250_V_14_fu_1460;
    sc_signal< sc_lv<16> > data_251_V_14_fu_1464;
    sc_signal< sc_lv<16> > data_252_V_14_fu_1468;
    sc_signal< sc_lv<16> > data_253_V_14_fu_1472;
    sc_signal< sc_lv<16> > data_254_V_14_fu_1476;
    sc_signal< sc_lv<16> > data_255_V_14_fu_1480;
    sc_signal< sc_lv<16> > data_240_V_15_fu_1484;
    sc_signal< sc_lv<16> > data_241_V_15_fu_1488;
    sc_signal< sc_lv<16> > data_242_V_15_fu_1492;
    sc_signal< sc_lv<16> > data_243_V_15_fu_1496;
    sc_signal< sc_lv<16> > data_244_V_15_fu_1500;
    sc_signal< sc_lv<16> > data_245_V_15_fu_1504;
    sc_signal< sc_lv<16> > data_246_V_15_fu_1508;
    sc_signal< sc_lv<16> > data_247_V_15_fu_1512;
    sc_signal< sc_lv<16> > data_248_V_15_fu_1516;
    sc_signal< sc_lv<16> > data_249_V_15_fu_1520;
    sc_signal< sc_lv<16> > data_250_V_15_fu_1524;
    sc_signal< sc_lv<16> > data_251_V_15_fu_1528;
    sc_signal< sc_lv<16> > data_252_V_15_fu_1532;
    sc_signal< sc_lv<16> > data_253_V_15_fu_1536;
    sc_signal< sc_lv<16> > data_254_V_15_fu_1540;
    sc_signal< sc_lv<16> > data_255_V_15_fu_1544;
    sc_signal< sc_logic > io_acc_block_signal_op1134;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_pp0_stage0;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<8> ap_ST_fsm_state9;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<4> ap_const_lv4_7;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_B;
    static const sc_lv<4> ap_const_lv4_C;
    static const sc_lv<4> ap_const_lv4_D;
    static const sc_lv<4> ap_const_lv4_E;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_data_stream_V_data_0_V_blk_n();
    void thread_data_stream_V_data_0_V_read();
    void thread_data_stream_V_data_10_V_blk_n();
    void thread_data_stream_V_data_10_V_read();
    void thread_data_stream_V_data_11_V_blk_n();
    void thread_data_stream_V_data_11_V_read();
    void thread_data_stream_V_data_12_V_blk_n();
    void thread_data_stream_V_data_12_V_read();
    void thread_data_stream_V_data_13_V_blk_n();
    void thread_data_stream_V_data_13_V_read();
    void thread_data_stream_V_data_14_V_blk_n();
    void thread_data_stream_V_data_14_V_read();
    void thread_data_stream_V_data_15_V_blk_n();
    void thread_data_stream_V_data_15_V_read();
    void thread_data_stream_V_data_1_V_blk_n();
    void thread_data_stream_V_data_1_V_read();
    void thread_data_stream_V_data_2_V_blk_n();
    void thread_data_stream_V_data_2_V_read();
    void thread_data_stream_V_data_3_V_blk_n();
    void thread_data_stream_V_data_3_V_read();
    void thread_data_stream_V_data_4_V_blk_n();
    void thread_data_stream_V_data_4_V_read();
    void thread_data_stream_V_data_5_V_blk_n();
    void thread_data_stream_V_data_5_V_read();
    void thread_data_stream_V_data_6_V_blk_n();
    void thread_data_stream_V_data_6_V_read();
    void thread_data_stream_V_data_7_V_blk_n();
    void thread_data_stream_V_data_7_V_read();
    void thread_data_stream_V_data_8_V_blk_n();
    void thread_data_stream_V_data_8_V_read();
    void thread_data_stream_V_data_9_V_blk_n();
    void thread_data_stream_V_data_9_V_read();
    void thread_i_in_fu_1913_p2();
    void thread_icmp_ln41_fu_1907_p2();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op1134();
    void thread_io_acc_block_signal_op565();
    void thread_real_start();
    void thread_res_stream_V_data_0_V_blk_n();
    void thread_res_stream_V_data_0_V_din();
    void thread_res_stream_V_data_0_V_write();
    void thread_res_stream_V_data_10_V_blk_n();
    void thread_res_stream_V_data_10_V_din();
    void thread_res_stream_V_data_10_V_write();
    void thread_res_stream_V_data_11_V_blk_n();
    void thread_res_stream_V_data_11_V_din();
    void thread_res_stream_V_data_11_V_write();
    void thread_res_stream_V_data_12_V_blk_n();
    void thread_res_stream_V_data_12_V_din();
    void thread_res_stream_V_data_12_V_write();
    void thread_res_stream_V_data_13_V_blk_n();
    void thread_res_stream_V_data_13_V_din();
    void thread_res_stream_V_data_13_V_write();
    void thread_res_stream_V_data_14_V_blk_n();
    void thread_res_stream_V_data_14_V_din();
    void thread_res_stream_V_data_14_V_write();
    void thread_res_stream_V_data_15_V_blk_n();
    void thread_res_stream_V_data_15_V_din();
    void thread_res_stream_V_data_15_V_write();
    void thread_res_stream_V_data_1_V_blk_n();
    void thread_res_stream_V_data_1_V_din();
    void thread_res_stream_V_data_1_V_write();
    void thread_res_stream_V_data_2_V_blk_n();
    void thread_res_stream_V_data_2_V_din();
    void thread_res_stream_V_data_2_V_write();
    void thread_res_stream_V_data_3_V_blk_n();
    void thread_res_stream_V_data_3_V_din();
    void thread_res_stream_V_data_3_V_write();
    void thread_res_stream_V_data_4_V_blk_n();
    void thread_res_stream_V_data_4_V_din();
    void thread_res_stream_V_data_4_V_write();
    void thread_res_stream_V_data_5_V_blk_n();
    void thread_res_stream_V_data_5_V_din();
    void thread_res_stream_V_data_5_V_write();
    void thread_res_stream_V_data_6_V_blk_n();
    void thread_res_stream_V_data_6_V_din();
    void thread_res_stream_V_data_6_V_write();
    void thread_res_stream_V_data_7_V_blk_n();
    void thread_res_stream_V_data_7_V_din();
    void thread_res_stream_V_data_7_V_write();
    void thread_res_stream_V_data_8_V_blk_n();
    void thread_res_stream_V_data_8_V_din();
    void thread_res_stream_V_data_8_V_write();
    void thread_res_stream_V_data_9_V_blk_n();
    void thread_res_stream_V_data_9_V_din();
    void thread_res_stream_V_data_9_V_write();
    void thread_start_out();
    void thread_start_write();
    void thread_trunc_ln203_fu_1919_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif