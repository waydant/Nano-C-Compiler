	.file	"./InputFiles/test6.c"

#	Allocation of variables on the stack (Activation record):

#	main
#	a: -40
#	i: -44
#	m: -48
#	n: -52
#	t0: -60
#	t1: -64
#	t10: -68
#	t11: -72
#	t12: -76
#	t13: -80
#	t14: -84
#	t15: -88
#	t16: -92
#	t17: -96
#	t18: -104
#	t19: -108
#	t2: -112
#	t20: -116
#	t21: -120
#	t22: -124
#	t23: -128
#	t24: -132
#	t25: -136
#	t26: -140
#	t27: -148
#	t28: -152
#	t29: -156
#	t3: -160
#	t30: -164
#	t31: -168
#	t32: -176
#	t33: -180
#	t34: -184
#	t35: -188
#	t4: -192
#	t5: -200
#	t6: -204
#	t7: -208
#	t8: -212
#	t9: -216
#	printInt
#	n: -4
#	printStr
#	ch: -8
#	readInt
#	eP: -8

	.section	.rodata
.LC0:
	.string	"Max of: "
.LC1:
	.string	", "
.LC2:
	.string	": = "
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
	subq    $216, %rsp
#	0
#	t0 = n =& 
	leaq    -52(%rbp), %rax
	movq    %rax, -60(%rbp)
#	t0 =  param 
#	t1 = readInt call 1
	movq    -60(%rbp), %rdi
	call    readInt
	movl    %eax, -64(%rbp)
#	t2 = 0 = 
	movl    $0, -112(%rbp)
#	i = t2 = 
	movl    -112(%rbp), %eax
	movl    %eax, -44(%rbp)
#	13 = i < n
.L3:
	movl    -52(%rbp), %eax
	cmpl    %eax, -44(%rbp)
	jl      .L1
#	19 =  goto 
	jmp     .L2
#	t3 = 1 = 
.L4:
	movl    $1, -160(%rbp)
#	t4 = i + t3
	movl    -44(%rbp), %eax
	addl    -160(%rbp), %eax
	movl    %eax, -192(%rbp)
#	i = t4 = 
	movl    -192(%rbp), %eax
	movl    %eax, -44(%rbp)
#	7 =  goto 
	jmp     .L3
#	t5 = m =& 
.L1:
	leaq    -48(%rbp), %rax
	movq    %rax, -200(%rbp)
#	t5 =  param 
#	t6 = readInt call 1
	movq    -200(%rbp), %rdi
	call    readInt
	movl    %eax, -204(%rbp)
