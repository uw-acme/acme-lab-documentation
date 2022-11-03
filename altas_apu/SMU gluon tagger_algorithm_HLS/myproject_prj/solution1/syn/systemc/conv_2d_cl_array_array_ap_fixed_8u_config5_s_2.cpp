#include "conv_2d_cl_array_array_ap_fixed_8u_config5_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_2d_cl_array_array_ap_fixed_8u_config5_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter7 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_fu_251448_p2.read()))) {
        h_idx_assign_reg_1893 = select_ln53_2_fu_251546_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        h_idx_assign_reg_1893 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_fu_251448_p2.read()))) {
        indvar_flatten_reg_1882 = add_ln53_fu_251454_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        indvar_flatten_reg_1882 = ap_const_lv8_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_fu_251448_p2.read()))) {
        wp_idx_reg_1904 = i_iw_fu_251612_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        wp_idx_reg_1904 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, p_Result_s_reg_259064_pp0_iter5_reg.read()))) {
        acc_1_V_reg_260727 = acc_1_V_fu_258510_p2.read();
        acc_2_V_reg_260732 = acc_2_V_fu_258547_p2.read();
        acc_3_V_reg_260737 = acc_3_V_fu_258576_p2.read();
        acc_4_V_reg_260742 = acc_4_V_fu_258609_p2.read();
        acc_5_V_reg_260747 = acc_5_V_fu_258628_p2.read();
        acc_6_V_reg_260752 = acc_6_V_fu_258661_p2.read();
        acc_7_V_reg_260757 = acc_7_V_fu_258680_p2.read();
        p_Val2_24_reg_260722 = p_Val2_24_fu_258467_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, p_Result_s_reg_259064_pp0_iter3_reg.read()))) {
        add_ln703_4114_reg_260177 = add_ln703_4114_fu_256404_p2.read();
        add_ln703_4122_reg_260182 = add_ln703_4122_fu_256410_p2.read();
        add_ln703_4123_reg_260187 = add_ln703_4123_fu_256416_p2.read();
        add_ln703_4128_reg_260192 = add_ln703_4128_fu_256422_p2.read();
        add_ln703_4131_reg_260197 = add_ln703_4131_fu_256428_p2.read();
        add_ln703_4137_reg_260202 = add_ln703_4137_fu_256434_p2.read();
        add_ln703_4140_reg_260207 = add_ln703_4140_fu_256440_p2.read();
        add_ln703_4147_reg_260212 = add_ln703_4147_fu_256446_p2.read();
        add_ln703_4150_reg_260217 = add_ln703_4150_fu_256452_p2.read();
        add_ln703_4155_reg_260222 = add_ln703_4155_fu_256458_p2.read();
        add_ln703_4158_reg_260227 = add_ln703_4158_fu_256464_p2.read();
        add_ln703_4159_reg_260232 = add_ln703_4159_fu_256470_p2.read();
        add_ln703_4183_reg_260237 = add_ln703_4183_fu_256476_p2.read();
        add_ln703_4186_reg_260242 = add_ln703_4186_fu_256482_p2.read();
        add_ln703_4191_reg_260247 = add_ln703_4191_fu_256488_p2.read();
        add_ln703_4194_reg_260252 = add_ln703_4194_fu_256494_p2.read();
        add_ln703_4195_reg_260257 = add_ln703_4195_fu_256500_p2.read();
        add_ln703_4200_reg_260262 = add_ln703_4200_fu_256506_p2.read();
        add_ln703_4203_reg_260267 = add_ln703_4203_fu_256512_p2.read();
        add_ln703_4214_reg_260272 = add_ln703_4214_fu_256528_p2.read();
        add_ln703_4219_reg_260277 = add_ln703_4219_fu_256534_p2.read();
        add_ln703_4222_reg_260282 = add_ln703_4222_fu_256540_p2.read();
        add_ln703_4227_reg_260287 = add_ln703_4227_fu_256546_p2.read();
        add_ln703_4230_reg_260292 = add_ln703_4230_fu_256552_p2.read();
        add_ln703_4249_reg_260297 = add_ln703_4249_fu_256568_p2.read();
        add_ln703_4254_reg_260302 = add_ln703_4254_fu_256574_p2.read();
        add_ln703_4257_reg_260307 = add_ln703_4257_fu_256580_p2.read();
        add_ln703_4262_reg_260312 = add_ln703_4262_fu_256586_p2.read();
        add_ln703_4265_reg_260317 = add_ln703_4265_fu_256592_p2.read();
        add_ln703_4266_reg_260322 = add_ln703_4266_fu_256598_p2.read();
        add_ln703_4271_reg_260327 = add_ln703_4271_fu_256604_p2.read();
        add_ln703_4274_reg_260332 = add_ln703_4274_fu_256610_p2.read();
        add_ln703_4283_reg_260337 = add_ln703_4283_fu_256616_p2.read();
        add_ln703_4289_reg_260342 = add_ln703_4289_fu_256622_p2.read();
        add_ln703_4292_reg_260347 = add_ln703_4292_fu_256628_p2.read();
        add_ln703_4297_reg_260352 = add_ln703_4297_fu_256634_p2.read();
        add_ln703_4300_reg_260357 = add_ln703_4300_fu_256640_p2.read();
        add_ln703_4301_reg_260362 = add_ln703_4301_fu_256646_p2.read();
        add_ln703_4306_reg_260367 = add_ln703_4306_fu_256652_p2.read();
        add_ln703_4311_reg_260372 = add_ln703_4311_fu_256668_p2.read();
        add_ln703_4320_reg_260377 = add_ln703_4320_fu_256684_p2.read();
        add_ln703_4325_reg_260382 = add_ln703_4325_fu_256690_p2.read();
        add_ln703_4328_reg_260387 = add_ln703_4328_fu_256696_p2.read();
        add_ln703_4333_reg_260392 = add_ln703_4333_fu_256702_p2.read();
        add_ln703_4336_reg_260397 = add_ln703_4336_fu_256708_p2.read();
        add_ln703_4337_reg_260402 = add_ln703_4337_fu_256714_p2.read();
        add_ln703_4342_reg_260407 = add_ln703_4342_fu_256720_p2.read();
        add_ln703_4345_reg_260412 = add_ln703_4345_fu_256726_p2.read();
        add_ln703_4350_reg_260417 = add_ln703_4350_fu_256732_p2.read();
        add_ln703_4360_reg_260422 = add_ln703_4360_fu_256738_p2.read();
        add_ln703_4363_reg_260427 = add_ln703_4363_fu_256744_p2.read();
        add_ln703_4368_reg_260432 = add_ln703_4368_fu_256750_p2.read();
        add_ln703_4371_reg_260437 = add_ln703_4371_fu_256756_p2.read();
        add_ln703_4372_reg_260442 = add_ln703_4372_fu_256762_p2.read();
        add_ln703_4377_reg_260447 = add_ln703_4377_fu_256768_p2.read();
        add_ln703_4388_reg_260452 = add_ln703_4388_fu_256774_p2.read();
        add_ln703_4389_reg_260457 = add_ln703_4389_fu_256780_p2.read();
        add_ln703_reg_260172 = add_ln703_fu_256398_p2.read();
        mul_ln1118_2867_reg_251136 = mul_ln1118_2867_fu_2103_p2.read();
        mult_102_V_reg_259686 = mul_ln1118_2812_fu_2156_p2.read().range(23, 14);
        mult_105_V_reg_259696 = mul_ln1118_2814_fu_2037_p2.read().range(23, 14);
        mult_109_V_reg_259701 = mul_ln1118_2818_fu_2007_p2.read().range(23, 14);
        mult_112_V_reg_259716 = mul_ln1118_2819_fu_2024_p2.read().range(23, 14);
        mult_117_V_reg_259741 = mul_ln1118_2822_fu_2168_p2.read().range(23, 14);
        mult_118_V_reg_259746 = mul_ln1118_2823_fu_2177_p2.read().range(23, 14);
        mult_119_V_reg_259751 = mul_ln1118_2824_fu_2178_p2.read().range(23, 14);
        mult_121_V_reg_259756 = mul_ln1118_2825_fu_2187_p2.read().range(23, 14);
        mult_122_V_reg_259761 = mul_ln1118_2826_fu_1924_p2.read().range(23, 14);
        mult_125_V_reg_259776 = mul_ln1118_2829_fu_2159_p2.read().range(23, 14);
        mult_126_V_reg_259781 = mul_ln1118_2830_fu_2049_p2.read().range(23, 14);
        mult_128_V_reg_259791 = mul_ln1118_2831_fu_2015_p2.read().range(23, 14);
        mult_129_V_reg_259797 = mul_ln1118_2832_fu_1943_p2.read().range(23, 14);
        mult_130_V_reg_259802 = mul_ln1118_2833_fu_2149_p2.read().range(23, 14);
        mult_139_V_reg_259827 = mul_ln1118_2838_fu_2174_p2.read().range(23, 14);
        mult_144_V_reg_259837 = mul_ln1118_2842_fu_2180_p2.read().range(23, 14);
        mult_148_V_reg_259852 = mul_ln1118_2846_fu_2068_p2.read().range(23, 14);
        mult_155_V_reg_259872 = mul_ln1118_2851_fu_2099_p2.read().range(23, 14);
        mult_157_V_reg_259877 = mul_ln1118_2853_fu_2097_p2.read().range(23, 14);
        mult_160_V_reg_259882 = mul_ln1118_2856_fu_2027_p2.read().range(23, 14);
        mult_162_V_reg_259887 = mul_ln1118_2858_fu_1954_p2.read().range(23, 14);
        mult_163_V_reg_259892 = mul_ln1118_2859_fu_2051_p2.read().range(23, 14);
        mult_16_V_reg_259415 = mul_ln1118_2750_fu_2195_p2.read().range(23, 14);
        mult_172_V_reg_259912 = mul_ln1118_2865_fu_1942_p2.read().range(23, 14);
        mult_182_V_reg_259927 = mul_ln1118_2873_fu_2003_p2.read().range(23, 14);
        mult_185_V_reg_259937 = mul_ln1118_2875_fu_1989_p2.read().range(23, 14);
        mult_187_V_reg_259942 = mul_ln1118_2876_fu_2134_p2.read().range(23, 14);
        mult_18_V_reg_259425 = sub_ln1118_1184_fu_252141_p2.read().range(23, 14);
        mult_190_V_reg_259947 = mul_ln1118_2877_fu_2111_p2.read().range(23, 14);
        mult_191_V_reg_259952 = mul_ln1118_2878_fu_2039_p2.read().range(23, 14);
        mult_197_V_reg_259972 = mul_ln1118_2883_fu_2184_p2.read().range(23, 14);
        mult_200_V_reg_259977 = mul_ln1118_2884_fu_1952_p2.read().range(23, 14);
        mult_201_V_reg_259982 = mul_ln1118_2885_fu_1953_p2.read().range(23, 14);
        mult_203_V_reg_259987 = mul_ln1118_2887_fu_1939_p2.read().range(23, 14);
        mult_20_V_reg_259435 = mul_ln1118_2753_fu_2133_p2.read().range(23, 14);
        mult_214_V_reg_260002 = mul_ln1118_2896_fu_2167_p2.read().range(23, 14);
        mult_215_V_reg_260007 = mul_ln1118_2897_fu_2192_p2.read().range(23, 14);
        mult_21_V_reg_259440 = mul_ln1118_2754_fu_2104_p2.read().range(23, 14);
        mult_226_V_reg_260027 = mul_ln1118_2904_fu_1960_p2.read().range(23, 14);
        mult_228_V_reg_260032 = mul_ln1118_2906_fu_2147_p2.read().range(23, 14);
        mult_229_V_reg_260037 = add_ln1118_262_fu_255521_p2.read().range(23, 14);
        mult_24_V_reg_259450 = mul_ln1118_2757_fu_1920_p2.read().range(23, 14);
        mult_26_V_reg_259460 = mul_ln1118_2758_fu_2140_p2.read().range(23, 14);
        mult_36_V_reg_259476 = mul_ln1118_2763_fu_2162_p2.read().range(23, 14);
        mult_37_V_reg_259481 = mul_ln1118_2764_fu_2201_p2.read().range(23, 14);
        mult_38_V_reg_259486 = mul_ln1118_2765_fu_1925_p2.read().range(23, 14);
        mult_41_V_reg_259496 = mul_ln1118_2766_fu_1961_p2.read().range(23, 14);
        mult_46_V_reg_259506 = mul_ln1118_2771_fu_2076_p2.read().range(23, 14);
        mult_50_V_reg_259521 = mul_ln1118_2775_fu_2112_p2.read().range(23, 14);
        mult_55_V_reg_259541 = mul_ln1118_2779_fu_1919_p2.read().range(23, 14);
        mult_57_V_reg_259546 = mul_ln1118_2780_fu_2171_p2.read().range(23, 14);
        mult_64_V_reg_259561 = mul_ln1118_2785_fu_2060_p2.read().range(23, 14);
        mult_66_V_reg_259571 = mul_ln1118_2787_fu_2054_p2.read().range(23, 14);
        mult_68_V_reg_259576 = mul_ln1118_2788_fu_2055_p2.read().range(23, 14);
        mult_72_V_reg_259586 = mul_ln1118_2792_fu_2086_p2.read().range(23, 14);
        mult_76_V_reg_259606 = sub_ln1118_1196_fu_253026_p2.read().range(23, 14);
        mult_82_V_reg_259626 = mul_ln1118_2799_fu_1996_p2.read().range(23, 14);
        mult_83_V_reg_259631 = sub_ln1118_1197_fu_253173_p2.read().range(23, 14);
        mult_84_V_reg_259636 = mul_ln1118_2800_fu_2005_p2.read().range(23, 14);
        mult_87_V_reg_259641 = mul_ln1118_2802_fu_1987_p2.read().range(23, 14);
        mult_91_V_reg_259646 = mul_ln1118_2804_fu_2109_p2.read().range(23, 14);
        mult_95_V_reg_259656 = mul_ln1118_2806_fu_2181_p2.read().range(23, 14);
        mult_96_V_reg_259661 = mul_ln1118_2807_fu_1931_p2.read().range(23, 14);
        trunc_ln708_1967_reg_259410 = mul_ln1118_2748_fu_2193_p2.read().range(21, 14);
        trunc_ln708_1968_reg_259420 = mul_ln1118_2751_fu_2196_p2.read().range(22, 14);
        trunc_ln708_1969_reg_259430 = mul_ln1118_2752_fu_2127_p2.read().range(21, 14);
        trunc_ln708_1970_reg_259445 = mul_ln1118_2756_fu_2138_p2.read().range(22, 14);
        trunc_ln708_1971_reg_259455 = sub_ln1118_1186_fu_252255_p2.read().range(22, 14);
        trunc_ln708_1974_reg_259466 = mul_ln1118_2760_fu_2151_p2.read().range(22, 14);
        trunc_ln708_1975_reg_259471 = mul_ln1118_2761_fu_2160_p2.read().range(21, 14);
        trunc_ln708_1977_reg_259491 = sub_ln1118_1191_fu_252546_p2.read().range(22, 14);
        trunc_ln708_1979_reg_259501 = mul_ln1118_2770_fu_1985_p2.read().range(21, 14);
        trunc_ln708_1980_reg_259511 = mul_ln1118_2772_fu_1917_p2.read().range(22, 14);
        trunc_ln708_1981_reg_259516 = mul_ln1118_2774_fu_2087_p2.read().range(22, 14);
        trunc_ln708_1982_reg_259526 = sub_ln1118_1194_fu_252753_p2.read().range(20, 14);
        trunc_ln708_1983_reg_259531 = mul_ln1118_2777_fu_2066_p2.read().range(21, 14);
        trunc_ln708_1984_reg_259536 = mul_ln1118_2778_fu_2188_p2.read().range(22, 14);
        trunc_ln708_1986_reg_259551 = mul_ln1118_2781_fu_2080_p2.read().range(22, 14);
        trunc_ln708_1988_reg_259556 = mul_ln1118_2782_fu_2008_p2.read().range(22, 14);
        trunc_ln708_1990_reg_259566 = mul_ln1118_2786_fu_2029_p2.read().range(21, 14);
        trunc_ln708_1991_reg_259581 = mul_ln1118_2789_fu_2116_p2.read().range(20, 14);
        trunc_ln708_1992_reg_259591 = mul_ln1118_2793_fu_2033_p2.read().range(22, 14);
        trunc_ln708_1993_reg_259596 = mul_ln1118_2794_fu_2139_p2.read().range(22, 14);
        trunc_ln708_1994_reg_259601 = mul_ln1118_2795_fu_2067_p2.read().range(21, 14);
        trunc_ln708_1995_reg_259611 = mul_ln1118_2797_fu_2002_p2.read().range(22, 14);
        trunc_ln708_1996_reg_259616 = mul_ln1118_2798_fu_1979_p2.read().range(21, 14);
        trunc_ln708_1998_reg_259621 = add_ln1118_253_fu_253136_p2.read().range(22, 14);
        trunc_ln708_2001_reg_259651 = sub_ln1118_1202_fu_253373_p2.read().range(22, 14);
        trunc_ln708_2003_reg_259666 = mul_ln1118_2809_fu_1944_p2.read().range(22, 14);
        trunc_ln708_2004_reg_259671 = mul_ln1118_2810_fu_1945_p2.read().range(21, 14);
        trunc_ln708_2005_reg_259676 = sub_ln1118_1205_fu_253514_p2.read().range(21, 14);
        trunc_ln708_2006_reg_259681 = mul_ln1118_2811_fu_1938_p2.read().range(22, 14);
        trunc_ln708_2007_reg_259691 = mul_ln1118_2813_fu_1964_p2.read().range(21, 14);
        trunc_ln708_2009_reg_259706 = add_ln1118_254_fu_253682_p2.read().range(22, 14);
        trunc_ln708_2010_reg_259711 = sub_ln1118_1208_fu_253715_p2.read().range(22, 14);
        trunc_ln708_2011_reg_259721 = mul_ln1118_2820_fu_2190_p2.read().range(22, 14);
        trunc_ln708_2012_reg_259726 = sub_ln1118_1210_fu_253791_p2.read().range(21, 14);
        trunc_ln708_2013_reg_259731 = mul_ln1118_2821_fu_2175_p2.read().range(22, 14);
        trunc_ln708_2014_reg_259736 = sub_ln1118_1212_fu_253845_p2.read().range(22, 14);
        trunc_ln708_2016_reg_259766 = mul_ln1118_2827_fu_2088_p2.read().range(22, 14);
        trunc_ln708_2017_reg_259771 = mul_ln1118_2828_fu_2085_p2.read().range(22, 14);
        trunc_ln708_2018_reg_259786 = sub_ln1118_1214_fu_254019_p2.read().range(20, 14);
        trunc_ln708_2019_reg_259807 = mul_ln1118_2834_fu_2142_p2.read().range(21, 14);
        trunc_ln708_2020_reg_259812 = mul_ln1118_2835_fu_2143_p2.read().range(22, 14);
        trunc_ln708_2022_reg_259817 = mul_ln1118_2836_fu_2136_p2.read().range(22, 14);
        trunc_ln708_2023_reg_259822 = add_ln1118_255_fu_254214_p2.read().range(22, 14);
        trunc_ln708_2025_reg_259832 = mul_ln1118_2841_fu_2093_p2.read().range(22, 14);
        trunc_ln708_2026_reg_259842 = mul_ln1118_2843_fu_1930_p2.read().range(22, 14);
        trunc_ln708_2027_reg_259847 = mul_ln1118_2845_fu_2075_p2.read().range(22, 14);
        trunc_ln708_2028_reg_259857 = mul_ln1118_2849_fu_2095_p2.read().range(21, 14);
        trunc_ln708_2029_reg_259862 = mul_ln1118_2850_fu_2056_p2.read().range(22, 14);
        trunc_ln708_2030_reg_259867 = sub_ln1118_1217_fu_254428_p2.read().range(21, 14);
        trunc_ln708_2032_reg_259897 = mul_ln1118_2861_fu_2053_p2.read().range(21, 14);
        trunc_ln708_2035_reg_259902 = mul_ln1118_2863_fu_2131_p2.read().range(22, 14);
        trunc_ln708_2036_reg_259907 = sub_ln1118_1221_fu_254661_p2.read().range(22, 14);
        trunc_ln708_2037_reg_259917 = mul_ln1118_2866_fu_1997_p2.read().range(22, 14);
        trunc_ln708_2040_reg_259922 = mul_ln1118_2870_fu_1984_p2.read().range(22, 14);
        trunc_ln708_2042_reg_259932 = add_ln1118_257_fu_254842_p2.read().range(22, 14);
        trunc_ln708_2045_reg_259957 = mul_ln1118_2879_fu_1967_p2.read().range(22, 14);
        trunc_ln708_2046_reg_259962 = mul_ln1118_2880_fu_2073_p2.read().range(22, 14);
        trunc_ln708_2047_reg_259967 = add_ln1118_260_fu_255078_p2.read().range(21, 14);
        trunc_ln708_2049_reg_259992 = mul_ln1118_2894_fu_2157_p2.read().range(22, 14);
        trunc_ln708_2050_reg_259997 = sub_ln1118_1226_fu_255326_p2.read().range(22, 14);
        trunc_ln708_2053_reg_260012 = mul_ln1118_2900_fu_1923_p2.read().range(21, 14);
        trunc_ln708_2054_reg_260017 = mul_ln1118_2901_fu_2176_p2.read().range(22, 14);
        trunc_ln708_2056_reg_260022 = sub_ln1118_1229_fu_255464_p2.read().range(22, 14);
        trunc_ln708_2060_reg_260042 = mul_ln1118_2909_fu_2150_p2.read().range(23, 14);
        trunc_ln708_2062_reg_260047 = mul_ln1118_2911_fu_2144_p2.read().range(23, 14);
        trunc_ln708_2065_reg_260052 = mul_ln1118_2913_fu_2009_p2.read().range(22, 14);
        trunc_ln708_2067_reg_260057 = mul_ln1118_2914_fu_2165_p2.read().range(23, 14);
        trunc_ln708_2073_reg_260062 = mul_ln1118_2920_fu_2083_p2.read().range(23, 14);
        trunc_ln708_2074_reg_260067 = sub_ln1118_1234_fu_255880_p2.read().range(21, 14);
        trunc_ln708_2076_reg_260072 = mul_ln1118_2922_fu_2077_p2.read().range(23, 14);
        trunc_ln708_2080_reg_260077 = mul_ln1118_2925_fu_2096_p2.read().range(23, 14);
        trunc_ln708_2081_reg_260082 = mul_ln1118_2926_fu_2061_p2.read().range(22, 14);
        trunc_ln708_2083_reg_260087 = mul_ln1118_2927_fu_2135_p2.read().range(23, 14);
        trunc_ln708_2084_reg_260092 = sub_ln1118_1237_fu_256061_p2.read().range(22, 14);
        trunc_ln708_2085_reg_260097 = mul_ln1118_2928_fu_1955_p2.read().range(23, 14);
        trunc_ln708_2087_reg_260102 = mul_ln1118_2929_fu_1991_p2.read().range(23, 14);
        trunc_ln708_2092_reg_260107 = mul_ln1118_2931_fu_2040_p2.read().range(21, 14);
        trunc_ln708_2093_reg_260112 = mul_ln1118_2932_fu_2041_p2.read().range(23, 14);
        trunc_ln708_2095_reg_260117 = mul_ln1118_2934_fu_2043_p2.read().range(23, 14);
        trunc_ln708_2097_reg_260122 = mul_ln1118_2936_fu_2045_p2.read().range(23, 14);
        trunc_ln708_2098_reg_260127 = mul_ln1118_2937_fu_2074_p2.read().range(22, 14);
        trunc_ln708_2099_reg_260132 = mul_ln1118_2938_fu_2173_p2.read().range(23, 14);
        trunc_ln708_2100_reg_260137 = mul_ln1118_2939_fu_2050_p2.read().range(22, 14);
        trunc_ln708_2101_reg_260142 = mul_ln1118_2940_fu_2194_p2.read().range(23, 14);
        trunc_ln708_2105_reg_260147 = mul_ln1118_2944_fu_1975_p2.read().range(20, 14);
        trunc_ln708_2107_reg_260152 = mul_ln1118_2946_fu_1977_p2.read().range(21, 14);
        trunc_ln708_2108_reg_260157 = mul_ln1118_2947_fu_1986_p2.read().range(22, 14);
        trunc_ln708_2109_reg_260162 = mul_ln1118_2948_fu_1963_p2.read().range(22, 14);
        trunc_ln708_2110_reg_260167 = sub_ln1118_1242_fu_256362_p2.read().range(21, 14);
        trunc_ln708_s_reg_259405 = mul_ln1118_2738_fu_1948_p2.read().range(22, 14);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, p_Result_s_reg_259064_pp0_iter4_reg.read()))) {
        add_ln703_4118_reg_260462 = add_ln703_4118_fu_257452_p2.read();
        add_ln703_4121_reg_260467 = add_ln703_4121_fu_257466_p2.read();
        add_ln703_4125_reg_260472 = add_ln703_4125_fu_257476_p2.read();
        add_ln703_4135_reg_260477 = add_ln703_4135_fu_257507_p2.read();
        add_ln703_4139_reg_260482 = add_ln703_4139_fu_257528_p2.read();
        add_ln703_4142_reg_260487 = add_ln703_4142_fu_257540_p2.read();
        add_ln703_4154_reg_260492 = add_ln703_4154_fu_257569_p2.read();
        add_ln703_4157_reg_260497 = add_ln703_4157_fu_257579_p2.read();
        add_ln703_4161_reg_260502 = add_ln703_4161_fu_257588_p2.read();
        add_ln703_4166_reg_260507 = add_ln703_4166_fu_257605_p2.read();
        add_ln703_4167_reg_260512 = add_ln703_4167_fu_257611_p2.read();
        add_ln703_4169_reg_260517 = add_ln703_4169_fu_257623_p2.read();
        add_ln703_4175_reg_260522 = add_ln703_4175_fu_257647_p2.read();
        add_ln703_4176_reg_260527 = add_ln703_4176_fu_257653_p2.read();
        add_ln703_4178_reg_260532 = add_ln703_4178_fu_257669_p2.read();
        add_ln703_4190_reg_260537 = add_ln703_4190_fu_257698_p2.read();
        add_ln703_4193_reg_260542 = add_ln703_4193_fu_257708_p2.read();
        add_ln703_4197_reg_260547 = add_ln703_4197_fu_257717_p2.read();
        add_ln703_4207_reg_260552 = add_ln703_4207_fu_257746_p2.read();
        add_ln703_4211_reg_260557 = add_ln703_4211_fu_257770_p2.read();
        add_ln703_4212_reg_260562 = add_ln703_4212_fu_257776_p2.read();
        add_ln703_4226_reg_260567 = add_ln703_4226_fu_257805_p2.read();
        add_ln703_4229_reg_260572 = add_ln703_4229_fu_257815_p2.read();
        add_ln703_4233_reg_260577 = add_ln703_4233_fu_257831_p2.read();
        add_ln703_4238_reg_260582 = add_ln703_4238_fu_257848_p2.read();
        add_ln703_4239_reg_260587 = add_ln703_4239_fu_257854_p2.read();
        add_ln703_4241_reg_260592 = add_ln703_4241_fu_257870_p2.read();
        add_ln703_4251_reg_260597 = add_ln703_4251_fu_257925_p2.read();
        add_ln703_4261_reg_260602 = add_ln703_4261_fu_257954_p2.read();
        add_ln703_4264_reg_260607 = add_ln703_4264_fu_257964_p2.read();
        add_ln703_4268_reg_260612 = add_ln703_4268_fu_257973_p2.read();
        add_ln703_4278_reg_260617 = add_ln703_4278_fu_258001_p2.read();
        add_ln703_4281_reg_260622 = add_ln703_4281_fu_258019_p2.read();
        add_ln703_4282_reg_260627 = add_ln703_4282_fu_258025_p2.read();
        add_ln703_4284_reg_260632 = add_ln703_4284_fu_258034_p2.read();
        add_ln703_4296_reg_260637 = add_ln703_4296_fu_258063_p2.read();
        add_ln703_4299_reg_260642 = add_ln703_4299_fu_258073_p2.read();
        add_ln703_4303_reg_260647 = add_ln703_4303_fu_258082_p2.read();
        add_ln703_4313_reg_260652 = add_ln703_4313_fu_258109_p2.read();
        add_ln703_4322_reg_260657 = add_ln703_4322_fu_258166_p2.read();
        add_ln703_4332_reg_260662 = add_ln703_4332_fu_258195_p2.read();
        add_ln703_4335_reg_260667 = add_ln703_4335_fu_258205_p2.read();
        add_ln703_4339_reg_260672 = add_ln703_4339_fu_258214_p2.read();
        add_ln703_4349_reg_260677 = add_ln703_4349_fu_258245_p2.read();
        add_ln703_4353_reg_260682 = add_ln703_4353_fu_258263_p2.read();
        add_ln703_4354_reg_260687 = add_ln703_4354_fu_258268_p2.read();
        add_ln703_4355_reg_260692 = add_ln703_4355_fu_258284_p2.read();
        add_ln703_4367_reg_260697 = add_ln703_4367_fu_258313_p2.read();
        add_ln703_4370_reg_260702 = add_ln703_4370_fu_258323_p2.read();
        add_ln703_4374_reg_260707 = add_ln703_4374_fu_258332_p2.read();
        add_ln703_4384_reg_260712 = add_ln703_4384_fu_258372_p2.read();
        add_ln703_4392_reg_260717 = add_ln703_4392_fu_258430_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        add_ln703_4140_reg_260207_pp0_iter5_reg = add_ln703_4140_reg_260207.read();
        add_ln703_4214_reg_260272_pp0_iter5_reg = add_ln703_4214_reg_260272.read();
        p_Result_s_reg_259064_pp0_iter2_reg = p_Result_s_reg_259064.read();
        p_Result_s_reg_259064_pp0_iter3_reg = p_Result_s_reg_259064_pp0_iter2_reg.read();
        p_Result_s_reg_259064_pp0_iter4_reg = p_Result_s_reg_259064_pp0_iter3_reg.read();
        p_Result_s_reg_259064_pp0_iter5_reg = p_Result_s_reg_259064_pp0_iter4_reg.read();
        p_Result_s_reg_259064_pp0_iter6_reg = p_Result_s_reg_259064_pp0_iter5_reg.read();
        tmp_V_153_reg_259132_pp0_iter4_reg = tmp_V_153_reg_259132.read();
        tmp_V_166_reg_259255_pp0_iter4_reg = tmp_V_166_reg_259255.read();
        tmp_V_173_reg_259315_pp0_iter4_reg = tmp_V_173_reg_259315.read();
        tmp_V_179_reg_259370_pp0_iter4_reg = tmp_V_179_reg_259370.read();
        trunc_ln708_2039_reg_259400_pp0_iter4_reg = trunc_ln708_2039_reg_259400.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        icmp_ln53_reg_258998 = icmp_ln53_fu_251448_p2.read();
        icmp_ln53_reg_258998_pp0_iter1_reg = icmp_ln53_reg_258998.read();
        p_Result_s_reg_259064 = p_Val2_s_fu_251633_p27.read().range(8, 8);
        tmp_10_reg_259052 = p_Val2_s_fu_251633_p27.read().range(6, 6);
        tmp_11_reg_259056 = p_Val2_s_fu_251633_p27.read().range(7, 7);
        tmp_12_reg_259060 = p_Val2_s_fu_251633_p27.read().range(8, 8);
        tmp_3_reg_259032 = p_Val2_s_fu_251633_p27.read().range(1, 1);
        tmp_4_reg_259036 = p_Val2_s_fu_251633_p27.read().range(2, 2);
        tmp_7_reg_259040 = p_Val2_s_fu_251633_p27.read().range(3, 3);
        tmp_8_reg_259044 = p_Val2_s_fu_251633_p27.read().range(4, 4);
        tmp_9_reg_259048 = p_Val2_s_fu_251633_p27.read().range(5, 5);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_fu_251448_p2.read()))) {
        select_ln13_reg_259018 = select_ln13_fu_251604_p3.read();
        select_ln53_1_reg_259007 = select_ln53_1_fu_251538_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, p_Result_s_reg_259064_pp0_iter2_reg.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_V_146_reg_259068 = data_window_0_V_V_dout.read();
        tmp_V_147_reg_259076 = data_window_1_V_V_dout.read();
        tmp_V_148_reg_259084 = data_window_2_V_V_dout.read();
        tmp_V_149_reg_259093 = data_window_3_V_V_dout.read();
        tmp_V_150_reg_259104 = data_window_4_V_V_dout.read();
        tmp_V_151_reg_259115 = data_window_5_V_V_dout.read();
        tmp_V_152_reg_259123 = data_window_6_V_V_dout.read();
        tmp_V_153_reg_259132 = data_window_7_V_V_dout.read();
        tmp_V_154_reg_259144 = data_window_8_V_V_dout.read();
        tmp_V_155_reg_259151 = data_window_9_V_V_dout.read();
        tmp_V_156_reg_259159 = data_window_10_V_V_dout.read();
        tmp_V_157_reg_259168 = data_window_11_V_V_dout.read();
        tmp_V_158_reg_259179 = data_window_12_V_V_dout.read();
        tmp_V_159_reg_259188 = data_window_13_V_V_dout.read();
        tmp_V_160_reg_259198 = data_window_14_V_V_dout.read();
        tmp_V_161_reg_259208 = data_window_15_V_V_dout.read();
        tmp_V_162_reg_259218 = data_window_16_V_V_dout.read();
        tmp_V_163_reg_259229 = data_window_17_V_V_dout.read();
        tmp_V_164_reg_259238 = data_window_18_V_V_dout.read();
        tmp_V_165_reg_259245 = data_window_19_V_V_dout.read();
        tmp_V_166_reg_259255 = data_window_20_V_V_dout.read();
        tmp_V_167_reg_259264 = data_window_21_V_V_dout.read();
        tmp_V_168_reg_259273 = data_window_22_V_V_dout.read();
        tmp_V_169_reg_259283 = data_window_23_V_V_dout.read();
        tmp_V_170_reg_259292 = data_window_24_V_V_dout.read();
        tmp_V_171_reg_259303 = data_window_25_V_V_dout.read();
        tmp_V_172_reg_259308 = data_window_26_V_V_dout.read();
        tmp_V_173_reg_259315 = data_window_27_V_V_dout.read();
        tmp_V_174_reg_259327 = data_window_28_V_V_dout.read();
        tmp_V_175_reg_259337 = data_window_29_V_V_dout.read();
        tmp_V_176_reg_259345 = data_window_30_V_V_dout.read();
        tmp_V_177_reg_259352 = data_window_31_V_V_dout.read();
        tmp_V_178_reg_259361 = data_window_32_V_V_dout.read();
        tmp_V_179_reg_259370 = data_window_33_V_V_dout.read();
        tmp_V_180_reg_259380 = data_window_34_V_V_dout.read();
        tmp_V_181_reg_259386 = data_window_35_V_V_dout.read();
        trunc_ln1_reg_259395 = trunc_ln1_fu_251817_p1.read().range(15, 13);
        trunc_ln708_2039_reg_259400 = trunc_ln708_2039_fu_251827_p1.read().range(15, 7);
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(icmp_ln53_reg_258998.read(), ap_const_lv1_0))) {
        trunc_ln14_reg_259028 = trunc_ln14_fu_251689_p1.read();
    }
}

void conv_2d_cl_array_array_ap_fixed_8u_config5_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter6.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_fu_251448_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter6.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_fu_251448_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state10;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

