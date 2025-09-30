# Getting Started
Start with the Nautilus Setup Tutorial. Then, depending on what you are looking for, go into the Deployment or the Virtual Machine tutorial. Each tutorial starts with a description of the resource it teaches

|-- **If you are here for HLS4ML_VS_MANUAL**, follow these steps:
1. Finish the Nautilus Setup Tutorial
2. Get through the Downloading Tools section in [Virtual Machines](Virtual_machines.md). 
3. There is already a VM running so skip to Setting up Connection to VS Code. 
4. Instead of making a new Secret in this section, edit the already existing shared-pub-key. Make sure to convert your pub key to base 64 encoding. If you're not sure how, create a secret using the instructions, view it with 'kubectl edit secret <your_secret>', then copy over the key section to the shared-pub-key with 'kubect edit secret shared-pub-key'
5. Contact Caleb and he'll add you to the vm so you can connect using SSH