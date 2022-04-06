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
	.file	"asm-offsets.c"
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
@ -D __LINUX_ARM_ARCH__=7 -U arm -D KBUILD_BASENAME="asm_offsets"
@ -D KBUILD_MODNAME="asm_offsets"
@ -isystem /usr/lib/gcc-cross/arm-linux-gnueabihf/10/include
@ -include /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/kconfig.h
@ -include /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/include/linux/compiler_types.h
@ -MD arch/arm/kernel/.asm-offsets.s.d
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c
@ -mlittle-endian -mapcs -mno-sched-prolog -mabi=aapcs-linux -mfpu=vfp
@ -marm -mfloat-abi=soft -mtls-dialect=gnu -march=armv7-a
@ -auxbase-strip arch/arm/kernel/asm-offsets.s -O2 -Wall -Wundef
@ -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
@ -Wno-format-security -Wno-frame-address -Wformat-truncation=0
@ -Wformat-overflow=0 -Wno-int-in-bool-context
@ -Wno-address-of-packed-member -Wframe-larger-than=1024
@ -Wno-unused-but-set-variable -Wunused-const-variable=0
@ -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation
@ -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time
@ -Werror=incompatible-pointer-types -Werror=designated-init
@ -Wno-packed-not-aligned -std=gnu90 -p -fno-strict-aliasing -fno-common
@ -fshort-wchar -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra
@ -fno-delete-null-pointer-checks -fstack-protector-strong
@ -fno-omit-frame-pointer -fno-optimize-sibling-calls
@ -fno-var-tracking-assignments -fno-strict-overflow
@ -fno-merge-all-constants -fmerge-constants -fstack-check=no
@ -fconserve-stack
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
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:51: {
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:52:   DEFINE(TSK_ACTIVE_MM,		offsetof(struct task_struct, active_mm));
	.syntax divided
@ 52 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TSK_ACTIVE_MM #852 offsetof(struct task_struct, active_mm)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:54:   DEFINE(TSK_STACK_CANARY,	offsetof(struct task_struct, stack_canary));
@ 54 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TSK_STACK_CANARY #984 offsetof(struct task_struct, stack_canary)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:56:   BLANK();
@ 56 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:57:   DEFINE(TI_FLAGS,		offsetof(struct thread_info, flags));
@ 57 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_FLAGS #0 offsetof(struct thread_info, flags)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:58:   DEFINE(TI_PREEMPT,		offsetof(struct thread_info, preempt_count));
@ 58 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_PREEMPT #4 offsetof(struct thread_info, preempt_count)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:59:   DEFINE(TI_ADDR_LIMIT,		offsetof(struct thread_info, addr_limit));
@ 59 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_ADDR_LIMIT #8 offsetof(struct thread_info, addr_limit)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:60:   DEFINE(TI_TASK,		offsetof(struct thread_info, task));
@ 60 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_TASK #12 offsetof(struct thread_info, task)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:61:   DEFINE(TI_CPU,		offsetof(struct thread_info, cpu));
@ 61 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU #16 offsetof(struct thread_info, cpu)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:62:   DEFINE(TI_CPU_DOMAIN,		offsetof(struct thread_info, cpu_domain));
@ 62 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU_DOMAIN #20 offsetof(struct thread_info, cpu_domain)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:63:   DEFINE(TI_CPU_SAVE,		offsetof(struct thread_info, cpu_context));
@ 63 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU_SAVE #24 offsetof(struct thread_info, cpu_context)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:64:   DEFINE(TI_USED_CP,		offsetof(struct thread_info, used_cp));
@ 64 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_USED_CP #76 offsetof(struct thread_info, used_cp)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:65:   DEFINE(TI_TP_VALUE,		offsetof(struct thread_info, tp_value));
@ 65 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_TP_VALUE #92 offsetof(struct thread_info, tp_value)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:66:   DEFINE(TI_FPSTATE,		offsetof(struct thread_info, fpstate));
@ 66 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_FPSTATE #104 offsetof(struct thread_info, fpstate)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:68:   DEFINE(TI_VFPSTATE,		offsetof(struct thread_info, vfpstate));
@ 68 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_VFPSTATE #248 offsetof(struct thread_info, vfpstate)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:70:   DEFINE(VFP_CPU,		offsetof(union vfp_state, hard.cpu));
@ 70 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VFP_CPU #272 offsetof(union vfp_state, hard.cpu)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:74:   DEFINE(TI_THUMBEE_STATE,	offsetof(struct thread_info, thumbee_state));
@ 74 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_THUMBEE_STATE #528 offsetof(struct thread_info, thumbee_state)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:82:   BLANK();
@ 82 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:83:   DEFINE(S_R0,			offsetof(struct pt_regs, ARM_r0));
@ 83 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R0 #0 offsetof(struct pt_regs, ARM_r0)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:84:   DEFINE(S_R1,			offsetof(struct pt_regs, ARM_r1));
@ 84 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R1 #4 offsetof(struct pt_regs, ARM_r1)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:85:   DEFINE(S_R2,			offsetof(struct pt_regs, ARM_r2));
@ 85 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R2 #8 offsetof(struct pt_regs, ARM_r2)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:86:   DEFINE(S_R3,			offsetof(struct pt_regs, ARM_r3));
@ 86 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R3 #12 offsetof(struct pt_regs, ARM_r3)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:87:   DEFINE(S_R4,			offsetof(struct pt_regs, ARM_r4));
@ 87 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R4 #16 offsetof(struct pt_regs, ARM_r4)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:88:   DEFINE(S_R5,			offsetof(struct pt_regs, ARM_r5));
@ 88 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R5 #20 offsetof(struct pt_regs, ARM_r5)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:89:   DEFINE(S_R6,			offsetof(struct pt_regs, ARM_r6));
@ 89 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R6 #24 offsetof(struct pt_regs, ARM_r6)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:90:   DEFINE(S_R7,			offsetof(struct pt_regs, ARM_r7));
@ 90 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R7 #28 offsetof(struct pt_regs, ARM_r7)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:91:   DEFINE(S_R8,			offsetof(struct pt_regs, ARM_r8));
@ 91 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R8 #32 offsetof(struct pt_regs, ARM_r8)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:92:   DEFINE(S_R9,			offsetof(struct pt_regs, ARM_r9));
@ 92 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R9 #36 offsetof(struct pt_regs, ARM_r9)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:93:   DEFINE(S_R10,			offsetof(struct pt_regs, ARM_r10));
@ 93 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R10 #40 offsetof(struct pt_regs, ARM_r10)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:94:   DEFINE(S_FP,			offsetof(struct pt_regs, ARM_fp));
@ 94 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_FP #44 offsetof(struct pt_regs, ARM_fp)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:95:   DEFINE(S_IP,			offsetof(struct pt_regs, ARM_ip));
@ 95 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_IP #48 offsetof(struct pt_regs, ARM_ip)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:96:   DEFINE(S_SP,			offsetof(struct pt_regs, ARM_sp));
@ 96 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_SP #52 offsetof(struct pt_regs, ARM_sp)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:97:   DEFINE(S_LR,			offsetof(struct pt_regs, ARM_lr));
@ 97 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_LR #56 offsetof(struct pt_regs, ARM_lr)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:98:   DEFINE(S_PC,			offsetof(struct pt_regs, ARM_pc));
@ 98 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_PC #60 offsetof(struct pt_regs, ARM_pc)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:99:   DEFINE(S_PSR,			offsetof(struct pt_regs, ARM_cpsr));
@ 99 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_PSR #64 offsetof(struct pt_regs, ARM_cpsr)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:100:   DEFINE(S_OLD_R0,		offsetof(struct pt_regs, ARM_ORIG_r0));
@ 100 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_OLD_R0 #68 offsetof(struct pt_regs, ARM_ORIG_r0)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:101:   DEFINE(PT_REGS_SIZE,		sizeof(struct pt_regs));
@ 101 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PT_REGS_SIZE #72 sizeof(struct pt_regs)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:102:   DEFINE(SVC_DACR,		offsetof(struct svc_pt_regs, dacr));
@ 102 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_DACR #72 offsetof(struct svc_pt_regs, dacr)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:103:   DEFINE(SVC_ADDR_LIMIT,	offsetof(struct svc_pt_regs, addr_limit));
@ 103 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_ADDR_LIMIT #76 offsetof(struct svc_pt_regs, addr_limit)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:104:   DEFINE(SVC_REGS_SIZE,		sizeof(struct svc_pt_regs));
@ 104 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_REGS_SIZE #80 sizeof(struct svc_pt_regs)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:105:   BLANK();
@ 105 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:106:   DEFINE(SIGFRAME_RC3_OFFSET,	offsetof(struct sigframe, retcode[3]));
@ 106 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SIGFRAME_RC3_OFFSET #756 offsetof(struct sigframe, retcode[3])"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:107:   DEFINE(RT_SIGFRAME_RC3_OFFSET, offsetof(struct rt_sigframe, sig.retcode[3]));
@ 107 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->RT_SIGFRAME_RC3_OFFSET #884 offsetof(struct rt_sigframe, sig.retcode[3])"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:108:   BLANK();
@ 108 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:110:   DEFINE(L2X0_R_PHY_BASE,	offsetof(struct l2x0_regs, phy_base));
@ 110 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_PHY_BASE #0 offsetof(struct l2x0_regs, phy_base)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:111:   DEFINE(L2X0_R_AUX_CTRL,	offsetof(struct l2x0_regs, aux_ctrl));
@ 111 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_AUX_CTRL #4 offsetof(struct l2x0_regs, aux_ctrl)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:112:   DEFINE(L2X0_R_TAG_LATENCY,	offsetof(struct l2x0_regs, tag_latency));
@ 112 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_TAG_LATENCY #8 offsetof(struct l2x0_regs, tag_latency)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:113:   DEFINE(L2X0_R_DATA_LATENCY,	offsetof(struct l2x0_regs, data_latency));
@ 113 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_DATA_LATENCY #12 offsetof(struct l2x0_regs, data_latency)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:114:   DEFINE(L2X0_R_FILTER_START,	offsetof(struct l2x0_regs, filter_start));
@ 114 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_FILTER_START #16 offsetof(struct l2x0_regs, filter_start)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:115:   DEFINE(L2X0_R_FILTER_END,	offsetof(struct l2x0_regs, filter_end));
@ 115 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_FILTER_END #20 offsetof(struct l2x0_regs, filter_end)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:116:   DEFINE(L2X0_R_PREFETCH_CTRL,	offsetof(struct l2x0_regs, prefetch_ctrl));
@ 116 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_PREFETCH_CTRL #24 offsetof(struct l2x0_regs, prefetch_ctrl)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:117:   DEFINE(L2X0_R_PWR_CTRL,	offsetof(struct l2x0_regs, pwr_ctrl));
@ 117 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->L2X0_R_PWR_CTRL #28 offsetof(struct l2x0_regs, pwr_ctrl)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:118:   BLANK();
@ 118 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:121:   DEFINE(MM_CONTEXT_ID,		offsetof(struct mm_struct, context.id.counter));
@ 121 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MM_CONTEXT_ID #368 offsetof(struct mm_struct, context.id.counter)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:122:   BLANK();
@ 122 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:124:   DEFINE(VMA_VM_MM,		offsetof(struct vm_area_struct, vm_mm));
@ 124 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_MM #32 offsetof(struct vm_area_struct, vm_mm)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:125:   DEFINE(VMA_VM_FLAGS,		offsetof(struct vm_area_struct, vm_flags));
@ 125 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_FLAGS #40 offsetof(struct vm_area_struct, vm_flags)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:126:   BLANK();
@ 126 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:127:   DEFINE(VM_EXEC,	       	VM_EXEC);
@ 127 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VM_EXEC #4 VM_EXEC"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:128:   BLANK();
@ 128 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:129:   DEFINE(PAGE_SZ,	       	PAGE_SIZE);
@ 129 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PAGE_SZ #4096 PAGE_SIZE"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:130:   BLANK();
@ 130 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:131:   DEFINE(SYS_ERROR0,		0x9f0000);
@ 131 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SYS_ERROR0 #10420224 0x9f0000"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:132:   BLANK();
@ 132 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:133:   DEFINE(SIZEOF_MACHINE_DESC,	sizeof(struct machine_desc));
@ 133 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SIZEOF_MACHINE_DESC #104 sizeof(struct machine_desc)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:134:   DEFINE(MACHINFO_TYPE,		offsetof(struct machine_desc, nr));
@ 134 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MACHINFO_TYPE #0 offsetof(struct machine_desc, nr)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:135:   DEFINE(MACHINFO_NAME,		offsetof(struct machine_desc, name));
@ 135 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MACHINFO_NAME #4 offsetof(struct machine_desc, name)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:136:   BLANK();
@ 136 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:137:   DEFINE(PROC_INFO_SZ,		sizeof(struct proc_info_list));
@ 137 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROC_INFO_SZ #52 sizeof(struct proc_info_list)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:138:   DEFINE(PROCINFO_INITFUNC,	offsetof(struct proc_info_list, __cpu_flush));
@ 138 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_INITFUNC #16 offsetof(struct proc_info_list, __cpu_flush)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:139:   DEFINE(PROCINFO_MM_MMUFLAGS,	offsetof(struct proc_info_list, __cpu_mm_mmu_flags));
@ 139 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_MM_MMUFLAGS #8 offsetof(struct proc_info_list, __cpu_mm_mmu_flags)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:140:   DEFINE(PROCINFO_IO_MMUFLAGS,	offsetof(struct proc_info_list, __cpu_io_mmu_flags));
@ 140 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_IO_MMUFLAGS #12 offsetof(struct proc_info_list, __cpu_io_mmu_flags)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:141:   BLANK();
@ 141 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:149:   DEFINE(CPU_SLEEP_SIZE,	offsetof(struct processor, suspend_size));
@ 149 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CPU_SLEEP_SIZE #40 offsetof(struct processor, suspend_size)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:150:   DEFINE(CPU_DO_SUSPEND,	offsetof(struct processor, do_suspend));
@ 150 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CPU_DO_SUSPEND #44 offsetof(struct processor, do_suspend)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:151:   DEFINE(CPU_DO_RESUME,		offsetof(struct processor, do_resume));
@ 151 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CPU_DO_RESUME #48 offsetof(struct processor, do_resume)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:157:   DEFINE(SLEEP_SAVE_SP_SZ,	sizeof(struct sleep_save_sp));
@ 157 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SLEEP_SAVE_SP_SZ #8 sizeof(struct sleep_save_sp)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:158:   DEFINE(SLEEP_SAVE_SP_PHYS,	offsetof(struct sleep_save_sp, save_ptr_stash_phys));
@ 158 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SLEEP_SAVE_SP_PHYS #4 offsetof(struct sleep_save_sp, save_ptr_stash_phys)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:159:   DEFINE(SLEEP_SAVE_SP_VIRT,	offsetof(struct sleep_save_sp, save_ptr_stash));
@ 159 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SLEEP_SAVE_SP_VIRT #0 offsetof(struct sleep_save_sp, save_ptr_stash)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:161:   BLANK();
@ 161 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:162:   DEFINE(DMA_BIDIRECTIONAL,	DMA_BIDIRECTIONAL);
@ 162 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_BIDIRECTIONAL #0 DMA_BIDIRECTIONAL"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:163:   DEFINE(DMA_TO_DEVICE,		DMA_TO_DEVICE);
@ 163 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_TO_DEVICE #1 DMA_TO_DEVICE"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:164:   DEFINE(DMA_FROM_DEVICE,	DMA_FROM_DEVICE);
@ 164 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_FROM_DEVICE #2 DMA_FROM_DEVICE"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:165:   BLANK();
@ 165 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:166:   DEFINE(CACHE_WRITEBACK_ORDER, __CACHE_WRITEBACK_ORDER);
@ 166 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CACHE_WRITEBACK_ORDER #6 __CACHE_WRITEBACK_ORDER"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:167:   DEFINE(CACHE_WRITEBACK_GRANULE, __CACHE_WRITEBACK_GRANULE);
@ 167 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CACHE_WRITEBACK_GRANULE #64 __CACHE_WRITEBACK_GRANULE"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:168:   BLANK();
@ 168 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:176:   BLANK();
@ 176 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:178:   DEFINE(VDSO_DATA_SIZE,	sizeof(union vdso_data_store));
@ 178 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VDSO_DATA_SIZE #4096 sizeof(union vdso_data_store)"	@
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:180:   BLANK();
@ 180 "/home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ /home/edgar/Documentos/labrador-linux4.19-kx/linux-source-4.19/arch/arm/kernel/asm-offsets.c:193: }
	.arm
	.syntax unified
	mov	r0, #0	@,
	ldmfd	sp, {fp, sp, pc}	@
	.size	main, .-main
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",%progbits
