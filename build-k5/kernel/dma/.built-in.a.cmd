cmd_kernel/dma/built-in.a := rm -f kernel/dma/built-in.a; arm-linux-gnueabihf-ar rcSTPD kernel/dma/built-in.a kernel/dma/mapping.o kernel/dma/contiguous.o kernel/dma/coherent.o
