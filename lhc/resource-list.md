# List and links of all LHC resources and documentations

## Repos

[rd53b_hardware_emulator - Hauck - largehardroncollider][1]
[rd53b_emulator - Niharika - rd53b_emulator][2]
[rd53a_hardware_emulator_dev][3]
**TODO: Add Donovan's Decoder repo**

## Theses

[All Professor Hauck Publications][4]

### RD53A
["Development of an FPGA Emulator for the RD53A Test Chip" - Dustin Werran][5]
[FPGA Development of an Emulator of the RD53A Prototype Chip and its Integration with Various Readout Systems - Douglas Smith][6]

### RD53B
["Development of an FPGA Emulator for the RD53B Chip - Niharika Mittal"][7]
["Development of a High-Speed Hit Decoder for the RD53B Chip - Donavan Martin Erickson"][8]

### Aurora
["FPGA Development of an Emulator Framework and a High Speed I/O Core for the ITk Pixel Upgrade" - Lev Kurilenko][9]

### IBL ROD
["Three Generations of FPGA DAQ Development for the ATLAS Pixel Detector" - Joseph Mayer][32]
["An Introduction to ATLAS Pixel Detector DAQ and Calibration Software Based on a Year's Work at CERN for the Upgrade from 8 to 13 TeV" - Nick Dreyer][33]
["Readout Driver Firmware Development for the ATLAS Insertable B-Layer" - Shaw-Pin "Bing" Chen][34]
 
## RD53 Manuals and Docs

### RD53B
["The RD53B-ATLAS Pixel Readout Chip Manual"][10]
["The RD53B-CMS Pixel Readout Chip Manual"][11]

### Aurora
["Aurora 64B/66B Protocol Specification" - Xilinx][12]
["LogiCORE IP Aurora 64B/66B v7.1 User Guide" - Xilinx][13]

## Pixel IBL Docs
[Go to the Pixel IBL directory here][35]
[Pixel IBL Resource list][36]

## FPGA Docs

### Series 7 Family
["7 Series FPGAs Data Sheet: Overview" - Xilinx][14]
["7 Series FPGAs GTP Transceivers User Guide" - Xilinx][15]
["7 Series FPGAs SelectIO Resources User Guide" - Xilinx][16]
["7 Series FPGAs Clocking Resources User Guide"][17]


### KC705
[Product Page with Documentation][18]
["Kintex-7 FPGA  Base Targeted Reference Design - User Guide"][19]

### VC709
[Product Page with Documentation][20]
["VC709 Evaluation Board for the Virtex-7 FPGA - User Guide"][21]
["VC709 Basic Constraint File"][31]

## Tutorials

### Vivado
["Vivado Tutorial" - Xilinx (22 pages)][22]
["Vivado Design Suite Tcl Command Reference Guide" - Xilinx][23]
["Vivado Design Suite User Guide Programming and Debugging" - Xilinx][24]

### Modelsim

**TODO: mention the need of HuskyVPN if using modelsim off campus**.<br>
[Modelsim Setup Tutorial][25]
[Modelsim Setup Tutorial Ubuntu][26]
### ILAs

[ILA Tutorial Project][27]
[Xilinx ILA (Integrated Logic Analyzer) - Lev Kurilenko - Slide Deck][28]
["Integrated Logic Analyzer - LogiCORE IP Product Guide"][29]

### Coding Style
["VHDL Coding Style" - Geoff Jones][30]]
Another good resource for learning VHDL- Computer Architecture and Digital Design- Harris & Harris
(Textbook chapter has side by side comparison of VHDL and Verilog)

<!-- Links -->
[1]: https://gitlab.com/scotthauck/largehadroncollider
[2]: https://gitlab.com/nmittal/rd53b_emulator
[3]: https://gitlab.com/smithd57/rd53a_hardware_emulator_dev
[4]: https://people.ece.uw.edu/hauck/publications.html
[5]: ./thesese/DustinWerran_MS.pdf <!-- https://people.ece.uw.edu/hauck/publications/DustinWerran_MS.pdf
[6]: ./thesese/DouglasSmith_MS.pdf <!-- https://people.ece.uw.edu/hauck/publications/DouglasSmith_MS.pdf
[7]: ./thesese/NiharikaMittal_Thesis.pdf <!-- https://people.ece.uw.edu/hauck/publications/NiharikaMittal_Thesis.pdf
[8]: ./thesese/Erickson_Donavan_Thesis.pdf <!-- https://people.ece.uw.edu/hauck/publications/Erickson_Donavan_Thesis.pdf
[9]: ./thesese/lev_kurilenko_MS.pdf <!-- https://people.ece.uw.edu/hauck/publications/lev_kurilenko_MS.pdf
[10]: ./RD53_manuals/RD53B_ATLAS_Main.pdf <!-- https://gitlab.cern.ch/rd53/RD53B_Manual/-/jobs/18573689/artifacts/file/RD53B_ATLAS_Main.pdf
[11]: ./RD53_manuals/RD53B_CMS_Main.pdf <!-- https://gitlab.cern.ch/rd53/RD53B_Manual/-/jobs/18573689/artifacts/file/RD53B_CMS_Main.pdf
[12]: ./aurora/aurora_64b66b_protocol_spec_sp011.pdf <!-- https://www.xilinx.com/support/documentation/ip_documentation/aurora_64b66b_protocol_spec_sp011.pdf
[13]: ./aurora/aurora_64b66b.pdf <!-- https://www.xilinx.com/support/documentation/ip_documentation/aurora_64b66b/v7_1/ds815_aurora_64b66b.pdf
[14]: ../common/devices/fpga_7series/7Series_Overview.pdf <!-- https://www.xilinx.com/support/documentation/data_sheets/ds180_7Series_Overview.pdf
[15]: ../common/devices/fpga_7series/7Series_GTP_Transceivers.pdf <!-- https://www.xilinx.com/support/documentation/user_guides/ug482_7Series_GTP_Transceivers.pdf
[16]: ../common/devices/fpga_7series/7Series_SelectIO.pdf <!-- https://www.xilinx.com/support/documentation/user_guides/ug471_7Series_SelectIO.pdf#:~:text=%20%20%20Title%20%20%207%20Series,%20%20Created%20Date%20%20%2020180508112840Z%20
[17]: ../common/devices/fpga_7series/7Series_Clocking.pdf <!-- https://www.xilinx.com/support/documentation/user_guides/ug472_7Series_Clocking.pdf
[18]: https://www.digikey.com/en/products/detail/xilinx-inc/EK-K7-KC705-CES-G-J/2827556?utm_adgroup=Product%20Detail%20Pages&utm_source=bing&utm_medium=cpc&utm_campaign=Dynamic%20Search_EN&utm_term=%2Fproduct-detail%2F&utm_content=Product%20Detail%20Pages&utm_id=bi_cmp-302119348_adg-1300722292834901_ad-81295150384269_dat-2333094954664822:loc-190_dev-c_ext-_prd-&msclkid=7d5622d14d9b1664fb8a4322390c069d
[19]: ../common/devices/fpga_7series/kc705/K7_Base_TRD.pdf <!-- https://www.xilinx.com/support/documentation/boards_and_kits/ug882_K7_Base_TRD.pdf
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
[31]: ../common/devices/fpga_7series/vc709/vc709_basic_constraints_file.xdc
[32]:  ./thesese/Joe_Mayer_Thesis.pdf
[33]:  ./thesese/NickDreyer_Thesis.pdf
[34]:  ./thesese/BingThesis.pdf
[35]:  ./Pixel_IBL
[36]: ./Pixel_IBL/Pixel_IBL_resource_list.md


