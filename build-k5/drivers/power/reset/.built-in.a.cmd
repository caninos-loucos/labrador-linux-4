cmd_drivers/power/reset/built-in.a := rm -f drivers/power/reset/built-in.a; arm-linux-gnueabihf-ar rcSTPD drivers/power/reset/built-in.a drivers/power/reset/gpio-poweroff.o drivers/power/reset/gpio-restart.o drivers/power/reset/restart-poweroff.o drivers/power/reset/syscon-reboot.o drivers/power/reset/syscon-poweroff.o drivers/power/reset/reboot-mode.o drivers/power/reset/syscon-reboot-mode.o