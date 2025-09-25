# HLS4ML Environment Set Up Tutorial
## _The tutorial will be seperated into 4 parts_

First of all, welcome to the team. 
This tutorial will guide you on setting up the environments you need to run HLS4ML on your own computer.

 _✨I hope your setup journey goes well and smoothly ✨_

## System requirement
HLS4ML runs best on Linux, so if you are already using Linux or have Linux virtual machine on your computer, skip the sections on setting up WSL and the GUI. If you are using Windows as your OS, we highly recommend using a feature called Windows Subsystem for Linux, aka WSL to run Linux. This tutorial focuses on using WSL but the parts on setting up the environment can also be used on virtual machines or in a Nautilus server (see Nautilus for details). This tutorial doesn't cover setting up on MacOS, if you are using MacOS, please contact the Professor or Elham for help.

Make sure your personal device has at least 80 - 100 GB free storage to install all the neccesary components

## Step 1: Setup the WSL(Windows Subsystem for Linux) for Window machine

####1.
In the taskbar, click the tool and type in “Turn Windows Feature On or Off”,
![](./image/part101.png)

you may also find it from  Control Panel -> Programs -> Turn Windows features on or off
![](./image/part102.png)
![](./image/part103.jpeg)

Then select the Windows Subsystem for Linux and click OK.

![](./image/part104.jpeg)

You may have some error codes, generally this is because you need to update your computer
![](./image/part105.jpeg)

####2. 
Now that WSL is enabled, it is time to get a Linux distro for you. We recommend using Linux 18.04 LTS (Long term support version) as your Linux version. There are two paths to installation. The easiest is to download it from the Microsoft Store by searching Linux 18.04 LTS. 

