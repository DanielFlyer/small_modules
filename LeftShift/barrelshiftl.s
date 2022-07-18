	.file	"barrelshiftl.c"
	.text
	.globl	shiftl_c
	.type	shiftl_c, @function
shiftl_c:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	-40(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L2
	movl	-36(%rbp), %eax
	addl	%eax, %eax
	movl	%eax, -16(%rbp)
	jmp	.L3
.L2:
	movl	-36(%rbp), %eax
	movl	%eax, -16(%rbp)
.L3:
	movl	-40(%rbp), %eax
	andl	$2, %eax
	testl	%eax, %eax
	je	.L4
	movl	-16(%rbp), %eax
	sall	$2, %eax
	movl	%eax, -12(%rbp)
	jmp	.L5
.L4:
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
.L5:
	movl	-40(%rbp), %eax
	andl	$4, %eax
	testl	%eax, %eax
	je	.L6
	movl	-12(%rbp), %eax
	sall	$4, %eax
	movl	%eax, -8(%rbp)
	jmp	.L7
.L6:
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
.L7:
	movl	-40(%rbp), %eax
	andl	$8, %eax
	testl	%eax, %eax
	je	.L8
	movl	-8(%rbp), %eax
	sall	$8, %eax
	movl	%eax, -4(%rbp)
	jmp	.L9
.L8:
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
.L9:
	movl	-40(%rbp), %eax
	andl	$16, %eax
	testl	%eax, %eax
	je	.L10
	movl	-4(%rbp), %eax
	sall	$16, %eax
	movl	%eax, -20(%rbp)
	jmp	.L11
.L10:
	movl	-4(%rbp), %eax
	movl	%eax, -20(%rbp)
.L11:
	movl	-20(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	shiftl_c, .-shiftl_c
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
