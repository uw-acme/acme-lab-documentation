## Welcome to the LHC Resource List

Please refer to [resource-list.md][1] for a complete set of the resources relevant to the LHC group.

### For New Inititates:

To get up to speed with the purpose and objectives of the lab, we suggest you begin with the following:

#### Getting Started with RD53:
[Douglas Smiths RD53A Thesis][2] & [Niharika Mittal RD53B Thesis][3] are a great place to start because they thoroughly describe the purpose and deliverables of the lab. The introductions define where our deliverables are going and you get an early abstract look at the RD53A/B through their block diagrams. Don't worry about understanding everything on a first read through.

#### Getting Started With Vivado:
There aren't a whole lot of good introductions to Vivado but we work with what we've got. [This tutorial][4] takes you through project creation through bistream generation albeit with the wrong board. It is however worth reading through so that you know some Vivado basics. Once you can *make a project* that blinks an LED, *simulate it* and put the *bitstream* on our board you're good. Use the board "*VC709*" and [this constraint file][5] to create the project and generate the bitstream.

#### Using ModelSim:
The modelsim offered for free is compatible only with Altera devices. Since we use Xilinx IPs we need a license and different ModelSim download. Luckily this is straightforward using either the [windows][6] or [linux][7] tutorials.


[1]: ./resource-list.md
[2]: ./thesese/DouglasSmith_MS.pdf 
[3]: ./thesese/NiharikaMittal_Thesis.pdf
[4]: ../common/tutorials/vivado/Vivado_Tutorial.pdf
[5]: ../common/devices/fpga_7series/vc709/vc709_basic_constraints_file.xdc
[6]: ../common/tutorials/modelsim/modelsim_tutorial.pdf
[7]: ../common/tutorials/modelsim/modelsim_tutorial_ubuntu.pdf