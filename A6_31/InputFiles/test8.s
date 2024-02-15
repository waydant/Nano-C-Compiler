	.file	"./InputFiles/test8.c"

#	Allocation of variables on the stack (Activation record):

#	f_even
#	n: -4
#	t16: -8
#	t17: -12
#	t18: -16
#	t19: -20
#	t20: -24
#	t21: -28
#	t22: -32
#	t23: -36
#	t24: -40
#	t25: -44
#	f_odd
#	n: -4
#	t10: -8
#	t11: -12
#	t12: -16
#	t13: -20
#	t14: -24
#	t15: -28
#	t6: -32
#	t7: -36
#	t8: -40
#	t9: -44
#	fibonacci
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
#	t26: -12
#	t27: -16
#	t28: -24
#	t29: -28
#	t30: -32
#	t31: -40
#	t32: -44
#	t33: -48
#	t34: -52
#	printInt
#	n: -4
#	printStr
#	ch: -8
#	readInt
#	eP: -8

	.section	.rodata
.LC0:
	.string	"fibo("
.LC1:
	.string	") = "
#	fibonacci =  label 
	.text
	.globl  fibonacci
	.type   fibonacci, @function
fibonacci:
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
#	t0 = 2 = 
	movl    $2, -8(%rbp)
#	t1 = n % t0
	movl    -4(%rbp), %eax
	cdq     
	idivl   -8(%rbp)
	movl    %edx, -12(%rbp)
#	t2 = 0 = 
	movl    $0, -16(%rbp)
#	8 = t1 == t2
	movl    -16(%rbp), %eax
	cmpl    %eax, -12(%rbp)
	je      .L4
#	11 =  goto 
	jmp     .L5
#	17 =  goto 
	jmp     .L6
#	n =  param 
.L4:
#	t3 = f_even call 1
	movl    -4(%rbp), %edi
	call    f_even
	movl    %eax, -20(%rbp)
#	15 =  goto 
	jmp     .L7
#	n =  param 
.L5:
#	t4 = f_odd call 1
	movl    -4(%rbp), %edi
	call    f_odd
	movl    %eax, -24(%rbp)
#	t5 = t4 = 
	movl    -24(%rbp), %eax
	movl    %eax, -28(%rbp)
#	17 =  goto 
	jmp     .L6
#	t5 = t3 = 
.L7:
	movl    -20(%rbp), %eax
	movl    %eax, -28(%rbp)
#	17 =  goto 
	jmp     .L6
#	t5 =  return 
.L6:
	movl    -28(%rbp), %eax
#	fibonacci =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   fibonacci, .-fibonacci
#	f_odd =  label 
	.text
	.globl  f_odd
	.type   f_odd, @function
f_odd:
.LFB1:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $44, %rsp
#	1
	movl    %edi, -4(%rbp)
#	t6 = 1 = 
	movl    $1, -32(%rbp)
