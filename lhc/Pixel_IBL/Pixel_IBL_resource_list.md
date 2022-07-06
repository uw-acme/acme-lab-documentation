# Pixel IBL DAQ Resources 
This section of the LHC repo consists of resources related to the Pixel/IBL DAQ
This is the system currently being used in ATLAS 
A quick introduction to ROD-BOC: https://people.ece.uw.edu/hauck/LargeHadronCollider/

Front end chips: FEI3(Pixel's 3 Layers)/FEI4(IBL Layer)
DAQ Chain (Readout System): ROD-BOC (hardware is the same for IBL & Pixel but firmware differs) 
Also note that there was an older Pixel ROD has now been upgraded to match with IBL ROD hardware, so some of the documents may have references to that

These will be upgraded to RD53 front end chips and another readout system(FELIX/YARR/RCE) in the future for HL-LHC
 

### Theses 
Very useful background information on Pixel/IBL
[Shaw-Pin "Bing" Chen 2014 - IBL ROD Firmware Development][1]
[Joe Mayer 2016 - Three Generations of FPGA DAQ Development][2]
[Nick Dreyer 2016 - Calibration Software][3]
(Info on TDAQ system- Calibration focused; Has useful comparisons between Pixel & IBL)

### CERN Repos (need CERN account and permissions) 
ATLAS Pixel DAQ   https://gitlab.cern.ch/atlas-pixel/daq/atlaspixeldaq
Pixel ROD FW      https://gitlab.cern.ch/atlas-pixel/daq/pixelrod_firmware


### SR1 Tutorials 
SR1 is a testing facility at CERN that can also be accessed remotely
[Refer to tutorials on how to set up, run the system, load firmware and more][4]

### IBL ROD Manuals 
[IBL_ROD  hardware manual][5]
[IBL ROD Developer manual - has good info on VHDL blocks][6]
[IBL ROD control_data_path][7]
[IBL ROD Communication Overview][8]

### Other IBL-ROD related documents 
[Supplementary materials such as presentations and layout infographics][9]

### Resources related to Histogrammer task (2021-2022) 
[Problem description, supplementary material on histogrammer][10]

### Resources related to Smart L1A task (summer 2022 - ) 
[Problem description and supplementary material on Smart L1A task][11]

### ATLAS DAQ Specific Git Tutorial 
[Git Tutorial by ATLAS Pixel][12]

[1]: ../thesese/BingThesis.pdf
[2]: ../thesese/Joe_Mayer_Thesis.pdf
[3]: ../thesese/NickDreyer_Thesis.pdf
[4]: ../Pixel_IBL/SR1_Tutorials/
[5]: ../Pixel_IBL/IBL_ROD_Manuals/IBL_ROD_revD_HW_manual.pdf
[6]: ../Pixel_IBL/IBL_ROD_Manuals/IBL_ROD_Developer_Manual.pdf
[7]: ../Pixel_IBL/IBL_ROD_Manuals/IBL_ROD_control_data_path.pdf
[8]: ../Pixel_IBL/IBL_ROD_Manuals/IBL_ROD_Communication_Overview.pdf
[9]: ../Pixel_IBL/IBL_ROD_other_info/
[10]: ../Pixel_IBL/Histogrammer_resources/
[11]: ../Pixel_IBL/Smart_L1A/
[12]: ../Pixel_IBL/ATLAS_DAQ_git_tutorial/git-tutorial.pdf






