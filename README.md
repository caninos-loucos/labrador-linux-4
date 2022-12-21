# labrador-linux4.19-kx
Linux 4.19 kernel source code for all Caninos Labrador family.

**Support for 64-bit architecture has been temporarily removed from this repository.** 
**For an updated version of the 64-bit kernel, visit <https://github.com/caninos-loucos/labrador-aarch64-linux-4> website.**

## Release Notes for Labrador V2.x

### Current Release (19-01-2022)
1) Update Labrador V2.x Kernel from 4.14.13 to 4.19.98
2) Add driver SPI

## Release Notes for Labrador V3.x

### Next Release (TBA)
1) Add driver for HDMI audio playback
2) Enable HDMI-CEC functionality at HDMI-IP driver
3) Add driver for TFT LCD displays using DSI interface
4) New driver for Video Decode Engine

### Current Release (26-01-2021)
1) Add driver for GPU power regulator
2) Activated more GPIO pins
3) Enable Mali 450 GPU driver
4) Corrected minor bugs

### Third Release (05-09-2020)
1) Added HDMI screen resolution switching feature in the KMS driver
2) New HDMI-IP driver (HDMI-CEC functionality not activated)
3) New Display Engine driver (only basic 2D functions implemented)
4) Added thermal sensor driver for GPU, CPU and CoreLogic
5) Added driver for user configurable baseboard buttons
6) Added Mali 450 GPU driver
7) Corrected minor bugs

### Second Release (24-07-2020)

1) Added hardware based PWM driver
2) Added dynamic GPIO/Device function muxing at external header
3) New GPIO and Pinctrl drivers (written from scratch to remove deprecated APIs)
4) New Reset driver with better performance
5) Increased PADs drive strength
6) Corrected PMIC issues related to system shutdown/restart
7) General code clean-up and optimization

### First Release (15-05-2020)

1) Kernel version updated from 4.19.37 to 4.19.98
2) Added base board user configurable led support
3) New fully functional and complete caninos-clk driver (written from scratch)
4) Caninos KMS/DRM driver prepared for hdmi custom video modes and cvbs output
5) Added base board 10bit ADC input support
6) Corrected a plethora of minor bugs

## About
This repository contains the source code of Caninos Labrador's boards linux
kernel. Any "Labrador Core" should work fine with this kernel.

## Usage to 64bits environment(Labrador Core V3.x)
Prior to compilation, make sure you have the following libraries and/or
tools installed on your machine:
1) GNU Binutils environment
2) Native GCC compiler
3) GCC cross-compiler targeting "gcc-aarch64-linux-gnu"
4) Make build tool
5) Git client
6) Bison and Flex development libraries
7) NCurses development libraries
8) LibSSL development libraries

```
$ sudo apt-get update
$ sudo apt-get install build-essential binutils gcc-aarch64-linux-gnu make git
$ sudo apt-get install bison flex libncurses-dev libssl-dev
```

## Usage to 32bits environment(Labrador Core V2.x)
Prior to compilation, make sure you have the following libraries and/or
tools installed on your machine:
1) GNU Binutils environment
2) Native GCC compiler
3) GCC cross-compiler targeting "gcc-arm-linux-gnueabihf"
4) Make build tool
5) Git client
6) Bison and Flex development libraries
7) NCurses development libraries
8) LibSSL development libraries
9) U-Boot Tools libraries

```
$ sudo apt-get update
$ sudo apt-get install build-essential binutils gcc-arm-linux-gnueabihf make git
$ sudo apt-get install bison flex libncurses-dev libssl-dev u-boot-tools
```

After installing these tools, clone this repository in your computer.
Then, go to it's main directory and execute it's makefile.

```
$ git clone https://github.com/caninos-loucos/labrador-linux4.19-kx.git
$ cd labrador-linux4.19-kx && make
```

## Incremental Build for "Labrador Core v3.x"(64bits)
If you want to do an incremental build to especific board, execute the following commands:

