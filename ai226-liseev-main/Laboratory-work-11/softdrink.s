	.file	"softdrink.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	call	connect_softdrink
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L2
	movl	$1, %eax
	jmp	.L3
.L2:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	remove_softdrink
	cmpl	$1, %eax
	je	.L4
	movl	$1, %eax
	jmp	.L3
.L4:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	add_softdrink
	cmpl	$1, %eax
	je	.L5
	movl	$1, %eax
	jmp	.L3
.L5:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	get_softdrink
	cmpl	$1, %eax
	je	.L6
	movl	$1, %eax
	jmp	.L3
.L6:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	PQfinish
	movl	$0, %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
