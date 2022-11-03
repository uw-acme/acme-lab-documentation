#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"

//hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 30
#define N_INPUT_2_1 30
#define N_INPUT_3_1 1
#define OUT_HEIGHT_2 28
#define OUT_WIDTH_2 28
#define N_FILT_2 4
#define OUT_HEIGHT_4 14
#define OUT_WIDTH_4 14
#define N_FILT_4 4
#define OUT_HEIGHT_5 12
#define OUT_WIDTH_5 12
#define N_FILT_5 8
#define OUT_HEIGHT_7 6
#define OUT_WIDTH_7 6
#define N_FILT_7 8
#define OUT_HEIGHT_8 4
#define OUT_WIDTH_8 4
#define N_FILT_8 16
#define N_LAYER_10 16
#define N_LAYER_12 2

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<10,4> model_default_t;
typedef nnet::array<ap_fixed<16,6>, 1*1> input_t;
typedef nnet::array<ap_fixed<16,6>, 4*1> layer2_t;
typedef ap_fixed<16,6> conv2d_weight_t;
typedef ap_fixed<16,6> conv2d_bias_t;
typedef ap_fixed<16,6> conv2d_relu_default_t;
typedef nnet::array<ap_fixed<16,6>, 4*1> layer3_t;
typedef ap_fixed<16,6> max_pooling2d_default_t;
typedef nnet::array<ap_fixed<16,6>, 4*1> layer4_t;
typedef nnet::array<ap_fixed<16,6>, 8*1> layer5_t;
typedef ap_fixed<16,6> conv2d_1_weight_t;
typedef ap_fixed<16,6> conv2d_1_bias_t;
typedef ap_fixed<16,6> conv2d_1_relu_default_t;
typedef nnet::array<ap_fixed<16,6>, 8*1> layer6_t;
typedef ap_fixed<16,6> max_pooling2d_1_default_t;
typedef nnet::array<ap_fixed<16,6>, 8*1> layer7_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer8_t;
typedef ap_fixed<16,6> conv2d_2_weight_t;
typedef ap_fixed<16,6> conv2d_2_bias_t;
typedef ap_fixed<16,6> conv2d_2_relu_default_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer9_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer10_t;
typedef ap_fixed<16,6> dense_weight_t;
typedef ap_fixed<16,6> dense_bias_t;
typedef ap_fixed<16,6> dense_relu_default_t;
typedef nnet::array<ap_fixed<16,6>, 16*1> layer11_t;
typedef nnet::array<ap_fixed<16,6>, 2*1> layer12_t;
typedef ap_fixed<16,6> dense_1_weight_t;
typedef ap_fixed<16,6> dense_1_bias_t;
typedef ap_fixed<16,6> dense_1_softmax_default_t;
typedef nnet::array<ap_fixed<16,6>, 2*1> result_t;

#endif
