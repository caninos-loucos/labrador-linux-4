cmd_lib/ctype.o := arm-linux-gnueabihf-gcc -Wp,-MD,lib/.ctype.o.d -nostdinc -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/10/include -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include -I./arch/arm/include/generated  -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include -I./include -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi -I./include/generated/uapi -include /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/kconfig.h -include /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler_types.h  -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/lib -Ilib -D__KERNEL__ -mlittle-endian  -I/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/mach-caninos/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -Wno-address-of-packed-member -O2 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/= -Wno-packed-not-aligned    -DKBUILD_BASENAME='"ctype"' -DKBUILD_MODNAME='"ctype"' -c -o lib/.tmp_ctype.o /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/lib/ctype.c

source_lib/ctype.o := /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/lib/ctype.c

deps_lib/ctype.o := \
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
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/ctype.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler_types.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/linux/types.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi/asm/types.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/int-ll64.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/uapi/asm/bitsperlong.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi/asm-generic/bitsperlong.h \
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
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/spectre.h) \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/asm-generic/barrier.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/kasan-checks.h \
  /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/export.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \

lib/ctype.o: $(deps_lib/ctype.o)

$(deps_lib/ctype.o):
