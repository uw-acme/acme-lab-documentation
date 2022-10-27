# Installation 

Refer to the [YARR software installation page](https://yarr.web.cern.ch/devel/install/) for more details. 

1. Install or activate GCC version > 9.0
2. Usually only the controller `Spec` and the front end `Rd53b` are built.  
    ``` 
    cmake3 -S <path-to-YARR> -DYARR_CONTROLLERS_TO_BUILD=Spec -DYARR_FRONT_ENDS_TO_BUILD=Rd53b 
    make -j8
    make install 
    ```

3. Check the PCIe Kernel driver is installed. See [Kernel Driver](https://yarr.web.cern.ch/devel/kernel_driver/)

4. If a new FW needed to be flashed, install `Vivado Lab` and download the `bit` file to flash it to the `Trenz TEF-1001` board.  See [ PCIe Firmware](https://yarr.web.cern.ch/devel/pcie/)

Note: for the UW ECE ACME lab, the `git clone` doesn't work with the `https://gitlab.cern.ch`. 
One workaround is to use the ssh key and change all the `https:` link to `ssh:`. Or you can manually download the source codes of YARR dependences, like `plotting-tool` and put them the to desired places, i.e. `src/external` 

# Run scan
## General commands  
After `make install` the `bin` directory is built and there are multiple binary executables you can run. For standard scans, the command structure is like the following:   

``` bash 
$ bin/scanConsole -r configs/controller/specCfg-rd53b-4x4.json -c configs/connectivity/example_rd53b_setup.json -s configs/scans/rd53b/<std-scan>.json -p
```

See [scanConsole](https://yarr.web.cern.ch/devel/scanconsole/) and [rd53a](https://yarr.web.cern.ch/devel/rd53a/) for more details. 


# References 

[YARR Docs](https://yarr.web.cern.ch/devel/)

[YARR SW source code](https://gitlab.cern.ch/YARR/YARR)  

[YARR SW devel branch](https://gitlab.cern.ch/YARR/YARR/-/tree/devel)  

[YARR FW source code](https://gitlab.cern.ch/YARR/YARR-FW)