1) To load "Labrador Core v3.x"'s configuration
```
make config-k7
```
>Note: this will overwrite all configurations already set up.

2) To change which modules are compiled into your kernel image
```
make menuconfig-k7
```
3) To compile the device tree binary blob
```
make dtbs-k7
```
4) To compile your kernel image
```
make kernel-k7
```
5) To reset everything
```
make clean-k7
```

## Incremental Build for "Labrador Core v2.x"(32bits)
If you want to do an incremental build to especific board, execute the following commands:

1) To load "Labrador Core v2.x"'s configuration
```
make config-k5
```
>Note: this will overwrite all configurations already set up.

2) To change which modules are compiled into your kernel image
```
make menuconfig-k5
```
3) To compile the device tree binary blob
```
make dtbs-k5
```
4) To compile your kernel image
```
make kernel-k5
```
5) To reset everything
```
make clean-k5

## Kernel Installation for "Labrador Core v3.x" (64bits)
After a successful build, the kernel should be avaliable at "output-k7" folder.
The modules are located at "output-k7/lib/modules". Do the following:

1) Copy the modules to the folder "/lib/modules" at your SDCARD/EMMC system's
root.

```
$ sudo cp -r output-k7/lib/modules $ROOTFS/lib/
```

2) Copy the Image file to the "/boot/" folder at your SDCARD/EMMC system's root.

```
$ sudo cp output-k7/Image $ROOTFS/boot/
```

3) Copy the device tree files to "/boot/" folder at your SDCARD/EMMC
system's root.

```
$ sudo cp output-k7/v3emmc.dtb $ROOTFS/boot/
$ sudo cp output-k7/v3sdc.dtb $ROOTFS/boot/
```
>Note: $ROOTFS must be replaced by the complete directory path of your target
system's root mounting point.

## Bootloader Installation for "Labrador Core v3.x"

To update the bootloader in a SDCARD use:
```
$ sudo dd if=boot-k7/bootloader.bin of=/dev/$DEVNAME conv=notrunc seek=1 bs=512
```
> Note: $DEVNAME is the name of the target device. It is not a partition name.
You can use lsblk, to know it's name.

To update the EMMC's bootloader from a live Linux system booted from SDCARD use:
```
$ sudo dd if=boot-k7/bootloader.bin of=/dev/mmcblk2 conv=notrunc seek=1 bs=512
```

## Kernel Installation for "Labrador Core v2.x" (32bits)
After a successful build, the kernel should be avaliable at "output-k5" folder.
The modules are located at "output-k5/lib/modules". Do the following:

1) Copy the modules to the folder "/lib/modules" at your SDCARD/EMMC system's
root.

```
$ sudo cp -r output-k5/lib/modules $ROOTFS/lib/
```

2) Copy the uImage file to the root path of "BOOT" unit at your SDCARD/EMMC.

```
$ sudo cp output-k5/uImage $BOOT/
```

3) Copy the device tree file to the root path of "BOOT" unit at your SDCARD/EMMC.

```
$ sudo cp output-k5/kernel.dtb $BOOT/
```
>Note1: $ROOTFS must be replaced by the complete directory path of your target
system's root mounting point.
>Note2: $BOOT must be replaced by the complete directory path of your target
BOOT mounting point.

## Bootloader Installation for "Labrador Core v2.x"

To update the bootloader in a SDCARD use:
```
$ sudo dd if=boot-k5/bootloader.bin of=/dev/$DEVNAME conv=notrunc seek=1 bs=512
```
> Note: $DEVNAME is the name of the target device. It is not a partition name.
You can use lsblk, to know it's name.

To update the EMMC's bootloader from a live Linux system booted from SDCARD use:
```
$ sudo dd if=boot-k5/bootloader.bin of=/dev/mmcblk2 conv=notrunc seek=1 bs=512
```


## Contributing

**Caninos Loucos Forum: <https://forum.caninosloucos.org.br/>**

**Caninos Loucos Website: <https://caninosloucos.org/>**