#	24 = n == t6
	movl    -32(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	je      .L8
#	26 =  goto 
	jmp     .L9
#	39 =  goto 
	jmp     .L10
#	t7 = 1 = 
.L8:
	movl    $1, -36(%rbp)
#	37 =  goto 
	jmp     .L11
#	t8 = 1 = 
.L9:
	movl    $1, -40(%rbp)
#	t9 = n - t8
	movl    -4(%rbp), %eax
	subl    -40(%rbp), %eax
	movl    %eax, -44(%rbp)
#	t9 =  param 
#	t10 = f_even call 1
	movl    -44(%rbp), %edi
	call    f_even
	movl    %eax, -8(%rbp)
#	t11 = 2 = 
	movl    $2, -12(%rbp)
#	t12 = n - t11
	movl    -4(%rbp), %eax
	subl    -12(%rbp), %eax
	movl    %eax, -16(%rbp)
#	t12 =  param 
#	t13 = f_odd call 1
	movl    -16(%rbp), %edi
	call    f_odd
	movl    %eax, -20(%rbp)
#	t14 = t10 + t13
	movl    -8(%rbp), %eax
	addl    -20(%rbp), %eax
	movl    %eax, -24(%rbp)
#	t15 = t14 = 
	movl    -24(%rbp), %eax
	movl    %eax, -28(%rbp)
#	39 =  goto 
	jmp     .L10
#	t15 = t7 = 
.L11:
	movl    -36(%rbp), %eax
	movl    %eax, -28(%rbp)
#	39 =  goto 
	jmp     .L10
#	t15 =  return 
.L10:
	movl    -28(%rbp), %eax
#	f_odd =  labelend 
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   f_odd, .-f_odd
#	f_even =  label 
	.text
	.globl  f_even
	.type   f_even, @function
f_even:
.LFB2:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $44, %rsp
#	1
	movl    %edi, -4(%rbp)
#	t16 = 0 = 
	movl    $0, -8(%rbp)
#	46 = n == t16
	movl    -8(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	je      .L12
#	48 =  goto 
	jmp     .L13
#	61 =  goto 
	jmp     .L14
#	t17 = 0 = 
.L12:
	movl    $0, -12(%rbp)
#	59 =  goto 
	jmp     .L15
#	t18 = 1 = 
.L13:
	movl    $1, -16(%rbp)
#	t19 = n - t18
	movl    -4(%rbp), %eax
	subl    -16(%rbp), %eax
	movl    %eax, -20(%rbp)
#	t19 =  param 
#	t20 = f_odd call 1
	movl    -20(%rbp), %edi
	call    f_odd
	movl    %eax, -24(%rbp)
#	t21 = 2 = 
	movl    $2, -28(%rbp)
#	t22 = n - t21
	movl    -4(%rbp), %eax
	subl    -28(%rbp), %eax
	movl    %eax, -32(%rbp)
#	t22 =  param 
#	t23 = f_even call 1
	movl    -32(%rbp), %edi
	call    f_even
	movl    %eax, -36(%rbp)
#	t24 = t20 + t23
	movl    -24(%rbp), %eax
	addl    -36(%rbp), %eax
	movl    %eax, -40(%rbp)
#	t25 = t24 = 
	movl    -40(%rbp), %eax
	movl    %eax, -44(%rbp)
#	61 =  goto 
	jmp     .L14
#	t25 = t17 = 
.L15:
	movl    -12(%rbp), %eax
	movl    %eax, -44(%rbp)
#	61 =  goto 
	jmp     .L14
#	t25 =  return 
.L14:
	movl    -44(%rbp), %eax
#	f_even =  labelend 
.LFE2:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   f_even, .-f_even
#	main =  label 
	.text
	.globl  main
	.type   main, @function
main:
.LFB3:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $52, %rsp
#	0
#	t26 = 10 = 
	movl    $10, -12(%rbp)
#	n = t26 = 
	movl    -12(%rbp), %eax
	movl    %eax, -4(%rbp)
#	n =  param 
#	t27 = fibonacci call 1
	movl    -4(%rbp), %edi
	call    fibonacci
	movl    %eax, -16(%rbp)
#	r = t27 = 
	movl    -16(%rbp), %eax
	movl    %eax, -8(%rbp)
#	t28 = 0 =str 
	movq    $.LC0, -24(%rbp)
#	t28 =  param 
#	t29 = printStr call 1
	movq    -24(%rbp), %rdi
	call    printStr
	movl    %eax, -28(%rbp)
#	n =  param 
#	t30 = printInt call 1
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -32(%rbp)
#	t31 = 1 =str 
	movq    $.LC1, -40(%rbp)
#	t31 =  param 
#	t32 = printStr call 1
	movq    -40(%rbp), %rdi
	call    printStr
	movl    %eax, -44(%rbp)
#	r =  param 
#	t33 = printInt call 1
	movl    -8(%rbp), %edi
	call    printInt
	movl    %eax, -48(%rbp)
#	t34 = 0 = 
	movl    $0, -52(%rbp)
#	t34 =  return 
	movl    -52(%rbp), %eax
#	main =  labelend 
.LFE3:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
