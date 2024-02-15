	.file	"./InputFiles/test2.c"

#	Allocation of variables on the stack (Activation record):

#	main
#	m: -4
#	t0: -8
#	t1: -12
#	t10: -16
#	t11: -24
#	t12: -28
#	t13: -32
#	t14: -40
#	t15: -44
#	t16: -48
#	t17: -52
#	t2: -56
#	t3: -60
#	t4: -64
#	t5: -72
#	t6: -76
#	t7: -80
#	t8: -88
#	t9: -92
#	x: -96
#	y: -100
#	z: -104
#	printInt
#	n: -4
#	printStr
#	ch: -8
#	readInt
#	eP: -8

	.section	.rodata
.LC0:
	.string	"max("
.LC1:
	.string	", "
.LC2:
	.string	", "
.LC3:
	.string	") = "
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
	subq    $104, %rsp
#	0
#	t0 = 2 = 
	movl    $2, -8(%rbp)
#	x = t0 = 
	movl    -8(%rbp), %eax
	movl    %eax, -96(%rbp)
#	t1 = 3 = 
	movl    $3, -12(%rbp)
#	y = t1 = 
	movl    -12(%rbp), %eax
	movl    %eax, -100(%rbp)
#	t2 = 1 = 
	movl    $1, -56(%rbp)
#	z = t2 = 
	movl    -56(%rbp), %eax
	movl    %eax, -104(%rbp)
#	11 = x > y
	movl    -100(%rbp), %eax
	cmpl    %eax, -96(%rbp)
	jg      .L1
#	12 =  goto 
	jmp     .L2
#	16 =  goto 
	jmp     .L3
#	14 =  goto 
.L1:
	jmp     .L4
#	t3 = y = 
.L2:
	movl    -100(%rbp), %eax
	movl    %eax, -60(%rbp)
#	16 =  goto 
	jmp     .L3
#	t3 = x = 
.L4:
	movl    -96(%rbp), %eax
	movl    %eax, -60(%rbp)
#	16 =  goto 
	jmp     .L3
#	m = t3 = 
.L3:
	movl    -60(%rbp), %eax
	movl    %eax, -4(%rbp)
#	20 = m > z
	movl    -104(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	jg      .L5
#	21 =  goto 
	jmp     .L6
#	25 =  goto 
	jmp     .L7
#	23 =  goto 
.L5:
	jmp     .L8
#	t4 = z = 
.L6:
	movl    -104(%rbp), %eax
	movl    %eax, -64(%rbp)
#	25 =  goto 
	jmp     .L7
#	t4 = m = 
.L8:
	movl    -4(%rbp), %eax
	movl    %eax, -64(%rbp)
#	25 =  goto 
	jmp     .L7
#	m = t4 = 
.L7:
	movl    -64(%rbp), %eax
	movl    %eax, -4(%rbp)
#	t5 = 0 =str 
	movq    $.LC0, -72(%rbp)
#	t5 =  param 
#	t6 = printStr call 1
	movq    -72(%rbp), %rdi
	call    printStr
	movl    %eax, -76(%rbp)
#	x =  param 
#	t7 = printInt call 1
	movl    -96(%rbp), %edi
	call    printInt
	movl    %eax, -80(%rbp)
#	t8 = 1 =str 
	movq    $.LC1, -88(%rbp)
#	t8 =  param 
#	t9 = printStr call 1
	movq    -88(%rbp), %rdi
	call    printStr
	movl    %eax, -92(%rbp)
#	y =  param 
#	t10 = printInt call 1
	movl    -100(%rbp), %edi
	call    printInt
	movl    %eax, -16(%rbp)
#	t11 = 2 =str 
	movq    $.LC2, -24(%rbp)
#	t11 =  param 
#	t12 = printStr call 1
	movq    -24(%rbp), %rdi
	call    printStr
	movl    %eax, -28(%rbp)
#	z =  param 
#	t13 = printInt call 1
	movl    -104(%rbp), %edi
	call    printInt
	movl    %eax, -32(%rbp)
#	t14 = 3 =str 
	movq    $.LC3, -40(%rbp)
#	t14 =  param 
#	t15 = printStr call 1
	movq    -40(%rbp), %rdi
	call    printStr
	movl    %eax, -44(%rbp)
#	m =  param 
#	t16 = printInt call 1
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -48(%rbp)
#	t17 = 0 = 
	movl    $0, -52(%rbp)
#	t17 =  return 
	movl    -52(%rbp), %eax
#	main =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
