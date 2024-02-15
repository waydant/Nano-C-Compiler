	.file	"./InputFiles/test7.c"

#	Allocation of variables on the stack (Activation record):

#	factorial
#	n: -4
#	t0: -8
#	t1: -12
#	t2: -16
#	t3: -20
#	t4: -24
#	t5: -28
#	main
#	n: -4
#	r: -8
#	t10: -12
#	t11: -16
#	t12: -20
#	t6: -24
#	t7: -28
#	t8: -32
#	t9: -40
#	printInt
#	n: -4
#	printStr
#	ch: -8
#	readInt
#	eP: -8

	.section	.rodata
.LC0:
	.string	"! = "
#	factorial =  label 
	.text
	.globl  factorial
	.type   factorial, @function
factorial:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $28, %rsp
#	1
	movl    %edi, -4(%rbp)
#	t0 = 0 = 
	movl    $0, -8(%rbp)
#	6 = n == t0
	movl    -8(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	je      .L2
#	9 =  goto 
	jmp     .L3
#	15 =  goto 
	jmp     .LFE0
#	t1 = 1 = 
.L2:
	movl    $1, -12(%rbp)
#	t1 =  return 
	movl    -12(%rbp), %eax
	jmp     .LFE0
#	15 =  goto 
	jmp     .LFE0
#	t2 = 1 = 
.L3:
	movl    $1, -16(%rbp)
#	t3 = n - t2
	movl    -4(%rbp), %eax
	subl    -16(%rbp), %eax
	movl    %eax, -20(%rbp)
#	t3 =  param 
#	t4 = factorial call 1
	movl    -20(%rbp), %edi
	call    factorial
	movl    %eax, -24(%rbp)
#	t5 = n * t4
	movl    -4(%rbp), %eax
	imull   -24(%rbp), %eax
	movl    %eax, -28(%rbp)
#	t5 =  return 
	movl    -28(%rbp), %eax
#	factorial =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   factorial, .-factorial
#	main =  label 
	.text
	.globl  main
	.type   main, @function
main:
.LFB1:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $40, %rsp
#	0
#	t6 = 5 = 
	movl    $5, -24(%rbp)
#	n = t6 = 
	movl    -24(%rbp), %eax
	movl    %eax, -4(%rbp)
#	n =  param 
#	t7 = factorial call 1
	movl    -4(%rbp), %edi
	call    factorial
	movl    %eax, -28(%rbp)
#	r = t7 = 
	movl    -28(%rbp), %eax
	movl    %eax, -8(%rbp)
#	n =  param 
#	t8 = printInt call 1
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -32(%rbp)
#	t9 = 0 =str 
	movq    $.LC0, -40(%rbp)
#	t9 =  param 
#	t10 = printStr call 1
	movq    -40(%rbp), %rdi
	call    printStr
	movl    %eax, -12(%rbp)
#	r =  param 
#	t11 = printInt call 1
	movl    -8(%rbp), %edi
	call    printInt
	movl    %eax, -16(%rbp)
#	t12 = 0 = 
	movl    $0, -20(%rbp)
#	t12 =  return 
	movl    -20(%rbp), %eax
#	main =  labelend 
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
