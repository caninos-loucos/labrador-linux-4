cmd_drivers/gnss/gnss-serial.ko := arm-linux-gnueabihf-ld -r -EL -T /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/scripts/module-common.lds  --build-id  -o drivers/gnss/gnss-serial.ko drivers/gnss/gnss-serial.o drivers/gnss/gnss-serial.mod.o ;  true