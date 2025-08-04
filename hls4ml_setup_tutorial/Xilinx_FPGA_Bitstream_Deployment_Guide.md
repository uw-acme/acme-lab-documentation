# Xilinx FPGA Bitstream Deployment Guide
Nick Leung, 8/3/2025

**Please complete the [tutorial](/hls4ml_setup_tutorial/Toturial.md) on setting up an environment for hls4ml designs before starting this guide.**

This guide contains steps for generating a bitstream from a Vivado project and deploying it onto an FPGA. It is assumed that a SystemVerilog design is ready for simulation, and a top-level testbench exists in the Simulation Sources folder.

## 1. Simulate the Design
It's important to simulate the design before deploying it to an FPGA.

Click on "Run Simulation" in the Flow Navigator at the left side of the Vivado window.

A simulation waveform will pop up. If there are submodules, the Scope window displays them (brown circle below) and the corresponding signals appear in the Objects window (purple circle below). Add signals to the waveform by dragging and dropping them from the Objects window.

The waveform itself can pop out and expand with the buttons highlighed by the orange circle in the picture below.

![](/hls4ml_setup_tutorial/image/SimulationWindowCallouts.jpg)

The expanded waveform shows a more focused view compared to when it's docked with the Vivado window, see the screenshot below. The icon within the brown circle fits the entire simulation time to the window, the icon within the red circle skips to the beginning or end of the simulation time, and the icon within the purple circle finds the highlighted signal's previous/next transition.

![](/hls4ml_setup_tutorial/image/WaveformExpandedCallouts.jpg)

## 2. Obtain a Vivado License
Before generating a bitstream, Vivado needs a valid license to run the synthesis, implementation, and generate bitstream steps.

Go to the Help tab near the top of the Vivado window and click on "Manage License" to open the Vivado License Manager.

![](/hls4ml_setup_tutorial/image/VivadoManageLicense.jpg)

Then click on "View Host information". Take a screenshot of this information and send it to Professor Hauck. Let him know which operating system Vivado is running from. Take note of the 12-character Network Interface (NIC) ID.

The Vivado license will be a `.lic` file. Paste this file into `$HOME/.Xilinx`. Find where `$HOME` is by opening up a command line and typing `echo $HOME`.

Verify that the license loaded properly by going back to the Vivado License Manager and selecting "View License Status". The entire License Cyclic Redundancy Check (CRC) column should say "Okay."

## 3. Create a Script to change Ubuntu's MAC address
Ubuntu's MAC address often changes on startup, making it different from what the Vivado license expects. A script to change the MAC address ensures Vivado can run the synthesis steps:

1. In the command line, create the file using the following command: `nano script_name.sh`

2. Add the following lines to the script:
```
#! /usr/bin/bash
ip link set dev eth0 down
ip link set dev eth0 address xx:xx:xx:xx:xx:xx
ip link set dev eth0 up
echo "MAC address changed"
```
Note that `xx:xx:xx:xx:xx:xx` is the NIC ID noted from Section 2.

3. Save the file and grant it executable permissions with the command: `chmod +x script_name.sh` 

4. Type `sudo bash script_name.sh` into the command line to run the script. If Vivado complains about a license, try running this script before running the synthesis steps.

## 4. Install Vivado Lab Edition on Windows
Programming the board from a virtual machine is difficult. It's easier for Windows to connect to the FPGA than the virtual machine. The Vivado Lab Edition is a lighter version of Vivado that still comes with a Hardware Manager needed to program the FPGA.

Navigate to the [Vivado archive](https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/vivado-design-tools/archive.html) and download the lab editions version that matches what's in Ubuntu.

![](/hls4ml_setup_tutorial/image/VivadoLabEdition.png)

Similar to the hls4ml setup tutorial, proceed through the installation steps.

## 5. Generate a Bitstream
In the Vivado window, click on "Run Synthesis" and click "Ok" in the popup. Repeat for "Run Implementation" and "Generate Bitstream"
The bitstream is `name_of_top_level_module.bit`. It's usually located in `/Vivado_project_name/Vivado_project_name.runs/impl_x` (where `x` is a number).

## 6. Share the Bitstream File from Ubuntu to Windows
Open File Explorer in Windows. Type `\\wsl$` into the address bar and hit enter. This pulls up the virtual machine's file system.
Navigate to the bitstream file's location and copy it.
Paste the bitstream into a location somehwere in Windows (for example, the Downloads folder).

## 7. Program the FPGA
Open Vivado Lab Edition and click on "Open Hardware Manager."
Connect the FPGA to the computer with the USB cable.
Click on "Open Target" and then "Auto Connect."
When the FPGA appears in the Hardware window, right click it and select "Program Device."
Select the bitstream file and click "Program."

## Conclusion
This guide covered a process for simulating a SystemVerilog design in Vivado, generating a bitstream, and programming a Xilinx FPGA. It also covered one-time setup steps like obtaining a Vivado license and installing Vivado Lab Edition.