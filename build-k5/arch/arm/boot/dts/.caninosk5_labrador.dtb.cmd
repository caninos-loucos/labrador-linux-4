cmd_arch/arm/boot/dts/caninosk5_labrador.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.caninosk5_labrador.dtb.d.pre.tmp -nostdinc -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.caninosk5_labrador.dtb.dts.tmp /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/boot/dts/caninosk5_labrador.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/caninosk5_labrador.dtb -b 0 -i/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/boot/dts/ -i/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-graph_port -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg  -d arch/arm/boot/dts/.caninosk5_labrador.dtb.d.dtc.tmp arch/arm/boot/dts/.caninosk5_labrador.dtb.dts.tmp ; cat arch/arm/boot/dts/.caninosk5_labrador.dtb.d.pre.tmp arch/arm/boot/dts/.caninosk5_labrador.dtb.d.dtc.tmp > arch/arm/boot/dts/.caninosk5_labrador.dtb.d

source_arch/arm/boot/dts/caninosk5_labrador.dtb := /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/boot/dts/caninosk5_labrador.dts

deps_arch/arm/boot/dts/caninosk5_labrador.dtb := \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/caninosk5_labrador.dtb: $(deps_arch/arm/boot/dts/caninosk5_labrador.dtb)

$(deps_arch/arm/boot/dts/caninosk5_labrador.dtb):
