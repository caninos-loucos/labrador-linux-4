cmd_drivers/video/videomode.o := arm-linux-gnueabihf-gcc -Wp,-MD,drivers/video/.videomode.o.d -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/10/include -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include -I./arch/arm/include/generated  -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include -I./include -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi -I./include/generated/uapi -include /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/kconfig.h -include /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler_types.h  -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/drivers/video -Idrivers/video -D__KERNEL__ -mlittle-endian  -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/mach-caninos/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -Wno-address-of-packed-member -O2 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/= -Wno-packed-not-aligned    -DKBUILD_BASENAME='"videomode"' -DKBUILD_MODNAME='"videomode"' -c -o drivers/video/.tmp_videomode.o /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/drivers/video/videomode.c

source_drivers/video/videomode.o := /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/drivers/video/videomode.c

deps_drivers/video/videomode.o := \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler-gcc.h \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/errno.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/linux/errno.h \
  arch/arm/include/generated/uapi/asm/errno.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/asm-generic/errno.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/asm-generic/errno-base.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/export.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/video/display_timing.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/bitops.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi/asm/types.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/int-ll64.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/uapi/asm/bitsperlong.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/asm-generic/bitsperlong.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/bits.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler_types.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/linux/types.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/linux/posix_types.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/stddef.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/linux/stddef.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi/asm/posix_types.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/asm-generic/posix_types.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arm/heavy/mb.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/cpu/spectre.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/barrier.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/kasan-checks.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/irqflags.h \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/typecheck.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/irqflags.h \
    $(wildcard include/config/cpu/v7m.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/hwcap.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi/asm/hwcap.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/irqflags.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/non-atomic.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/builtin-__fls.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/builtin-__ffs.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/builtin-fls.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/builtin-ffs.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/ffz.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/fls64.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/sched.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/hweight.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/arch_hweight.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/const_hweight.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/lock.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/atomic.h \
    $(wildcard include/config/generic/atomic64.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/atomic.h \
    $(wildcard include/config/arm/lpae.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/prefetch.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/binfmt/elf/fdpic.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/hw_breakpoint.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/unified.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/cmpxchg-local.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/atomic-long.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/find.h \
    $(wildcard include/config/generic/find/first/bit.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/le.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi/asm/byteorder.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/byteorder/little_endian.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/linux/byteorder/little_endian.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/swab.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/linux/swab.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/asm/swab.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi/asm/swab.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/byteorder/generic.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitops/ext2-atomic-setbit.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/video/videomode.h \

drivers/video/videomode.o: $(deps_drivers/video/videomode.o)

$(deps_drivers/video/videomode.o):