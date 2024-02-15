	.file	"./InputFiles/test1.c"

#	Allocation of variables on the stack (Activation record):

#	main
#	t0: -4
#	t1: -8
#	t10: -12
#	t2: -16
#	t3: -20
#	t4: -28
#	t5: -32
#	t6: -36
#	t7: -44
#	t8: -48
#	t9: -52
#	x: -56
#	y: -60
#	z: -64
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
	subq    $64, %rsp
#	0
#	t0 = 2 = 
	movl    $2, -4(%rbp)
#	x = t0 = 
	movl    -4(%rbp), %eax
	movl    %eax, -56(%rbp)
#	t1 = 3 = 
	movl    $3, -8(%rbp)
#	y = t1 = 
	movl    -8(%rbp), %eax
	movl    %eax, -60(%rbp)
#	t2 = x + y
	movl    -56(%rbp), %eax
	addl    -60(%rbp), %eax
	movl    %eax, -16(%rbp)
#	z = t2 = 
	movl    -16(%rbp), %eax
	movl    %eax, -64(%rbp)
#	x =  param 
#	t3 = printInt call 1
	movl    -56(%rbp), %edi
	call    printInt
	movl    %eax, -20(%rbp)
#	t4 = 0 =str 
	movq    $.LC0, -28(%rbp)
#	t4 =  param 
#	t5 = printStr call 1
	movq    -28(%rbp), %rdi
	call    printStr
	movl    %eax, -32(%rbp)
#	y =  param 
#	t6 = printInt call 1
	movl    -60(%rbp), %edi
	call    printInt
	movl    %eax, -36(%rbp)
#	t7 = 1 =str 
	movq    $.LC1, -44(%rbp)
#	t7 =  param 
#	t8 = printStr call 1
	movq    -44(%rbp), %rdi
	call    printStr
	movl    %eax, -48(%rbp)
#	z =  param 
#	t9 = printInt call 1
	movl    -64(%rbp), %edi
	call    printInt
	movl    %eax, -52(%rbp)
#	t10 = 0 = 
	movl    $0, -12(%rbp)
#	t10 =  return 
	movl    -12(%rbp), %eax
#	main =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
