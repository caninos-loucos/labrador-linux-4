cmd_arch/arm/crypto/sha1-ce-core.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/crypto/.sha1-ce-core.o.d -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/10/include -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include -I./arch/arm/include/generated  -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include -I./include -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi -I./include/generated/uapi -include /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/mach-caninos/include -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float   -c -o arch/arm/crypto/sha1-ce-core.o /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/crypto/sha1-ce-core.S

source_arch/arm/crypto/sha1-ce-core.o := /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/crypto/sha1-ce-core.S

deps_arch/arm/crypto/sha1-ce-core.o := \
    $(wildcard include/config/cpu/big/endian.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/kconfig.h \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/unified.h \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/linkage.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/stringify.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/export.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/linkage.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
    $(wildcard include/config/cpu/spectre.h) \
    $(wildcard include/config/cpu/sw/domain/pan.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/kprobes.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi/asm/ptrace.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/hwcap.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi/asm/hwcap.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/cp15/mmu.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/opcodes-virt.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/page.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/arm/lpae.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/getorder.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \

arch/arm/crypto/sha1-ce-core.o: $(deps_arch/arm/crypto/sha1-ce-core.o)

$(deps_arch/arm/crypto/sha1-ce-core.o):