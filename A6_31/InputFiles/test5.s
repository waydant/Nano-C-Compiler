	.file	"./InputFiles/test5.c"

#	Allocation of variables on the stack (Activation record):

#	main
#	i: -4
#	n: -8
#	r: -12
#	t0: -16
#	t1: -20
#	t10: -24
#	t11: -28
#	t12: -32
#	t2: -40
#	t3: -44
#	t4: -48
#	t5: -52
#	t6: -56
#	t7: -60
#	t8: -64
#	t9: -72
#	printInt
#	n: -4
#	printStr
#	ch: -8
#	readInt
#	eP: -8

	.section	.rodata
.LC0:
	.string	"! = "
#	main =  label 
	.text
	.globl  main
	.type   main, @function
main:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $72, %rsp
#	0
#	t0 = 0 = 
	movl    $0, -16(%rbp)
#	i = t0 = 
	movl    -16(%rbp), %eax
	movl    %eax, -4(%rbp)
#	t1 = 1 = 
	movl    $1, -20(%rbp)
#	r = t1 = 
	movl    -20(%rbp), %eax
	movl    %eax, -12(%rbp)
#	t2 = n =& 
	leaq    -8(%rbp), %rax
	movq    %rax, -40(%rbp)
#	t2 =  param 
#	t3 = readInt call 1
	movq    -40(%rbp), %rdi
	call    readInt
	movl    %eax, -44(%rbp)
#	t4 = 1 = 
	movl    $1, -48(%rbp)
#	i = t4 = 
	movl    -48(%rbp), %eax
	movl    %eax, -4(%rbp)
#	17 = i <= n
.L3:
	movl    -8(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	jle     .L1
#	20 =  goto 
	jmp     .L2
#	t5 = 1 = 
.L4:
	movl    $1, -52(%rbp)
#	t6 = i + t5
	movl    -4(%rbp), %eax
	addl    -52(%rbp), %eax
	movl    %eax, -56(%rbp)
#	i = t6 = 
	movl    -56(%rbp), %eax
	movl    %eax, -4(%rbp)
#	11 =  goto 
	jmp     .L3
#	t7 = r * i
.L1:
	movl    -12(%rbp), %eax
	imull   -4(%rbp), %eax
	movl    %eax, -60(%rbp)
#	r = t7 = 
	movl    -60(%rbp), %eax
	movl    %eax, -12(%rbp)
#	13 =  goto 
	jmp     .L4
#	n =  param 
.L2:
#	t8 = printInt call 1
	movl    -8(%rbp), %edi
	call    printInt
	movl    %eax, -64(%rbp)
#	t9 = 0 =str 
	movq    $.LC0, -72(%rbp)
#	t9 =  param 
#	t10 = printStr call 1
	movq    -72(%rbp), %rdi
	call    printStr
	movl    %eax, -24(%rbp)
#	r =  param 
#	t11 = printInt call 1
	movl    -12(%rbp), %edi
	call    printInt
	movl    %eax, -28(%rbp)
#	t12 = 0 = 
	movl    $0, -32(%rbp)
#	t12 =  return 
	movl    -32(%rbp), %eax
#	main =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
