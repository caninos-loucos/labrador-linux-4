cmd_drivers/gpio/built-in.a := rm -f drivers/gpio/built-in.a; arm-linux-gnueabihf-ar rcSTPD drivers/gpio/built-in.a drivers/gpio/devres.o drivers/gpio/gpiolib.o drivers/gpio/gpiolib-legacy.o drivers/gpio/gpiolib-devprop.o drivers/gpio/gpiolib-of.o drivers/gpio/gpiolib-sysfs.o drivers/gpio/gpio-mmio.o drivers/gpio/gpio-pca953x.o drivers/gpio/gpio-pcf857x.o
