	.arch armv7-a
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 2	@ Tag_ABI_enum_size
	.eabi_attribute 30, 2	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 2	@ Tag_ABI_PCS_wchar_t
	.file	"bounds.c"
@ GNU C89 (Debian 10.2.1-6) version 10.2.1 20210110 (arm-linux-gnueabihf)
@	compiled by GNU C version 10.2.1 20210110, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.0, isl version isl-0.23-GMP

@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc
@ -I /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include
@ -I ./arch/arm/include/generated
@ -I /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include
@ -I ./include
@ -I /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/include/uapi
@ -I ./arch/arm/include/generated/uapi
@ -I /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/uapi
@ -I ./include/generated/uapi
@ -I /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/. -I .
@ -I /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/mach-caninos/include
@ -imultilib . -imultiarch arm-linux-gnueabihf -D __KERNEL__
@ -D __LINUX_ARM_ARCH__=7 -U arm -D KBUILD_BASENAME="bounds"
@ -D KBUILD_MODNAME="bounds"
@ -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/10/include
@ -include /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/kconfig.h
@ -include /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler_types.h
@ -MD kernel/.bounds.s.d
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c
@ -mlittle-endian -mapcs -mno-sched-prolog -mabi=aapcs-linux -mfpu=vfp
@ -marm -mfloat-abi=soft -mtls-dialect=gnu -march=armv7-a
@ -auxbase-strip kernel/bounds.s -O2 -Wall -Wundef -Wstrict-prototypes
@ -Wno-trigraphs -Werror=implicit-function-declaration -Wno-format-security
@ -Wno-frame-address -Wformat-truncation=0 -Wformat-overflow=0
@ -Wno-int-in-bool-context -Wno-address-of-packed-member
@ -Wframe-larger-than=1024 -Wno-unused-but-set-variable
@ -Wunused-const-variable=0 -Wdeclaration-after-statement -Wno-pointer-sign
@ -Wno-stringop-truncation -Werror=implicit-int -Werror=strict-prototypes
@ -Werror=date-time -Werror=incompatible-pointer-types
@ -Werror=designated-init -Wno-packed-not-aligned -std=gnu90 -p
@ -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE
@ -fno-dwarf2-cfi-asm -fno-ipa-sra -fno-delete-null-pointer-checks
@ -fstack-protector-strong -fno-omit-frame-pointer
@ -fno-optimize-sibling-calls -fno-var-tracking-assignments
@ -fno-strict-overflow -fno-merge-all-constants -fmerge-constants
@ -fstack-check=no -fconserve-stack
@ -fmacro-prefix-map=/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/=
@ -fverbose-asm
@ options enabled:  -faggressive-loop-optimizations -falign-functions
@ -falign-jumps -falign-labels -falign-loops -fallocation-dce
@ -fauto-inc-dec -fbranch-count-reg -fcaller-saves -fcode-hoisting
@ -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
@ -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
@ -fdevirtualize-speculatively -fearly-inlining
@ -feliminate-unused-debug-symbols -feliminate-unused-debug-types
@ -fexpensive-optimizations -fforward-propagate -ffp-int-builtin-inexact
@ -ffunction-cse -fgcse -fgcse-lm -fgnu-unique -fguess-branch-probability
@ -fhoist-adjacent-loads -fident -fif-conversion -fif-conversion2
@ -findirect-inlining -finline -finline-atomics -finline-functions
@ -finline-functions-called-once -finline-small-functions -fipa-bit-cp
@ -fipa-cp -fipa-icf -fipa-icf-functions -fipa-icf-variables -fipa-profile
@ -fipa-pure-const -fipa-reference -fipa-reference-addressable
@ -fipa-stack-alignment -fipa-vrp -fira-hoist-pressure
@ -fira-share-save-slots -fira-share-spill-slots
@ -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
@ -fleading-underscore -flifetime-dse -flra-remat -fmath-errno
@ -fmerge-constants -fmerge-debug-strings -fmove-loop-invariants
@ -foptimize-strlen -fpartial-inlining -fpeephole -fpeephole2 -fplt
@ -fprefetch-loop-arrays -fprofile -freg-struct-return -freorder-blocks
@ -freorder-functions -frerun-cse-after-loop
@ -fsched-critical-path-heuristic -fsched-dep-count-heuristic
@ -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
@ -fsched-pressure -fsched-rank-heuristic -fsched-spec
@ -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-insns
@ -fschedule-insns2 -fsection-anchors -fsemantic-interposition
@ -fshow-column -fshrink-wrap-separate -fsigned-zeros
@ -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-backprop -fssa-phiopt
@ -fstack-protector-strong -fstdarg-opt -fstore-merging
@ -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
@ -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce
@ -ftree-ccp -ftree-ch -ftree-coalesce-vars -ftree-copy-prop -ftree-cselim
@ -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
@ -ftree-loop-distribute-patterns -ftree-loop-if-convert -ftree-loop-im
@ -ftree-loop-ivcanon -ftree-loop-optimize -ftree-parallelize-loops=
@ -ftree-phiprop -ftree-pre -ftree-pta -ftree-reassoc -ftree-scev-cprop
@ -ftree-sink -ftree-slsr -ftree-sra -ftree-switch-conversion
@ -ftree-tail-merge -ftree-ter -ftree-vrp -funit-at-a-time -fverbose-asm
@ -fwrapv -fwrapv-pointer -fzero-initialized-in-bss -mapcs-frame -marm
@ -mbe32 -mglibc -mlittle-endian -mpic-data-is-text-relative
@ -munaligned-access -mvectorize-with-neon-quad

	.text
	.syntax divided
	.syntax unified
	.arm
	.syntax unified
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	mov	ip, sp	@,
	push	{fp, ip, lr, pc}	@
	sub	fp, ip, #4	@,,
	push	{lr}
	bl	__gnu_mcount_nc
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c:17: {
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c:19: 	DEFINE(NR_PAGEFLAGS, __NR_PAGEFLAGS);
	.syntax divided
@ 19 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c" 1
	
.ascii "->NR_PAGEFLAGS #21 __NR_PAGEFLAGS"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c:20: 	DEFINE(MAX_NR_ZONES, __MAX_NR_ZONES);
@ 20 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c" 1
	
.ascii "->MAX_NR_ZONES #3 __MAX_NR_ZONES"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c:22: 	DEFINE(NR_CPUS_BITS, ilog2(CONFIG_NR_CPUS));
@ 22 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c" 1
	
.ascii "->NR_CPUS_BITS #2 ilog2(CONFIG_NR_CPUS)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c:24: 	DEFINE(SPINLOCK_SIZE, sizeof(spinlock_t));
@ 24 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c" 1
	
.ascii "->SPINLOCK_SIZE #4 sizeof(spinlock_t)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/kernel/bounds.c:28: }
	.arm
	.syntax unified
	mov	r0, #0	@,
	ldmfd	sp, {fp, sp, pc}	@
	.size	main, .-main
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",%progbits
