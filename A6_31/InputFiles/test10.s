	.file	"./InputFiles/test10.c"

#	Allocation of variables on the stack (Activation record):

#	binarySearch
#	l: -4
#	mid: -16
#	r: -8
#	t0: -20
#	t1: -24
#	t10: -28
#	t11: -32
#	t12: -36
#	t13: -40
#	t14: -44
#	t15: -48
#	t2: -52
#	t3: -56
#	t4: -60
#	t5: -64
#	t6: -68
#	t7: -72
#	t8: -76
#	t9: -80
#	x: -12
#	main
#	n: -4
#	result: -8
#	t16: -12
#	t17: -16
#	t18: -20
#	t19: -24
#	t20: -28
#	t21: -32
#	t22: -36
#	t23: -40
#	t24: -44
#	t25: -48
#	t26: -52
#	t27: -56
#	t28: -60
#	t29: -64
#	t30: -68
#	t31: -72
#	t32: -76
#	t33: -80
#	t34: -84
#	t35: -88
#	t36: -92
#	t37: -96
#	t38: -100
#	t39: -108
#	t40: -112
#	t41: -120
#	t42: -124
#	t43: -128
#	t44: -132
#	x: -136
#	printInt
#	n: -4
#	printStr
#	ch: -8
#	readInt
#	eP: -8

	.section	.rodata
.LC0:
	.string	"Element is not present in array"
.LC1:
	.string	"Element is present at index "
	.globl  arr
	.bss    
	.align  32
	.type   arr, @object
	.size   arr, 40
arr:
	.zero   40
#	binarySearch =  label 
	.text
	.globl  binarySearch
	.type   binarySearch, @function
binarySearch:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $80, %rsp
#	3
	movl    %edi, -4(%rbp)
	movl    %esi, -8(%rbp)
	movl    %edx, -12(%rbp)
#	5 = r >= l
	movl    -4(%rbp), %eax
	cmpl    %eax, -8(%rbp)
	jge     .L2
#	38 =  goto 
	jmp     .L3
#	38 =  goto 
	jmp     .L3
#	t0 = r - l
.L2:
	movl    -8(%rbp), %eax
	subl    -4(%rbp), %eax
	movl    %eax, -20(%rbp)
#	t1 = 2 = 
	movl    $2, -24(%rbp)
#	t2 = t0 / t1
	movl    -20(%rbp), %eax
	cdq     
	idivl   -24(%rbp)
	movl    %eax, -52(%rbp)
#	t3 = l + t2
	movl    -4(%rbp), %eax
	addl    -52(%rbp), %eax
	movl    %eax, -56(%rbp)
#	mid = t3 = 
	movl    -56(%rbp), %eax
	movl    %eax, -16(%rbp)
#	t4 = mid * 4
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -60(%rbp)
#	t5 = arr =[] t4
	movl    -60(%rbp), %eax
	cltq    
	leaq    arr(%rip) , %rdx
	movl    (%rax, %rdx), %eax
	movl    %eax, -64(%rbp)
#	15 = t5 == x
	movl    -12(%rbp), %eax
	cmpl    %eax, -64(%rbp)
	je      .L4
#	17 =  goto 
	jmp     .L5
#	17 =  goto 
	jmp     .L5
#	mid =  return 
.L4:
	movl    -16(%rbp), %eax
	jmp     .LFE0
#	17 =  goto 
	jmp     .L5
#	t6 = mid * 4
.L5:
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -68(%rbp)
#	t7 = arr =[] t6
	movl    -68(%rbp), %eax
	cltq    
	leaq    arr(%rip) , %rdx
	movl    (%rax, %rdx), %eax
	movl    %eax, -72(%rbp)
#	22 = t7 > x
	movl    -12(%rbp), %eax
	cmpl    %eax, -72(%rbp)
	jg      .L6
#	30 =  goto 
	jmp     .L7
#	30 =  goto 
	jmp     .L7
#	l =  param 
.L6:
#	t8 = 1 = 
	movl    $1, -76(%rbp)
#	t9 = mid - t8
	movl    -16(%rbp), %eax
	subl    -76(%rbp), %eax
	movl    %eax, -80(%rbp)
#	t9 =  param 
#	x =  param 
#	t10 = binarySearch call 3
	movl    -12(%rbp), %edx
	movl    -80(%rbp), %esi
	movl    -4(%rbp), %edi
	call    binarySearch
	movl    %eax, -28(%rbp)
#	t10 =  return 
	movl    -28(%rbp), %eax
	jmp     .LFE0
#	30 =  goto 
	jmp     .L7
#	t11 = 1 = 
.L7:
	movl    $1, -32(%rbp)
#	t12 = mid + t11
	movl    -16(%rbp), %eax
	addl    -32(%rbp), %eax
	movl    %eax, -36(%rbp)
#	t12 =  param 
#	r =  param 
#	x =  param 
#	t13 = binarySearch call 3
	movl    -12(%rbp), %edx
	movl    -8(%rbp), %esi
	movl    -36(%rbp), %edi
	call    binarySearch
	movl    %eax, -40(%rbp)
