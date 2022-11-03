//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "vc709.h"
#include "parameters.h"

void vc709(
    hls::stream<input_t> &conv2d_input,
    hls::stream<result_t> &layer13_out,
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS INTERFACE axis port=conv2d_input,layer13_out 
    #pragma HLS DATAFLOW 

    const_size_in_1 = N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1;
    const_size_out_1 = N_LAYER_12;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<conv2d_weight_t, 36>(w2, "w2.txt");
        nnet::load_weights_from_txt<conv2d_bias_t, 4>(b2, "b2.txt");
        nnet::load_weights_from_txt<conv2d_1_weight_t, 288>(w5, "w5.txt");
        nnet::load_weights_from_txt<conv2d_1_bias_t, 8>(b5, "b5.txt");
        nnet::load_weights_from_txt<conv2d_2_weight_t, 1152>(w8, "w8.txt");
        nnet::load_weights_from_txt<conv2d_2_bias_t, 16>(b8, "b8.txt");
        nnet::load_weights_from_txt<dense_weight_t, 4096>(w10, "w10.txt");
        nnet::load_weights_from_txt<dense_bias_t, 16>(b10, "b10.txt");
        nnet::load_weights_from_txt<dense_1_weight_t, 32>(w12, "w12.txt");
        nnet::load_weights_from_txt<dense_1_bias_t, 2>(b12, "b12.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    hls::stream<layer2_t> layer2_out("layer2_out");
    #pragma HLS STREAM variable=layer2_out depth=784
    nnet::conv_2d_cl<input_t, layer2_t, config2>(conv2d_input, layer2_out, w2, b2); // conv2d

    hls::stream<layer3_t> layer3_out("layer3_out");
    #pragma HLS STREAM variable=layer3_out depth=784
    nnet::relu<layer2_t, layer3_t, relu_config3>(layer2_out, layer3_out); // conv2d_relu

    hls::stream<layer4_t> layer4_out("layer4_out");
    #pragma HLS STREAM variable=layer4_out depth=196
    nnet::pooling2d_cl<layer3_t, layer4_t, config4>(layer3_out, layer4_out); // max_pooling2d

    hls::stream<layer5_t> layer5_out("layer5_out");
    #pragma HLS STREAM variable=layer5_out depth=144
    nnet::conv_2d_cl<layer4_t, layer5_t, config5>(layer4_out, layer5_out, w5, b5); // conv2d_1

    hls::stream<layer6_t> layer6_out("layer6_out");
    #pragma HLS STREAM variable=layer6_out depth=144
    nnet::relu<layer5_t, layer6_t, relu_config6>(layer5_out, layer6_out); // conv2d_1_relu

    hls::stream<layer7_t> layer7_out("layer7_out");
    #pragma HLS STREAM variable=layer7_out depth=36
    nnet::pooling2d_cl<layer6_t, layer7_t, config7>(layer6_out, layer7_out); // max_pooling2d_1

    hls::stream<layer8_t> layer8_out("layer8_out");
    #pragma HLS STREAM variable=layer8_out depth=16
    nnet::conv_2d_cl<layer7_t, layer8_t, config8>(layer7_out, layer8_out, w8, b8); // conv2d_2

    hls::stream<layer9_t> layer9_out("layer9_out");
    #pragma HLS STREAM variable=layer9_out depth=16
    nnet::relu<layer8_t, layer9_t, relu_config9>(layer8_out, layer9_out); // conv2d_2_relu

    hls::stream<layer10_t> layer10_out("layer10_out");
    #pragma HLS STREAM variable=layer10_out depth=1
    nnet::dense<layer9_t, layer10_t, config10>(layer9_out, layer10_out, w10, b10); // dense

    hls::stream<layer11_t> layer11_out("layer11_out");
    #pragma HLS STREAM variable=layer11_out depth=1
    nnet::relu<layer10_t, layer11_t, relu_config11>(layer10_out, layer11_out); // dense_relu

    hls::stream<layer12_t> layer12_out("layer12_out");
    #pragma HLS STREAM variable=layer12_out depth=1
    nnet::dense<layer11_t, layer12_t, config12>(layer11_out, layer12_out, w12, b12); // dense_1

    nnet::softmax<layer12_t, result_t, softmax_config13>(layer12_out, layer13_out); // dense_1_softmax

}
