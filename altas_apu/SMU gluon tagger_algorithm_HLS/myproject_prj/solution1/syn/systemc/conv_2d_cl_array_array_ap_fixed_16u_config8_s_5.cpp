#include "conv_2d_cl_array_array_ap_fixed_16u_config8_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3131_fu_3966_p0() {
    mul_ln1118_3131_fu_3966_p0 =  (sc_lv<16>) (sext_ln1118_2536_fu_3602947_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3131_fu_3966_p2() {
    mul_ln1118_3131_fu_3966_p2 = (!mul_ln1118_3131_fu_3966_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3131_fu_3966_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3132_fu_3931_p0() {
    mul_ln1118_3132_fu_3931_p0 =  (sc_lv<16>) (sext_ln1118_2536_fu_3602947_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3132_fu_3931_p2() {
    mul_ln1118_3132_fu_3931_p2 = (!mul_ln1118_3132_fu_3931_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3132_fu_3931_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3133_fu_3646_p0() {
    mul_ln1118_3133_fu_3646_p0 =  (sc_lv<16>) (sext_ln1118_2536_fu_3602947_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3133_fu_3646_p2() {
    mul_ln1118_3133_fu_3646_p2 = (!mul_ln1118_3133_fu_3646_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3133_fu_3646_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3134_fu_3933_p0() {
    mul_ln1118_3134_fu_3933_p0 =  (sc_lv<16>) (sext_ln1118_2536_fu_3602947_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3134_fu_3933_p2() {
    mul_ln1118_3134_fu_3933_p2 = (!mul_ln1118_3134_fu_3933_p0.read().is_01() || !ap_const_lv24_FFFF68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3134_fu_3933_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF68);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3135_fu_3428_p0() {
    mul_ln1118_3135_fu_3428_p0 =  (sc_lv<16>) (sext_ln1118_2536_fu_3602947_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3135_fu_3428_p2() {
    mul_ln1118_3135_fu_3428_p2 = (!mul_ln1118_3135_fu_3428_p0.read().is_01() || !ap_const_lv24_FFFF7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3135_fu_3428_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3136_fu_4007_p0() {
    mul_ln1118_3136_fu_4007_p0 =  (sc_lv<16>) (sext_ln1118_2536_fu_3602947_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3136_fu_4007_p2() {
    mul_ln1118_3136_fu_4007_p2 = (!mul_ln1118_3136_fu_4007_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3136_fu_4007_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3137_fu_3936_p0() {
    mul_ln1118_3137_fu_3936_p0 =  (sc_lv<16>) (sext_ln1118_2537_fu_3602959_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3137_fu_3936_p2() {
    mul_ln1118_3137_fu_3936_p2 = (!mul_ln1118_3137_fu_3936_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3137_fu_3936_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3138_fu_3937_p0() {
    mul_ln1118_3138_fu_3937_p0 =  (sc_lv<16>) (sext_ln1118_2542_fu_3603171_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3138_fu_3937_p2() {
    mul_ln1118_3138_fu_3937_p2 = (!mul_ln1118_3138_fu_3937_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3138_fu_3937_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3139_fu_3938_p0() {
    mul_ln1118_3139_fu_3938_p0 =  (sc_lv<16>) (sext_ln1118_2543_fu_3603181_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3139_fu_3938_p2() {
    mul_ln1118_3139_fu_3938_p2 = (!mul_ln1118_3139_fu_3938_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3139_fu_3938_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3140_fu_4011_p0() {
    mul_ln1118_3140_fu_4011_p0 =  (sc_lv<16>) (sext_ln1118_2544_fu_3603188_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3140_fu_4011_p2() {
    mul_ln1118_3140_fu_4011_p2 = (!mul_ln1118_3140_fu_4011_p0.read().is_01() || !ap_const_lv22_3FFFE3.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3140_fu_4011_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3141_fu_3976_p0() {
    mul_ln1118_3141_fu_3976_p0 =  (sc_lv<16>) (sext_ln1118_2542_fu_3603171_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3141_fu_3976_p2() {
    mul_ln1118_3141_fu_3976_p2 = (!mul_ln1118_3141_fu_3976_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3141_fu_3976_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3142_fu_4013_p0() {
    mul_ln1118_3142_fu_4013_p0 =  (sc_lv<16>) (sext_ln1118_2543_fu_3603181_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3142_fu_4013_p2() {
    mul_ln1118_3142_fu_4013_p2 = (!mul_ln1118_3142_fu_4013_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3142_fu_4013_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3143_fu_4050_p0() {
    mul_ln1118_3143_fu_4050_p0 =  (sc_lv<16>) (sext_ln1118_2543_fu_3603181_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3143_fu_4050_p2() {
    mul_ln1118_3143_fu_4050_p2 = (!mul_ln1118_3143_fu_4050_p0.read().is_01() || !ap_const_lv23_7FFFC3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3143_fu_4050_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3144_fu_3720_p0() {
    mul_ln1118_3144_fu_3720_p0 =  (sc_lv<16>) (sext_ln1118_2542_fu_3603171_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3144_fu_3720_p2() {
    mul_ln1118_3144_fu_3720_p2 = (!mul_ln1118_3144_fu_3720_p0.read().is_01() || !ap_const_lv24_FFFF67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3144_fu_3720_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF67);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3145_fu_3566_p0() {
    mul_ln1118_3145_fu_3566_p0 =  (sc_lv<16>) (sext_ln1118_2544_fu_3603188_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3145_fu_3566_p2() {
    mul_ln1118_3145_fu_3566_p2 = (!mul_ln1118_3145_fu_3566_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3145_fu_3566_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3146_fu_3972_p0() {
    mul_ln1118_3146_fu_3972_p0 =  (sc_lv<16>) (sext_ln1118_2542_fu_3603171_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3146_fu_3972_p2() {
    mul_ln1118_3146_fu_3972_p2 = (!mul_ln1118_3146_fu_3972_p0.read().is_01() || !ap_const_lv24_71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3146_fu_3972_p0.read()) * sc_biguint<24>(ap_const_lv24_71);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3147_fu_3672_p0() {
    mul_ln1118_3147_fu_3672_p0 =  (sc_lv<16>) (sext_ln1118_2542_fu_3603171_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3147_fu_3672_p2() {
    mul_ln1118_3147_fu_3672_p2 = (!mul_ln1118_3147_fu_3672_p0.read().is_01() || !ap_const_lv24_63.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3147_fu_3672_p0.read()) * sc_biguint<24>(ap_const_lv24_63);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3148_fu_3932_p0() {
    mul_ln1118_3148_fu_3932_p0 =  (sc_lv<16>) (sext_ln1118_2542_fu_3603171_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3148_fu_3932_p2() {
    mul_ln1118_3148_fu_3932_p2 = (!mul_ln1118_3148_fu_3932_p0.read().is_01() || !ap_const_lv24_FFFF7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3148_fu_3932_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3149_fu_4484_p0() {
    mul_ln1118_3149_fu_4484_p0 =  (sc_lv<16>) (sext_ln1118_2542_fu_3603171_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3149_fu_4484_p2() {
    mul_ln1118_3149_fu_4484_p2 = (!mul_ln1118_3149_fu_4484_p0.read().is_01() || !ap_const_lv24_5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3149_fu_4484_p0.read()) * sc_biguint<24>(ap_const_lv24_5E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3150_fu_3965_p0() {
    mul_ln1118_3150_fu_3965_p0 =  (sc_lv<16>) (sext_ln1118_2543_fu_3603181_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3150_fu_3965_p2() {
    mul_ln1118_3150_fu_3965_p2 = (!mul_ln1118_3150_fu_3965_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3150_fu_3965_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3151_fu_3738_p0() {
    mul_ln1118_3151_fu_3738_p0 =  (sc_lv<16>) (sext_ln1118_2553_fu_3603445_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3151_fu_3738_p2() {
    mul_ln1118_3151_fu_3738_p2 = (!mul_ln1118_3151_fu_3738_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3151_fu_3738_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3152_fu_4144_p0() {
    mul_ln1118_3152_fu_4144_p0 =  (sc_lv<16>) (sext_ln1118_2553_fu_3603445_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3152_fu_4144_p2() {
    mul_ln1118_3152_fu_4144_p2 = (!mul_ln1118_3152_fu_4144_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3152_fu_4144_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3153_fu_4477_p0() {
    mul_ln1118_3153_fu_4477_p0 =  (sc_lv<16>) (sext_ln1118_2551_fu_3603433_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3153_fu_4477_p2() {
    mul_ln1118_3153_fu_4477_p2 = (!mul_ln1118_3153_fu_4477_p0.read().is_01() || !ap_const_lv24_4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3153_fu_4477_p0.read()) * sc_biguint<24>(ap_const_lv24_4D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3154_fu_3958_p0() {
    mul_ln1118_3154_fu_3958_p0 =  (sc_lv<16>) (sext_ln1118_2551_fu_3603433_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3154_fu_3958_p2() {
    mul_ln1118_3154_fu_3958_p2 = (!mul_ln1118_3154_fu_3958_p0.read().is_01() || !ap_const_lv24_FFFF8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3154_fu_3958_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3155_fu_3731_p0() {
    mul_ln1118_3155_fu_3731_p0 =  (sc_lv<16>) (sext_ln1118_2551_fu_3603433_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3155_fu_3731_p2() {
    mul_ln1118_3155_fu_3731_p2 = (!mul_ln1118_3155_fu_3731_p0.read().is_01() || !ap_const_lv24_FFFF54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3155_fu_3731_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF54);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3156_fu_4210_p0() {
    mul_ln1118_3156_fu_4210_p0 =  (sc_lv<16>) (sext_ln1118_2551_fu_3603433_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3156_fu_4210_p2() {
    mul_ln1118_3156_fu_4210_p2 = (!mul_ln1118_3156_fu_4210_p0.read().is_01() || !ap_const_lv24_FFFF6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3156_fu_4210_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3157_fu_4543_p0() {
    mul_ln1118_3157_fu_4543_p0 =  (sc_lv<16>) (sext_ln1118_2551_fu_3603433_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3157_fu_4543_p2() {
    mul_ln1118_3157_fu_4543_p2 = (!mul_ln1118_3157_fu_4543_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3157_fu_4543_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3158_fu_4170_p0() {
    mul_ln1118_3158_fu_4170_p0 =  (sc_lv<16>) (sext_ln1118_2551_fu_3603433_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3158_fu_4170_p2() {
    mul_ln1118_3158_fu_4170_p2 = (!mul_ln1118_3158_fu_4170_p0.read().is_01() || !ap_const_lv24_FFFF6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3158_fu_4170_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3159_fu_4576_p0() {
    mul_ln1118_3159_fu_4576_p0 =  (sc_lv<16>) (sext_ln1118_2560_fu_3603685_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3159_fu_4576_p2() {
    mul_ln1118_3159_fu_4576_p2 = (!mul_ln1118_3159_fu_4576_p0.read().is_01() || !ap_const_lv24_6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3159_fu_4576_p0.read()) * sc_biguint<24>(ap_const_lv24_6B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3160_fu_4276_p0() {
    mul_ln1118_3160_fu_4276_p0 =  (sc_lv<16>) (sext_ln1118_2560_fu_3603685_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3160_fu_4276_p2() {
    mul_ln1118_3160_fu_4276_p2 = (!mul_ln1118_3160_fu_4276_p0.read().is_01() || !ap_const_lv24_97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3160_fu_4276_p0.read()) * sc_biguint<24>(ap_const_lv24_97);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3161_fu_4154_p0() {
    mul_ln1118_3161_fu_4154_p0 =  (sc_lv<16>) (sext_ln1118_2559_fu_3603678_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3161_fu_4154_p2() {
    mul_ln1118_3161_fu_4154_p2 = (!mul_ln1118_3161_fu_4154_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3161_fu_4154_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3162_fu_3755_p0() {
    mul_ln1118_3162_fu_3755_p0 =  (sc_lv<16>) (sext_ln1118_2560_fu_3603685_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3162_fu_3755_p2() {
    mul_ln1118_3162_fu_3755_p2 = (!mul_ln1118_3162_fu_3755_p0.read().is_01() || !ap_const_lv24_FFFF61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3162_fu_3755_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF61);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3163_fu_4187_p0() {
    mul_ln1118_3163_fu_4187_p0 =  (sc_lv<16>) (sext_ln1118_2560_fu_3603685_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3163_fu_4187_p2() {
    mul_ln1118_3163_fu_4187_p2 = (!mul_ln1118_3163_fu_4187_p0.read().is_01() || !ap_const_lv24_4F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3163_fu_4187_p0.read()) * sc_biguint<24>(ap_const_lv24_4F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3164_fu_4217_p0() {
    mul_ln1118_3164_fu_4217_p0 =  (sc_lv<16>) (sext_ln1118_2559_fu_3603678_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3164_fu_4217_p2() {
    mul_ln1118_3164_fu_4217_p2 = (!mul_ln1118_3164_fu_4217_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3164_fu_4217_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3165_fu_3467_p0() {
    mul_ln1118_3165_fu_3467_p0 =  (sc_lv<16>) (sext_ln1118_2559_fu_3603678_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3165_fu_3467_p2() {
    mul_ln1118_3165_fu_3467_p2 = (!mul_ln1118_3165_fu_3467_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3165_fu_3467_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3166_fu_3899_p0() {
    mul_ln1118_3166_fu_3899_p0 =  (sc_lv<16>) (sext_ln1118_2559_fu_3603678_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3166_fu_3899_p2() {
    mul_ln1118_3166_fu_3899_p2 = (!mul_ln1118_3166_fu_3899_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3166_fu_3899_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3167_fu_4253_p0() {
    mul_ln1118_3167_fu_4253_p0 =  (sc_lv<16>) (sext_ln1118_2560_fu_3603685_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3167_fu_4253_p2() {
    mul_ln1118_3167_fu_4253_p2 = (!mul_ln1118_3167_fu_4253_p0.read().is_01() || !ap_const_lv24_56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3167_fu_4253_p0.read()) * sc_biguint<24>(ap_const_lv24_56);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3168_fu_4438_p0() {
    mul_ln1118_3168_fu_4438_p0 =  (sc_lv<16>) (sext_ln1118_2560_fu_3603685_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3168_fu_4438_p2() {
    mul_ln1118_3168_fu_4438_p2 = (!mul_ln1118_3168_fu_4438_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3168_fu_4438_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3169_fu_4403_p0() {
    mul_ln1118_3169_fu_4403_p0 =  (sc_lv<16>) (sext_ln1118_2567_fu_3603940_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3169_fu_4403_p2() {
    mul_ln1118_3169_fu_4403_p2 = (!mul_ln1118_3169_fu_4403_p0.read().is_01() || !ap_const_lv24_FFFF5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3169_fu_4403_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3170_fu_4440_p0() {
    mul_ln1118_3170_fu_4440_p0 =  (sc_lv<16>) (sext_ln1118_2567_fu_3603940_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3170_fu_4440_p2() {
    mul_ln1118_3170_fu_4440_p2 = (!mul_ln1118_3170_fu_4440_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3170_fu_4440_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3171_fu_4333_p0() {
    mul_ln1118_3171_fu_4333_p0 =  (sc_lv<16>) (sext_ln1118_2567_fu_3603940_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3171_fu_4333_p2() {
    mul_ln1118_3171_fu_4333_p2 = (!mul_ln1118_3171_fu_4333_p0.read().is_01() || !ap_const_lv24_FFFFA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3171_fu_4333_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA4);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3172_fu_4406_p0() {
    mul_ln1118_3172_fu_4406_p0 = tmp_V_310_reg_3624063.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3172_fu_4406_p2() {
    mul_ln1118_3172_fu_4406_p2 = (!mul_ln1118_3172_fu_4406_p0.read().is_01() || !ap_const_lv23_7FFFD6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3172_fu_4406_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3173_fu_4371_p0() {
    mul_ln1118_3173_fu_4371_p0 =  (sc_lv<16>) (sext_ln1118_2567_fu_3603940_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3173_fu_4371_p2() {
    mul_ln1118_3173_fu_4371_p2 = (!mul_ln1118_3173_fu_4371_p0.read().is_01() || !ap_const_lv24_9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3173_fu_4371_p0.read()) * sc_biguint<24>(ap_const_lv24_9B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3174_fu_4444_p0() {
    mul_ln1118_3174_fu_4444_p0 =  (sc_lv<16>) (sext_ln1118_2567_fu_3603940_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3174_fu_4444_p2() {
    mul_ln1118_3174_fu_4444_p2 = (!mul_ln1118_3174_fu_4444_p0.read().is_01() || !ap_const_lv24_FFFF72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3174_fu_4444_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF72);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3175_fu_4445_p0() {
    mul_ln1118_3175_fu_4445_p0 =  (sc_lv<16>) (sext_ln1118_2567_fu_3603940_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3175_fu_4445_p2() {
    mul_ln1118_3175_fu_4445_p2 = (!mul_ln1118_3175_fu_4445_p0.read().is_01() || !ap_const_lv24_FFFFA7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3175_fu_4445_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3176_fu_4446_p0() {
    mul_ln1118_3176_fu_4446_p0 =  (sc_lv<16>) (sext_ln1118_2567_fu_3603940_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3176_fu_4446_p2() {
    mul_ln1118_3176_fu_4446_p2 = (!mul_ln1118_3176_fu_4446_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3176_fu_4446_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3177_fu_4447_p0() {
    mul_ln1118_3177_fu_4447_p0 =  (sc_lv<16>) (sext_ln1118_2567_fu_3603940_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3177_fu_4447_p2() {
    mul_ln1118_3177_fu_4447_p2 = (!mul_ln1118_3177_fu_4447_p0.read().is_01() || !ap_const_lv24_52.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3177_fu_4447_p0.read()) * sc_biguint<24>(ap_const_lv24_52);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3178_fu_4412_p0() {
    mul_ln1118_3178_fu_4412_p0 =  (sc_lv<16>) (sext_ln1118_2567_fu_3603940_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3178_fu_4412_p2() {
    mul_ln1118_3178_fu_4412_p2 = (!mul_ln1118_3178_fu_4412_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3178_fu_4412_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3179_fu_4413_p0() {
    mul_ln1118_3179_fu_4413_p0 =  (sc_lv<16>) (sext_ln1118_2580_fu_3604250_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3179_fu_4413_p2() {
    mul_ln1118_3179_fu_4413_p2 = (!mul_ln1118_3179_fu_4413_p0.read().is_01() || !ap_const_lv24_FFFF89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3179_fu_4413_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF89);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3180_fu_4450_p0() {
    mul_ln1118_3180_fu_4450_p0 = tmp_V_311_reg_3624076.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3180_fu_4450_p2() {
    mul_ln1118_3180_fu_4450_p2 = (!mul_ln1118_3180_fu_4450_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3180_fu_4450_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3181_fu_4451_p0() {
    mul_ln1118_3181_fu_4451_p0 =  (sc_lv<16>) (sext_ln1118_2580_fu_3604250_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3181_fu_4451_p2() {
    mul_ln1118_3181_fu_4451_p2 = (!mul_ln1118_3181_fu_4451_p0.read().is_01() || !ap_const_lv24_8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3181_fu_4451_p0.read()) * sc_biguint<24>(ap_const_lv24_8F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3182_fu_4416_p0() {
    mul_ln1118_3182_fu_4416_p0 =  (sc_lv<16>) (sext_ln1118_2580_fu_3604250_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3182_fu_4416_p2() {
    mul_ln1118_3182_fu_4416_p2 = (!mul_ln1118_3182_fu_4416_p0.read().is_01() || !ap_const_lv24_52.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3182_fu_4416_p0.read()) * sc_biguint<24>(ap_const_lv24_52);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3183_fu_4489_p0() {
    mul_ln1118_3183_fu_4489_p0 =  (sc_lv<16>) (sext_ln1118_2581_fu_3604260_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3183_fu_4489_p2() {
    mul_ln1118_3183_fu_4489_p2 = (!mul_ln1118_3183_fu_4489_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3183_fu_4489_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3184_fu_4418_p0() {
    mul_ln1118_3184_fu_4418_p0 =  (sc_lv<16>) (sext_ln1118_2578_fu_3604241_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3184_fu_4418_p2() {
    mul_ln1118_3184_fu_4418_p2 = (!mul_ln1118_3184_fu_4418_p0.read().is_01() || !ap_const_lv22_3FFFE7.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3184_fu_4418_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3185_fu_4347_p0() {
    mul_ln1118_3185_fu_4347_p0 =  (sc_lv<16>) (sext_ln1118_2580_fu_3604250_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3185_fu_4347_p2() {
    mul_ln1118_3185_fu_4347_p2 = (!mul_ln1118_3185_fu_4347_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3185_fu_4347_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3186_fu_4456_p0() {
    mul_ln1118_3186_fu_4456_p0 =  (sc_lv<16>) (sext_ln1118_2581_fu_3604260_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3186_fu_4456_p2() {
    mul_ln1118_3186_fu_4456_p2 = (!mul_ln1118_3186_fu_4456_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3186_fu_4456_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3187_fu_4457_p0() {
    mul_ln1118_3187_fu_4457_p0 =  (sc_lv<16>) (sext_ln1118_2578_fu_3604241_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3187_fu_4457_p2() {
    mul_ln1118_3187_fu_4457_p2 = (!mul_ln1118_3187_fu_4457_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3187_fu_4457_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3188_fu_4458_p0() {
    mul_ln1118_3188_fu_4458_p0 =  (sc_lv<16>) (sext_ln1118_2580_fu_3604250_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3188_fu_4458_p2() {
    mul_ln1118_3188_fu_4458_p2 = (!mul_ln1118_3188_fu_4458_p0.read().is_01() || !ap_const_lv24_FFFF61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3188_fu_4458_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF61);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3189_fu_4459_p0() {
    mul_ln1118_3189_fu_4459_p0 =  (sc_lv<16>) (sext_ln1118_2580_fu_3604250_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3189_fu_4459_p2() {
    mul_ln1118_3189_fu_4459_p2 = (!mul_ln1118_3189_fu_4459_p0.read().is_01() || !ap_const_lv24_FFFF7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3189_fu_4459_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3190_fu_4460_p0() {
    mul_ln1118_3190_fu_4460_p0 =  (sc_lv<16>) (sext_ln1118_2580_fu_3604250_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3190_fu_4460_p2() {
    mul_ln1118_3190_fu_4460_p2 = (!mul_ln1118_3190_fu_4460_p0.read().is_01() || !ap_const_lv24_FFFF66.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3190_fu_4460_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF66);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3191_fu_3500_p0() {
    mul_ln1118_3191_fu_3500_p0 =  (sc_lv<16>) (sext_ln1118_2581_fu_3604260_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3191_fu_3500_p2() {
    mul_ln1118_3191_fu_3500_p2 = (!mul_ln1118_3191_fu_3500_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3191_fu_3500_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3192_fu_4462_p0() {
    mul_ln1118_3192_fu_4462_p0 =  (sc_lv<16>) (sext_ln1118_2590_fu_3604539_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3192_fu_4462_p2() {
    mul_ln1118_3192_fu_4462_p2 = (!mul_ln1118_3192_fu_4462_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3192_fu_4462_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3193_fu_3903_p0() {
    mul_ln1118_3193_fu_3903_p0 =  (sc_lv<16>) (sext_ln1118_2589_fu_3604527_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3193_fu_3903_p2() {
    mul_ln1118_3193_fu_3903_p2 = (!mul_ln1118_3193_fu_3903_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3193_fu_3903_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3194_fu_4309_p0() {
    mul_ln1118_3194_fu_4309_p0 =  (sc_lv<16>) (sext_ln1118_2590_fu_3604539_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3194_fu_4309_p2() {
    mul_ln1118_3194_fu_4309_p2 = (!mul_ln1118_3194_fu_4309_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3194_fu_4309_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3195_fu_3863_p0() {
    mul_ln1118_3195_fu_3863_p0 =  (sc_lv<16>) (sext_ln1118_2589_fu_3604527_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3195_fu_3863_p2() {
    mul_ln1118_3195_fu_3863_p2 = (!mul_ln1118_3195_fu_3863_p0.read().is_01() || !ap_const_lv24_FFFF7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3195_fu_3863_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3196_fu_3490_p0() {
    mul_ln1118_3196_fu_3490_p0 =  (sc_lv<16>) (sext_ln1118_2589_fu_3604527_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3196_fu_3490_p2() {
    mul_ln1118_3196_fu_3490_p2 = (!mul_ln1118_3196_fu_3490_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3196_fu_3490_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3197_fu_3896_p0() {
    mul_ln1118_3197_fu_3896_p0 = tmp_V_312_reg_3624089.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3197_fu_3896_p2() {
    mul_ln1118_3197_fu_3896_p2 = (!mul_ln1118_3197_fu_3896_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3197_fu_3896_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3198_fu_3523_p0() {
    mul_ln1118_3198_fu_3523_p0 =  (sc_lv<16>) (sext_ln1118_2589_fu_3604527_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3198_fu_3523_p2() {
    mul_ln1118_3198_fu_3523_p2 = (!mul_ln1118_3198_fu_3523_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3198_fu_3523_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3199_fu_4562_p0() {
    mul_ln1118_3199_fu_4562_p0 =  (sc_lv<16>) (sext_ln1118_2589_fu_3604527_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3199_fu_4562_p2() {
    mul_ln1118_3199_fu_4562_p2 = (!mul_ln1118_3199_fu_4562_p0.read().is_01() || !ap_const_lv24_56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3199_fu_4562_p0.read()) * sc_biguint<24>(ap_const_lv24_56);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3200_fu_4335_p0() {
    mul_ln1118_3200_fu_4335_p0 =  (sc_lv<16>) (sext_ln1118_2589_fu_3604527_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3200_fu_4335_p2() {
    mul_ln1118_3200_fu_4335_p2 = (!mul_ln1118_3200_fu_4335_p0.read().is_01() || !ap_const_lv24_FFFF85.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3200_fu_4335_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF85);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3201_fu_3962_p0() {
    mul_ln1118_3201_fu_3962_p0 =  (sc_lv<16>) (sext_ln1118_2589_fu_3604527_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3201_fu_3962_p2() {
    mul_ln1118_3201_fu_3962_p2 = (!mul_ln1118_3201_fu_3962_p0.read().is_01() || !ap_const_lv24_5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3201_fu_3962_p0.read()) * sc_biguint<24>(ap_const_lv24_5E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3202_fu_3589_p0() {
    mul_ln1118_3202_fu_3589_p0 =  (sc_lv<16>) (sext_ln1118_2590_fu_3604539_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3202_fu_3589_p2() {
    mul_ln1118_3202_fu_3589_p2 = (!mul_ln1118_3202_fu_3589_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3202_fu_3589_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3203_fu_3995_p0() {
    mul_ln1118_3203_fu_3995_p0 =  (sc_lv<16>) (sext_ln1118_2589_fu_3604527_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3203_fu_3995_p2() {
    mul_ln1118_3203_fu_3995_p2 = (!mul_ln1118_3203_fu_3995_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3203_fu_3995_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3204_fu_3549_p0() {
    mul_ln1118_3204_fu_3549_p0 =  (sc_lv<16>) (sext_ln1118_2590_fu_3604539_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3204_fu_3549_p2() {
    mul_ln1118_3204_fu_3549_p2 = (!mul_ln1118_3204_fu_3549_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3204_fu_3549_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3205_fu_4028_p0() {
    mul_ln1118_3205_fu_4028_p0 =  (sc_lv<16>) (sext_ln1118_2589_fu_3604527_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3205_fu_4028_p2() {
    mul_ln1118_3205_fu_4028_p2 = (!mul_ln1118_3205_fu_4028_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3205_fu_4028_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3206_fu_3728_p0() {
    mul_ln1118_3206_fu_3728_p0 =  (sc_lv<16>) (sext_ln1118_2595_fu_3604764_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3206_fu_3728_p2() {
    mul_ln1118_3206_fu_3728_p2 = (!mul_ln1118_3206_fu_3728_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3206_fu_3728_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3207_fu_4061_p0() {
    mul_ln1118_3207_fu_4061_p0 = tmp_V_313_reg_3624100.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3207_fu_4061_p2() {
    mul_ln1118_3207_fu_4061_p2 = (!mul_ln1118_3207_fu_4061_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3207_fu_4061_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3208_fu_3761_p0() {
    mul_ln1118_3208_fu_3761_p0 =  (sc_lv<16>) (sext_ln1118_2595_fu_3604764_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3208_fu_3761_p2() {
    mul_ln1118_3208_fu_3761_p2 = (!mul_ln1118_3208_fu_3761_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3208_fu_3761_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3209_fu_4094_p0() {
    mul_ln1118_3209_fu_4094_p0 =  (sc_lv<16>) (sext_ln1118_2597_fu_3604778_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3209_fu_4094_p2() {
    mul_ln1118_3209_fu_4094_p2 = (!mul_ln1118_3209_fu_4094_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3209_fu_4094_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3210_fu_4230_p0() {
    mul_ln1118_3210_fu_4230_p0 =  (sc_lv<16>) (sext_ln1118_2595_fu_3604764_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3210_fu_4230_p2() {
    mul_ln1118_3210_fu_4230_p2 = (!mul_ln1118_3210_fu_4230_p0.read().is_01() || !ap_const_lv24_FFFF75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3210_fu_4230_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF75);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3211_fu_3857_p0() {
    mul_ln1118_3211_fu_3857_p0 =  (sc_lv<16>) (sext_ln1118_2595_fu_3604764_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3211_fu_3857_p2() {
    mul_ln1118_3211_fu_3857_p2 = (!mul_ln1118_3211_fu_3857_p0.read().is_01() || !ap_const_lv24_FFFF9F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3211_fu_3857_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3212_fu_4263_p0() {
    mul_ln1118_3212_fu_4263_p0 =  (sc_lv<16>) (sext_ln1118_2595_fu_3604764_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3212_fu_4263_p2() {
    mul_ln1118_3212_fu_4263_p2 = (!mul_ln1118_3212_fu_4263_p0.read().is_01() || !ap_const_lv24_FFFF5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3212_fu_4263_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3213_fu_3916_p0() {
    mul_ln1118_3213_fu_3916_p0 =  (sc_lv<16>) (sext_ln1118_2597_fu_3604778_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3213_fu_3916_p2() {
    mul_ln1118_3213_fu_3916_p2 = (!mul_ln1118_3213_fu_3916_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3213_fu_3916_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3214_fu_4270_p0() {
    mul_ln1118_3214_fu_4270_p0 =  (sc_lv<16>) (sext_ln1118_2595_fu_3604764_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3214_fu_4270_p2() {
    mul_ln1118_3214_fu_4270_p2 = (!mul_ln1118_3214_fu_4270_p0.read().is_01() || !ap_const_lv24_FFFF7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3214_fu_4270_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3215_fu_3949_p0() {
    mul_ln1118_3215_fu_3949_p0 =  (sc_lv<16>) (sext_ln1118_2595_fu_3604764_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3215_fu_3949_p2() {
    mul_ln1118_3215_fu_3949_p2 = (!mul_ln1118_3215_fu_3949_p0.read().is_01() || !ap_const_lv24_FFFF89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3215_fu_3949_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF89);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3216_fu_4355_p0() {
    mul_ln1118_3216_fu_4355_p0 =  (sc_lv<16>) (sext_ln1118_2608_fu_3605069_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3216_fu_4355_p2() {
    mul_ln1118_3216_fu_4355_p2 = (!mul_ln1118_3216_fu_4355_p0.read().is_01() || !ap_const_lv24_FFFF7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3216_fu_4355_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3217_fu_3956_p0() {
    mul_ln1118_3217_fu_3956_p0 =  (sc_lv<16>) (sext_ln1118_2608_fu_3605069_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3217_fu_3956_p2() {
    mul_ln1118_3217_fu_3956_p2 = (!mul_ln1118_3217_fu_3956_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3217_fu_3956_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3218_fu_3698_p0() {
    mul_ln1118_3218_fu_3698_p0 =  (sc_lv<16>) (sext_ln1118_2608_fu_3605069_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3218_fu_3698_p2() {
    mul_ln1118_3218_fu_3698_p2 = (!mul_ln1118_3218_fu_3698_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3218_fu_3698_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3219_fu_3627_p0() {
    mul_ln1118_3219_fu_3627_p0 =  (sc_lv<16>) (sext_ln1118_2608_fu_3605069_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3219_fu_3627_p2() {
    mul_ln1118_3219_fu_3627_p2 = (!mul_ln1118_3219_fu_3627_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3219_fu_3627_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3220_fu_3628_p0() {
    mul_ln1118_3220_fu_3628_p0 =  (sc_lv<16>) (sext_ln1118_2608_fu_3605069_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3220_fu_3628_p2() {
    mul_ln1118_3220_fu_3628_p2 = (!mul_ln1118_3220_fu_3628_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3220_fu_3628_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3221_fu_3737_p0() {
    mul_ln1118_3221_fu_3737_p0 = tmp_V_314_reg_3624113.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3221_fu_3737_p2() {
    mul_ln1118_3221_fu_3737_p2 = (!mul_ln1118_3221_fu_3737_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3221_fu_3737_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3222_fu_3702_p0() {
    mul_ln1118_3222_fu_3702_p0 =  (sc_lv<16>) (sext_ln1118_2608_fu_3605069_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3222_fu_3702_p2() {
    mul_ln1118_3222_fu_3702_p2 = (!mul_ln1118_3222_fu_3702_p0.read().is_01() || !ap_const_lv24_91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3222_fu_3702_p0.read()) * sc_biguint<24>(ap_const_lv24_91);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3223_fu_3739_p0() {
    mul_ln1118_3223_fu_3739_p0 =  (sc_lv<16>) (sext_ln1118_2608_fu_3605069_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3223_fu_3739_p2() {
    mul_ln1118_3223_fu_3739_p2 = (!mul_ln1118_3223_fu_3739_p0.read().is_01() || !ap_const_lv24_4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3223_fu_3739_p0.read()) * sc_biguint<24>(ap_const_lv24_4B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3224_fu_3668_p0() {
    mul_ln1118_3224_fu_3668_p0 =  (sc_lv<16>) (sext_ln1118_2608_fu_3605069_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3224_fu_3668_p2() {
    mul_ln1118_3224_fu_3668_p2 = (!mul_ln1118_3224_fu_3668_p0.read().is_01() || !ap_const_lv24_68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3224_fu_3668_p0.read()) * sc_biguint<24>(ap_const_lv24_68);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3225_fu_3741_p0() {
    mul_ln1118_3225_fu_3741_p0 =  (sc_lv<16>) (sext_ln1118_2608_fu_3605069_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3225_fu_3741_p2() {
    mul_ln1118_3225_fu_3741_p2 = (!mul_ln1118_3225_fu_3741_p0.read().is_01() || !ap_const_lv24_FFFF8B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3225_fu_3741_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3226_fu_3706_p0() {
    mul_ln1118_3226_fu_3706_p0 =  (sc_lv<16>) (sext_ln1118_2616_fu_3605347_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3226_fu_3706_p2() {
    mul_ln1118_3226_fu_3706_p2 = (!mul_ln1118_3226_fu_3706_p0.read().is_01() || !ap_const_lv24_FFFF5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3226_fu_3706_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3227_fu_3707_p0() {
    mul_ln1118_3227_fu_3707_p0 =  (sc_lv<16>) (sext_ln1118_2616_fu_3605347_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3227_fu_3707_p2() {
    mul_ln1118_3227_fu_3707_p2 = (!mul_ln1118_3227_fu_3707_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3227_fu_3707_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3228_fu_3708_p0() {
    mul_ln1118_3228_fu_3708_p0 =  (sc_lv<16>) (sext_ln1118_2618_fu_3605360_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3228_fu_3708_p2() {
    mul_ln1118_3228_fu_3708_p2 = (!mul_ln1118_3228_fu_3708_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3228_fu_3708_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3229_fu_3745_p0() {
    mul_ln1118_3229_fu_3745_p0 = tmp_V_315_reg_3624125.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3229_fu_3745_p2() {
    mul_ln1118_3229_fu_3745_p2 = (!mul_ln1118_3229_fu_3745_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3229_fu_3745_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3230_fu_3501_p0() {
    mul_ln1118_3230_fu_3501_p0 =  (sc_lv<16>) (sext_ln1118_2616_fu_3605347_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3230_fu_3501_p2() {
    mul_ln1118_3230_fu_3501_p2 = (!mul_ln1118_3230_fu_3501_p0.read().is_01() || !ap_const_lv24_51.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3230_fu_3501_p0.read()) * sc_biguint<24>(ap_const_lv24_51);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3231_fu_3747_p0() {
    mul_ln1118_3231_fu_3747_p0 =  (sc_lv<16>) (sext_ln1118_2618_fu_3605360_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3231_fu_3747_p2() {
    mul_ln1118_3231_fu_3747_p2 = (!mul_ln1118_3231_fu_3747_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3231_fu_3747_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3232_fu_3640_p0() {
    mul_ln1118_3232_fu_3640_p0 =  (sc_lv<16>) (sext_ln1118_2618_fu_3605360_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3232_fu_3640_p2() {
    mul_ln1118_3232_fu_3640_p2 = (!mul_ln1118_3232_fu_3640_p0.read().is_01() || !ap_const_lv23_39.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3232_fu_3640_p0.read()) * sc_biguint<23>(ap_const_lv23_39);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3233_fu_4222_p0() {
    mul_ln1118_3233_fu_4222_p0 =  (sc_lv<16>) (sext_ln1118_2616_fu_3605347_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3233_fu_4222_p2() {
    mul_ln1118_3233_fu_4222_p2 = (!mul_ln1118_3233_fu_4222_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3233_fu_4222_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3234_fu_3750_p0() {
    mul_ln1118_3234_fu_3750_p0 =  (sc_lv<16>) (sext_ln1118_2616_fu_3605347_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3234_fu_3750_p2() {
    mul_ln1118_3234_fu_3750_p2 = (!mul_ln1118_3234_fu_3750_p0.read().is_01() || !ap_const_lv24_89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3234_fu_3750_p0.read()) * sc_biguint<24>(ap_const_lv24_89);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3235_fu_3751_p0() {
    mul_ln1118_3235_fu_3751_p0 =  (sc_lv<16>) (sext_ln1118_2616_fu_3605347_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3235_fu_3751_p2() {
    mul_ln1118_3235_fu_3751_p2 = (!mul_ln1118_3235_fu_3751_p0.read().is_01() || !ap_const_lv24_52.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3235_fu_3751_p0.read()) * sc_biguint<24>(ap_const_lv24_52);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3236_fu_3572_p0() {
    mul_ln1118_3236_fu_3572_p0 =  (sc_lv<16>) (sext_ln1118_2628_fu_3605654_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3236_fu_3572_p2() {
    mul_ln1118_3236_fu_3572_p2 = (!mul_ln1118_3236_fu_3572_p0.read().is_01() || !ap_const_lv24_FFFF61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3236_fu_3572_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF61);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3237_fu_3753_p0() {
    mul_ln1118_3237_fu_3753_p0 =  (sc_lv<16>) (sext_ln1118_2628_fu_3605654_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3237_fu_3753_p2() {
    mul_ln1118_3237_fu_3753_p2 = (!mul_ln1118_3237_fu_3753_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3237_fu_3753_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3238_fu_3718_p0() {
    mul_ln1118_3238_fu_3718_p0 =  (sc_lv<16>) (sext_ln1118_2627_fu_3605646_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3238_fu_3718_p2() {
    mul_ln1118_3238_fu_3718_p2 = (!mul_ln1118_3238_fu_3718_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3238_fu_3718_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3239_fu_3683_p0() {
    mul_ln1118_3239_fu_3683_p0 =  (sc_lv<16>) (sext_ln1118_2628_fu_3605654_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3239_fu_3683_p2() {
    mul_ln1118_3239_fu_3683_p2 = (!mul_ln1118_3239_fu_3683_p0.read().is_01() || !ap_const_lv24_6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3239_fu_3683_p0.read()) * sc_biguint<24>(ap_const_lv24_6B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3240_fu_3756_p0() {
    mul_ln1118_3240_fu_3756_p0 =  (sc_lv<16>) (sext_ln1118_2627_fu_3605646_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3240_fu_3756_p2() {
    mul_ln1118_3240_fu_3756_p2 = (!mul_ln1118_3240_fu_3756_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3240_fu_3756_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3241_fu_3721_p0() {
    mul_ln1118_3241_fu_3721_p0 =  (sc_lv<16>) (sext_ln1118_2627_fu_3605646_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3241_fu_3721_p2() {
    mul_ln1118_3241_fu_3721_p2 = (!mul_ln1118_3241_fu_3721_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3241_fu_3721_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3242_fu_3758_p0() {
    mul_ln1118_3242_fu_3758_p0 =  (sc_lv<16>) (sext_ln1118_2627_fu_3605646_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3242_fu_3758_p2() {
    mul_ln1118_3242_fu_3758_p2 = (!mul_ln1118_3242_fu_3758_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3242_fu_3758_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3243_fu_4127_p0() {
    mul_ln1118_3243_fu_4127_p0 =  (sc_lv<16>) (sext_ln1118_2628_fu_3605654_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3243_fu_4127_p2() {
    mul_ln1118_3243_fu_4127_p2 = (!mul_ln1118_3243_fu_4127_p0.read().is_01() || !ap_const_lv24_FFFF99.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3243_fu_4127_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF99);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3244_fu_4533_p0() {
    mul_ln1118_3244_fu_4533_p0 =  (sc_lv<16>) (sext_ln1118_2627_fu_3605646_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3244_fu_4533_p2() {
    mul_ln1118_3244_fu_4533_p2 = (!mul_ln1118_3244_fu_4533_p0.read().is_01() || !ap_const_lv23_7FFFC6.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3244_fu_4533_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3245_fu_4233_p0() {
    mul_ln1118_3245_fu_4233_p0 =  (sc_lv<16>) (sext_ln1118_2628_fu_3605654_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3245_fu_4233_p2() {
    mul_ln1118_3245_fu_4233_p2 = (!mul_ln1118_3245_fu_4233_p0.read().is_01() || !ap_const_lv24_FFFF8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3245_fu_4233_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3246_fu_4566_p0() {
    mul_ln1118_3246_fu_4566_p0 =  (sc_lv<16>) (sext_ln1118_2628_fu_3605654_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3246_fu_4566_p2() {
    mul_ln1118_3246_fu_4566_p2 = (!mul_ln1118_3246_fu_4566_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3246_fu_4566_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3247_fu_4193_p0() {
    mul_ln1118_3247_fu_4193_p0 =  (sc_lv<16>) (sext_ln1118_2635_fu_3605929_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3247_fu_4193_p2() {
    mul_ln1118_3247_fu_4193_p2 = (!mul_ln1118_3247_fu_4193_p0.read().is_01() || !ap_const_lv24_97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3247_fu_4193_p0.read()) * sc_biguint<24>(ap_const_lv24_97);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3248_fu_4097_p0() {
    mul_ln1118_3248_fu_4097_p0 = tmp_V_317_reg_3624149.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3248_fu_4097_p2() {
    mul_ln1118_3248_fu_4097_p2 = (!mul_ln1118_3248_fu_4097_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3248_fu_4097_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3249_fu_4299_p0() {
    mul_ln1118_3249_fu_4299_p0 =  (sc_lv<16>) (sext_ln1118_2633_fu_3605920_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3249_fu_4299_p2() {
    mul_ln1118_3249_fu_4299_p2 = (!mul_ln1118_3249_fu_4299_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3249_fu_4299_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3250_fu_3853_p0() {
    mul_ln1118_3250_fu_3853_p0 =  (sc_lv<16>) (sext_ln1118_2633_fu_3605920_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3250_fu_3853_p2() {
    mul_ln1118_3250_fu_3853_p2 = (!mul_ln1118_3250_fu_3853_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3250_fu_3853_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3251_fu_4186_p0() {
    mul_ln1118_3251_fu_4186_p0 =  (sc_lv<16>) (sext_ln1118_2635_fu_3605929_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3251_fu_4186_p2() {
    mul_ln1118_3251_fu_4186_p2 = (!mul_ln1118_3251_fu_4186_p0.read().is_01() || !ap_const_lv24_FFFF7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3251_fu_4186_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3252_fu_3959_p0() {
    mul_ln1118_3252_fu_3959_p0 =  (sc_lv<16>) (sext_ln1118_2635_fu_3605929_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3252_fu_3959_p2() {
    mul_ln1118_3252_fu_3959_p2 = (!mul_ln1118_3252_fu_3959_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3252_fu_3959_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3253_fu_4292_p0() {
    mul_ln1118_3253_fu_4292_p0 =  (sc_lv<16>) (sext_ln1118_2635_fu_3605929_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3253_fu_4292_p2() {
    mul_ln1118_3253_fu_4292_p2 = (!mul_ln1118_3253_fu_4292_p0.read().is_01() || !ap_const_lv24_FFFF1A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3253_fu_4292_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3254_fu_3992_p0() {
    mul_ln1118_3254_fu_3992_p0 =  (sc_lv<16>) (sext_ln1118_2635_fu_3605929_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3254_fu_3992_p2() {
    mul_ln1118_3254_fu_3992_p2 = (!mul_ln1118_3254_fu_3992_p0.read().is_01() || !ap_const_lv24_49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3254_fu_3992_p0.read()) * sc_biguint<24>(ap_const_lv24_49);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3255_fu_3619_p0() {
    mul_ln1118_3255_fu_3619_p0 =  (sc_lv<16>) (sext_ln1118_2635_fu_3605929_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3255_fu_3619_p2() {
    mul_ln1118_3255_fu_3619_p2 = (!mul_ln1118_3255_fu_3619_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3255_fu_3619_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3256_fu_3952_p0() {
    mul_ln1118_3256_fu_3952_p0 =  (sc_lv<16>) (sext_ln1118_2635_fu_3605929_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3256_fu_3952_p2() {
    mul_ln1118_3256_fu_3952_p2 = (!mul_ln1118_3256_fu_3952_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3256_fu_3952_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3257_fu_4431_p0() {
    mul_ln1118_3257_fu_4431_p0 = tmp_V_317_reg_3624149.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3257_fu_4431_p2() {
    mul_ln1118_3257_fu_4431_p2 = (!mul_ln1118_3257_fu_4431_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3257_fu_4431_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3258_fu_3839_p0() {
    mul_ln1118_3258_fu_3839_p0 =  (sc_lv<16>) (sext_ln1118_2644_fu_3606204_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3258_fu_3839_p2() {
    mul_ln1118_3258_fu_3839_p2 = (!mul_ln1118_3258_fu_3839_p0.read().is_01() || !ap_const_lv24_FFFF56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3258_fu_3839_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF56);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3259_fu_3685_p0() {
    mul_ln1118_3259_fu_3685_p0 =  (sc_lv<16>) (sext_ln1118_2645_fu_3606215_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3259_fu_3685_p2() {
    mul_ln1118_3259_fu_3685_p2 = (!mul_ln1118_3259_fu_3685_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3259_fu_3685_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3260_fu_3985_p0() {
    mul_ln1118_3260_fu_3985_p0 =  (sc_lv<16>) (sext_ln1118_2644_fu_3606204_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3260_fu_3985_p2() {
    mul_ln1118_3260_fu_3985_p2 = (!mul_ln1118_3260_fu_3985_p0.read().is_01() || !ap_const_lv24_FFFF8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3260_fu_3985_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3261_fu_4313_p0() {
    mul_ln1118_3261_fu_4313_p0 =  (sc_lv<16>) (sext_ln1118_2645_fu_3606215_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3261_fu_4313_p2() {
    mul_ln1118_3261_fu_4313_p2 = (!mul_ln1118_3261_fu_4313_p0.read().is_01() || !ap_const_lv22_3FFFEB.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3261_fu_4313_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEB);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3262_fu_3516_p0() {
    mul_ln1118_3262_fu_3516_p0 =  (sc_lv<16>) (sext_ln1118_2644_fu_3606204_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3262_fu_3516_p2() {
    mul_ln1118_3262_fu_3516_p2 = (!mul_ln1118_3262_fu_3516_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3262_fu_3516_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3263_fu_4372_p0() {
    mul_ln1118_3263_fu_4372_p0 =  (sc_lv<16>) (sext_ln1118_2644_fu_3606204_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3263_fu_4372_p2() {
    mul_ln1118_3263_fu_4372_p2 = (!mul_ln1118_3263_fu_4372_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3263_fu_4372_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3264_fu_3973_p0() {
    mul_ln1118_3264_fu_3973_p0 =  (sc_lv<16>) (sext_ln1118_2644_fu_3606204_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3264_fu_3973_p2() {
    mul_ln1118_3264_fu_3973_p2 = (!mul_ln1118_3264_fu_3973_p0.read().is_01() || !ap_const_lv24_FFFF5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3264_fu_3973_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3265_fu_3600_p0() {
    mul_ln1118_3265_fu_3600_p0 =  (sc_lv<16>) (sext_ln1118_2644_fu_3606204_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3265_fu_3600_p2() {
    mul_ln1118_3265_fu_3600_p2 = (!mul_ln1118_3265_fu_3600_p0.read().is_01() || !ap_const_lv24_6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3265_fu_3600_p0.read()) * sc_biguint<24>(ap_const_lv24_6A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3266_fu_4058_p0() {
    mul_ln1118_3266_fu_4058_p0 =  (sc_lv<16>) (sext_ln1118_2644_fu_3606204_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3266_fu_4058_p2() {
    mul_ln1118_3266_fu_4058_p2 = (!mul_ln1118_3266_fu_4058_p0.read().is_01() || !ap_const_lv24_94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3266_fu_4058_p0.read()) * sc_biguint<24>(ap_const_lv24_94);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3267_fu_4182_p0() {
    mul_ln1118_3267_fu_4182_p0 =  (sc_lv<16>) (sext_ln1118_2644_fu_3606204_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3267_fu_4182_p2() {
    mul_ln1118_3267_fu_4182_p2 = (!mul_ln1118_3267_fu_4182_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3267_fu_4182_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3268_fu_4075_p0() {
    mul_ln1118_3268_fu_4075_p0 =  (sc_lv<16>) (sext_ln1118_2654_fu_3606492_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3268_fu_4075_p2() {
    mul_ln1118_3268_fu_4075_p2 = (!mul_ln1118_3268_fu_4075_p0.read().is_01() || !ap_const_lv24_74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3268_fu_4075_p0.read()) * sc_biguint<24>(ap_const_lv24_74);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3269_fu_4148_p0() {
    mul_ln1118_3269_fu_4148_p0 =  (sc_lv<16>) (sext_ln1118_2654_fu_3606492_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3269_fu_4148_p2() {
    mul_ln1118_3269_fu_4148_p2 = (!mul_ln1118_3269_fu_4148_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3269_fu_4148_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3270_fu_4041_p0() {
    mul_ln1118_3270_fu_4041_p0 =  (sc_lv<16>) (sext_ln1118_2655_fu_3606502_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3270_fu_4041_p2() {
    mul_ln1118_3270_fu_4041_p2 = (!mul_ln1118_3270_fu_4041_p0.read().is_01() || !ap_const_lv23_7FFFD7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3270_fu_4041_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3271_fu_4150_p0() {
    mul_ln1118_3271_fu_4150_p0 =  (sc_lv<16>) (sext_ln1118_2654_fu_3606492_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3271_fu_4150_p2() {
    mul_ln1118_3271_fu_4150_p2 = (!mul_ln1118_3271_fu_4150_p0.read().is_01() || !ap_const_lv24_8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3271_fu_4150_p0.read()) * sc_biguint<24>(ap_const_lv24_8D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3272_fu_4151_p0() {
    mul_ln1118_3272_fu_4151_p0 =  (sc_lv<16>) (sext_ln1118_2655_fu_3606502_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3272_fu_4151_p2() {
    mul_ln1118_3272_fu_4151_p2 = (!mul_ln1118_3272_fu_4151_p0.read().is_01() || !ap_const_lv23_39.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3272_fu_4151_p0.read()) * sc_biguint<23>(ap_const_lv23_39);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3273_fu_4224_p0() {
    mul_ln1118_3273_fu_4224_p0 =  (sc_lv<16>) (sext_ln1118_2654_fu_3606492_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3273_fu_4224_p2() {
    mul_ln1118_3273_fu_4224_p2 = (!mul_ln1118_3273_fu_4224_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3273_fu_4224_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3274_fu_4189_p0() {
    mul_ln1118_3274_fu_4189_p0 =  (sc_lv<16>) (sext_ln1118_2654_fu_3606492_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3274_fu_4189_p2() {
    mul_ln1118_3274_fu_4189_p2 = (!mul_ln1118_3274_fu_4189_p0.read().is_01() || !ap_const_lv24_FFFF64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3274_fu_4189_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF64);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3275_fu_4190_p0() {
    mul_ln1118_3275_fu_4190_p0 =  (sc_lv<16>) (sext_ln1118_2655_fu_3606502_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3275_fu_4190_p2() {
    mul_ln1118_3275_fu_4190_p2 = (!mul_ln1118_3275_fu_4190_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3275_fu_4190_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3276_fu_4191_p0() {
    mul_ln1118_3276_fu_4191_p0 =  (sc_lv<16>) (sext_ln1118_2654_fu_3606492_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3276_fu_4191_p2() {
    mul_ln1118_3276_fu_4191_p2 = (!mul_ln1118_3276_fu_4191_p0.read().is_01() || !ap_const_lv24_73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3276_fu_4191_p0.read()) * sc_biguint<24>(ap_const_lv24_73);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3277_fu_4120_p0() {
    mul_ln1118_3277_fu_4120_p0 =  (sc_lv<16>) (sext_ln1118_2655_fu_3606502_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3277_fu_4120_p2() {
    mul_ln1118_3277_fu_4120_p2 = (!mul_ln1118_3277_fu_4120_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3277_fu_4120_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3278_fu_4157_p0() {
    mul_ln1118_3278_fu_4157_p0 =  (sc_lv<16>) (sext_ln1118_2654_fu_3606492_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3278_fu_4157_p2() {
    mul_ln1118_3278_fu_4157_p2 = (!mul_ln1118_3278_fu_4157_p0.read().is_01() || !ap_const_lv24_FFFF9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3278_fu_4157_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3279_fu_4194_p0() {
    mul_ln1118_3279_fu_4194_p0 =  (sc_lv<16>) (sext_ln1118_2661_fu_3606729_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3279_fu_4194_p2() {
    mul_ln1118_3279_fu_4194_p2 = (!mul_ln1118_3279_fu_4194_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3279_fu_4194_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3280_fu_4231_p0() {
    mul_ln1118_3280_fu_4231_p0 =  (sc_lv<16>) (sext_ln1118_2662_fu_3606738_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3280_fu_4231_p2() {
    mul_ln1118_3280_fu_4231_p2 = (!mul_ln1118_3280_fu_4231_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3280_fu_4231_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3281_fu_4232_p0() {
    mul_ln1118_3281_fu_4232_p0 =  (sc_lv<16>) (sext_ln1118_2662_fu_3606738_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3281_fu_4232_p2() {
    mul_ln1118_3281_fu_4232_p2 = (!mul_ln1118_3281_fu_4232_p0.read().is_01() || !ap_const_lv21_D.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3281_fu_4232_p0.read()) * sc_biguint<21>(ap_const_lv21_D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3282_fu_4197_p0() {
    mul_ln1118_3282_fu_4197_p0 =  (sc_lv<16>) (sext_ln1118_2661_fu_3606729_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3282_fu_4197_p2() {
    mul_ln1118_3282_fu_4197_p2 = (!mul_ln1118_3282_fu_4197_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3282_fu_4197_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3283_fu_4198_p0() {
    mul_ln1118_3283_fu_4198_p0 =  (sc_lv<16>) (sext_ln1118_2661_fu_3606729_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3283_fu_4198_p2() {
    mul_ln1118_3283_fu_4198_p2 = (!mul_ln1118_3283_fu_4198_p0.read().is_01() || !ap_const_lv24_FFFF62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3283_fu_4198_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF62);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3284_fu_4163_p0() {
    mul_ln1118_3284_fu_4163_p0 =  (sc_lv<16>) (sext_ln1118_2661_fu_3606729_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3284_fu_4163_p2() {
    mul_ln1118_3284_fu_4163_p2 = (!mul_ln1118_3284_fu_4163_p0.read().is_01() || !ap_const_lv24_76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3284_fu_4163_p0.read()) * sc_biguint<24>(ap_const_lv24_76);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3285_fu_4200_p0() {
    mul_ln1118_3285_fu_4200_p0 =  (sc_lv<16>) (sext_ln1118_2661_fu_3606729_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3285_fu_4200_p2() {
    mul_ln1118_3285_fu_4200_p2 = (!mul_ln1118_3285_fu_4200_p0.read().is_01() || !ap_const_lv24_FFFF8E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3285_fu_4200_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3286_fu_4237_p0() {
    mul_ln1118_3286_fu_4237_p0 =  (sc_lv<16>) (sext_ln1118_2661_fu_3606729_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3286_fu_4237_p2() {
    mul_ln1118_3286_fu_4237_p2 = (!mul_ln1118_3286_fu_4237_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3286_fu_4237_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3287_fu_4166_p0() {
    mul_ln1118_3287_fu_4166_p0 =  (sc_lv<16>) (sext_ln1118_2671_fu_3606994_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3287_fu_4166_p2() {
    mul_ln1118_3287_fu_4166_p2 = (!mul_ln1118_3287_fu_4166_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3287_fu_4166_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3288_fu_4203_p0() {
    mul_ln1118_3288_fu_4203_p0 =  (sc_lv<16>) (sext_ln1118_2671_fu_3606994_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3288_fu_4203_p2() {
    mul_ln1118_3288_fu_4203_p2 = (!mul_ln1118_3288_fu_4203_p0.read().is_01() || !ap_const_lv24_87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3288_fu_4203_p0.read()) * sc_biguint<24>(ap_const_lv24_87);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3289_fu_4204_p0() {
    mul_ln1118_3289_fu_4204_p0 =  (sc_lv<16>) (sext_ln1118_2671_fu_3606994_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3289_fu_4204_p2() {
    mul_ln1118_3289_fu_4204_p2 = (!mul_ln1118_3289_fu_4204_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3289_fu_4204_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3290_fu_4241_p0() {
    mul_ln1118_3290_fu_4241_p0 =  (sc_lv<16>) (sext_ln1118_2671_fu_3606994_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3290_fu_4241_p2() {
    mul_ln1118_3290_fu_4241_p2 = (!mul_ln1118_3290_fu_4241_p0.read().is_01() || !ap_const_lv24_56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3290_fu_4241_p0.read()) * sc_biguint<24>(ap_const_lv24_56);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3291_fu_4318_p0() {
    mul_ln1118_3291_fu_4318_p0 =  (sc_lv<16>) (sext_ln1118_2672_fu_3607005_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3291_fu_4318_p2() {
    mul_ln1118_3291_fu_4318_p2 = (!mul_ln1118_3291_fu_4318_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3291_fu_4318_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3292_fu_4018_p0() {
    mul_ln1118_3292_fu_4018_p0 =  (sc_lv<16>) (sext_ln1118_2672_fu_3607005_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3292_fu_4018_p2() {
    mul_ln1118_3292_fu_4018_p2 = (!mul_ln1118_3292_fu_4018_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3292_fu_4018_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3293_fu_4497_p0() {
    mul_ln1118_3293_fu_4497_p0 =  (sc_lv<16>) (sext_ln1118_2671_fu_3606994_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3293_fu_4497_p2() {
    mul_ln1118_3293_fu_4497_p2 = (!mul_ln1118_3293_fu_4497_p0.read().is_01() || !ap_const_lv24_FFFF5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3293_fu_4497_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3294_fu_3905_p0() {
    mul_ln1118_3294_fu_3905_p0 =  (sc_lv<16>) (sext_ln1118_2672_fu_3607005_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3294_fu_3905_p2() {
    mul_ln1118_3294_fu_3905_p2 = (!mul_ln1118_3294_fu_3905_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3294_fu_3905_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3295_fu_4384_p0() {
    mul_ln1118_3295_fu_4384_p0 =  (sc_lv<16>) (sext_ln1118_2671_fu_3606994_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3295_fu_4384_p2() {
    mul_ln1118_3295_fu_4384_p2 = (!mul_ln1118_3295_fu_4384_p0.read().is_01() || !ap_const_lv24_91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3295_fu_4384_p0.read()) * sc_biguint<24>(ap_const_lv24_91);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3296_fu_4084_p0() {
    mul_ln1118_3296_fu_4084_p0 =  (sc_lv<16>) (sext_ln1118_2671_fu_3606994_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3296_fu_4084_p2() {
    mul_ln1118_3296_fu_4084_p2 = (!mul_ln1118_3296_fu_4084_p0.read().is_01() || !ap_const_lv24_8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3296_fu_4084_p0.read()) * sc_biguint<24>(ap_const_lv24_8D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3297_fu_3784_p0() {
    mul_ln1118_3297_fu_3784_p0 =  (sc_lv<16>) (sext_ln1118_2671_fu_3606994_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3297_fu_3784_p2() {
    mul_ln1118_3297_fu_3784_p2 = (!mul_ln1118_3297_fu_3784_p0.read().is_01() || !ap_const_lv24_FFFF5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3297_fu_3784_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3298_fu_3971_p0() {
    mul_ln1118_3298_fu_3971_p0 =  (sc_lv<16>) (sext_ln1118_2679_fu_3607273_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3298_fu_3971_p2() {
    mul_ln1118_3298_fu_3971_p2 = (!mul_ln1118_3298_fu_3971_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3298_fu_3971_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3299_fu_3671_p0() {
    mul_ln1118_3299_fu_3671_p0 =  (sc_lv<16>) (sext_ln1118_2679_fu_3607273_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3299_fu_3671_p2() {
    mul_ln1118_3299_fu_3671_p2 = (!mul_ln1118_3299_fu_3671_p0.read().is_01() || !ap_const_lv24_FFFF67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3299_fu_3671_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF67);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3300_fu_4223_p0() {
    mul_ln1118_3300_fu_4223_p0 =  (sc_lv<16>) (sext_ln1118_2679_fu_3607273_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3300_fu_4223_p2() {
    mul_ln1118_3300_fu_4223_p2 = (!mul_ln1118_3300_fu_4223_p0.read().is_01() || !ap_const_lv24_76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3300_fu_4223_p0.read()) * sc_biguint<24>(ap_const_lv24_76);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3301_fu_3777_p0() {
    mul_ln1118_3301_fu_3777_p0 =  (sc_lv<16>) (sext_ln1118_2679_fu_3607273_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3301_fu_3777_p2() {
    mul_ln1118_3301_fu_3777_p2 = (!mul_ln1118_3301_fu_3777_p0.read().is_01() || !ap_const_lv24_FFFF8B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3301_fu_3777_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3302_fu_4256_p0() {
    mul_ln1118_3302_fu_4256_p0 =  (sc_lv<16>) (sext_ln1118_2679_fu_3607273_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3302_fu_4256_p2() {
    mul_ln1118_3302_fu_4256_p2 = (!mul_ln1118_3302_fu_4256_p0.read().is_01() || !ap_const_lv24_FFFF53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3302_fu_4256_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF53);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3303_fu_3591_p0() {
    mul_ln1118_3303_fu_3591_p0 =  (sc_lv<16>) (sext_ln1118_2679_fu_3607273_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3303_fu_3591_p2() {
    mul_ln1118_3303_fu_3591_p2 = (!mul_ln1118_3303_fu_3591_p0.read().is_01() || !ap_const_lv24_FFFF96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3303_fu_3591_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF96);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3304_fu_3510_p0() {
    mul_ln1118_3304_fu_3510_p0 =  (sc_lv<16>) (sext_ln1118_2679_fu_3607273_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3304_fu_3510_p2() {
    mul_ln1118_3304_fu_3510_p2 = (!mul_ln1118_3304_fu_3510_p0.read().is_01() || !ap_const_lv24_FFFF4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3304_fu_3510_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3305_fu_3843_p0() {
    mul_ln1118_3305_fu_3843_p0 = tmp_V_322_reg_3624209.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3305_fu_3843_p2() {
    mul_ln1118_3305_fu_3843_p2 = (!mul_ln1118_3305_fu_3843_p0.read().is_01() || !ap_const_lv22_13.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3305_fu_3843_p0.read()) * sc_biguint<22>(ap_const_lv22_13);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3306_fu_3543_p0() {
    mul_ln1118_3306_fu_3543_p0 =  (sc_lv<16>) (sext_ln1118_2679_fu_3607273_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3306_fu_3543_p2() {
    mul_ln1118_3306_fu_3543_p2 = (!mul_ln1118_3306_fu_3543_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3306_fu_3543_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3307_fu_3876_p0() {
    mul_ln1118_3307_fu_3876_p0 =  (sc_lv<16>) (sext_ln1118_2679_fu_3607273_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3307_fu_3876_p2() {
    mul_ln1118_3307_fu_3876_p2 = (!mul_ln1118_3307_fu_3876_p0.read().is_01() || !ap_const_lv24_FFFF61.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3307_fu_3876_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF61);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3308_fu_3576_p0() {
    mul_ln1118_3308_fu_3576_p0 =  (sc_lv<16>) (sext_ln1118_2688_fu_3607537_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3308_fu_3576_p2() {
    mul_ln1118_3308_fu_3576_p2 = (!mul_ln1118_3308_fu_3576_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3308_fu_3576_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3309_fu_4035_p0() {
    mul_ln1118_3309_fu_4035_p0 =  (sc_lv<16>) (sext_ln1118_2685_fu_3607521_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3309_fu_4035_p2() {
    mul_ln1118_3309_fu_4035_p2 = (!mul_ln1118_3309_fu_4035_p0.read().is_01() || !ap_const_lv24_FFFF87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3309_fu_4035_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF87);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3310_fu_4389_p0() {
    mul_ln1118_3310_fu_4389_p0 =  (sc_lv<16>) (sext_ln1118_2688_fu_3607537_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3310_fu_4389_p2() {
    mul_ln1118_3310_fu_4389_p2 = (!mul_ln1118_3310_fu_4389_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3310_fu_4389_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3311_fu_4042_p0() {
    mul_ln1118_3311_fu_4042_p0 =  (sc_lv<16>) (sext_ln1118_2685_fu_3607521_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3311_fu_4042_p2() {
    mul_ln1118_3311_fu_4042_p2 = (!mul_ln1118_3311_fu_4042_p0.read().is_01() || !ap_const_lv24_FFFF74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3311_fu_4042_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF74);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3312_fu_4422_p0() {
    mul_ln1118_3312_fu_4422_p0 =  (sc_lv<16>) (sext_ln1118_2685_fu_3607521_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3312_fu_4422_p2() {
    mul_ln1118_3312_fu_4422_p2 = (!mul_ln1118_3312_fu_4422_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3312_fu_4422_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3313_fu_4101_p0() {
    mul_ln1118_3313_fu_4101_p0 =  (sc_lv<16>) (sext_ln1118_2685_fu_3607521_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3313_fu_4101_p2() {
    mul_ln1118_3313_fu_4101_p2 = (!mul_ln1118_3313_fu_4101_p0.read().is_01() || !ap_const_lv24_FFFF64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3313_fu_4101_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF64);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3314_fu_4507_p0() {
    mul_ln1118_3314_fu_4507_p0 =  (sc_lv<16>) (sext_ln1118_2685_fu_3607521_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3314_fu_4507_p2() {
    mul_ln1118_3314_fu_4507_p2 = (!mul_ln1118_3314_fu_4507_p0.read().is_01() || !ap_const_lv24_FFFF6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3314_fu_4507_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3315_fu_4134_p0() {
    mul_ln1118_3315_fu_4134_p0 =  (sc_lv<16>) (sext_ln1118_2686_fu_3607530_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3315_fu_4134_p2() {
    mul_ln1118_3315_fu_4134_p2 = (!mul_ln1118_3315_fu_4134_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3315_fu_4134_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3316_fu_3735_p0() {
    mul_ln1118_3316_fu_3735_p0 =  (sc_lv<16>) (sext_ln1118_2685_fu_3607521_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3316_fu_3735_p2() {
    mul_ln1118_3316_fu_3735_p2 = (!mul_ln1118_3316_fu_3735_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3316_fu_3735_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3317_fu_3586_p0() {
    mul_ln1118_3317_fu_3586_p0 =  (sc_lv<16>) (sext_ln1118_2698_fu_3607858_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3317_fu_3586_p2() {
    mul_ln1118_3317_fu_3586_p2 = (!mul_ln1118_3317_fu_3586_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3317_fu_3586_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3318_fu_3551_p0() {
    mul_ln1118_3318_fu_3551_p0 =  (sc_lv<16>) (sext_ln1118_2698_fu_3607858_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3318_fu_3551_p2() {
    mul_ln1118_3318_fu_3551_p2 = (!mul_ln1118_3318_fu_3551_p0.read().is_01() || !ap_const_lv24_79.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3318_fu_3551_p0.read()) * sc_biguint<24>(ap_const_lv24_79);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3319_fu_3588_p0() {
    mul_ln1118_3319_fu_3588_p0 =  (sc_lv<16>) (sext_ln1118_2698_fu_3607858_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3319_fu_3588_p2() {
    mul_ln1118_3319_fu_3588_p2 = (!mul_ln1118_3319_fu_3588_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3319_fu_3588_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3320_fu_3553_p0() {
    mul_ln1118_3320_fu_3553_p0 =  (sc_lv<16>) (sext_ln1118_2698_fu_3607858_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3320_fu_3553_p2() {
    mul_ln1118_3320_fu_3553_p2 = (!mul_ln1118_3320_fu_3553_p0.read().is_01() || !ap_const_lv24_9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3320_fu_3553_p0.read()) * sc_biguint<24>(ap_const_lv24_9D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3321_fu_3554_p0() {
    mul_ln1118_3321_fu_3554_p0 =  (sc_lv<16>) (sext_ln1118_2697_fu_3607853_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3321_fu_3554_p2() {
    mul_ln1118_3321_fu_3554_p2 = (!mul_ln1118_3321_fu_3554_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3321_fu_3554_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3322_fu_3555_p0() {
    mul_ln1118_3322_fu_3555_p0 =  (sc_lv<16>) (sext_ln1118_2698_fu_3607858_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3322_fu_3555_p2() {
    mul_ln1118_3322_fu_3555_p2 = (!mul_ln1118_3322_fu_3555_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3322_fu_3555_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3323_fu_3556_p0() {
    mul_ln1118_3323_fu_3556_p0 =  (sc_lv<16>) (sext_ln1118_2699_fu_3607868_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3323_fu_3556_p2() {
    mul_ln1118_3323_fu_3556_p2 = (!mul_ln1118_3323_fu_3556_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3323_fu_3556_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3324_fu_3557_p0() {
    mul_ln1118_3324_fu_3557_p0 =  (sc_lv<16>) (sext_ln1118_2699_fu_3607868_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3324_fu_3557_p2() {
    mul_ln1118_3324_fu_3557_p2 = (!mul_ln1118_3324_fu_3557_p0.read().is_01() || !ap_const_lv22_1B.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3324_fu_3557_p0.read()) * sc_biguint<22>(ap_const_lv22_1B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3325_fu_3594_p0() {
    mul_ln1118_3325_fu_3594_p0 =  (sc_lv<16>) (sext_ln1118_2698_fu_3607858_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3325_fu_3594_p2() {
    mul_ln1118_3325_fu_3594_p2 = (!mul_ln1118_3325_fu_3594_p0.read().is_01() || !ap_const_lv24_7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3325_fu_3594_p0.read()) * sc_biguint<24>(ap_const_lv24_7D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3326_fu_3559_p0() {
    mul_ln1118_3326_fu_3559_p0 =  (sc_lv<16>) (sext_ln1118_2697_fu_3607853_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3326_fu_3559_p2() {
    mul_ln1118_3326_fu_3559_p2 = (!mul_ln1118_3326_fu_3559_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3326_fu_3559_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3327_fu_3524_p0() {
    mul_ln1118_3327_fu_3524_p0 =  (sc_lv<16>) (sext_ln1118_2698_fu_3607858_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3327_fu_3524_p2() {
    mul_ln1118_3327_fu_3524_p2 = (!mul_ln1118_3327_fu_3524_p0.read().is_01() || !ap_const_lv24_FFFF8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3327_fu_3524_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3328_fu_3597_p0() {
    mul_ln1118_3328_fu_3597_p0 =  (sc_lv<16>) (sext_ln1118_2707_fu_3608142_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3328_fu_3597_p2() {
    mul_ln1118_3328_fu_3597_p2 = (!mul_ln1118_3328_fu_3597_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3328_fu_3597_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3329_fu_3562_p0() {
    mul_ln1118_3329_fu_3562_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3329_fu_3562_p2() {
    mul_ln1118_3329_fu_3562_p2 = (!mul_ln1118_3329_fu_3562_p0.read().is_01() || !ap_const_lv24_FFFF67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3329_fu_3562_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF67);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3330_fu_3563_p0() {
    mul_ln1118_3330_fu_3563_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3330_fu_3563_p2() {
    mul_ln1118_3330_fu_3563_p2 = (!mul_ln1118_3330_fu_3563_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3330_fu_3563_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3331_fu_3492_p0() {
    mul_ln1118_3331_fu_3492_p0 =  (sc_lv<16>) (sext_ln1118_2707_fu_3608142_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3331_fu_3492_p2() {
    mul_ln1118_3331_fu_3492_p2 = (!mul_ln1118_3331_fu_3492_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3331_fu_3492_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3332_fu_3529_p0() {
    mul_ln1118_3332_fu_3529_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3332_fu_3529_p2() {
    mul_ln1118_3332_fu_3529_p2 = (!mul_ln1118_3332_fu_3529_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3332_fu_3529_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3333_fu_4510_p0() {
    mul_ln1118_3333_fu_4510_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3333_fu_4510_p2() {
    mul_ln1118_3333_fu_4510_p2 = (!mul_ln1118_3333_fu_4510_p0.read().is_01() || !ap_const_lv24_9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3333_fu_4510_p0.read()) * sc_biguint<24>(ap_const_lv24_9E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3334_fu_3603_p0() {
    mul_ln1118_3334_fu_3603_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3334_fu_3603_p2() {
    mul_ln1118_3334_fu_3603_p2 = (!mul_ln1118_3334_fu_3603_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3334_fu_3603_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3335_fu_3532_p0() {
    mul_ln1118_3335_fu_3532_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3335_fu_3532_p2() {
    mul_ln1118_3335_fu_3532_p2 = (!mul_ln1118_3335_fu_3532_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3335_fu_3532_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3336_fu_3605_p0() {
    mul_ln1118_3336_fu_3605_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3336_fu_3605_p2() {
    mul_ln1118_3336_fu_3605_p2 = (!mul_ln1118_3336_fu_3605_p0.read().is_01() || !ap_const_lv24_55.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3336_fu_3605_p0.read()) * sc_biguint<24>(ap_const_lv24_55);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3337_fu_3570_p0() {
    mul_ln1118_3337_fu_3570_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3337_fu_3570_p2() {
    mul_ln1118_3337_fu_3570_p2 = (!mul_ln1118_3337_fu_3570_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3337_fu_3570_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3338_fu_3571_p0() {
    mul_ln1118_3338_fu_3571_p0 =  (sc_lv<16>) (sext_ln1118_2707_fu_3608142_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3338_fu_3571_p2() {
    mul_ln1118_3338_fu_3571_p2 = (!mul_ln1118_3338_fu_3571_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3338_fu_3571_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3339_fu_3536_p0() {
    mul_ln1118_3339_fu_3536_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3339_fu_3536_p2() {
    mul_ln1118_3339_fu_3536_p2 = (!mul_ln1118_3339_fu_3536_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3339_fu_3536_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3340_fu_3609_p0() {
    mul_ln1118_3340_fu_3609_p0 =  (sc_lv<16>) (sext_ln1118_2706_fu_3608129_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3340_fu_3609_p2() {
    mul_ln1118_3340_fu_3609_p2 = (!mul_ln1118_3340_fu_3609_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3340_fu_3609_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3341_fu_3909_p0() {
    mul_ln1118_3341_fu_3909_p0 = tmp_V_325_reg_3624246.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3341_fu_3909_p2() {
    mul_ln1118_3341_fu_3909_p2 = (!mul_ln1118_3341_fu_3909_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3341_fu_3909_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3342_fu_4461_p0() {
    mul_ln1118_3342_fu_4461_p0 =  (sc_lv<16>) (sext_ln1118_2712_fu_3608339_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3342_fu_4461_p2() {
    mul_ln1118_3342_fu_4461_p2 = (!mul_ln1118_3342_fu_4461_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3342_fu_4461_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3343_fu_4088_p0() {
    mul_ln1118_3343_fu_4088_p0 =  (sc_lv<16>) (sext_ln1118_2710_fu_3608324_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3343_fu_4088_p2() {
    mul_ln1118_3343_fu_4088_p2 = (!mul_ln1118_3343_fu_4088_p0.read().is_01() || !ap_const_lv24_FFFFAC.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3343_fu_4088_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAC);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3344_fu_4567_p0() {
    mul_ln1118_3344_fu_4567_p0 =  (sc_lv<16>) (sext_ln1118_2710_fu_3608324_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3344_fu_4567_p2() {
    mul_ln1118_3344_fu_4567_p2 = (!mul_ln1118_3344_fu_4567_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3344_fu_4567_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3345_fu_4048_p0() {
    mul_ln1118_3345_fu_4048_p0 =  (sc_lv<16>) (sext_ln1118_2710_fu_3608324_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3345_fu_4048_p2() {
    mul_ln1118_3345_fu_4048_p2 = (!mul_ln1118_3345_fu_4048_p0.read().is_01() || !ap_const_lv24_FFFFA2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3345_fu_4048_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA2);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3346_fu_3748_p0() {
    mul_ln1118_3346_fu_3748_p0 =  (sc_lv<16>) (sext_ln1118_2710_fu_3608324_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3346_fu_3748_p2() {
    mul_ln1118_3346_fu_3748_p2 = (!mul_ln1118_3346_fu_3748_p0.read().is_01() || !ap_const_lv24_FFFF69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3346_fu_3748_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF69);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3347_fu_3448_p0() {
    mul_ln1118_3347_fu_3448_p0 =  (sc_lv<16>) (sext_ln1118_2710_fu_3608324_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3347_fu_3448_p2() {
    mul_ln1118_3347_fu_3448_p2 = (!mul_ln1118_3347_fu_3448_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3347_fu_3448_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3348_fu_4511_p0() {
    mul_ln1118_3348_fu_4511_p0 =  (sc_lv<16>) (sext_ln1118_2710_fu_3608324_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3348_fu_4511_p2() {
    mul_ln1118_3348_fu_4511_p2 = (!mul_ln1118_3348_fu_4511_p0.read().is_01() || !ap_const_lv24_A5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3348_fu_4511_p0.read()) * sc_biguint<24>(ap_const_lv24_A5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3349_fu_4260_p0() {
    mul_ln1118_3349_fu_4260_p0 =  (sc_lv<16>) (sext_ln1118_2712_fu_3608339_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3349_fu_4260_p2() {
    mul_ln1118_3349_fu_4260_p2 = (!mul_ln1118_3349_fu_4260_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3349_fu_4260_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3350_fu_3814_p0() {
    mul_ln1118_3350_fu_3814_p0 =  (sc_lv<16>) (sext_ln1118_2709_fu_3608319_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3350_fu_3814_p2() {
    mul_ln1118_3350_fu_3814_p2 = (!mul_ln1118_3350_fu_3814_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3350_fu_3814_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3351_fu_3441_p0() {
    mul_ln1118_3351_fu_3441_p0 =  (sc_lv<16>) (sext_ln1118_2710_fu_3608324_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3351_fu_3441_p2() {
    mul_ln1118_3351_fu_3441_p2 = (!mul_ln1118_3351_fu_3441_p0.read().is_01() || !ap_const_lv24_FFFF6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3351_fu_3441_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3352_fu_3847_p0() {
    mul_ln1118_3352_fu_3847_p0 =  (sc_lv<16>) (sext_ln1118_2709_fu_3608319_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3352_fu_3847_p2() {
    mul_ln1118_3352_fu_3847_p2 = (!mul_ln1118_3352_fu_3847_p0.read().is_01() || !ap_const_lv22_3FFFEA.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3352_fu_3847_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFEA);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3353_fu_4326_p0() {
    mul_ln1118_3353_fu_4326_p0 =  (sc_lv<16>) (sext_ln1118_2710_fu_3608324_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3353_fu_4326_p2() {
    mul_ln1118_3353_fu_4326_p2 = (!mul_ln1118_3353_fu_4326_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3353_fu_4326_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3354_fu_3734_p0() {
    mul_ln1118_3354_fu_3734_p0 =  (sc_lv<16>) (sext_ln1118_2710_fu_3608324_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3354_fu_3734_p2() {
    mul_ln1118_3354_fu_3734_p2 = (!mul_ln1118_3354_fu_3734_p0.read().is_01() || !ap_const_lv24_FFFF4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3354_fu_3734_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3355_fu_3580_p0() {
    mul_ln1118_3355_fu_3580_p0 =  (sc_lv<16>) (sext_ln1118_2718_fu_3608593_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3355_fu_3580_p2() {
    mul_ln1118_3355_fu_3580_p2 = (!mul_ln1118_3355_fu_3580_p0.read().is_01() || !ap_const_lv24_FFFF51.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3355_fu_3580_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF51);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3356_fu_3694_p0() {
    mul_ln1118_3356_fu_3694_p0 =  (sc_lv<16>) (sext_ln1118_2718_fu_3608593_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3356_fu_3694_p2() {
    mul_ln1118_3356_fu_3694_p2 = (!mul_ln1118_3356_fu_3694_p0.read().is_01() || !ap_const_lv24_FFFF59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3356_fu_3694_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF59);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3357_fu_3613_p0() {
    mul_ln1118_3357_fu_3613_p0 =  (sc_lv<16>) (sext_ln1118_2720_fu_3608608_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3357_fu_3613_p2() {
    mul_ln1118_3357_fu_3613_p2 = (!mul_ln1118_3357_fu_3613_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3357_fu_3613_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3358_fu_4033_p0() {
    mul_ln1118_3358_fu_4033_p0 =  (sc_lv<16>) (sext_ln1118_2718_fu_3608593_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3358_fu_4033_p2() {
    mul_ln1118_3358_fu_4033_p2 = (!mul_ln1118_3358_fu_4033_p0.read().is_01() || !ap_const_lv24_FFFF98.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3358_fu_4033_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF98);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3359_fu_3686_p0() {
    mul_ln1118_3359_fu_3686_p0 =  (sc_lv<16>) (sext_ln1118_2718_fu_3608593_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3359_fu_3686_p2() {
    mul_ln1118_3359_fu_3686_p2 = (!mul_ln1118_3359_fu_3686_p0.read().is_01() || !ap_const_lv24_FFFF72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3359_fu_3686_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF72);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3360_fu_4040_p0() {
    mul_ln1118_3360_fu_4040_p0 =  (sc_lv<16>) (sext_ln1118_2718_fu_3608593_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3360_fu_4040_p2() {
    mul_ln1118_3360_fu_4040_p2 = (!mul_ln1118_3360_fu_4040_p0.read().is_01() || !ap_const_lv24_FFFF5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3360_fu_4040_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3361_fu_3667_p0() {
    mul_ln1118_3361_fu_3667_p0 =  (sc_lv<16>) (sext_ln1118_2720_fu_3608608_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3361_fu_3667_p2() {
    mul_ln1118_3361_fu_3667_p2 = (!mul_ln1118_3361_fu_3667_p0.read().is_01() || !ap_const_lv23_7FFFDA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3361_fu_3667_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDA);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3362_fu_4177_p0() {
    mul_ln1118_3362_fu_4177_p0 =  (sc_lv<16>) (sext_ln1118_2718_fu_3608593_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3362_fu_4177_p2() {
    mul_ln1118_3362_fu_4177_p2 = (!mul_ln1118_3362_fu_4177_p0.read().is_01() || !ap_const_lv24_FFFF53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3362_fu_4177_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF53);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3363_fu_3700_p0() {
    mul_ln1118_3363_fu_3700_p0 = tmp_V_327_reg_3624267.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3363_fu_3700_p2() {
    mul_ln1118_3363_fu_3700_p2 = (!mul_ln1118_3363_fu_3700_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3363_fu_3700_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3364_fu_4158_p0() {
    mul_ln1118_3364_fu_4158_p0 =  (sc_lv<16>) (sext_ln1118_2718_fu_3608593_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3364_fu_4158_p2() {
    mul_ln1118_3364_fu_4158_p2 = (!mul_ln1118_3364_fu_4158_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3364_fu_4158_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3365_fu_3733_p0() {
    mul_ln1118_3365_fu_3733_p0 =  (sc_lv<16>) (sext_ln1118_2718_fu_3608593_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3365_fu_3733_p2() {
    mul_ln1118_3365_fu_3733_p2 = (!mul_ln1118_3365_fu_3733_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3365_fu_3733_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3366_fu_4070_p0() {
    mul_ln1118_3366_fu_4070_p0 =  (sc_lv<16>) (sext_ln1118_2729_fu_3608895_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3366_fu_4070_p2() {
    mul_ln1118_3366_fu_4070_p2 = (!mul_ln1118_3366_fu_4070_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3366_fu_4070_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3367_fu_4071_p0() {
    mul_ln1118_3367_fu_4071_p0 =  (sc_lv<16>) (sext_ln1118_2729_fu_3608895_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3367_fu_4071_p2() {
    mul_ln1118_3367_fu_4071_p2 = (!mul_ln1118_3367_fu_4071_p0.read().is_01() || !ap_const_lv24_FFFF8C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3367_fu_4071_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3368_fu_4000_p0() {
    mul_ln1118_3368_fu_4000_p0 =  (sc_lv<16>) (sext_ln1118_2729_fu_3608895_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3368_fu_4000_p2() {
    mul_ln1118_3368_fu_4000_p2 = (!mul_ln1118_3368_fu_4000_p0.read().is_01() || !ap_const_lv24_97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3368_fu_4000_p0.read()) * sc_biguint<24>(ap_const_lv24_97);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3369_fu_4330_p0() {
    mul_ln1118_3369_fu_4330_p0 =  (sc_lv<16>) (sext_ln1118_2729_fu_3608895_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3369_fu_4330_p2() {
    mul_ln1118_3369_fu_4330_p2 = (!mul_ln1118_3369_fu_4330_p0.read().is_01() || !ap_const_lv24_FFFF7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3369_fu_4330_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3370_fu_4074_p0() {
    mul_ln1118_3370_fu_4074_p0 =  (sc_lv<16>) (sext_ln1118_2729_fu_3608895_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3370_fu_4074_p2() {
    mul_ln1118_3370_fu_4074_p2 = (!mul_ln1118_3370_fu_4074_p0.read().is_01() || !ap_const_lv24_FFFF5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3370_fu_4074_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3371_fu_3823_p0() {
    mul_ln1118_3371_fu_3823_p0 =  (sc_lv<16>) (sext_ln1118_2729_fu_3608895_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3371_fu_3823_p2() {
    mul_ln1118_3371_fu_3823_p2 = (!mul_ln1118_3371_fu_3823_p0.read().is_01() || !ap_const_lv24_FFFF3C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3371_fu_3823_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF3C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3372_fu_3788_p0() {
    mul_ln1118_3372_fu_3788_p0 =  (sc_lv<16>) (sext_ln1118_2729_fu_3608895_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3372_fu_3788_p2() {
    mul_ln1118_3372_fu_3788_p2 = (!mul_ln1118_3372_fu_3788_p0.read().is_01() || !ap_const_lv24_FFFF8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3372_fu_3788_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3373_fu_3969_p0() {
    mul_ln1118_3373_fu_3969_p0 =  (sc_lv<16>) (sext_ln1118_2729_fu_3608895_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3373_fu_3969_p2() {
    mul_ln1118_3373_fu_3969_p2 = (!mul_ln1118_3373_fu_3969_p0.read().is_01() || !ap_const_lv24_FFFF9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3373_fu_3969_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3374_fu_4114_p0() {
    mul_ln1118_3374_fu_4114_p0 =  (sc_lv<16>) (sext_ln1118_2729_fu_3608895_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3374_fu_4114_p2() {
    mul_ln1118_3374_fu_4114_p2 = (!mul_ln1118_3374_fu_4114_p0.read().is_01() || !ap_const_lv24_FFFF59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3374_fu_4114_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF59);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3375_fu_4079_p0() {
    mul_ln1118_3375_fu_4079_p0 =  (sc_lv<16>) (sext_ln1118_2730_fu_3608907_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3375_fu_4079_p2() {
    mul_ln1118_3375_fu_4079_p2 = (!mul_ln1118_3375_fu_4079_p0.read().is_01() || !ap_const_lv23_7FFFCE.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3375_fu_4079_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCE);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3376_fu_4080_p0() {
    mul_ln1118_3376_fu_4080_p0 =  (sc_lv<16>) (sext_ln1118_2740_fu_3609185_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3376_fu_4080_p2() {
    mul_ln1118_3376_fu_4080_p2 = (!mul_ln1118_3376_fu_4080_p0.read().is_01() || !ap_const_lv24_69.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3376_fu_4080_p0.read()) * sc_biguint<24>(ap_const_lv24_69);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3377_fu_4045_p0() {
    mul_ln1118_3377_fu_4045_p0 = tmp_V_329_reg_3624291.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3377_fu_4045_p2() {
    mul_ln1118_3377_fu_4045_p2 = (!mul_ln1118_3377_fu_4045_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3377_fu_4045_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3378_fu_4082_p0() {
    mul_ln1118_3378_fu_4082_p0 =  (sc_lv<16>) (sext_ln1118_2740_fu_3609185_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3378_fu_4082_p2() {
    mul_ln1118_3378_fu_4082_p2 = (!mul_ln1118_3378_fu_4082_p0.read().is_01() || !ap_const_lv24_5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3378_fu_4082_p0.read()) * sc_biguint<24>(ap_const_lv24_5B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3379_fu_3795_p0() {
    mul_ln1118_3379_fu_3795_p0 =  (sc_lv<16>) (sext_ln1118_2741_fu_3609196_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3379_fu_3795_p2() {
    mul_ln1118_3379_fu_3795_p2 = (!mul_ln1118_3379_fu_3795_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3379_fu_3795_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3380_fu_3940_p0() {
    mul_ln1118_3380_fu_3940_p0 =  (sc_lv<16>) (sext_ln1118_2740_fu_3609185_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3380_fu_3940_p2() {
    mul_ln1118_3380_fu_3940_p2 = (!mul_ln1118_3380_fu_3940_p0.read().is_01() || !ap_const_lv24_FFFF72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3380_fu_3940_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF72);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3381_fu_4085_p0() {
    mul_ln1118_3381_fu_4085_p0 =  (sc_lv<16>) (sext_ln1118_2741_fu_3609196_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3381_fu_4085_p2() {
    mul_ln1118_3381_fu_4085_p2 = (!mul_ln1118_3381_fu_4085_p0.read().is_01() || !ap_const_lv23_2A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3381_fu_4085_p0.read()) * sc_biguint<23>(ap_const_lv23_2A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3382_fu_4086_p0() {
    mul_ln1118_3382_fu_4086_p0 =  (sc_lv<16>) (sext_ln1118_2740_fu_3609185_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3382_fu_4086_p2() {
    mul_ln1118_3382_fu_4086_p2 = (!mul_ln1118_3382_fu_4086_p0.read().is_01() || !ap_const_lv24_FFFF3A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3382_fu_4086_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF3A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3383_fu_4051_p0() {
    mul_ln1118_3383_fu_4051_p0 =  (sc_lv<16>) (sext_ln1118_2740_fu_3609185_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3383_fu_4051_p2() {
    mul_ln1118_3383_fu_4051_p2 = (!mul_ln1118_3383_fu_4051_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3383_fu_4051_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3384_fu_4437_p0() {
    mul_ln1118_3384_fu_4437_p0 =  (sc_lv<16>) (sext_ln1118_2740_fu_3609185_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3384_fu_4437_p2() {
    mul_ln1118_3384_fu_4437_p2 = (!mul_ln1118_3384_fu_4437_p0.read().is_01() || !ap_const_lv24_FFFF8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3384_fu_4437_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3385_fu_4053_p0() {
    mul_ln1118_3385_fu_4053_p0 = tmp_V_329_reg_3624291.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3385_fu_4053_p2() {
    mul_ln1118_3385_fu_4053_p2 = (!mul_ln1118_3385_fu_4053_p0.read().is_01() || !ap_const_lv22_3FFFED.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3385_fu_4053_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFED);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3386_fu_4054_p0() {
    mul_ln1118_3386_fu_4054_p0 =  (sc_lv<16>) (sext_ln1118_2740_fu_3609185_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3386_fu_4054_p2() {
    mul_ln1118_3386_fu_4054_p2 = (!mul_ln1118_3386_fu_4054_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3386_fu_4054_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3387_fu_4055_p0() {
    mul_ln1118_3387_fu_4055_p0 =  (sc_lv<16>) (sext_ln1118_2740_fu_3609185_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3387_fu_4055_p2() {
    mul_ln1118_3387_fu_4055_p2 = (!mul_ln1118_3387_fu_4055_p0.read().is_01() || !ap_const_lv24_87.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3387_fu_4055_p0.read()) * sc_biguint<24>(ap_const_lv24_87);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3388_fu_4056_p0() {
    mul_ln1118_3388_fu_4056_p0 =  (sc_lv<16>) (sext_ln1118_2751_fu_3609488_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3388_fu_4056_p2() {
    mul_ln1118_3388_fu_4056_p2 = (!mul_ln1118_3388_fu_4056_p0.read().is_01() || !ap_const_lv24_8E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3388_fu_4056_p0.read()) * sc_biguint<24>(ap_const_lv24_8E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3389_fu_4093_p0() {
    mul_ln1118_3389_fu_4093_p0 =  (sc_lv<16>) (sext_ln1118_2751_fu_3609488_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3389_fu_4093_p2() {
    mul_ln1118_3389_fu_4093_p2 = (!mul_ln1118_3389_fu_4093_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3389_fu_4093_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3390_fu_4092_p0() {
    mul_ln1118_3390_fu_4092_p0 =  (sc_lv<16>) (sext_ln1118_2751_fu_3609488_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3390_fu_4092_p2() {
    mul_ln1118_3390_fu_4092_p2 = (!mul_ln1118_3390_fu_4092_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3390_fu_4092_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3391_fu_4498_p0() {
    mul_ln1118_3391_fu_4498_p0 =  (sc_lv<16>) (sext_ln1118_2751_fu_3609488_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3391_fu_4498_p2() {
    mul_ln1118_3391_fu_4498_p2 = (!mul_ln1118_3391_fu_4498_p0.read().is_01() || !ap_const_lv24_4C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3391_fu_4498_p0.read()) * sc_biguint<24>(ap_const_lv24_4C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3392_fu_4052_p0() {
    mul_ln1118_3392_fu_4052_p0 =  (sc_lv<16>) (sext_ln1118_2751_fu_3609488_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3392_fu_4052_p2() {
    mul_ln1118_3392_fu_4052_p2 = (!mul_ln1118_3392_fu_4052_p0.read().is_01() || !ap_const_lv24_8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3392_fu_4052_p0.read()) * sc_biguint<24>(ap_const_lv24_8D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3393_fu_3752_p0() {
    mul_ln1118_3393_fu_3752_p0 =  (sc_lv<16>) (sext_ln1118_2750_fu_3609483_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3393_fu_3752_p2() {
    mul_ln1118_3393_fu_3752_p2 = (!mul_ln1118_3393_fu_3752_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3393_fu_3752_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3394_fu_3452_p0() {
    mul_ln1118_3394_fu_3452_p0 =  (sc_lv<16>) (sext_ln1118_2750_fu_3609483_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3394_fu_3452_p2() {
    mul_ln1118_3394_fu_3452_p2 = (!mul_ln1118_3394_fu_3452_p0.read().is_01() || !ap_const_lv23_2B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3394_fu_3452_p0.read()) * sc_biguint<23>(ap_const_lv23_2B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3395_fu_3639_p0() {
    mul_ln1118_3395_fu_3639_p0 =  (sc_lv<16>) (sext_ln1118_2751_fu_3609488_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3395_fu_3639_p2() {
    mul_ln1118_3395_fu_3639_p2 = (!mul_ln1118_3395_fu_3639_p0.read().is_01() || !ap_const_lv24_77.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3395_fu_3639_p0.read()) * sc_biguint<24>(ap_const_lv24_77);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3396_fu_3485_p0() {
    mul_ln1118_3396_fu_3485_p0 =  (sc_lv<16>) (sext_ln1118_2751_fu_3609488_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3396_fu_3485_p2() {
    mul_ln1118_3396_fu_3485_p2 = (!mul_ln1118_3396_fu_3485_p0.read().is_01() || !ap_const_lv24_4A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3396_fu_3485_p0.read()) * sc_biguint<24>(ap_const_lv24_4A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3397_fu_4159_p0() {
    mul_ln1118_3397_fu_4159_p0 = tmp_V_331_reg_3624315.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3397_fu_4159_p2() {
    mul_ln1118_3397_fu_4159_p2 = (!mul_ln1118_3397_fu_4159_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3397_fu_4159_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3398_fu_3518_p0() {
    mul_ln1118_3398_fu_3518_p0 =  (sc_lv<16>) (sext_ln1118_2757_fu_3609693_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3398_fu_3518_p2() {
    mul_ln1118_3398_fu_3518_p2 = (!mul_ln1118_3398_fu_3518_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3398_fu_3518_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3399_fu_3778_p0() {
    mul_ln1118_3399_fu_3778_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3399_fu_3778_p2() {
    mul_ln1118_3399_fu_3778_p2 = (!mul_ln1118_3399_fu_3778_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3399_fu_3778_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3400_fu_4184_p0() {
    mul_ln1118_3400_fu_4184_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3400_fu_4184_p2() {
    mul_ln1118_3400_fu_4184_p2 = (!mul_ln1118_3400_fu_4184_p0.read().is_01() || !ap_const_lv24_FFFF67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3400_fu_4184_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF67);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3401_fu_3884_p0() {
    mul_ln1118_3401_fu_3884_p0 =  (sc_lv<16>) (sext_ln1118_2757_fu_3609693_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3401_fu_3884_p2() {
    mul_ln1118_3401_fu_3884_p2 = (!mul_ln1118_3401_fu_3884_p0.read().is_01() || !ap_const_lv23_36.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3401_fu_3884_p0.read()) * sc_biguint<23>(ap_const_lv23_36);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3402_fu_4363_p0() {
    mul_ln1118_3402_fu_4363_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3402_fu_4363_p2() {
    mul_ln1118_3402_fu_4363_p2 = (!mul_ln1118_3402_fu_4363_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3402_fu_4363_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3403_fu_3917_p0() {
    mul_ln1118_3403_fu_3917_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3403_fu_3917_p2() {
    mul_ln1118_3403_fu_3917_p2 = (!mul_ln1118_3403_fu_3917_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3403_fu_3917_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3404_fu_4396_p0() {
    mul_ln1118_3404_fu_4396_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3404_fu_4396_p2() {
    mul_ln1118_3404_fu_4396_p2 = (!mul_ln1118_3404_fu_4396_p0.read().is_01() || !ap_const_lv24_94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3404_fu_4396_p0.read()) * sc_biguint<24>(ap_const_lv24_94);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3405_fu_4023_p0() {
    mul_ln1118_3405_fu_4023_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3405_fu_4023_p2() {
    mul_ln1118_3405_fu_4023_p2 = (!mul_ln1118_3405_fu_4023_p0.read().is_01() || !ap_const_lv24_FFFF75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3405_fu_4023_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF75);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3406_fu_3650_p0() {
    mul_ln1118_3406_fu_3650_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3406_fu_3650_p2() {
    mul_ln1118_3406_fu_3650_p2 = (!mul_ln1118_3406_fu_3650_p0.read().is_01() || !ap_const_lv24_6D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3406_fu_3650_p0.read()) * sc_biguint<24>(ap_const_lv24_6D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3407_fu_4161_p0() {
    mul_ln1118_3407_fu_4161_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3407_fu_4161_p2() {
    mul_ln1118_3407_fu_4161_p2 = (!mul_ln1118_3407_fu_4161_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3407_fu_4161_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3408_fu_4515_p0() {
    mul_ln1118_3408_fu_4515_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3408_fu_4515_p2() {
    mul_ln1118_3408_fu_4515_p2 = (!mul_ln1118_3408_fu_4515_p0.read().is_01() || !ap_const_lv24_9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3408_fu_4515_p0.read()) * sc_biguint<24>(ap_const_lv24_9D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3409_fu_4168_p0() {
    mul_ln1118_3409_fu_4168_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3409_fu_4168_p2() {
    mul_ln1118_3409_fu_4168_p2 = (!mul_ln1118_3409_fu_4168_p0.read().is_01() || !ap_const_lv24_5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3409_fu_4168_p0.read()) * sc_biguint<24>(ap_const_lv24_5A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3410_fu_4548_p0() {
    mul_ln1118_3410_fu_4548_p0 =  (sc_lv<16>) (sext_ln1118_2756_fu_3609679_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3410_fu_4548_p2() {
    mul_ln1118_3410_fu_4548_p2 = (!mul_ln1118_3410_fu_4548_p0.read().is_01() || !ap_const_lv24_75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3410_fu_4548_p0.read()) * sc_biguint<24>(ap_const_lv24_75);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3411_fu_3474_p0() {
    mul_ln1118_3411_fu_3474_p0 =  (sc_lv<16>) (sext_ln1118_2759_fu_3609842_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3411_fu_3474_p2() {
    mul_ln1118_3411_fu_3474_p2 = (!mul_ln1118_3411_fu_3474_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3411_fu_3474_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3412_fu_3854_p0() {
    mul_ln1118_3412_fu_3854_p0 =  (sc_lv<16>) (sext_ln1118_2759_fu_3609842_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3412_fu_3854_p2() {
    mul_ln1118_3412_fu_3854_p2 = (!mul_ln1118_3412_fu_3854_p0.read().is_01() || !ap_const_lv24_FFFFA4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3412_fu_3854_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA4);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3413_fu_3429_p0() {
    mul_ln1118_3413_fu_3429_p0 =  (sc_lv<16>) (sext_ln1118_2759_fu_3609842_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3413_fu_3429_p2() {
    mul_ln1118_3413_fu_3429_p2 = (!mul_ln1118_3413_fu_3429_p0.read().is_01() || !ap_const_lv24_FFFF6A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3413_fu_3429_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3414_fu_4553_p0() {
    mul_ln1118_3414_fu_4553_p0 =  (sc_lv<16>) (sext_ln1118_2759_fu_3609842_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3414_fu_4553_p2() {
    mul_ln1118_3414_fu_4553_p2 = (!mul_ln1118_3414_fu_4553_p0.read().is_01() || !ap_const_lv24_FFFF9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3414_fu_4553_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3415_fu_4482_p0() {
    mul_ln1118_3415_fu_4482_p0 =  (sc_lv<16>) (sext_ln1118_2759_fu_3609842_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3415_fu_4482_p2() {
    mul_ln1118_3415_fu_4482_p2 = (!mul_ln1118_3415_fu_4482_p0.read().is_01() || !ap_const_lv24_FFFF72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3415_fu_4482_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF72);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3416_fu_4483_p0() {
    mul_ln1118_3416_fu_4483_p0 =  (sc_lv<16>) (sext_ln1118_2760_fu_3609852_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3416_fu_4483_p2() {
    mul_ln1118_3416_fu_4483_p2 = (!mul_ln1118_3416_fu_4483_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3416_fu_4483_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3417_fu_4520_p0() {
    mul_ln1118_3417_fu_4520_p0 =  (sc_lv<16>) (sext_ln1118_2760_fu_3609852_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3417_fu_4520_p2() {
    mul_ln1118_3417_fu_4520_p2 = (!mul_ln1118_3417_fu_4520_p0.read().is_01() || !ap_const_lv23_7FFFD3.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3417_fu_4520_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3418_fu_4305_p0() {
    mul_ln1118_3418_fu_4305_p0 =  (sc_lv<16>) (sext_ln1118_2759_fu_3609842_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3418_fu_4305_p2() {
    mul_ln1118_3418_fu_4305_p2 = (!mul_ln1118_3418_fu_4305_p0.read().is_01() || !ap_const_lv24_FFFF5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3418_fu_4305_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3419_fu_4522_p0() {
    mul_ln1118_3419_fu_4522_p0 =  (sc_lv<16>) (sext_ln1118_2759_fu_3609842_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3419_fu_4522_p2() {
    mul_ln1118_3419_fu_4522_p2 = (!mul_ln1118_3419_fu_4522_p0.read().is_01() || !ap_const_lv24_53.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3419_fu_4522_p0.read()) * sc_biguint<24>(ap_const_lv24_53);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3420_fu_4487_p0() {
    mul_ln1118_3420_fu_4487_p0 =  (sc_lv<16>) (sext_ln1118_2767_fu_3610127_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3420_fu_4487_p2() {
    mul_ln1118_3420_fu_4487_p2 = (!mul_ln1118_3420_fu_4487_p0.read().is_01() || !ap_const_lv24_FFFF7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3420_fu_4487_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3421_fu_4488_p0() {
    mul_ln1118_3421_fu_4488_p0 =  (sc_lv<16>) (sext_ln1118_2767_fu_3610127_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3421_fu_4488_p2() {
    mul_ln1118_3421_fu_4488_p2 = (!mul_ln1118_3421_fu_4488_p0.read().is_01() || !ap_const_lv24_85.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3421_fu_4488_p0.read()) * sc_biguint<24>(ap_const_lv24_85);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3422_fu_4525_p0() {
    mul_ln1118_3422_fu_4525_p0 =  (sc_lv<16>) (sext_ln1118_2767_fu_3610127_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3422_fu_4525_p2() {
    mul_ln1118_3422_fu_4525_p2 = (!mul_ln1118_3422_fu_4525_p0.read().is_01() || !ap_const_lv24_FFFF68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3422_fu_4525_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF68);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3423_fu_4526_p0() {
    mul_ln1118_3423_fu_4526_p0 =  (sc_lv<16>) (sext_ln1118_2767_fu_3610127_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3423_fu_4526_p2() {
    mul_ln1118_3423_fu_4526_p2 = (!mul_ln1118_3423_fu_4526_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3423_fu_4526_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3424_fu_4563_p0() {
    mul_ln1118_3424_fu_4563_p0 =  (sc_lv<16>) (sext_ln1118_2767_fu_3610127_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3424_fu_4563_p2() {
    mul_ln1118_3424_fu_4563_p2 = (!mul_ln1118_3424_fu_4563_p0.read().is_01() || !ap_const_lv24_67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3424_fu_4563_p0.read()) * sc_biguint<24>(ap_const_lv24_67);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3425_fu_4528_p0() {
    mul_ln1118_3425_fu_4528_p0 =  (sc_lv<16>) (sext_ln1118_2768_fu_3610136_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3425_fu_4528_p2() {
    mul_ln1118_3425_fu_4528_p2 = (!mul_ln1118_3425_fu_4528_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3425_fu_4528_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3426_fu_4421_p0() {
    mul_ln1118_3426_fu_4421_p0 =  (sc_lv<16>) (sext_ln1118_2769_fu_3610141_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3426_fu_4421_p2() {
    mul_ln1118_3426_fu_4421_p2 = (!mul_ln1118_3426_fu_4421_p0.read().is_01() || !ap_const_lv23_2C.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3426_fu_4421_p0.read()) * sc_biguint<23>(ap_const_lv23_2C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3427_fu_4350_p0() {
    mul_ln1118_3427_fu_4350_p0 =  (sc_lv<16>) (sext_ln1118_2768_fu_3610136_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3427_fu_4350_p2() {
    mul_ln1118_3427_fu_4350_p2 = (!mul_ln1118_3427_fu_4350_p0.read().is_01() || !ap_const_lv22_1A.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3427_fu_4350_p0.read()) * sc_biguint<22>(ap_const_lv22_1A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3428_fu_4531_p0() {
    mul_ln1118_3428_fu_4531_p0 =  (sc_lv<16>) (sext_ln1118_2767_fu_3610127_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3428_fu_4531_p2() {
    mul_ln1118_3428_fu_4531_p2 = (!mul_ln1118_3428_fu_4531_p0.read().is_01() || !ap_const_lv24_45.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3428_fu_4531_p0.read()) * sc_biguint<24>(ap_const_lv24_45);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3429_fu_4532_p0() {
    mul_ln1118_3429_fu_4532_p0 =  (sc_lv<16>) (sext_ln1118_2769_fu_3610141_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3429_fu_4532_p2() {
    mul_ln1118_3429_fu_4532_p2 = (!mul_ln1118_3429_fu_4532_p0.read().is_01() || !ap_const_lv23_3D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3429_fu_4532_p0.read()) * sc_biguint<23>(ap_const_lv23_3D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3430_fu_4425_p0() {
    mul_ln1118_3430_fu_4425_p0 =  (sc_lv<16>) (sext_ln1118_2769_fu_3610141_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3430_fu_4425_p2() {
    mul_ln1118_3430_fu_4425_p2 = (!mul_ln1118_3430_fu_4425_p0.read().is_01() || !ap_const_lv23_7FFFDB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3430_fu_4425_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDB);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3431_fu_4534_p0() {
    mul_ln1118_3431_fu_4534_p0 =  (sc_lv<16>) (sext_ln1118_2776_fu_3610392_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3431_fu_4534_p2() {
    mul_ln1118_3431_fu_4534_p2 = (!mul_ln1118_3431_fu_4534_p0.read().is_01() || !ap_const_lv24_FFFF96.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3431_fu_4534_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF96);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3432_fu_4499_p0() {
    mul_ln1118_3432_fu_4499_p0 =  (sc_lv<16>) (sext_ln1118_2776_fu_3610392_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3432_fu_4499_p2() {
    mul_ln1118_3432_fu_4499_p2 = (!mul_ln1118_3432_fu_4499_p0.read().is_01() || !ap_const_lv24_FFFFA5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3432_fu_4499_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3433_fu_4572_p0() {
    mul_ln1118_3433_fu_4572_p0 =  (sc_lv<16>) (sext_ln1118_2776_fu_3610392_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3433_fu_4572_p2() {
    mul_ln1118_3433_fu_4572_p2 = (!mul_ln1118_3433_fu_4572_p0.read().is_01() || !ap_const_lv24_47.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3433_fu_4572_p0.read()) * sc_biguint<24>(ap_const_lv24_47);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3434_fu_4573_p0() {
    mul_ln1118_3434_fu_4573_p0 =  (sc_lv<16>) (sext_ln1118_2776_fu_3610392_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3434_fu_4573_p2() {
    mul_ln1118_3434_fu_4573_p2 = (!mul_ln1118_3434_fu_4573_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3434_fu_4573_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3435_fu_4466_p0() {
    mul_ln1118_3435_fu_4466_p0 =  (sc_lv<16>) (sext_ln1118_2776_fu_3610392_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3435_fu_4466_p2() {
    mul_ln1118_3435_fu_4466_p2 = (!mul_ln1118_3435_fu_4466_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3435_fu_4466_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3436_fu_4539_p0() {
    mul_ln1118_3436_fu_4539_p0 =  (sc_lv<16>) (sext_ln1118_2776_fu_3610392_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3436_fu_4539_p2() {
    mul_ln1118_3436_fu_4539_p2 = (!mul_ln1118_3436_fu_4539_p0.read().is_01() || !ap_const_lv24_FFFFB3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3436_fu_4539_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3437_fu_4540_p0() {
    mul_ln1118_3437_fu_4540_p0 = tmp_V_334_reg_3624346.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3437_fu_4540_p2() {
    mul_ln1118_3437_fu_4540_p2 = (!mul_ln1118_3437_fu_4540_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3437_fu_4540_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3438_fu_4541_p0() {
    mul_ln1118_3438_fu_4541_p0 =  (sc_lv<16>) (sext_ln1118_2778_fu_3610406_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3438_fu_4541_p2() {
    mul_ln1118_3438_fu_4541_p2 = (!mul_ln1118_3438_fu_4541_p0.read().is_01() || !ap_const_lv23_2E.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3438_fu_4541_p0.read()) * sc_biguint<23>(ap_const_lv23_2E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3439_fu_3983_p0() {
    mul_ln1118_3439_fu_3983_p0 =  (sc_lv<16>) (sext_ln1118_2776_fu_3610392_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3439_fu_3983_p2() {
    mul_ln1118_3439_fu_3983_p2 = (!mul_ln1118_3439_fu_3983_p0.read().is_01() || !ap_const_lv24_FFFFA9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3439_fu_3983_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3440_fu_3537_p0() {
    mul_ln1118_3440_fu_3537_p0 =  (sc_lv<16>) (sext_ln1118_2776_fu_3610392_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3440_fu_3537_p2() {
    mul_ln1118_3440_fu_3537_p2 = (!mul_ln1118_3440_fu_3537_p0.read().is_01() || !ap_const_lv24_FFFF5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3440_fu_3537_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3441_fu_3870_p0() {
    mul_ln1118_3441_fu_3870_p0 =  (sc_lv<16>) (sext_ln1118_2778_fu_3610406_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3441_fu_3870_p2() {
    mul_ln1118_3441_fu_3870_p2 = (!mul_ln1118_3441_fu_3870_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3441_fu_3870_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3442_fu_3716_p0() {
    mul_ln1118_3442_fu_3716_p0 =  (sc_lv<16>) (sext_ln1118_2785_fu_3610658_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3442_fu_3716_p2() {
    mul_ln1118_3442_fu_3716_p2 = (!mul_ln1118_3442_fu_3716_p0.read().is_01() || !ap_const_lv24_FFFFAB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3442_fu_3716_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAB);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3443_fu_4049_p0() {
    mul_ln1118_3443_fu_4049_p0 =  (sc_lv<16>) (sext_ln1118_2785_fu_3610658_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3443_fu_4049_p2() {
    mul_ln1118_3443_fu_4049_p2 = (!mul_ln1118_3443_fu_4049_p0.read().is_01() || !ap_const_lv24_FFFF58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3443_fu_4049_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF58);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3444_fu_4455_p0() {
    mul_ln1118_3444_fu_4455_p0 =  (sc_lv<16>) (sext_ln1118_2785_fu_3610658_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3444_fu_4455_p2() {
    mul_ln1118_3444_fu_4455_p2 = (!mul_ln1118_3444_fu_4455_p0.read().is_01() || !ap_const_lv24_7B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3444_fu_4455_p0.read()) * sc_biguint<24>(ap_const_lv24_7B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3445_fu_4009_p0() {
    mul_ln1118_3445_fu_4009_p0 =  (sc_lv<16>) (sext_ln1118_2785_fu_3610658_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3445_fu_4009_p2() {
    mul_ln1118_3445_fu_4009_p2 = (!mul_ln1118_3445_fu_4009_p0.read().is_01() || !ap_const_lv24_7D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3445_fu_4009_p0.read()) * sc_biguint<24>(ap_const_lv24_7D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3446_fu_3782_p0() {
    mul_ln1118_3446_fu_3782_p0 =  (sc_lv<16>) (sext_ln1118_2785_fu_3610658_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3446_fu_3782_p2() {
    mul_ln1118_3446_fu_3782_p2 = (!mul_ln1118_3446_fu_3782_p0.read().is_01() || !ap_const_lv24_FFFFA1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3446_fu_3782_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA1);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3447_fu_4188_p0() {
    mul_ln1118_3447_fu_4188_p0 = tmp_V_335_reg_3624359.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3447_fu_4188_p2() {
    mul_ln1118_3447_fu_4188_p2 = (!mul_ln1118_3447_fu_4188_p0.read().is_01() || !ap_const_lv23_7FFFCA.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3447_fu_4188_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCA);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3448_fu_4521_p0() {
    mul_ln1118_3448_fu_4521_p0 =  (sc_lv<16>) (sext_ln1118_2785_fu_3610658_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3448_fu_4521_p2() {
    mul_ln1118_3448_fu_4521_p2 = (!mul_ln1118_3448_fu_4521_p0.read().is_01() || !ap_const_lv24_46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3448_fu_4521_p0.read()) * sc_biguint<24>(ap_const_lv24_46);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3449_fu_3442_p0() {
    mul_ln1118_3449_fu_3442_p0 =  (sc_lv<16>) (sext_ln1118_2785_fu_3610658_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3449_fu_3442_p2() {
    mul_ln1118_3449_fu_3442_p2 = (!mul_ln1118_3449_fu_3442_p0.read().is_01() || !ap_const_lv24_FFFF68.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3449_fu_3442_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF68);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3450_fu_3775_p0() {
    mul_ln1118_3450_fu_3775_p0 =  (sc_lv<16>) (sext_ln1118_2785_fu_3610658_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3450_fu_3775_p2() {
    mul_ln1118_3450_fu_3775_p2 = (!mul_ln1118_3450_fu_3775_p0.read().is_01() || !ap_const_lv24_83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3450_fu_3775_p0.read()) * sc_biguint<24>(ap_const_lv24_83);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3451_fu_3475_p0() {
    mul_ln1118_3451_fu_3475_p0 =  (sc_lv<16>) (sext_ln1118_2785_fu_3610658_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3451_fu_3475_p2() {
    mul_ln1118_3451_fu_3475_p2 = (!mul_ln1118_3451_fu_3475_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3451_fu_3475_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3452_fu_3881_p0() {
    mul_ln1118_3452_fu_3881_p0 = tmp_V_336_reg_3624372.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3452_fu_3881_p2() {
    mul_ln1118_3452_fu_3881_p2 = (!mul_ln1118_3452_fu_3881_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3452_fu_3881_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3453_fu_4214_p0() {
    mul_ln1118_3453_fu_4214_p0 =  (sc_lv<16>) (sext_ln1118_2795_fu_3610971_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3453_fu_4214_p2() {
    mul_ln1118_3453_fu_4214_p2 = (!mul_ln1118_3453_fu_4214_p0.read().is_01() || !ap_const_lv24_FFFFBB.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3453_fu_4214_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBB);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3454_fu_3841_p0() {
    mul_ln1118_3454_fu_3841_p0 =  (sc_lv<16>) (sext_ln1118_2796_fu_3610982_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3454_fu_3841_p2() {
    mul_ln1118_3454_fu_3841_p2 = (!mul_ln1118_3454_fu_3841_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3454_fu_3841_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3455_fu_3468_p0() {
    mul_ln1118_3455_fu_3468_p0 =  (sc_lv<16>) (sext_ln1118_2795_fu_3610971_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3455_fu_3468_p2() {
    mul_ln1118_3455_fu_3468_p2 = (!mul_ln1118_3455_fu_3468_p0.read().is_01() || !ap_const_lv24_FFFF8A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3455_fu_3468_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3456_fu_4185_p0() {
    mul_ln1118_3456_fu_4185_p0 =  (sc_lv<16>) (sext_ln1118_2795_fu_3610971_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3456_fu_4185_p2() {
    mul_ln1118_3456_fu_4185_p2 = (!mul_ln1118_3456_fu_4185_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3456_fu_4185_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3457_fu_4565_p0() {
    mul_ln1118_3457_fu_4565_p0 =  (sc_lv<16>) (sext_ln1118_2795_fu_3610971_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3457_fu_4565_p2() {
    mul_ln1118_3457_fu_4565_p2 = (!mul_ln1118_3457_fu_4565_p0.read().is_01() || !ap_const_lv24_FFFF9B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3457_fu_4565_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3458_fu_4218_p0() {
    mul_ln1118_3458_fu_4218_p0 =  (sc_lv<16>) (sext_ln1118_2795_fu_3610971_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3458_fu_4218_p2() {
    mul_ln1118_3458_fu_4218_p2 = (!mul_ln1118_3458_fu_4218_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3458_fu_4218_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3459_fu_3871_p0() {
    mul_ln1118_3459_fu_3871_p0 =  (sc_lv<16>) (sext_ln1118_2795_fu_3610971_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3459_fu_3871_p2() {
    mul_ln1118_3459_fu_3871_p2 = (!mul_ln1118_3459_fu_3871_p0.read().is_01() || !ap_const_lv24_FFFF67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3459_fu_3871_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF67);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3460_fu_4225_p0() {
    mul_ln1118_3460_fu_4225_p0 =  (sc_lv<16>) (sext_ln1118_2796_fu_3610982_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3460_fu_4225_p2() {
    mul_ln1118_3460_fu_4225_p2 = (!mul_ln1118_3460_fu_4225_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3460_fu_4225_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3461_fu_3904_p0() {
    mul_ln1118_3461_fu_3904_p0 =  (sc_lv<16>) (sext_ln1118_2795_fu_3610971_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3461_fu_3904_p2() {
    mul_ln1118_3461_fu_3904_p2 = (!mul_ln1118_3461_fu_3904_p0.read().is_01() || !ap_const_lv24_FFFF56.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3461_fu_3904_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF56);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3462_fu_4258_p0() {
    mul_ln1118_3462_fu_4258_p0 =  (sc_lv<16>) (sext_ln1118_2795_fu_3610971_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3462_fu_4258_p2() {
    mul_ln1118_3462_fu_4258_p2 = (!mul_ln1118_3462_fu_4258_p0.read().is_01() || !ap_const_lv24_FFFFB7.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3462_fu_4258_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3463_fu_3911_p0() {
    mul_ln1118_3463_fu_3911_p0 = tmp_V_336_reg_3624372.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3463_fu_3911_p2() {
    mul_ln1118_3463_fu_3911_p2 = (!mul_ln1118_3463_fu_3911_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3463_fu_3911_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3464_fu_3813_p0() {
    mul_ln1118_3464_fu_3813_p0 =  (sc_lv<16>) (sext_ln1118_2805_fu_3611248_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3464_fu_3813_p2() {
    mul_ln1118_3464_fu_3813_p2 = (!mul_ln1118_3464_fu_3813_p0.read().is_01() || !ap_const_lv24_FFFF66.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3464_fu_3813_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF66);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3465_fu_3670_p0() {
    mul_ln1118_3465_fu_3670_p0 =  (sc_lv<16>) (sext_ln1118_2805_fu_3611248_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3465_fu_3670_p2() {
    mul_ln1118_3465_fu_3670_p2 = (!mul_ln1118_3465_fu_3670_p0.read().is_01() || !ap_const_lv24_FFFFAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3465_fu_3670_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAF);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3466_fu_3779_p0() {
    mul_ln1118_3466_fu_3779_p0 =  (sc_lv<16>) (sext_ln1118_2805_fu_3611248_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3466_fu_3779_p2() {
    mul_ln1118_3466_fu_3779_p2 = (!mul_ln1118_3466_fu_3779_p0.read().is_01() || !ap_const_lv24_9F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3466_fu_3779_p0.read()) * sc_biguint<24>(ap_const_lv24_9F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3467_fu_3744_p0() {
    mul_ln1118_3467_fu_3744_p0 =  (sc_lv<16>) (sext_ln1118_2806_fu_3611255_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3467_fu_3744_p2() {
    mul_ln1118_3467_fu_3744_p2 = (!mul_ln1118_3467_fu_3744_p0.read().is_01() || !ap_const_lv21_B.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3467_fu_3744_p0.read()) * sc_biguint<21>(ap_const_lv21_B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3468_fu_3781_p0() {
    mul_ln1118_3468_fu_3781_p0 = tmp_V_337_reg_3624385.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3468_fu_3781_p2() {
    mul_ln1118_3468_fu_3781_p2 = (!mul_ln1118_3468_fu_3781_p0.read().is_01() || !ap_const_lv23_39.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3468_fu_3781_p0.read()) * sc_biguint<23>(ap_const_lv23_39);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3469_fu_3530_p0() {
    mul_ln1118_3469_fu_3530_p0 =  (sc_lv<16>) (sext_ln1118_2805_fu_3611248_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3469_fu_3530_p2() {
    mul_ln1118_3469_fu_3530_p2 = (!mul_ln1118_3469_fu_3530_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3469_fu_3530_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3470_fu_3783_p0() {
    mul_ln1118_3470_fu_3783_p0 =  (sc_lv<16>) (sext_ln1118_2816_fu_3611580_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3470_fu_3783_p2() {
    mul_ln1118_3470_fu_3783_p2 = (!mul_ln1118_3470_fu_3783_p0.read().is_01() || !ap_const_lv24_FFFFA6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3470_fu_3783_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3471_fu_3856_p0() {
    mul_ln1118_3471_fu_3856_p0 =  (sc_lv<16>) (sext_ln1118_2816_fu_3611580_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3471_fu_3856_p2() {
    mul_ln1118_3471_fu_3856_p2 = (!mul_ln1118_3471_fu_3856_p0.read().is_01() || !ap_const_lv24_5C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3471_fu_3856_p0.read()) * sc_biguint<24>(ap_const_lv24_5C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3472_fu_3785_p0() {
    mul_ln1118_3472_fu_3785_p0 =  (sc_lv<16>) (sext_ln1118_2817_fu_3611592_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3472_fu_3785_p2() {
    mul_ln1118_3472_fu_3785_p2 = (!mul_ln1118_3472_fu_3785_p0.read().is_01() || !ap_const_lv23_3B.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3472_fu_3785_p0.read()) * sc_biguint<23>(ap_const_lv23_3B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3473_fu_3786_p0() {
    mul_ln1118_3473_fu_3786_p0 =  (sc_lv<16>) (sext_ln1118_2816_fu_3611580_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3473_fu_3786_p2() {
    mul_ln1118_3473_fu_3786_p2 = (!mul_ln1118_3473_fu_3786_p0.read().is_01() || !ap_const_lv24_9D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3473_fu_3786_p0.read()) * sc_biguint<24>(ap_const_lv24_9D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3474_fu_3787_p0() {
    mul_ln1118_3474_fu_3787_p0 =  (sc_lv<16>) (sext_ln1118_2817_fu_3611592_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3474_fu_3787_p2() {
    mul_ln1118_3474_fu_3787_p2 = (!mul_ln1118_3474_fu_3787_p0.read().is_01() || !ap_const_lv23_7FFFDD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3474_fu_3787_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFDD);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3475_fu_3824_p0() {
    mul_ln1118_3475_fu_3824_p0 =  (sc_lv<16>) (sext_ln1118_2817_fu_3611592_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3475_fu_3824_p2() {
    mul_ln1118_3475_fu_3824_p2 = (!mul_ln1118_3475_fu_3824_p0.read().is_01() || !ap_const_lv23_7FFFC5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3475_fu_3824_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3476_fu_3644_p0() {
    mul_ln1118_3476_fu_3644_p0 =  (sc_lv<16>) (sext_ln1118_2816_fu_3611580_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3476_fu_3644_p2() {
    mul_ln1118_3476_fu_3644_p2 = (!mul_ln1118_3476_fu_3644_p0.read().is_01() || !ap_const_lv24_FFFFAD.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3476_fu_3644_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAD);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3477_fu_3754_p0() {
    mul_ln1118_3477_fu_3754_p0 =  (sc_lv<16>) (sext_ln1118_2816_fu_3611580_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3477_fu_3754_p2() {
    mul_ln1118_3477_fu_3754_p2 = (!mul_ln1118_3477_fu_3754_p0.read().is_01() || !ap_const_lv24_FFFF8E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3477_fu_3754_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3478_fu_3827_p0() {
    mul_ln1118_3478_fu_3827_p0 =  (sc_lv<16>) (sext_ln1118_2816_fu_3611580_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3478_fu_3827_p2() {
    mul_ln1118_3478_fu_3827_p2 = (!mul_ln1118_3478_fu_3827_p0.read().is_01() || !ap_const_lv24_FFFF4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3478_fu_3827_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3479_fu_3828_p0() {
    mul_ln1118_3479_fu_3828_p0 =  (sc_lv<16>) (sext_ln1118_2816_fu_3611580_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3479_fu_3828_p2() {
    mul_ln1118_3479_fu_3828_p2 = (!mul_ln1118_3479_fu_3828_p0.read().is_01() || !ap_const_lv24_FFFF5F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3479_fu_3828_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3480_fu_3829_p0() {
    mul_ln1118_3480_fu_3829_p0 =  (sc_lv<16>) (sext_ln1118_2816_fu_3611580_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3480_fu_3829_p2() {
    mul_ln1118_3480_fu_3829_p2 = (!mul_ln1118_3480_fu_3829_p0.read().is_01() || !ap_const_lv24_46.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3480_fu_3829_p0.read()) * sc_biguint<24>(ap_const_lv24_46);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3481_fu_3830_p0() {
    mul_ln1118_3481_fu_3830_p0 =  (sc_lv<16>) (sext_ln1118_2816_fu_3611580_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3481_fu_3830_p2() {
    mul_ln1118_3481_fu_3830_p2 = (!mul_ln1118_3481_fu_3830_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3481_fu_3830_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3482_fu_3759_p0() {
    mul_ln1118_3482_fu_3759_p0 =  (sc_lv<16>) (sext_ln1118_2825_fu_3611871_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3482_fu_3759_p2() {
    mul_ln1118_3482_fu_3759_p2 = (!mul_ln1118_3482_fu_3759_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3482_fu_3759_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3483_fu_3796_p0() {
    mul_ln1118_3483_fu_3796_p0 =  (sc_lv<16>) (sext_ln1118_2824_fu_3611861_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3483_fu_3796_p2() {
    mul_ln1118_3483_fu_3796_p2 = (!mul_ln1118_3483_fu_3796_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3483_fu_3796_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3484_fu_3725_p0() {
    mul_ln1118_3484_fu_3725_p0 =  (sc_lv<16>) (sext_ln1118_2824_fu_3611861_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3484_fu_3725_p2() {
    mul_ln1118_3484_fu_3725_p2 = (!mul_ln1118_3484_fu_3725_p0.read().is_01() || !ap_const_lv24_5D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3484_fu_3725_p0.read()) * sc_biguint<24>(ap_const_lv24_5D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3485_fu_4473_p0() {
    mul_ln1118_3485_fu_4473_p0 =  (sc_lv<16>) (sext_ln1118_2824_fu_3611861_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3485_fu_4473_p2() {
    mul_ln1118_3485_fu_4473_p2 = (!mul_ln1118_3485_fu_4473_p0.read().is_01() || !ap_const_lv24_4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3485_fu_4473_p0.read()) * sc_biguint<24>(ap_const_lv24_4B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3486_fu_3799_p0() {
    mul_ln1118_3486_fu_3799_p0 =  (sc_lv<16>) (sext_ln1118_2826_fu_3611875_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3486_fu_3799_p2() {
    mul_ln1118_3486_fu_3799_p2 = (!mul_ln1118_3486_fu_3799_p0.read().is_01() || !ap_const_lv23_26.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3486_fu_3799_p0.read()) * sc_biguint<23>(ap_const_lv23_26);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3487_fu_3836_p0() {
    mul_ln1118_3487_fu_3836_p0 =  (sc_lv<16>) (sext_ln1118_2824_fu_3611861_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3487_fu_3836_p2() {
    mul_ln1118_3487_fu_3836_p2 = (!mul_ln1118_3487_fu_3836_p0.read().is_01() || !ap_const_lv24_4E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3487_fu_3836_p0.read()) * sc_biguint<24>(ap_const_lv24_4E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3488_fu_3729_p0() {
    mul_ln1118_3488_fu_3729_p0 =  (sc_lv<16>) (sext_ln1118_2826_fu_3611875_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3488_fu_3729_p2() {
    mul_ln1118_3488_fu_3729_p2 = (!mul_ln1118_3488_fu_3729_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3488_fu_3729_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3489_fu_4353_p0() {
    mul_ln1118_3489_fu_4353_p0 =  (sc_lv<16>) (sext_ln1118_2824_fu_3611861_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3489_fu_4353_p2() {
    mul_ln1118_3489_fu_4353_p2 = (!mul_ln1118_3489_fu_4353_p0.read().is_01() || !ap_const_lv24_FFFF86.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3489_fu_4353_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF86);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3490_fu_3907_p0() {
    mul_ln1118_3490_fu_3907_p0 =  (sc_lv<16>) (sext_ln1118_2824_fu_3611861_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3490_fu_3907_p2() {
    mul_ln1118_3490_fu_3907_p2 = (!mul_ln1118_3490_fu_3907_p0.read().is_01() || !ap_const_lv24_FFFF5A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3490_fu_3907_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3491_fu_4386_p0() {
    mul_ln1118_3491_fu_4386_p0 =  (sc_lv<16>) (sext_ln1118_2824_fu_3611861_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3491_fu_4386_p2() {
    mul_ln1118_3491_fu_4386_p2 = (!mul_ln1118_3491_fu_4386_p0.read().is_01() || !ap_const_lv24_FFFF62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3491_fu_4386_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF62);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3492_fu_3867_p0() {
    mul_ln1118_3492_fu_3867_p0 =  (sc_lv<16>) (sext_ln1118_2834_fu_3612166_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3492_fu_3867_p2() {
    mul_ln1118_3492_fu_3867_p2 = (!mul_ln1118_3492_fu_3867_p0.read().is_01() || !ap_const_lv23_2D.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3492_fu_3867_p0.read()) * sc_biguint<23>(ap_const_lv23_2D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3493_fu_4346_p0() {
    mul_ln1118_3493_fu_4346_p0 =  (sc_lv<16>) (sext_ln1118_2832_fu_3612153_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3493_fu_4346_p2() {
    mul_ln1118_3493_fu_4346_p2 = (!mul_ln1118_3493_fu_4346_p0.read().is_01() || !ap_const_lv24_FFFF2D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3493_fu_4346_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF2D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3494_fu_3900_p0() {
    mul_ln1118_3494_fu_3900_p0 =  (sc_lv<16>) (sext_ln1118_2832_fu_3612153_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3494_fu_3900_p2() {
    mul_ln1118_3494_fu_3900_p2 = (!mul_ln1118_3494_fu_3900_p0.read().is_01() || !ap_const_lv24_FFFF4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3494_fu_3900_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3495_fu_4452_p0() {
    mul_ln1118_3495_fu_4452_p0 =  (sc_lv<16>) (sext_ln1118_2832_fu_3612153_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3495_fu_4452_p2() {
    mul_ln1118_3495_fu_4452_p2 = (!mul_ln1118_3495_fu_4452_p0.read().is_01() || !ap_const_lv24_FFFFB6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3495_fu_4452_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3496_fu_4006_p0() {
    mul_ln1118_3496_fu_4006_p0 =  (sc_lv<16>) (sext_ln1118_2834_fu_3612166_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3496_fu_4006_p2() {
    mul_ln1118_3496_fu_4006_p2 = (!mul_ln1118_3496_fu_4006_p0.read().is_01() || !ap_const_lv23_29.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3496_fu_4006_p0.read()) * sc_biguint<23>(ap_const_lv23_29);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3497_fu_4243_p0() {
    mul_ln1118_3497_fu_4243_p0 =  (sc_lv<16>) (sext_ln1118_2834_fu_3612166_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3497_fu_4243_p2() {
    mul_ln1118_3497_fu_4243_p2 = (!mul_ln1118_3497_fu_4243_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3497_fu_4243_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3498_fu_4039_p0() {
    mul_ln1118_3498_fu_4039_p0 = tmp_V_340_reg_3624421.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3498_fu_4039_p2() {
    mul_ln1118_3498_fu_4039_p2 = (!mul_ln1118_3498_fu_4039_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3498_fu_4039_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3499_fu_4518_p0() {
    mul_ln1118_3499_fu_4518_p0 =  (sc_lv<16>) (sext_ln1118_2832_fu_3612153_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3499_fu_4518_p2() {
    mul_ln1118_3499_fu_4518_p2 = (!mul_ln1118_3499_fu_4518_p0.read().is_01() || !ap_const_lv24_74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3499_fu_4518_p0.read()) * sc_biguint<24>(ap_const_lv24_74);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3500_fu_3926_p0() {
    mul_ln1118_3500_fu_3926_p0 =  (sc_lv<16>) (sext_ln1118_2832_fu_3612153_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3500_fu_3926_p2() {
    mul_ln1118_3500_fu_3926_p2 = (!mul_ln1118_3500_fu_3926_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3500_fu_3926_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3501_fu_4551_p0() {
    mul_ln1118_3501_fu_4551_p0 =  (sc_lv<16>) (sext_ln1118_2832_fu_3612153_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3501_fu_4551_p2() {
    mul_ln1118_3501_fu_4551_p2 = (!mul_ln1118_3501_fu_4551_p0.read().is_01() || !ap_const_lv24_FFFF58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3501_fu_4551_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF58);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3502_fu_4105_p0() {
    mul_ln1118_3502_fu_4105_p0 =  (sc_lv<16>) (sext_ln1118_2834_fu_3612166_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3502_fu_4105_p2() {
    mul_ln1118_3502_fu_4105_p2 = (!mul_ln1118_3502_fu_4105_p0.read().is_01() || !ap_const_lv23_35.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3502_fu_4105_p0.read()) * sc_biguint<23>(ap_const_lv23_35);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3503_fu_3464_p0() {
    mul_ln1118_3503_fu_3464_p0 =  (sc_lv<16>) (sext_ln1118_2843_fu_3612438_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3503_fu_3464_p2() {
    mul_ln1118_3503_fu_3464_p2 = (!mul_ln1118_3503_fu_3464_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3503_fu_3464_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3504_fu_4065_p0() {
    mul_ln1118_3504_fu_4065_p0 =  (sc_lv<16>) (sext_ln1118_2843_fu_3612438_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3504_fu_4065_p2() {
    mul_ln1118_3504_fu_4065_p2 = (!mul_ln1118_3504_fu_4065_p0.read().is_01() || !ap_const_lv24_79.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3504_fu_4065_p0.read()) * sc_biguint<24>(ap_const_lv24_79);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3505_fu_3765_p0() {
    mul_ln1118_3505_fu_3765_p0 = tmp_V_341_reg_3624433.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3505_fu_3765_p2() {
    mul_ln1118_3505_fu_3765_p2 = (!mul_ln1118_3505_fu_3765_p0.read().is_01() || !ap_const_lv22_3FFFE6.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3505_fu_3765_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3506_fu_3862_p0() {
    mul_ln1118_3506_fu_3862_p0 =  (sc_lv<16>) (sext_ln1118_2843_fu_3612438_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3506_fu_3862_p2() {
    mul_ln1118_3506_fu_3862_p2 = (!mul_ln1118_3506_fu_3862_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3506_fu_3862_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3507_fu_4294_p0() {
    mul_ln1118_3507_fu_4294_p0 =  (sc_lv<16>) (sext_ln1118_2843_fu_3612438_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3507_fu_4294_p2() {
    mul_ln1118_3507_fu_4294_p2 = (!mul_ln1118_3507_fu_4294_p0.read().is_01() || !ap_const_lv24_FFFFB9.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3507_fu_4294_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3508_fu_3895_p0() {
    mul_ln1118_3508_fu_3895_p0 = tmp_V_341_reg_3624433.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3508_fu_3895_p2() {
    mul_ln1118_3508_fu_3895_p2 = (!mul_ln1118_3508_fu_3895_p0.read().is_01() || !ap_const_lv21_1FFFF3.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3508_fu_3895_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3509_fu_3522_p0() {
    mul_ln1118_3509_fu_3522_p0 =  (sc_lv<16>) (sext_ln1118_2844_fu_3612447_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3509_fu_3522_p2() {
    mul_ln1118_3509_fu_3522_p2 = (!mul_ln1118_3509_fu_3522_p0.read().is_01() || !ap_const_lv23_7FFFCB.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3509_fu_3522_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCB);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3510_fu_3954_p0() {
    mul_ln1118_3510_fu_3954_p0 =  (sc_lv<16>) (sext_ln1118_2843_fu_3612438_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3510_fu_3954_p2() {
    mul_ln1118_3510_fu_3954_p2 = (!mul_ln1118_3510_fu_3954_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3510_fu_3954_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3511_fu_3607_p0() {
    mul_ln1118_3511_fu_3607_p0 =  (sc_lv<16>) (sext_ln1118_2843_fu_3612438_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3511_fu_3607_p2() {
    mul_ln1118_3511_fu_3607_p2 = (!mul_ln1118_3511_fu_3607_p0.read().is_01() || !ap_const_lv24_95.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3511_fu_3607_p0.read()) * sc_biguint<24>(ap_const_lv24_95);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3512_fu_3987_p0() {
    mul_ln1118_3512_fu_3987_p0 =  (sc_lv<16>) (sext_ln1118_2852_fu_3612731_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3512_fu_3987_p2() {
    mul_ln1118_3512_fu_3987_p2 = (!mul_ln1118_3512_fu_3987_p0.read().is_01() || !ap_const_lv24_FFFFB2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3512_fu_3987_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB2);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3513_fu_4369_p0() {
    mul_ln1118_3513_fu_4369_p0 =  (sc_lv<16>) (sext_ln1118_2852_fu_3612731_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3513_fu_4369_p2() {
    mul_ln1118_3513_fu_4369_p2 = (!mul_ln1118_3513_fu_4369_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3513_fu_4369_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3514_fu_4298_p0() {
    mul_ln1118_3514_fu_4298_p0 =  (sc_lv<16>) (sext_ln1118_2853_fu_3612740_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3514_fu_4298_p2() {
    mul_ln1118_3514_fu_4298_p2 = (!mul_ln1118_3514_fu_4298_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3514_fu_4298_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3515_fu_4509_p0() {
    mul_ln1118_3515_fu_4509_p0 =  (sc_lv<16>) (sext_ln1118_2853_fu_3612740_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3515_fu_4509_p2() {
    mul_ln1118_3515_fu_4509_p2 = (!mul_ln1118_3515_fu_4509_p0.read().is_01() || !ap_const_lv22_1D.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3515_fu_4509_p0.read()) * sc_biguint<22>(ap_const_lv22_1D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3516_fu_4336_p0() {
    mul_ln1118_3516_fu_4336_p0 =  (sc_lv<16>) (sext_ln1118_2852_fu_3612731_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3516_fu_4336_p2() {
    mul_ln1118_3516_fu_4336_p2 = (!mul_ln1118_3516_fu_4336_p0.read().is_01() || !ap_const_lv24_FFFF5E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3516_fu_4336_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3517_fu_4337_p0() {
    mul_ln1118_3517_fu_4337_p0 =  (sc_lv<16>) (sext_ln1118_2852_fu_3612731_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3517_fu_4337_p2() {
    mul_ln1118_3517_fu_4337_p2 = (!mul_ln1118_3517_fu_4337_p0.read().is_01() || !ap_const_lv24_FFFF5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3517_fu_4337_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF5B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3518_fu_4302_p0() {
    mul_ln1118_3518_fu_4302_p0 =  (sc_lv<16>) (sext_ln1118_2854_fu_3612745_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3518_fu_4302_p2() {
    mul_ln1118_3518_fu_4302_p2 = (!mul_ln1118_3518_fu_4302_p0.read().is_01() || !ap_const_lv23_33.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3518_fu_4302_p0.read()) * sc_biguint<23>(ap_const_lv23_33);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3519_fu_4375_p0() {
    mul_ln1118_3519_fu_4375_p0 =  (sc_lv<16>) (sext_ln1118_2852_fu_3612731_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3519_fu_4375_p2() {
    mul_ln1118_3519_fu_4375_p2 = (!mul_ln1118_3519_fu_4375_p0.read().is_01() || !ap_const_lv24_FFFF89.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3519_fu_4375_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF89);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3520_fu_4304_p0() {
    mul_ln1118_3520_fu_4304_p0 =  (sc_lv<16>) (sext_ln1118_2854_fu_3612745_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3520_fu_4304_p2() {
    mul_ln1118_3520_fu_4304_p2 = (!mul_ln1118_3520_fu_4304_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3520_fu_4304_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3521_fu_4341_p0() {
    mul_ln1118_3521_fu_4341_p0 =  (sc_lv<16>) (sext_ln1118_2852_fu_3612731_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3521_fu_4341_p2() {
    mul_ln1118_3521_fu_4341_p2 = (!mul_ln1118_3521_fu_4341_p0.read().is_01() || !ap_const_lv24_FFFF1D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3521_fu_4341_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF1D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3522_fu_4342_p0() {
    mul_ln1118_3522_fu_4342_p0 =  (sc_lv<16>) (sext_ln1118_2854_fu_3612745_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3522_fu_4342_p2() {
    mul_ln1118_3522_fu_4342_p2 = (!mul_ln1118_3522_fu_4342_p0.read().is_01() || !ap_const_lv23_7FFFD9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3522_fu_4342_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3523_fu_4343_p0() {
    mul_ln1118_3523_fu_4343_p0 =  (sc_lv<16>) (sext_ln1118_2861_fu_3613004_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3523_fu_4343_p2() {
    mul_ln1118_3523_fu_4343_p2 = (!mul_ln1118_3523_fu_4343_p0.read().is_01() || !ap_const_lv24_FFFFA6.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3523_fu_4343_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA6);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3524_fu_4308_p0() {
    mul_ln1118_3524_fu_4308_p0 =  (sc_lv<16>) (sext_ln1118_2861_fu_3613004_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3524_fu_4308_p2() {
    mul_ln1118_3524_fu_4308_p2 = (!mul_ln1118_3524_fu_4308_p0.read().is_01() || !ap_const_lv24_FFFF73.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3524_fu_4308_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF73);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3525_fu_4345_p0() {
    mul_ln1118_3525_fu_4345_p0 =  (sc_lv<16>) (sext_ln1118_2861_fu_3613004_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3525_fu_4345_p2() {
    mul_ln1118_3525_fu_4345_p2 = (!mul_ln1118_3525_fu_4345_p0.read().is_01() || !ap_const_lv24_FFFF92.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3525_fu_4345_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF92);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3526_fu_4274_p0() {
    mul_ln1118_3526_fu_4274_p0 =  (sc_lv<16>) (sext_ln1118_2861_fu_3613004_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3526_fu_4274_p2() {
    mul_ln1118_3526_fu_4274_p2 = (!mul_ln1118_3526_fu_4274_p0.read().is_01() || !ap_const_lv24_FFFF75.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3526_fu_4274_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF75);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3527_fu_4275_p0() {
    mul_ln1118_3527_fu_4275_p0 =  (sc_lv<16>) (sext_ln1118_2862_fu_3613014_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3527_fu_4275_p2() {
    mul_ln1118_3527_fu_4275_p2 = (!mul_ln1118_3527_fu_4275_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3527_fu_4275_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3528_fu_4348_p0() {
    mul_ln1118_3528_fu_4348_p0 =  (sc_lv<16>) (sext_ln1118_2862_fu_3613014_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3528_fu_4348_p2() {
    mul_ln1118_3528_fu_4348_p2 = (!mul_ln1118_3528_fu_4348_p0.read().is_01() || !ap_const_lv23_7FFFCF.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3528_fu_4348_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCF);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3529_fu_4349_p0() {
    mul_ln1118_3529_fu_4349_p0 =  (sc_lv<16>) (sext_ln1118_2861_fu_3613004_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3529_fu_4349_p2() {
    mul_ln1118_3529_fu_4349_p2 = (!mul_ln1118_3529_fu_4349_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3529_fu_4349_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3530_fu_4242_p0() {
    mul_ln1118_3530_fu_4242_p0 =  (sc_lv<16>) (sext_ln1118_2862_fu_3613014_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3530_fu_4242_p2() {
    mul_ln1118_3530_fu_4242_p2 = (!mul_ln1118_3530_fu_4242_p0.read().is_01() || !ap_const_lv23_25.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3530_fu_4242_p0.read()) * sc_biguint<23>(ap_const_lv23_25);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3531_fu_4257_p0() {
    mul_ln1118_3531_fu_4257_p0 =  (sc_lv<16>) (sext_ln1118_2861_fu_3613004_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3531_fu_4257_p2() {
    mul_ln1118_3531_fu_4257_p2 = (!mul_ln1118_3531_fu_4257_p0.read().is_01() || !ap_const_lv24_FFFF97.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3531_fu_4257_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF97);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3532_fu_4352_p0() {
    mul_ln1118_3532_fu_4352_p0 =  (sc_lv<16>) (sext_ln1118_2861_fu_3613004_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3532_fu_4352_p2() {
    mul_ln1118_3532_fu_4352_p2 = (!mul_ln1118_3532_fu_4352_p0.read().is_01() || !ap_const_lv24_FFFF6B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3532_fu_4352_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3533_fu_4329_p0() {
    mul_ln1118_3533_fu_4329_p0 =  (sc_lv<16>) (sext_ln1118_2862_fu_3613014_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3533_fu_4329_p2() {
    mul_ln1118_3533_fu_4329_p2 = (!mul_ln1118_3533_fu_4329_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3533_fu_4329_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3534_fu_4354_p0() {
    mul_ln1118_3534_fu_4354_p0 =  (sc_lv<16>) (sext_ln1118_2872_fu_3613293_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3534_fu_4354_p2() {
    mul_ln1118_3534_fu_4354_p2 = (!mul_ln1118_3534_fu_4354_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3534_fu_4354_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3535_fu_4391_p0() {
    mul_ln1118_3535_fu_4391_p0 =  (sc_lv<16>) (sext_ln1118_2871_fu_3613281_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3535_fu_4391_p2() {
    mul_ln1118_3535_fu_4391_p2 = (!mul_ln1118_3535_fu_4391_p0.read().is_01() || !ap_const_lv24_FFFF41.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3535_fu_4391_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF41);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3536_fu_4356_p0() {
    mul_ln1118_3536_fu_4356_p0 =  (sc_lv<16>) (sext_ln1118_2871_fu_3613281_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3536_fu_4356_p2() {
    mul_ln1118_3536_fu_4356_p2 = (!mul_ln1118_3536_fu_4356_p0.read().is_01() || !ap_const_lv24_FFFF4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3536_fu_4356_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF4D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3537_fu_4471_p0() {
    mul_ln1118_3537_fu_4471_p0 =  (sc_lv<16>) (sext_ln1118_2872_fu_3613293_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3537_fu_4471_p2() {
    mul_ln1118_3537_fu_4471_p2 = (!mul_ln1118_3537_fu_4471_p0.read().is_01() || !ap_const_lv23_2F.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3537_fu_4471_p0.read()) * sc_biguint<23>(ap_const_lv23_2F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3538_fu_3611_p0() {
    mul_ln1118_3538_fu_3611_p0 =  (sc_lv<16>) (sext_ln1118_2871_fu_3613281_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3538_fu_3611_p2() {
    mul_ln1118_3538_fu_3611_p2 = (!mul_ln1118_3538_fu_3611_p0.read().is_01() || !ap_const_lv24_9F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3538_fu_3611_p0.read()) * sc_biguint<24>(ap_const_lv24_9F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3539_fu_3944_p0() {
    mul_ln1118_3539_fu_3944_p0 =  (sc_lv<16>) (sext_ln1118_2871_fu_3613281_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3539_fu_3944_p2() {
    mul_ln1118_3539_fu_3944_p2 = (!mul_ln1118_3539_fu_3944_p0.read().is_01() || !ap_const_lv24_8E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3539_fu_3944_p0.read()) * sc_biguint<24>(ap_const_lv24_8E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3540_fu_4277_p0() {
    mul_ln1118_3540_fu_4277_p0 =  (sc_lv<16>) (sext_ln1118_2871_fu_3613281_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3540_fu_4277_p2() {
    mul_ln1118_3540_fu_4277_p2 = (!mul_ln1118_3540_fu_4277_p0.read().is_01() || !ap_const_lv24_64.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3540_fu_4277_p0.read()) * sc_biguint<24>(ap_const_lv24_64);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3541_fu_3977_p0() {
    mul_ln1118_3541_fu_3977_p0 =  (sc_lv<16>) (sext_ln1118_2871_fu_3613281_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3541_fu_3977_p2() {
    mul_ln1118_3541_fu_3977_p2 = (!mul_ln1118_3541_fu_3977_p0.read().is_01() || !ap_const_lv24_FFFF93.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3541_fu_3977_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF93);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3542_fu_3677_p0() {
    mul_ln1118_3542_fu_3677_p0 =  (sc_lv<16>) (sext_ln1118_2871_fu_3613281_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3542_fu_3677_p2() {
    mul_ln1118_3542_fu_3677_p2 = (!mul_ln1118_3542_fu_3677_p0.read().is_01() || !ap_const_lv24_8D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3542_fu_3677_p0.read()) * sc_biguint<24>(ap_const_lv24_8D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3543_fu_4010_p0() {
    mul_ln1118_3543_fu_4010_p0 =  (sc_lv<16>) (sext_ln1118_2871_fu_3613281_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3543_fu_4010_p2() {
    mul_ln1118_3543_fu_4010_p2 = (!mul_ln1118_3543_fu_4010_p0.read().is_01() || !ap_const_lv24_FFFF7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3543_fu_4010_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF7A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3544_fu_3564_p0() {
    mul_ln1118_3544_fu_3564_p0 =  (sc_lv<16>) (sext_ln1118_2872_fu_3613293_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3544_fu_3564_p2() {
    mul_ln1118_3544_fu_3564_p2 = (!mul_ln1118_3544_fu_3564_p0.read().is_01() || !ap_const_lv23_3A.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3544_fu_3564_p0.read()) * sc_biguint<23>(ap_const_lv23_3A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3545_fu_4043_p0() {
    mul_ln1118_3545_fu_4043_p0 =  (sc_lv<16>) (sext_ln1118_2871_fu_3613281_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3545_fu_4043_p2() {
    mul_ln1118_3545_fu_4043_p2 = (!mul_ln1118_3545_fu_4043_p0.read().is_01() || !ap_const_lv24_5B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3545_fu_4043_p0.read()) * sc_biguint<24>(ap_const_lv24_5B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3546_fu_4376_p0() {
    mul_ln1118_3546_fu_4376_p0 =  (sc_lv<16>) (sext_ln1118_2879_fu_3613525_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3546_fu_4376_p2() {
    mul_ln1118_3546_fu_4376_p2 = (!mul_ln1118_3546_fu_4376_p0.read().is_01() || !ap_const_lv24_72.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3546_fu_4376_p0.read()) * sc_biguint<24>(ap_const_lv24_72);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3547_fu_4003_p0() {
    mul_ln1118_3547_fu_4003_p0 =  (sc_lv<16>) (sext_ln1118_2879_fu_3613525_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3547_fu_4003_p2() {
    mul_ln1118_3547_fu_4003_p2 = (!mul_ln1118_3547_fu_4003_p0.read().is_01() || !ap_const_lv24_59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3547_fu_4003_p0.read()) * sc_biguint<24>(ap_const_lv24_59);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3548_fu_4555_p0() {
    mul_ln1118_3548_fu_4555_p0 =  (sc_lv<16>) (sext_ln1118_2883_fu_3613545_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3548_fu_4555_p2() {
    mul_ln1118_3548_fu_4555_p2 = (!mul_ln1118_3548_fu_4555_p0.read().is_01() || !ap_const_lv23_7FFFD4.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3548_fu_4555_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD4);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3549_fu_4109_p0() {
    mul_ln1118_3549_fu_4109_p0 =  (sc_lv<16>) (sext_ln1118_2879_fu_3613525_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3549_fu_4109_p2() {
    mul_ln1118_3549_fu_4109_p2 = (!mul_ln1118_3549_fu_4109_p0.read().is_01() || !ap_const_lv24_6F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3549_fu_4109_p0.read()) * sc_biguint<24>(ap_const_lv24_6F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3550_fu_4442_p0() {
    mul_ln1118_3550_fu_4442_p0 =  (sc_lv<16>) (sext_ln1118_2879_fu_3613525_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3550_fu_4442_p2() {
    mul_ln1118_3550_fu_4442_p2 = (!mul_ln1118_3550_fu_4442_p0.read().is_01() || !ap_const_lv24_FFFF59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3550_fu_4442_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF59);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3551_fu_3923_p0() {
    mul_ln1118_3551_fu_3923_p0 =  (sc_lv<16>) (sext_ln1118_2882_fu_3613541_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3551_fu_3923_p2() {
    mul_ln1118_3551_fu_3923_p2 = (!mul_ln1118_3551_fu_3923_p0.read().is_01() || !ap_const_lv21_1FFFF5.is_01())? sc_lv<21>(): sc_bigint<16>(mul_ln1118_3551_fu_3923_p0.read()) * sc_bigint<21>(ap_const_lv21_1FFFF5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3552_fu_3696_p0() {
    mul_ln1118_3552_fu_3696_p0 =  (sc_lv<16>) (sext_ln1118_2879_fu_3613525_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3552_fu_3696_p2() {
    mul_ln1118_3552_fu_3696_p2 = (!mul_ln1118_3552_fu_3696_p0.read().is_01() || !ap_const_lv24_7A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3552_fu_3696_p0.read()) * sc_biguint<24>(ap_const_lv24_7A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3553_fu_3469_p0() {
    mul_ln1118_3553_fu_3469_p0 =  (sc_lv<16>) (sext_ln1118_2883_fu_3613545_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3553_fu_3469_p2() {
    mul_ln1118_3553_fu_3469_p2 = (!mul_ln1118_3553_fu_3469_p0.read().is_01() || !ap_const_lv23_7FFFCC.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3553_fu_3469_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCC);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3554_fu_4216_p0() {
    mul_ln1118_3554_fu_4216_p0 =  (sc_lv<16>) (sext_ln1118_2879_fu_3613525_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3554_fu_4216_p2() {
    mul_ln1118_3554_fu_4216_p2 = (!mul_ln1118_3554_fu_4216_p0.read().is_01() || !ap_const_lv24_6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3554_fu_4216_p0.read()) * sc_biguint<24>(ap_const_lv24_6C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3555_fu_3964_p0() {
    mul_ln1118_3555_fu_3964_p0 =  (sc_lv<16>) (sext_ln1118_2879_fu_3613525_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3555_fu_3964_p2() {
    mul_ln1118_3555_fu_3964_p2 = (!mul_ln1118_3555_fu_3964_p0.read().is_01() || !ap_const_lv24_51.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3555_fu_3964_p0.read()) * sc_biguint<24>(ap_const_lv24_51);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3556_fu_4344_p0() {
    mul_ln1118_3556_fu_4344_p0 =  (sc_lv<16>) (sext_ln1118_2890_fu_3613816_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3556_fu_4344_p2() {
    mul_ln1118_3556_fu_4344_p2 = (!mul_ln1118_3556_fu_4344_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3556_fu_4344_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3557_fu_3945_p0() {
    mul_ln1118_3557_fu_3945_p0 =  (sc_lv<16>) (sext_ln1118_2889_fu_3613809_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3557_fu_3945_p2() {
    mul_ln1118_3557_fu_3945_p2 = (!mul_ln1118_3557_fu_3945_p0.read().is_01() || !ap_const_lv24_FFFF49.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3557_fu_3945_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF49);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3558_fu_3546_p0() {
    mul_ln1118_3558_fu_3546_p0 =  (sc_lv<16>) (sext_ln1118_2889_fu_3613809_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3558_fu_3546_p2() {
    mul_ln1118_3558_fu_3546_p2 = (!mul_ln1118_3558_fu_3546_p0.read().is_01() || !ap_const_lv24_FFFF6E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3558_fu_3546_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3559_fu_3978_p0() {
    mul_ln1118_3559_fu_3978_p0 = tmp_V_346_reg_3624499.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3559_fu_3978_p2() {
    mul_ln1118_3559_fu_3978_p2 = (!mul_ln1118_3559_fu_3978_p0.read().is_01() || !ap_const_lv22_17.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3559_fu_3978_p0.read()) * sc_biguint<22>(ap_const_lv22_17);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3560_fu_3579_p0() {
    mul_ln1118_3560_fu_3579_p0 =  (sc_lv<16>) (sext_ln1118_2890_fu_3613816_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3560_fu_3579_p2() {
    mul_ln1118_3560_fu_3579_p2 = (!mul_ln1118_3560_fu_3579_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3560_fu_3579_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3561_fu_4037_p0() {
    mul_ln1118_3561_fu_4037_p0 =  (sc_lv<16>) (sext_ln1118_2889_fu_3613809_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3561_fu_4037_p2() {
    mul_ln1118_3561_fu_4037_p2 = (!mul_ln1118_3561_fu_4037_p0.read().is_01() || !ap_const_lv24_65.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3561_fu_4037_p0.read()) * sc_biguint<24>(ap_const_lv24_65);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3562_fu_3690_p0() {
    mul_ln1118_3562_fu_3690_p0 =  (sc_lv<16>) (sext_ln1118_2889_fu_3613809_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3562_fu_3690_p2() {
    mul_ln1118_3562_fu_3690_p2 = (!mul_ln1118_3562_fu_3690_p0.read().is_01() || !ap_const_lv24_76.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3562_fu_3690_p0.read()) * sc_biguint<24>(ap_const_lv24_76);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3563_fu_3629_p0() {
    mul_ln1118_3563_fu_3629_p0 =  (sc_lv<16>) (sext_ln1118_2890_fu_3613816_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3563_fu_3629_p2() {
    mul_ln1118_3563_fu_3629_p2 = (!mul_ln1118_3563_fu_3629_p0.read().is_01() || !ap_const_lv23_31.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3563_fu_3629_p0.read()) * sc_biguint<23>(ap_const_lv23_31);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3564_fu_3630_p0() {
    mul_ln1118_3564_fu_3630_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3564_fu_3630_p2() {
    mul_ln1118_3564_fu_3630_p2 = (!mul_ln1118_3564_fu_3630_p0.read().is_01() || !ap_const_lv24_FFFF6C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3564_fu_3630_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF6C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3565_fu_3451_p0() {
    mul_ln1118_3565_fu_3451_p0 =  (sc_lv<16>) (sext_ln1118_2902_fu_3614138_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3565_fu_3451_p2() {
    mul_ln1118_3565_fu_3451_p2 = (!mul_ln1118_3565_fu_3451_p0.read().is_01() || !ap_const_lv23_27.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3565_fu_3451_p0.read()) * sc_biguint<23>(ap_const_lv23_27);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3566_fu_3632_p0() {
    mul_ln1118_3566_fu_3632_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3566_fu_3632_p2() {
    mul_ln1118_3566_fu_3632_p2 = (!mul_ln1118_3566_fu_3632_p0.read().is_01() || !ap_const_lv24_FFFF71.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3566_fu_3632_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF71);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3567_fu_3705_p0() {
    mul_ln1118_3567_fu_3705_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3567_fu_3705_p2() {
    mul_ln1118_3567_fu_3705_p2 = (!mul_ln1118_3567_fu_3705_p0.read().is_01() || !ap_const_lv24_54.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3567_fu_3705_p0.read()) * sc_biguint<24>(ap_const_lv24_54);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3568_fu_3742_p0() {
    mul_ln1118_3568_fu_3742_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3568_fu_3742_p2() {
    mul_ln1118_3568_fu_3742_p2 = (!mul_ln1118_3568_fu_3742_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3568_fu_3742_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3569_fu_3743_p0() {
    mul_ln1118_3569_fu_3743_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3569_fu_3743_p2() {
    mul_ln1118_3569_fu_3743_p2 = (!mul_ln1118_3569_fu_3743_p0.read().is_01() || !ap_const_lv24_4B.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3569_fu_3743_p0.read()) * sc_biguint<24>(ap_const_lv24_4B);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3570_fu_3636_p0() {
    mul_ln1118_3570_fu_3636_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3570_fu_3636_p2() {
    mul_ln1118_3570_fu_3636_p2 = (!mul_ln1118_3570_fu_3636_p0.read().is_01() || !ap_const_lv24_FFFF8E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3570_fu_3636_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3571_fu_3673_p0() {
    mul_ln1118_3571_fu_3673_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3571_fu_3673_p2() {
    mul_ln1118_3571_fu_3673_p2 = (!mul_ln1118_3571_fu_3673_p0.read().is_01() || !ap_const_lv24_FFFFBA.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3571_fu_3673_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFBA);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3572_fu_3710_p0() {
    mul_ln1118_3572_fu_3710_p0 = tmp_V_347_reg_3624512.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3572_fu_3710_p2() {
    mul_ln1118_3572_fu_3710_p2 = (!mul_ln1118_3572_fu_3710_p0.read().is_01() || !ap_const_lv22_16.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3572_fu_3710_p0.read()) * sc_biguint<22>(ap_const_lv22_16);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3573_fu_3711_p0() {
    mul_ln1118_3573_fu_3711_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3573_fu_3711_p2() {
    mul_ln1118_3573_fu_3711_p2 = (!mul_ln1118_3573_fu_3711_p0.read().is_01() || !ap_const_lv24_FFFFAE.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3573_fu_3711_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFAE);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3574_fu_3712_p0() {
    mul_ln1118_3574_fu_3712_p0 =  (sc_lv<16>) (sext_ln1118_2902_fu_3614138_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3574_fu_3712_p2() {
    mul_ln1118_3574_fu_3712_p2 = (!mul_ln1118_3574_fu_3712_p0.read().is_01() || !ap_const_lv23_7FFFD5.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3574_fu_3712_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3575_fu_3569_p0() {
    mul_ln1118_3575_fu_3569_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3575_fu_3569_p2() {
    mul_ln1118_3575_fu_3569_p2 = (!mul_ln1118_3575_fu_3569_p0.read().is_01() || !ap_const_lv24_FFFF48.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3575_fu_3569_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF48);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3576_fu_3714_p0() {
    mul_ln1118_3576_fu_3714_p0 =  (sc_lv<16>) (sext_ln1118_2901_fu_3614125_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3576_fu_3714_p2() {
    mul_ln1118_3576_fu_3714_p2 = (!mul_ln1118_3576_fu_3714_p0.read().is_01() || !ap_const_lv24_FFFF59.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3576_fu_3714_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF59);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3577_fu_3643_p0() {
    mul_ln1118_3577_fu_3643_p0 =  (sc_lv<16>) (sext_ln1118_2907_fu_3614362_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3577_fu_3643_p2() {
    mul_ln1118_3577_fu_3643_p2 = (!mul_ln1118_3577_fu_3643_p0.read().is_01() || !ap_const_lv24_FFFF83.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3577_fu_3643_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF83);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3578_fu_3680_p0() {
    mul_ln1118_3578_fu_3680_p0 =  (sc_lv<16>) (sext_ln1118_2907_fu_3614362_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3578_fu_3680_p2() {
    mul_ln1118_3578_fu_3680_p2 = (!mul_ln1118_3578_fu_3680_p0.read().is_01() || !ap_const_lv24_FFFFB1.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3578_fu_3680_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB1);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3579_fu_3717_p0() {
    mul_ln1118_3579_fu_3717_p0 =  (sc_lv<16>) (sext_ln1118_2907_fu_3614362_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3579_fu_3717_p2() {
    mul_ln1118_3579_fu_3717_p2 = (!mul_ln1118_3579_fu_3717_p0.read().is_01() || !ap_const_lv24_FFFFB5.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3579_fu_3717_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB5);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3580_fu_3682_p0() {
    mul_ln1118_3580_fu_3682_p0 =  (sc_lv<16>) (sext_ln1118_2911_fu_3614380_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3580_fu_3682_p2() {
    mul_ln1118_3580_fu_3682_p2 = (!mul_ln1118_3580_fu_3682_p0.read().is_01() || !ap_const_lv22_3FFFE9.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3580_fu_3682_p0.read()) * sc_bigint<22>(ap_const_lv22_3FFFE9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3581_fu_3719_p0() {
    mul_ln1118_3581_fu_3719_p0 =  (sc_lv<16>) (sext_ln1118_2907_fu_3614362_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3581_fu_3719_p2() {
    mul_ln1118_3581_fu_3719_p2 = (!mul_ln1118_3581_fu_3719_p0.read().is_01() || !ap_const_lv24_45.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3581_fu_3719_p0.read()) * sc_biguint<24>(ap_const_lv24_45);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3582_fu_3684_p0() {
    mul_ln1118_3582_fu_3684_p0 =  (sc_lv<16>) (sext_ln1118_2907_fu_3614362_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3582_fu_3684_p2() {
    mul_ln1118_3582_fu_3684_p2 = (!mul_ln1118_3582_fu_3684_p0.read().is_01() || !ap_const_lv24_FFFFB4.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3582_fu_3684_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFB4);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3583_fu_3649_p0() {
    mul_ln1118_3583_fu_3649_p0 =  (sc_lv<16>) (sext_ln1118_2907_fu_3614362_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3583_fu_3649_p2() {
    mul_ln1118_3583_fu_3649_p2 = (!mul_ln1118_3583_fu_3649_p0.read().is_01() || !ap_const_lv24_FFFFA3.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3583_fu_3649_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA3);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3584_fu_3722_p0() {
    mul_ln1118_3584_fu_3722_p0 =  (sc_lv<16>) (sext_ln1118_2922_fu_3614705_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3584_fu_3722_p2() {
    mul_ln1118_3584_fu_3722_p2 = (!mul_ln1118_3584_fu_3722_p0.read().is_01() || !ap_const_lv24_FFFF9E.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3584_fu_3722_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9E);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3585_fu_3723_p0() {
    mul_ln1118_3585_fu_3723_p0 =  (sc_lv<16>) (sext_ln1118_2921_fu_3614699_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3585_fu_3723_p2() {
    mul_ln1118_3585_fu_3723_p2 = (!mul_ln1118_3585_fu_3723_p0.read().is_01() || !ap_const_lv23_7FFFC7.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3585_fu_3723_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC7);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3586_fu_3652_p0() {
    mul_ln1118_3586_fu_3652_p0 =  (sc_lv<16>) (sext_ln1118_2922_fu_3614705_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3586_fu_3652_p2() {
    mul_ln1118_3586_fu_3652_p2 = (!mul_ln1118_3586_fu_3652_p0.read().is_01() || !ap_const_lv24_FFFFA2.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3586_fu_3652_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFFA2);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3587_fu_3502_p0() {
    mul_ln1118_3587_fu_3502_p0 =  (sc_lv<16>) (sext_ln1118_2922_fu_3614705_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3587_fu_3502_p2() {
    mul_ln1118_3587_fu_3502_p2 = (!mul_ln1118_3587_fu_3502_p0.read().is_01() || !ap_const_lv24_94.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3587_fu_3502_p0.read()) * sc_biguint<24>(ap_const_lv24_94);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3588_fu_3981_p0() {
    mul_ln1118_3588_fu_3981_p0 =  (sc_lv<16>) (sext_ln1118_2922_fu_3614705_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3588_fu_3981_p2() {
    mul_ln1118_3588_fu_3981_p2 = (!mul_ln1118_3588_fu_3981_p0.read().is_01() || !ap_const_lv24_FFFF74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3588_fu_3981_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF74);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3589_fu_3608_p0() {
    mul_ln1118_3589_fu_3608_p0 =  (sc_lv<16>) (sext_ln1118_2922_fu_3614705_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3589_fu_3608_p2() {
    mul_ln1118_3589_fu_3608_p2 = (!mul_ln1118_3589_fu_3608_p0.read().is_01() || !ap_const_lv24_62.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3589_fu_3608_p0.read()) * sc_biguint<24>(ap_const_lv24_62);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3590_fu_4014_p0() {
    mul_ln1118_3590_fu_4014_p0 =  (sc_lv<16>) (sext_ln1118_2921_fu_3614699_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3590_fu_4014_p2() {
    mul_ln1118_3590_fu_4014_p2 = (!mul_ln1118_3590_fu_4014_p0.read().is_01() || !ap_const_lv23_7FFFC9.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3590_fu_4014_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFC9);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3591_fu_3641_p0() {
    mul_ln1118_3591_fu_3641_p0 =  (sc_lv<16>) (sext_ln1118_2921_fu_3614699_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3591_fu_3641_p2() {
    mul_ln1118_3591_fu_3641_p2 = (!mul_ln1118_3591_fu_3641_p0.read().is_01() || !ap_const_lv23_7FFFCD.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3591_fu_3641_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFCD);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3592_fu_4047_p0() {
    mul_ln1118_3592_fu_4047_p0 =  (sc_lv<16>) (sext_ln1118_2930_fu_3614997_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3592_fu_4047_p2() {
    mul_ln1118_3592_fu_4047_p2 = (!mul_ln1118_3592_fu_4047_p0.read().is_01() || !ap_const_lv24_FFFEAF.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3592_fu_4047_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFEAF);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3593_fu_3674_p0() {
    mul_ln1118_3593_fu_3674_p0 =  (sc_lv<16>) (sext_ln1118_2930_fu_3614997_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3593_fu_3674_p2() {
    mul_ln1118_3593_fu_3674_p2 = (!mul_ln1118_3593_fu_3674_p0.read().is_01() || !ap_const_lv24_FFFF67.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3593_fu_3674_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF67);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3594_fu_3732_p0() {
    mul_ln1118_3594_fu_3732_p0 =  (sc_lv<16>) (sext_ln1118_2931_fu_3615009_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3594_fu_3732_p2() {
    mul_ln1118_3594_fu_3732_p2 = (!mul_ln1118_3594_fu_3732_p0.read().is_01() || !ap_const_lv22_19.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3594_fu_3732_p0.read()) * sc_biguint<22>(ap_const_lv22_19);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3595_fu_3780_p0() {
    mul_ln1118_3595_fu_3780_p0 =  (sc_lv<16>) (sext_ln1118_2930_fu_3614997_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3595_fu_3780_p2() {
    mul_ln1118_3595_fu_3780_p2 = (!mul_ln1118_3595_fu_3780_p0.read().is_01() || !ap_const_lv24_57.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3595_fu_3780_p0.read()) * sc_biguint<24>(ap_const_lv24_57);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3596_fu_4113_p0() {
    mul_ln1118_3596_fu_4113_p0 =  (sc_lv<16>) (sext_ln1118_2930_fu_3614997_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3596_fu_4113_p2() {
    mul_ln1118_3596_fu_4113_p2 = (!mul_ln1118_3596_fu_4113_p0.read().is_01() || !ap_const_lv24_FFFF8F.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3596_fu_4113_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF8F);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3597_fu_3740_p0() {
    mul_ln1118_3597_fu_3740_p0 =  (sc_lv<16>) (sext_ln1118_2931_fu_3615009_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3597_fu_3740_p2() {
    mul_ln1118_3597_fu_3740_p2 = (!mul_ln1118_3597_fu_3740_p0.read().is_01() || !ap_const_lv22_15.is_01())? sc_lv<22>(): sc_bigint<16>(mul_ln1118_3597_fu_3740_p0.read()) * sc_biguint<22>(ap_const_lv22_15);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3598_fu_3440_p0() {
    mul_ln1118_3598_fu_3440_p0 = tmp_V_350_reg_3624552.read();
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3598_fu_3440_p2() {
    mul_ln1118_3598_fu_3440_p2 = (!mul_ln1118_3598_fu_3440_p0.read().is_01() || !ap_const_lv23_7FFFD2.is_01())? sc_lv<23>(): sc_bigint<16>(mul_ln1118_3598_fu_3440_p0.read()) * sc_bigint<23>(ap_const_lv23_7FFFD2);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3599_fu_4552_p0() {
    mul_ln1118_3599_fu_4552_p0 =  (sc_lv<16>) (sext_ln1118_2930_fu_3614997_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3599_fu_4552_p2() {
    mul_ln1118_3599_fu_4552_p2 = (!mul_ln1118_3599_fu_4552_p0.read().is_01() || !ap_const_lv24_4D.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3599_fu_4552_p0.read()) * sc_biguint<24>(ap_const_lv24_4D);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3600_fu_4252_p0() {
    mul_ln1118_3600_fu_4252_p0 =  (sc_lv<16>) (sext_ln1118_2930_fu_3614997_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3600_fu_4252_p2() {
    mul_ln1118_3600_fu_4252_p2 = (!mul_ln1118_3600_fu_4252_p0.read().is_01() || !ap_const_lv24_58.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3600_fu_4252_p0.read()) * sc_biguint<24>(ap_const_lv24_58);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3601_fu_3879_p0() {
    mul_ln1118_3601_fu_3879_p0 =  (sc_lv<16>) (sext_ln1118_2930_fu_3614997_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3601_fu_3879_p2() {
    mul_ln1118_3601_fu_3879_p2 = (!mul_ln1118_3601_fu_3879_p0.read().is_01() || !ap_const_lv24_FFFF91.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3601_fu_3879_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF91);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3602_fu_3433_p0() {
    mul_ln1118_3602_fu_3433_p0 =  (sc_lv<16>) (sext_ln1118_2930_fu_3614997_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3602_fu_3433_p2() {
    mul_ln1118_3602_fu_3433_p2 = (!mul_ln1118_3602_fu_3433_p0.read().is_01() || !ap_const_lv24_FFFF9C.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3602_fu_3433_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9C);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3603_fu_3912_p0() {
    mul_ln1118_3603_fu_3912_p0 =  (sc_lv<16>) (sext_ln1118_2930_fu_3614997_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_3603_fu_3912_p2() {
    mul_ln1118_3603_fu_3912_p2 = (!mul_ln1118_3603_fu_3912_p0.read().is_01() || !ap_const_lv24_FFFF74.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_3603_fu_3912_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF74);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_fu_4474_p0() {
    mul_ln1118_fu_4474_p0 =  (sc_lv<16>) (sext_ln1118_fu_3595843_p1.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mul_ln1118_fu_4474_p2() {
    mul_ln1118_fu_4474_p2 = (!mul_ln1118_fu_4474_p0.read().is_01() || !ap_const_lv24_FFFF9A.is_01())? sc_lv<24>(): sc_bigint<16>(mul_ln1118_fu_4474_p0.read()) * sc_bigint<24>(ap_const_lv24_FFFF9A);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_0_V_fu_3595861_p4() {
    mult_0_V_fu_3595861_p4 = mul_ln1118_fu_4474_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1000_V_fu_3612624_p4() {
    mult_1000_V_fu_3612624_p4 = mul_ln1118_3507_fu_4294_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1002_V_fu_3618092_p1() {
    mult_1002_V_fu_3618092_p1 = esl_sext<10,9>(trunc_ln708_2577_reg_3627356.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1003_V_fu_3612681_p4() {
    mult_1003_V_fu_3612681_p4 = sub_ln1118_1358_fu_3612675_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1005_V_fu_3612691_p4() {
    mult_1005_V_fu_3612691_p4 = mul_ln1118_3510_fu_3954_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_100_V_fu_3597528_p4() {
    mult_100_V_fu_3597528_p4 = mul_ln1118_2893_fu_3860_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1014_V_fu_3612835_p4() {
    mult_1014_V_fu_3612835_p4 = mul_ln1118_3517_fu_4337_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1015_V_fu_3618104_p1() {
    mult_1015_V_fu_3618104_p1 = esl_sext<10,9>(trunc_ln708_2582_reg_3627396.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1016_V_fu_3612855_p4() {
    mult_1016_V_fu_3612855_p4 = mul_ln1118_3519_fu_4375_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1017_V_fu_3618107_p1() {
    mult_1017_V_fu_3618107_p1 = esl_sext<10,9>(trunc_ln708_2583_reg_3627401.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1019_V_fu_3612933_p4() {
    mult_1019_V_fu_3612933_p4 = add_ln1118_292_fu_3612927_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1020_V_fu_3618110_p1() {
    mult_1020_V_fu_3618110_p1 = esl_sext<10,9>(trunc_ln708_2585_reg_3627406.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1021_V_fu_3612970_p4() {
    mult_1021_V_fu_3612970_p4 = mul_ln1118_3521_fu_4341_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1022_V_fu_3618113_p1() {
    mult_1022_V_fu_3618113_p1 = esl_sext<10,9>(trunc_ln708_2586_reg_3627411.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1027_V_fu_3613110_p4() {
    mult_1027_V_fu_3613110_p4 = sub_ln1118_1364_fu_3613104_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1032_V_fu_3618116_p1() {
    mult_1032_V_fu_3618116_p1 = esl_sext<10,9>(trunc_ln708_2591_reg_3627436.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1033_V_fu_3618119_p1() {
    mult_1033_V_fu_3618119_p1 = esl_sext<10,9>(trunc_ln708_2592_reg_3627441.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1035_V_fu_3618122_p1() {
    mult_1035_V_fu_3618122_p1 = esl_sext<10,9>(trunc_ln708_2593_reg_3627451.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1036_V_fu_3613248_p4() {
    mult_1036_V_fu_3613248_p4 = mul_ln1118_3531_fu_4257_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1038_V_fu_3613261_p4() {
    mult_1038_V_fu_3613261_p4 = mul_ln1118_3532_fu_4352_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1039_V_fu_3618125_p1() {
    mult_1039_V_fu_3618125_p1 = esl_sext<10,9>(trunc_ln708_2595_reg_3627456.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1040_V_fu_3618128_p1() {
    mult_1040_V_fu_3618128_p1 = esl_sext<10,9>(trunc_ln708_2596_reg_3627461.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1043_V_fu_3618131_p1() {
    mult_1043_V_fu_3618131_p1 = esl_sext<10,9>(trunc_ln708_2597_reg_3627477.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1044_V_fu_3618134_p1() {
    mult_1044_V_fu_3618134_p1 = esl_sext<10,9>(trunc_ln708_2598_reg_3627482.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1046_V_fu_3613414_p4() {
    mult_1046_V_fu_3613414_p4 = mul_ln1118_3538_fu_3611_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_104_V_fu_3617360_p1() {
    mult_104_V_fu_3617360_p1 = esl_sext<10,9>(trunc_ln708_2187_reg_3624965.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1054_V_fu_3618137_p1() {
    mult_1054_V_fu_3618137_p1 = esl_sext<10,9>(trunc_ln708_2601_reg_3627512.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1056_V_fu_3613550_p4() {
    mult_1056_V_fu_3613550_p4 = mul_ln1118_3546_fu_4376_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1057_V_fu_3613560_p4() {
    mult_1057_V_fu_3613560_p4 = mul_ln1118_3547_fu_4003_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1058_V_fu_3613602_p4() {
    mult_1058_V_fu_3613602_p4 = sub_ln1118_1371_fu_3613596_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1059_V_fu_3618140_p1() {
    mult_1059_V_fu_3618140_p1 = esl_sext<10,9>(trunc_ln708_2602_reg_3627522.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_105_V_fu_3617363_p1() {
    mult_105_V_fu_3617363_p1 = esl_sext<10,9>(trunc_ln708_2188_reg_3624970.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1061_V_fu_3613632_p4() {
    mult_1061_V_fu_3613632_p4 = mul_ln1118_3550_fu_4442_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1067_V_fu_3618143_p1() {
    mult_1067_V_fu_3618143_p1 = esl_sext<10,9>(trunc_ln708_2607_reg_3627537.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1068_V_fu_3613769_p4() {
    mult_1068_V_fu_3613769_p4 = mul_ln1118_3554_fu_4216_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1071_V_fu_3613799_p4() {
    mult_1071_V_fu_3613799_p4 = mul_ln1118_3555_fu_3964_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1072_V_fu_3618146_p1() {
    mult_1072_V_fu_3618146_p1 = esl_sext<10,9>(trunc_ln708_2609_reg_3627547.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1073_V_fu_3618149_p1() {
    mult_1073_V_fu_3618149_p1 = esl_sext<10,9>(trunc_ln708_2610_reg_3627552.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1077_V_fu_3613941_p4() {
    mult_1077_V_fu_3613941_p4 = mul_ln1118_3558_fu_3546_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1081_V_fu_3618158_p1() {
    mult_1081_V_fu_3618158_p1 = esl_sext<10,9>(trunc_ln708_2614_reg_3627582.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1082_V_fu_3618161_p1() {
    mult_1082_V_fu_3618161_p1 = esl_sext<10,9>(trunc_ln708_2615_reg_3627587.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1083_V_fu_3614068_p1() {
    mult_1083_V_fu_3614068_p1 = esl_sext<10,9>(trunc_ln708_2616_fu_3614058_p4.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1084_V_fu_3614072_p4() {
    mult_1084_V_fu_3614072_p4 = mul_ln1118_3561_fu_4037_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1086_V_fu_3618164_p1() {
    mult_1086_V_fu_3618164_p1 = esl_sext<10,9>(trunc_ln708_2617_reg_3627597.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1087_V_fu_3618167_p1() {
    mult_1087_V_fu_3618167_p1 = esl_sext<10,9>(trunc_ln708_2618_reg_3627602.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1088_V_fu_3614143_p4() {
    mult_1088_V_fu_3614143_p4 = mul_ln1118_3564_fu_3630_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1089_V_fu_3618170_p1() {
    mult_1089_V_fu_3618170_p1 = esl_sext<10,9>(trunc_ln708_2619_reg_3627607.read());
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_108_V_fu_3597629_p4() {
    mult_108_V_fu_3597629_p4 = mul_ln1118_2900_fu_4152_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1090_V_fu_3614163_p4() {
    mult_1090_V_fu_3614163_p4 = mul_ln1118_3566_fu_3632_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1096_V_fu_3614282_p4() {
    mult_1096_V_fu_3614282_p4 = sub_ln1118_1382_fu_3614276_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_1097_V_fu_3614292_p4() {
    mult_1097_V_fu_3614292_p4 = mul_ln1118_3570_fu_3636_p2.read().range(23, 14);
}

void conv_2d_cl_array_array_ap_fixed_16u_config8_s::thread_mult_109_V_fu_3617366_p1() {
    mult_109_V_fu_3617366_p1 = esl_sext<10,9>(trunc_ln708_2190_reg_3624980.read());
}

}

