cmd_drivers/thermal/built-in.a := rm -f drivers/thermal/built-in.a; arm-linux-gnueabihf-ar rcSTPD drivers/thermal/built-in.a drivers/thermal/thermal_core.o drivers/thermal/thermal_sysfs.o drivers/thermal/thermal_helpers.o drivers/thermal/thermal_hwmon.o drivers/thermal/of-thermal.o drivers/thermal/fair_share.o drivers/thermal/step_wise.o drivers/thermal/cpu_cooling.o drivers/thermal/broadcom/built-in.a drivers/thermal/caninos_k5_thermal.o drivers/thermal/samsung/built-in.a drivers/thermal/tegra/built-in.a