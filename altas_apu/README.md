# AAIGEP (Automatic Algorithm Inference in GEP)

**Paper Publication:**  
"Machine Learning Evaluation in the Global Event Processor FPGA for the ATLAS Trigger Upgrade," JINST 2024  
Authors: Zhixing Jiang, Ben Carlson, Allison Deiana, Jeff Eastlack, Scott Hauck, Shih-Chieh Hsu, Rohin Narayan, Santosh Parajuli, Dennis Yin, Bowen Zuo  
[Paper](https://jinst.sissa.it/jinst/author/docPage.jsp?docId=JINST_054P_0324&docPgType=work)

## Introduction
AAIGEP stands for Automatic Algorithm Inference in the Global Event Processor (GEP), where GEP is a critical, performance-driven component of the ATLAS experiment at the Large Hadron Collider (LHC). In this work, we introduce methods to automatically generate machine learning-based algorithms to integrate into the GEP framework. We utilize established machine learning to FPGA workflows, such as hls4ml and fwX, to significantly simplify the design process of these algorithms. Our findings highlight the potential of integrating machine learning into the GEP for high-energy physics applications, which can greatly enhance the efficiency of the trigger system, thereby allowing the ATLAS experiment to gather more data and achieve more scientific breakthroughs. The method can also be applied to other applications that require real-time processing of large volumes of data.

## News
- **2024-03:** Our paper has been accepted to JINST 2024.

## Repository Structure
The repository contains the following directories and their contents:

- **`altas_apu/`**  
  - **`APU_deployment_instruction/`**
    - P1_APU_SAMPLE
    - P2_DNN_APU
    - P3_AXI_ADAPTORS
    - P4_APU_SAMPLE_AXI
    - P5_APU_CNN_AXI
    - P6_APU_testing
- **`algorithm_models/`**
  - FWX_BDT_classification_model
  - FWX_BDT_regression_model
  - HLS4ML_B_tagging_model
  - HLS4ML_gluon_tagger_algo_model
- **`Documentation/`**
  - APU Guide.pdf
- **`hls4ml/`**
- **`fwX/`**

> **Note:** `APU_deployment_instruction` contains general approaches for deploying the model from fwX or HLS4ML to the APU of the GEP framework. `algorithm_models` contains models specifically demonstrated in the paper, stored in Verilog format and converted by HLS4ML or fwX. `Documentation` provides starting points for APU developers to understand the basic logics.

## Usage

### Prerequisites
- hls4ml
- Fwx
- Vivado 2020.1 or above ([Download Vivado](https://www.xilinx.com/products/design-tools/vivado.html))

### Recommended Installation
```bash
# Create the conda environment
conda create -n AAIGEP python=3.9
conda activate AAIGEP


# Install hls4ml and fwX
git clone git@github.com:fastmachinelearning/hls4ml.git
cd hls4ml
pip3 install -e .

git clone https://gitlab.com/PittHongGroup/fwX.git 
cd fwX
pip3 install -e .
```

### Generating and Running the Algorithm Verilog File
To generate the Verilog files of the algorithms, users can follow the tutorials provided by hls4ml and fwX:
- **hls4ml Tutorial:** [fastmachinelearning/hls4ml-tutorial](https://github.com/fastmachinelearning/hls4ml-tutorial): Tutorial notebooks for hls4ml.
- **fwX Tutorial:** [PittHongGroup / fwX v1.0.0 README.md](https://gitlab.com/PittHongGroup/fwX/-/blob/main/README.md)

The generated Verilog files will be located in:  
`(hls_project_directory)/myproject_prj/solution1/syn/Verilog`

Alternatively, we also provide the Verilog files of the algorithms demonstrated in the paper, which can be found in `./algorithm_models/`.

### Running the Verilog in Vivado
Follow these steps to simulate or synthesize the Verilog files using Vivado:

1. **Open Vivado:**
   - Start Vivado 2019.2 by either clicking on the Vivado icon on your desktop or searching for Vivado in your start menu.
2. **Create a New Project:**
   - In the Vivado welcome screen, click on "Create New Project".
   - Click "Next" on the initial New Project dialog.
3. **Project Name and Location:**
   - Enter a name for your project and select a location to save it. Ensure "Create project subdirectory" is checked.
   - Click "Next".
4. **Project Type:**
   - Choose "RTL Project". Ensure "Do not specify sources at this time" is unchecked if you want to add your source files now. Click "Next".
5. **Add Sources:**
   - Click on "Add Files" and navigate to the directory where your Verilog files are located (`./algorithm_models/`).
   - Select all the files you want to include (Verilog .v, .sv, and any data files like .dat if they are used in simulation or synthesis).
   - Click "OK", then "Next".
6. **Add Constraints (Optional):**
   - If you have any constraint files (.xdc), you can add them in this step by clicking "Add Files" under "Add Constraints". If not, just click "Next".
7. **Select the Target Part:**
   - You can specify the FPGA part you are targeting here. This could be based on your development board or specific requirements.
   - After selecting the FPGA part, click "Next".
8. **Project Summary:**
   - Review your project settings. Make sure all files and settings look correct.
   - Click "Finish" to create the project.
9. **Run Synthesis:**
   - Open the Project: Vivado will open the main project dashboard. In the "Flow Navigator" on the left, you should see your source files listed under "Sources".
   - Click on "Run Synthesis".
   - You can choose to run synthesis with default options or change settings by clicking "Settings" before running.
   - After adjusting settings, click "OK" to start the synthesis process.
10. **View Synthesis Report:**
    - Once synthesis is complete, you can view the reports and check for any warnings or errors.
    - In the "Flow Navigator", click on "Open Synthesized Design" to see the synthesized design or "Reports" to view detailed synthesis reports.

## Citation
If you use this code for your research, please cite our paper as follows:

```bibtex
@article{Jiang2024JINST,
  title={Machine learning evaluation in the Global Event Processor FPGA for the ATLAS trigger upgrade},
  author={Jiang, Zhixing and Carlson, Ben and Deiana, Allison and Eastlack, Jeff and Hauck, Scott and Hsu, Shih-Chieh and Narayan, Rohin and Parajuli, Santosh and Yin, Dennis and Zuo, Bowen},
  journal={Journal of Instrumentation},
  year={2024}
}
