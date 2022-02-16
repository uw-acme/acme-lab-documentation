# List and links of all LHC resources and documentations

## Repos

[HLS4ML_customML - Anatoliy Martynyuk][1]
[fastmachinelearning/hls4ml][2]
[fastmachinelearning/hls4ml-tutorial][3]

## Thesese

[All Professor Hauck Publications][4]

## HLS & ML

### Comprehensive ML Resources
[CS231n Convolutional Neural Networks for Visual Recognition][5]
[Neural Networks and Deep Learning][6]

### Short Primers on ML
["A General Neural Network Hardware Architecture on FPGA" - Yufeng Hao][7]
["Implementation of Data-optimized FPGA-based Accelerator for Convolutional Neural Network" - Mannhee Cho; Youngmin Kim][8]

### Extra ML Resources
["Using Xilinx FPGAs to implement neural networks and fuzzy systems" - JJ Blake][9]
["Accelerator Design with Effective Resource Utilization for Binary Convolutional Neural Networks on an FPGA" - Sunwoong Kim][10]
["The Implementation of a Power Efficient BCNN-Based Object Detection Acceleration on a Xilinx FPGA-SoC" - Heekyung Kim][11]

### HLS4ML
[HLS4ML Documentation Homepage][12]


## FPGA Docs

### Series 7 Family
["7 Series FPGAs Data Sheet: Overview" - Xilinix][13]
["7 Series FPGAs GTP Transceivers User Guide" - Xilinix][14]
["7 Series FPGAs SelectIO Resources User Guide" - Xilinix][15]
["7 Series FPGAs Clocking Resources User Guide"][16]

### Multiplication Optimization
["Convolutional Neural Network with INT4 Optimization on Xilinx Devices" - Xilinix][17]
["Deep Learning with INT8 Optimization on Xilinx Device" - Xilinix][18]

### VC709
[Product Page with Documentation][20]
["VC709 Evaluation Board for the Virtex-7 FPGA - User Guide"][21]

## Tutorials

### Vivado
["Vivado Tutorial" - Xilinix (22 pages)][22]
["Vivado Design Suite Tcl Command Reference Guide" - Xilinix][23]
["Vivado Design Suite User Guide Programming and Debugging" - Xilinix][24]

### Modelsim

**TODO: mention the need of HuskyVPN if using modelsim off campus**.<br>
[Modelsim Setup Tutorial][25]
[Modelsim Setup Tutorial Ubuntu][26]
### ILAs

[ILA Tutoria Project][27]
[Xilinx ILA (Integrated Logic Analyzer) - Lev Kurilenko - Slide Deck][28]
["Integrated Logic Analyzer - LogiCORE IP Product Guide"][29]

### Coding Style
["VHDL Coding Style" - Geoff Jones][32]

