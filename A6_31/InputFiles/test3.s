	.file	"./InputFiles/test3.c"

#	Allocation of variables on the stack (Activation record):

#	main
#	t0: -8
#	t1: -12
#	t10: -16
#	t11: -20
#	t12: -24
#	t2: -32
#	t3: -36
#	t4: -40
#	t5: -44
#	t6: -52
#	t7: -56
#	t8: -60
#	t9: -68
#	x: -72
#	y: -76
#	z: -80
#	printInt
#	n: -4
#	printStr
#	ch: -8
#	readInt
#	eP: -8

	.section	.rodata
.LC0:
	.string	"+"
.LC1:
	.string	" = "
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
	subq    $80, %rsp
#	0
#	t0 = x =& 
	leaq    -72(%rbp), %rax
	movq    %rax, -8(%rbp)
#	t0 =  param 
#	t1 = readInt call 1
	movq    -8(%rbp), %rdi
	call    readInt
	movl    %eax, -12(%rbp)
#	t2 = y =& 
	leaq    -76(%rbp), %rax
	movq    %rax, -32(%rbp)
#	t2 =  param 
#	t3 = readInt call 1
	movq    -32(%rbp), %rdi
	call    readInt
	movl    %eax, -36(%rbp)
#	t4 = x + y
	movl    -72(%rbp), %eax
	addl    -76(%rbp), %eax
	movl    %eax, -40(%rbp)
#	z = t4 = 
	movl    -40(%rbp), %eax
	movl    %eax, -80(%rbp)
#	x =  param 
#	t5 = printInt call 1
	movl    -72(%rbp), %edi
	call    printInt
	movl    %eax, -44(%rbp)
#	t6 = 0 =str 
	movq    $.LC0, -52(%rbp)
#	t6 =  param 
#	t7 = printStr call 1
	movq    -52(%rbp), %rdi
	call    printStr
	movl    %eax, -56(%rbp)
#	y =  param 
#	t8 = printInt call 1
	movl    -76(%rbp), %edi
	call    printInt
	movl    %eax, -60(%rbp)
#	t9 = 1 =str 
	movq    $.LC1, -68(%rbp)
#	t9 =  param 
#	t10 = printStr call 1
	movq    -68(%rbp), %rdi
	call    printStr
	movl    %eax, -16(%rbp)
#	z =  param 
#	t11 = printInt call 1
	movl    -80(%rbp), %edi
	call    printInt
	movl    %eax, -20(%rbp)
#	t12 = 0 = 
	movl    $0, -24(%rbp)
#	t12 =  return 
	movl    -24(%rbp), %eax
#	main =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