#	t7 = i * 4
	movl    -44(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -208(%rbp)
#	a = t7 []= m
	movl    -208(%rbp), %eax
	cltq    
	movl    -48(%rbp), %ebx
	movl    %ebx, -40(%rbp, %rax,1)
#	9 =  goto 
	jmp     .L4
#	t8 = 0 = 
.L2:
	movl    $0, -212(%rbp)
#	t9 = t8 * 4
	movl    -212(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -216(%rbp)
#	t10 = a =[] t9
	movl    -216(%rbp), %eax
	cltq    
	movl    -40(%rbp, %rax, 1), %eax
	movl    %eax, -68(%rbp)
#	m = t10 = 
	movl    -68(%rbp), %eax
	movl    %eax, -48(%rbp)
#	t11 = 1 = 
	movl    $1, -72(%rbp)
#	i = t11 = 
	movl    -72(%rbp), %eax
	movl    %eax, -44(%rbp)
#	31 = i < n
.L7:
	movl    -52(%rbp), %eax
	cmpl    %eax, -44(%rbp)
	jl      .L5
#	41 =  goto 
	jmp     .L6
#	t12 = 1 = 
.L9:
	movl    $1, -76(%rbp)
#	t13 = i + t12
	movl    -44(%rbp), %eax
	addl    -76(%rbp), %eax
	movl    %eax, -80(%rbp)
#	i = t13 = 
	movl    -80(%rbp), %eax
	movl    %eax, -44(%rbp)
#	25 =  goto 
	jmp     .L7
#	t14 = i * 4
.L5:
	movl    -44(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -84(%rbp)
#	t15 = a =[] t14
	movl    -84(%rbp), %eax
	cltq    
	movl    -40(%rbp, %rax, 1), %eax
	movl    %eax, -88(%rbp)
#	36 = t15 > m
	movl    -48(%rbp), %eax
	cmpl    %eax, -88(%rbp)
	jg      .L8
#	27 =  goto 
	jmp     .L9
#	40 =  goto 
	jmp     .L10
#	t16 = i * 4
.L8:
	movl    -44(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -92(%rbp)
#	t17 = a =[] t16
	movl    -92(%rbp), %eax
	cltq    
	movl    -40(%rbp, %rax, 1), %eax
	movl    %eax, -96(%rbp)
#	m = t17 = 
	movl    -96(%rbp), %eax
	movl    %eax, -48(%rbp)
#	27 =  goto 
	jmp     .L9
#	27 =  goto 
.L10:
	jmp     .L9
#	t18 = 0 =str 
.L6:
	movq    $.LC0, -104(%rbp)
#	t18 =  param 
#	t19 = printStr call 1
	movq    -104(%rbp), %rdi
	call    printStr
	movl    %eax, -108(%rbp)
#	t20 = 0 = 
	movl    $0, -116(%rbp)
#	t21 = t20 * 4
	movl    -116(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -120(%rbp)
#	t22 = a =[] t21
	movl    -120(%rbp), %eax
	cltq    
	movl    -40(%rbp, %rax, 1), %eax
	movl    %eax, -124(%rbp)
#	t22 =  param 
#	t23 = printInt call 1
	movl    -124(%rbp), %edi
	call    printInt
	movl    %eax, -128(%rbp)
#	t24 = 1 = 
	movl    $1, -132(%rbp)
#	i = t24 = 
	movl    -132(%rbp), %eax
	movl    %eax, -44(%rbp)
#	57 = i < n
.L13:
	movl    -52(%rbp), %eax
	cmpl    %eax, -44(%rbp)
	jl      .L11
#	65 =  goto 
	jmp     .L12
#	t25 = 1 = 
.L14:
	movl    $1, -136(%rbp)
#	t26 = i + t25
	movl    -44(%rbp), %eax
	addl    -136(%rbp), %eax
	movl    %eax, -140(%rbp)
#	i = t26 = 
	movl    -140(%rbp), %eax
	movl    %eax, -44(%rbp)
#	51 =  goto 
	jmp     .L13
#	t27 = 1 =str 
.L11:
	movq    $.LC1, -148(%rbp)
#	t27 =  param 
#	t28 = printStr call 1
	movq    -148(%rbp), %rdi
	call    printStr
	movl    %eax, -152(%rbp)
#	t29 = i * 4
	movl    -44(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -156(%rbp)
#	t30 = a =[] t29
	movl    -156(%rbp), %eax
	cltq    
	movl    -40(%rbp, %rax, 1), %eax
	movl    %eax, -164(%rbp)
#	t30 =  param 
#	t31 = printInt call 1
	movl    -164(%rbp), %edi
	call    printInt
	movl    %eax, -168(%rbp)
#	53 =  goto 
	jmp     .L14
#	t32 = 2 =str 
.L12:
	movq    $.LC2, -176(%rbp)
#	t32 =  param 
#	t33 = printStr call 1
	movq    -176(%rbp), %rdi
	call    printStr
	movl    %eax, -180(%rbp)
#	m =  param 
#	t34 = printInt call 1
	movl    -48(%rbp), %edi
	call    printInt
	movl    %eax, -184(%rbp)
#	t35 = 0 = 
	movl    $0, -188(%rbp)
#	t35 =  return 
	movl    -188(%rbp), %eax
#	main =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