<!-- Links -->
[1]: https://gitlab.com/AnatoliyMartynyuk/hls4ml_customml 
[2]: https://github.com/fastmachinelearning/hls4ml
[3]: https://github.com/fastmachinelearning/hls4ml-tutorial
[4]: https://people.ece.uw.edu/hauck/publications.html
[5]: https://cs231n.github.io/
[6]: http://neuralnetworksanddeeplearning.com/
[7]: ./whitepapers/A_General_Neural_Network_Hardware_Architecture_on_FPGA.pdf <!-- https://arxiv.org/ftp/arxiv/papers/1711/1711.05860.pdf
[8]: ./whitepapers/Implementation_of_Data-optimized_FPGA-based_Accelerator_for_Convolutional_Neural_Network.pdf <!-- https://ieeexplore-ieee-org.offcampus.lib.washington.edu/document/9050993
[9]: ./whitepapers/Using_Xilinx_FPGAs_to_implement_neural_networks_and_fuzzy_systems.pdf <!-- https://ieeexplore-ieee-org.offcampus.lib.washington.edu/document/643114
[10]: ./whitepapers/Accelerator_Design_with_Effective_Resource_Utilization_for_Binary_Convolutional_Neural_Networks_on_an_FPGA.pdf <!-- https://ieeexplore-ieee-org.offcampus.lib.washington.edu/document/8457667
[11]: ./whitepapers/The_Implementation_of_a_Power_Efficient_BCNN-Based_Object_Detection_Acceleration_on_a_Xilinx_FPGA-SoC.pdf <!-- https://ieeexplore-ieee-org.offcampus.lib.washington.edu/document/8875471
[12]: https://fastmachinelearning.org/hls4ml/
[13]: ../common/devices/fpga_7series/7Series_Overview.pdf <!-- https://www.xilinx.com/support/documentation/data_sheets/ds180_7Series_Overview.pdf
[14]: ../common/devices/fpga_7series/7Series_GTP_Transceivers.pdf <!-- https://www.xilinx.com/support/documentation/user_guides/ug482_7Series_GTP_Transceivers.pdf
[15]: ../common/devices/fpga_7series/7Series_SelectIO.pdf <!-- https://www.xilinx.com/support/documentation/user_guides/ug471_7Series_SelectIO.pdf#:~:text=%20%20%20Title%20%20%207%20Series,%20%20Created%20Date%20%20%2020180508112840Z%20
[16]: ../common/devices/fpga_7series/7Series_Clocking.pdf <!-- https://www.xilinx.com/support/documentation/user_guides/ug472_7Series_Clocking.pdf
[17]: ./whitepapers/Convolutional_Neural_Network_with_INT4_Optimization_on_Xilinx_Devices.pdf <!-- https://www.xilinx.com/content/dam/xilinx/support/documentation/white_papers/wp521-4bit-optimization.pdf
[18]: ./whitepapers/Deep_Learning_with_INT8_Optimization_on_Xilinx_Devices.pdf <!-- https://www.xilinx.com/support/documentation/white_papers/wp486-deep-learning-int8.pdf
[19]: 
[20]: https://www.digikey.com/en/products/detail/xilinx-inc/DK-V7-VC709-G-J/3926515?utm_adgroup=Development%20Boards&utm_source=bing&utm_medium=cpc&utm_campaign=Dynamic%20Search_EN_RLSA&utm_term=products%20development%20boards%20kits%20programmers%20&utm_content=Development%20Boards&utm_id=bi_cmp-384476624_adg-1311717597280095_ad-81982399195114_dat-2333782149503794:aud-807631099:loc-190_dev-c_ext-_prd-&msclkid=085d4fe3940c105b8a152e10e17fc724
[21]: ../common/devices/fpga_7series/vc709/vc709-eval-board-v7.pdf <!-- https://www.xilinx.com/support/documentation/boards_and_kits/vc709/ug887-vc709-eval-board-v7-fpga.pdf 
[22]: ../common/tutorials/vivado/Vivado_Tutorial.pdf <!-- https://www.xilinx.com/support/documentation/university/Vivado-Teaching/HDL-Design/2015x/VHDL/docs-pdf/Vivado_Tutorial.pdf
[23]: ../common/tutorials/vivado/vivado-tcl-commands.pdf <!-- https://www.xilinx.com/support/documentation/sw_manuals/xilinx2019_2/ug835-vivado-tcl-commands.pdf
[24]: ../common/tutorials/vivado/vivado-programming-debugging.pdf <!-- https://www.xilinx.com/support/documentation/sw_manuals/xilinx2020_1/ug908-vivado-programming-debugging.pdf
[25]: ../common/tutorials/modelsim/modelsim_tutorial.pdf <!-- https://gitlab.com/scotthauck/largehadroncollider/-/tree/master/Documents/Tutorial/ModelSim
[26]: ../common/tutorials/modelsim/modelsim_tutorial_ubuntu.pdf <!-- https://gitlab.com/scotthauck/largehadroncollider/-/tree/master/Documents/Tutorial/ModelSim
[27]: https://gitlab.com/scotthauck/largehadroncollider/-/tree/master/Documents/Tutorial/ILA
[28]: ../common/tutorials/vivado/Xilinx_ILA_(Integrated_Logic_Analyzer)_Lev_Kurilenko.pdf <!-- https://gitlab.com/scotthauck/largehadroncollider/-/blob/master/Documents/Tutorial/ILA/Xilinx_ILA_Integrated_Logic_Analyzer_Lev_Kurilenko.pdf
[29]: ../common/tutorials/vivado/vivado-ila.pdf <!-- https://www.xilinx.com/support/documentation/ip_documentation/ila/v6_1/pg172-ila.pdf
[30]: ../common/VhdlCodingStyle.docx
