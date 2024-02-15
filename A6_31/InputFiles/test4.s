	.file	"./InputFiles/test4.c"

#	Allocation of variables on the stack (Activation record):

#	main
#	t10: -8
#	t11: -12
#	t12: -16
#	t13: -24
#	t14: -28
#	t15: -32
#	t16: -40
#	t17: -48
#	t19: -56
#	t20: -60
#	t21: -68
#	t22: -72
#	t23: -76
#	t24: -84
#	t25: -88
#	t26: -92
#	t27: -96
#	t4: -104
#	t5: -108
#	t6: -116
#	t7: -120
#	t8: -128
#	t9: -132
#	x: -136
#	y: -140
#	printInt
#	n: -4
#	printStr
#	ch: -8
#	readInt
#	eP: -8
#	swap
#	p: -8
#	q: -16
#	t: -20
#	t0: -24
#	t1: -28
#	t2: -32
#	t3: -36

	.section	.rodata
.LC0:
	.string	"Before swap:\n"
.LC1:
	.string	"x = "
.LC2:
	.string	" y = "
.LC3:
	.string	"\nAfter swap:\n"
.LC4:
	.string	"x = "
.LC5:
	.string	" y = "
#	swap =  label 
	.text
	.globl  swap
	.type   swap, @function
swap:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $36, %rsp
#	2
	movq    %rdi, -8(%rbp)
	movq    %rsi, -16(%rbp)
#	t0 = p =* 
	movq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -24(%rbp)
#	t = t0 = 
	movl    -24(%rbp), %eax
	movl    %eax, -20(%rbp)
#	t1 = p =* 
	movq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -28(%rbp)
#	t2 = q =* 
	movq    -16(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -32(%rbp)
#	p = t2 *= 
	movl    -32(%rbp), %eax
	movq    -8(%rbp), %rbx
	movl    %eax, (%rbx)
#	t3 = q =* 
	movq    -16(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -36(%rbp)
#	q = t *= 
	movl    -20(%rbp), %eax
	movq    -16(%rbp), %rbx
	movl    %eax, (%rbx)
#	 =  return 
#	swap =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   swap, .-swap
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
	subq    $140, %rsp
#	0
#	t4 = x =& 
	leaq    -136(%rbp), %rax
	movq    %rax, -104(%rbp)
#	t4 =  param 
#	t5 = readInt call 1
	movq    -104(%rbp), %rdi
	call    readInt
	movl    %eax, -108(%rbp)
#	t6 = y =& 
	leaq    -140(%rbp), %rax
	movq    %rax, -116(%rbp)
#	t6 =  param 
#	t7 = readInt call 1
	movq    -116(%rbp), %rdi
	call    readInt
	movl    %eax, -120(%rbp)
#	t8 = 0 =str 
	movq    $.LC0, -128(%rbp)
#	t8 =  param 
#	t9 = printStr call 1
	movq    -128(%rbp), %rdi
	call    printStr
	movl    %eax, -132(%rbp)
#	t10 = 1 =str 
	movq    $.LC1, -8(%rbp)
#	t10 =  param 
#	t11 = printStr call 1
	movq    -8(%rbp), %rdi
	call    printStr
	movl    %eax, -12(%rbp)
#	x =  param 
#	t12 = printInt call 1
	movl    -136(%rbp), %edi
	call    printInt
	movl    %eax, -16(%rbp)
#	t13 = 2 =str 
	movq    $.LC2, -24(%rbp)
#	t13 =  param 
#	t14 = printStr call 1
	movq    -24(%rbp), %rdi
	call    printStr
	movl    %eax, -28(%rbp)
#	y =  param 
#	t15 = printInt call 1
	movl    -140(%rbp), %edi
	call    printInt
	movl    %eax, -32(%rbp)
#	t16 = x =& 
	leaq    -136(%rbp), %rax
	movq    %rax, -40(%rbp)
#	t16 =  param 
#	t17 = y =& 
	leaq    -140(%rbp), %rax
	movq    %rax, -48(%rbp)
#	t17 =  param 
#	t18 = swap call 2
	movq    -48(%rbp), %rsi
	movq    -40(%rbp), %rdi
	call    swap
#	t19 = 3 =str 
	movq    $.LC3, -56(%rbp)
#	t19 =  param 
#	t20 = printStr call 1
	movq    -56(%rbp), %rdi
	call    printStr
	movl    %eax, -60(%rbp)
#	t21 = 4 =str 
	movq    $.LC4, -68(%rbp)
#	t21 =  param 
#	t22 = printStr call 1
	movq    -68(%rbp), %rdi
	call    printStr
	movl    %eax, -72(%rbp)
#	x =  param 
#	t23 = printInt call 1
	movl    -136(%rbp), %edi
	call    printInt
	movl    %eax, -76(%rbp)
#	t24 = 5 =str 
	movq    $.LC5, -84(%rbp)
#	t24 =  param 
#	t25 = printStr call 1
	movq    -84(%rbp), %rdi
	call    printStr
	movl    %eax, -88(%rbp)
#	y =  param 
#	t26 = printInt call 1
	movl    -140(%rbp), %edi
	call    printInt
	movl    %eax, -92(%rbp)
#	t27 = 0 = 
	movl    $0, -96(%rbp)
#	t27 =  return 
	movl    -96(%rbp), %eax
#	main =  labelend 
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
