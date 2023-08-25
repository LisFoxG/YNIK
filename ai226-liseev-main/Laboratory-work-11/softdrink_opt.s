	.file	"softdrink.c"
	.text
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB22:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	call	connect_softdrink
	testq	%rax, %rax
	je	.L4
	movq	%rax, %rdi
	movq	%rax, %rbx
	call	remove_softdrink
	cmpl	$1, %eax
	je	.L7
.L4:
	movl	$1, %eax
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L7:
	.cfi_restore_state
	movq	%rbx, %rdi
	call	add_softdrink
	subl	$1, %eax
	jne	.L4
	movq	%rbx, %rdi
	call	get_softdrink
	subl	$1, %eax
	jne	.L4
	movq	%rbx, %rdi
	call	PQfinish
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE22:
	.size	main, .-main
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
