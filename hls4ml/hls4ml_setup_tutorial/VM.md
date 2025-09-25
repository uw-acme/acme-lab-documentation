# Using VMWare Fusion as an Alternative to WSL

If WSL is not working well or if you are having trouble with your current setup, an option is to utilize **VMWare Fusion**. This is also a viable option if you only have a Mac computer. You can use an external hard drive for the VM if your computer does not have a lot of space.

- To get started, you can **create a VM** on an external hard drive. Here's a guide on how to do it: [Creating VM on a Hard Drive](https://communities.vmware.com/t5/VMware-Fusion-Discussions/Can-run-Virtual-Machine-from-external-harddrive/td-p/2293709).
  
- VMware Fusion offers a **free one-year account for educational purposes**: [VMWare Education Store](https://store-us.vmware.com/vmware-in-education).

- For Mac users, here's a **guide document** for downloading VMWare Fusion on your Mac.

## Adjusting VM Size and Ubuntu Version

- I found that **Ubuntu 18.04.6** worked well for me. You can adjust the size of the VMWare created by first adjusting it under the settings for the partition in VMWare Fusion settings and then go into the VM and under **GParted**.

- Here's a link that explains how to **adjust size in GParted**: [How to Extend Filesystem Partition on Ubuntu VM](https://unix.stackexchange.com/questions/196512/how-to-extend-filesystem-partition-on-ubuntu-vm).

## Additional Resources

- There is great documentation in the **VMWare Fusion Forums** for any questions or errors you might run into.