If you don’t want to install it in your C disk, you may download it from this [link] (https://drive.google.com/file/d/1yBP0fodQXuzFd9DRWxg6J7Xh2v59tvY6/view?usp=sharing)

Then click the ubuntu1804.exe or open it from Microsoft Store or Quick Start Menu if you downloaded it from there. A terminal will pop up and Linux will start its initial set up, it will take a few minutes. Then it will ask you to set a username and password as its administrator
![](./image/new_1.png)

Set your username starting with a lowercase letter and with no spaces

Now, we need to make sure that the WSL you just installed is version 2, this is to prepare for installing Vivado later. 

Open the Windows Powershell and type in 
```
wsl -l -v
```
then you can check what version your wsl is.
![](./image/new_2.png)

If it is not version 2, here is what you need to do.

a. [Visit here] (https://aka.ms/wsl2), under install tag, go to Manual install steps for older version, you can find a download link called WSL2 Linux kernel update package for x64 machines, download it and install.

b. In windows powershell, type in 
```
wsl --set-version Ubuntu-18.04 2
```
This command will upgrade your wsl into version 2, it might take few minutes, wait till the terminal says conversion complete.

c. In windows powershell, type in 
```
wsl –set-default-version 2
```
This command will set the default version into 2 in case you want to install more WSL


Now back to the Linux terminal and type in:

```
sudo apt update 
sudo apt upgrade
```
This is for upgrading your Linux. (sudo means super user do, Linux will ask your password to processed the process, and when you type in your password, it will not appear on the terminal, don’t worry, it is designed to do so, just type in your password and press ENTER) After this step, your Linux OS is all set.

## Step 2: Steup Miniconda and hls4ml into your Linux system

As an engineer, you may be doing multiple projects at the same time, each project will use different environments and package versions. To seperate versions of tools between projects, Conda, a powerful environment creation tool, can be used

In your windows browser, access [Conda.io] (https://docs.conda.io/en/latest/miniconda.html#installing)

Under Linux installers, 
right click Python3.9 version and copy the link address

![](./image/part201.jpeg)
Then in your Linux terminal, type wget, then paste the link to terminal (In terminal, right click is paste), so the entire command should looks like:

```
wget https://repo.anaconda.com/miniconda/Miniconda3-py39_4.11.0-Linux-x86_64.sh
```

This command will help you download Miniconda3 installation program to your Linux. Once it is finished downloading, type the following code:

```
bash Miniconda3-py39_4.11.0-Linux-x86_64.sh
```

Or you can just type
```
bash Mini
```
then press Tab, it will auto fill the rest of the command. Then follow the guidance and finish installation. Once you finished installation, terminal will ask to whether to initialize conda or not, type yes and press ENTER.

Now we need to edit one file to make sure your Linux recognizes the conda you just installed. You will use VIM, a powerful text editor, to edit bash_profile.

Here are some useful VIM commands that you'll need to use

```
vim <Filename>   ---to open the file we want
:wq              ---save edited file
:q!              ---quit the file without saving
i                ---change the current mode into insert mode
```

Once you enter VIM, you need to press ESC before entering each of these commands


- Type
 
```
vim ~/.bash_profile
```

- Press ENTER.
 
- Press i to change the vim into insert mode.
- Copy and paste the following things into the terminal. Change the \<YOUR USERNAME\> part into your username that you set in the step 1.

```
if [ -f ~/.bashrc ]; then . ~/.bashrc; fi

export PATH="/home/<YOUR USERNAME>/miniconda3/bin:$PATH"

alias jupyter-notebook="/home/<YOUR USERNAME>/miniconda3/envs/hls4ml-tutorial/bin/jupyter-notebook --no-browser"
```

- Press ESC and type 
```
:wq
```

- Once you exit vim, run the following code in your terminal:

```
 source ~/.bash_profile
 source ~/.bashrc
```

After making the configuration, run `conda config --set auto_activate_base false` to make sure that conda won’t activate base environment every time you turn on the terminal.


Now it is time to download hls4ml into your Linux,
run the following command:
```
git clone https://github.com/fastmachinelearning/hls4ml-tutorial.git
```

When it is finished, you need to change your working directory to where you just downloaded the folder. These commands will help you navigate the linux directories

```
ls              ----list files in the current directory
cd              ----change directory
```

- To change back to the home directory, run 
```
cd
```

- To change the directory into the folder you just downloaded, run
```
cd hls4ml-tutorial
```

- To create the virtual environment for this project, run 
```
conda env create -f environment.yml
```

- To activate the environment after it is created, run
```
conda activate hls4ml-tutorial
```

- If you activate the environment correctly, you should see (hls4ml-tutorial) at the left of your terminal user command line: ![](./image/part202.jpeg)

When you don't want to use the environment, you can use
```
conda deactivate
``` 
to exit the environment

Use
```
conda env list
```
to see the environments you have. Remember to activate your environment when working on this project

## Step 3: Download Jupyter Notebook (Not necessary but highly recommanded)

We now want to use Jupyter-notebook (A web-based interactive computing platform) to run all the things we need. Normally, we need to have a browser to do so, but WSL doesn’t have graphic interface, so we will use your computer's browser to assist us. Remember the last line that we put in your bash_profile? 
![](./image/part203.jpeg)

This line creates an alias that whenever you run jupyter-notebook, it will run it without creating a browser, instead it will give us a token that we can use to access jupyter through any browser using the same LAN. Here is an example:
![](./image/part204.jpeg)
To access jupyter, paste one of these links into your browser

If everything goes smoothly, you should look something like this:
![](./image/notebook_1.png)
This is my linux home directory, yours will look different. In your directory, find the folder _hls4ml-tutorial_, and inside, you should be able to see these:
![](./image/notebook_2.png)
Click _part1\_getting\_started.ipynb_ and run the Part 1 code, you may have some error saying not able to access dynamic library, it just means it cannot detect your GPU and it will continue process with your CPU.
![](./image/notebook_3.png)

You probably are going to encounter some errors when running these codes, one common error is that it cannot find Keras or cannot Import TensorFlow properly, in that case, you need to reinstall TensorFlow. Close Jupyter notebook and go back to linux terminal. In the terminal, pressing
```
ctrl + c
```

 will interrupt the program, the notebook will ask you do you want to exit, type y and press Enter

Then under your hls4ml-tutorial environment, use 
```
pip uninstall tensorflow
```
```
pip install tensorflow==2.12.0
```

If you encounter other problems, please contact me at lostecho@uw.edu (or me! at ceravcal@uw.edu) or on Slack. Let’s solve it together.


## Step 4: Download Vivado

Now you should be able to run all steps in tutorial 1 besides the last, the last step requires a C to Verilog complier—Vivado_hls. To install this, we will need a GUI to install Vivado

In the Linux terminal, run the following commands in order:
```
sudo apt-get purge xrdp
sudo apt install -y xrdp
sudo apt install -y xfce4
sudo apt install -y xfce4-goodies
```

What we did above is to install a server deployer and a GUI to our WSL, so later we can use Windows remote desktop connection feature to connect to our WSL

```
sudo cp /etc/xrdp/xrdp.ini /etc/xrdp/xrdp.ini.bak
sudo sed -i ‘s/3389/3390/g’ /etc/xrdp/xrdp.ini
sudo sed -i ‘s/max_bpp=32/#max_bpp=32\nmax_bpp=128/g’ /etc/xrdp/xrdp.ini
sudo sed -i ‘s/xserverbpp=24/#xserverbpp=24\nxserverbpp=128/g’ /etc/xrdp/xrdp.ini echo xfce4-session > ~/.xsession
```

What we did here is adjust the user interface to make sure that the server can enable our UI properly. We first made a backup of the _xrdp.ini_ file. Then we changed the connection port from 3389 to 3390 (you can use whichever port you want, but I recommend staying between 3300 and 31000). Then we change the resolution for the interface to make it not blurry, at the end we add _xfce4-session_ in to the _.xsession_ file to make it recognize the interface.

Now we need to make sure that every time we launch the server, it will use the user interface instead of default UI. We need to modify the _startwm.sh_ file using VIM by the following command:
```
sudo vim /etc/xrdp/startwm.sh
```

Once inside the file, we need to comment out these two lines by adding # signal in front 
From:

```
test -x /etc/X11/Xsession && exec /etc/X11Xsession

exec /bin/sh /etc/X11/Xsession
```
To:

```
# test -x /etc/X11/Xsession && exec /etc/X11/Xsession
 # exec /bin/sh /etc/X11/Xsession
```

Then we need to add this two line at the end of this file:

```
# xfce
 startxfce4
```

Now you have finished modifying the configuration for your local Linux server.
	To start the server, type 
```
sudo /etc/init.d/xrdp start
```
	
to end the server, type :
```
sudo /etc/init.d/xrdp stop
```

Once you started the server, go to remote desktop connection on your windows (you can find it through the search bar)
![](./image/notebook_4.png)

In the **Computer** line, type localhost:3390, and then connect.

![](./image/display1.png)

Use the username and password you created in the previous part to login.

When you enter the server, right click to callout a menu and enter the terminal. In the terminal, type in `sudo apt install firefox` for a web browser.

![](./image/display2.png)

Once installed, you can access it from the bottom menu

Download vivado from [google drive] (https://drive.google.com/file/d/1WO01bS3iN9yfolHHp8Ei3jNzKc60Y-Zb/view)
or from the [official website] (https://www.xilinx.com/support/download.html)

When downloading from the website, you need to use 2019.1 or .2 for full functionality. However, the official hls4ml tutorial from their github uses a combination of modern Vitis HLS and 2019.1 Vivado. Ask a lead or Professor Scott if you are unsure

Once downloaded, you can access the file from your Downloads folder. To run the file, you'll need to execute it from your terminal


Type
```
chmod +777 ./X
```
then press Tab, it will auto fill the rest file name for you.
This command will help change the file into readable writeable and executable file.


Then type `./X` then press Tab and Enter to start the install program.

![](./image/vivado2.png)

Follow the instructions until you see a Select Edition to install panel, choose Vivado HL Design Edition and continue. 
![](./image/vivado3.png)


When you have finished installation, you will need to set up your bash profile so that linux will recognize your vivado installation

a) Type 
```
vim ~/.bash_profile
```
and press ENTER.

b) Press `i` to change the vim into insert mode.

c) Copy and paste the following things into the end of the file
```
export PATH="/tools/Xilinx/Vivado/2019.1/bin:$PATH"
```

d) Press ESC and type 
```
:wq
```

i) Once you exit vim, run 
```
source ~/.bash_profile
```
and 
```
source ~/.bashrc
```
in your terminal

Now you are all set to run the hls4ml-tutorial on your local machine. Please follow the hls4ml training and explination part carefully, you will learn how to train a model and then convert it into FPGA bit stream. Here are some resources that could help you better understand hls4ml.

[Linux Tutorial for Beginners: Introduction to Linux Operating System] (https://www.youtube.com/watch?v=V1y-mbWM3B8)

[HLS4ML Tutorial] (https://github.com/fastmachinelearning/hls4ml-tutorial)

[HLS4ML Guide] (https://fastmachinelearning.org/hls4ml/)