#	t13 =  return 
	movl    -40(%rbp), %eax
	jmp     .LFE0
#	38 =  goto 
	jmp     .L3
#	t14 = 1 = 
.L3:
	movl    $1, -44(%rbp)
#	t15 = t14 =- 
	movl    -44(%rbp), %eax
	negl    %eax
	movl    %eax, -48(%rbp)
#	t15 =  return 
	movl    -48(%rbp), %eax
#	binarySearch =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   binarySearch, .-binarySearch
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
	subq    $136, %rsp
#	0
#	t16 = 5 = 
	movl    $5, -12(%rbp)
#	n = t16 = 
	movl    -12(%rbp), %eax
	movl    %eax, -4(%rbp)
#	t17 = 0 = 
	movl    $0, -16(%rbp)
#	t18 = t17 * 4
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -20(%rbp)
#	t19 = 2 = 
	movl    $2, -24(%rbp)
#	arr = t18 []= t19
	movl    -20(%rbp), %eax
	cltq    
	movl    -24(%rbp), %ebx
	leaq    arr(%rip) , %rdx
	movl    %ebx, (%rax,%rdx)
#	t20 = 1 = 
	movl    $1, -28(%rbp)
#	t21 = t20 * 4
	movl    -28(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -32(%rbp)
#	t22 = 3 = 
	movl    $3, -36(%rbp)
#	arr = t21 []= t22
	movl    -32(%rbp), %eax
	cltq    
	movl    -36(%rbp), %ebx
	leaq    arr(%rip) , %rdx
	movl    %ebx, (%rax,%rdx)
#	t23 = 2 = 
	movl    $2, -40(%rbp)
#	t24 = t23 * 4
	movl    -40(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -44(%rbp)
#	t25 = 4 = 
	movl    $4, -48(%rbp)
#	arr = t24 []= t25
	movl    -44(%rbp), %eax
	cltq    
	movl    -48(%rbp), %ebx
	leaq    arr(%rip) , %rdx
	movl    %ebx, (%rax,%rdx)
#	t26 = 3 = 
	movl    $3, -52(%rbp)
#	t27 = t26 * 4
	movl    -52(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -56(%rbp)
#	t28 = 10 = 
	movl    $10, -60(%rbp)
#	arr = t27 []= t28
	movl    -56(%rbp), %eax
	cltq    
	movl    -60(%rbp), %ebx
	leaq    arr(%rip) , %rdx
	movl    %ebx, (%rax,%rdx)
#	t29 = 4 = 
	movl    $4, -64(%rbp)
#	t30 = t29 * 4
	movl    -64(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -68(%rbp)
#	t31 = 40 = 
	movl    $40, -72(%rbp)
#	arr = t30 []= t31
	movl    -68(%rbp), %eax
	cltq    
	movl    -72(%rbp), %ebx
	leaq    arr(%rip) , %rdx
	movl    %ebx, (%rax,%rdx)
#	t32 = 10 = 
	movl    $10, -76(%rbp)
#	x = t32 = 
	movl    -76(%rbp), %eax
	movl    %eax, -136(%rbp)
#	t33 = 0 = 
	movl    $0, -80(%rbp)
#	t33 =  param 
#	t34 = 1 = 
	movl    $1, -84(%rbp)
#	t35 = n - t34
	movl    -4(%rbp), %eax
	subl    -84(%rbp), %eax
	movl    %eax, -88(%rbp)
#	t35 =  param 
#	x =  param 
#	t36 = binarySearch call 3
	movl    -136(%rbp), %edx
	movl    -88(%rbp), %esi
	movl    -80(%rbp), %edi
	call    binarySearch
	movl    %eax, -92(%rbp)
#	result = t36 = 
	movl    -92(%rbp), %eax
	movl    %eax, -8(%rbp)
#	t37 = 1 = 
	movl    $1, -96(%rbp)
#	t38 = t37 =- 
	movl    -96(%rbp), %eax
	negl    %eax
	movl    %eax, -100(%rbp)
#	80 = result == t38
	movl    -100(%rbp), %eax
	cmpl    %eax, -8(%rbp)
	je      .L8
#	84 =  goto 
	jmp     .L9
#	89 =  goto 
	jmp     .L10
#	t39 = 0 =str 
.L8:
	movq    $.LC0, -108(%rbp)
#	t39 =  param 
#	t40 = printStr call 1
	movq    -108(%rbp), %rdi
	call    printStr
	movl    %eax, -112(%rbp)
#	89 =  goto 
	jmp     .L10
#	t41 = 1 =str 
.L9:
	movq    $.LC1, -120(%rbp)
#	t41 =  param 
#	t42 = printStr call 1
	movq    -120(%rbp), %rdi
	call    printStr
	movl    %eax, -124(%rbp)
#	result =  param 
#	t43 = printInt call 1
	movl    -8(%rbp), %edi
	call    printInt
	movl    %eax, -128(%rbp)
#	t44 = 0 = 
.L10:
	movl    $0, -132(%rbp)
#	t44 =  return 
	movl    -132(%rbp), %eax
#	main =  labelend 
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
