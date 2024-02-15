	.file	"./InputFiles/test9.c"

#	Allocation of variables on the stack (Activation record):

#	bubbleSort
#	i: -8
#	j: -12
#	n: -4
#	t22: -16
#	t23: -20
#	t24: -24
#	t25: -28
#	t26: -32
#	t27: -36
#	t28: -40
#	t29: -44
#	t30: -48
#	t31: -52
#	t32: -56
#	t33: -60
#	t34: -64
#	t35: -68
#	t36: -72
#	t37: -76
#	t38: -80
#	t39: -84
#	t40: -92
#	t41: -96
#	t42: -100
#	t43: -104
#	t44: -112
#	main
#	n: -4
#	t46: -12
#	t47: -16
#	t48: -24
#	t49: -28
#	t50: -36
#	t51: -40
#	t53: -48
#	t54: -52
#	t57: -60
#	t58: -64
#	t60: -68
#	printArray
#	i: -8
#	size: -4
#	t12: -12
#	t13: -16
#	t14: -20
#	t15: -24
#	t16: -28
#	t17: -32
#	t18: -40
#	t19: -44
#	t20: -52
#	t21: -56
#	printInt
#	n: -4
#	printStr
#	ch: -8
#	readArray
#	i: -8
#	m: -12
#	size: -4
#	t10: -16
#	t11: -20
#	t4: -24
#	t5: -28
#	t6: -32
#	t7: -40
#	t8: -44
#	t9: -52
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
	.string	"Input next element\n"
.LC1:
	.string	" "
.LC2:
	.string	"\n"
.LC3:
	.string	"Input array size: \n"
.LC4:
	.string	"Input array elements: \n"
.LC5:
	.string	"Input array: \n"
.LC6:
	.string	"Sorted array: \n"
	.globl  arr
	.bss    
	.align  32
	.type   arr, @object
	.size   arr, 80
arr:
	.zero   80
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
#	swap =  labelend 
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   swap, .-swap
#	readArray =  label 
	.text
	.globl  readArray
	.type   readArray, @function
readArray:
.LFB1:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $52, %rsp
#	1
	movl    %edi, -4(%rbp)
#	t4 = 0 = 
	movl    $0, -24(%rbp)
#	i = t4 = 
	movl    -24(%rbp), %eax
	movl    %eax, -8(%rbp)
#	19 = i < size
.L6:
	movl    -4(%rbp), %eax
	cmpl    %eax, -8(%rbp)
	jl      .L5
#	29 =  goto 
	jmp     .LFE1
#	t5 = 1 = 
.L7:
	movl    $1, -28(%rbp)
#	t6 = i + t5
	movl    -8(%rbp), %eax
	addl    -28(%rbp), %eax
	movl    %eax, -32(%rbp)
#	i = t6 = 
	movl    -32(%rbp), %eax
	movl    %eax, -8(%rbp)
#	13 =  goto 
	jmp     .L6
#	t7 = 0 =str 
.L5:
	movq    $.LC0, -40(%rbp)
#	t7 =  param 
#	t8 = printStr call 1
	movq    -40(%rbp), %rdi
	call    printStr
	movl    %eax, -44(%rbp)
#	t9 = m =& 
	leaq    -12(%rbp), %rax
	movq    %rax, -52(%rbp)
#	t9 =  param 
#	t10 = readInt call 1
	movq    -52(%rbp), %rdi
	call    readInt
	movl    %eax, -16(%rbp)
#	m = t10 = 
	movl    -16(%rbp), %eax
	movl    %eax, -12(%rbp)
#	t11 = i * 4
	movl    -8(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -20(%rbp)
#	arr = t11 []= m
	movl    -20(%rbp), %eax
	cltq    
	movl    -12(%rbp), %ebx
	leaq    arr(%rip) , %rdx
	movl    %ebx, (%rax,%rdx)
#	15 =  goto 
	jmp     .L7
#	readArray =  labelend 
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   readArray, .-readArray
#	printArray =  label 
	.text
	.globl  printArray
	.type   printArray, @function
printArray:
.LFB2:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $56, %rsp
#	1
	movl    %edi, -4(%rbp)
#	t12 = 0 = 
	movl    $0, -12(%rbp)
#	i = t12 = 
	movl    -12(%rbp), %eax
	movl    %eax, -8(%rbp)
#	39 = i < size
.L10:
	movl    -4(%rbp), %eax
	cmpl    %eax, -8(%rbp)
	jl      .L8
#	47 =  goto 
	jmp     .L9
#	t13 = 1 = 
.L11:
	movl    $1, -16(%rbp)
#	t14 = i + t13
	movl    -8(%rbp), %eax
	addl    -16(%rbp), %eax
	movl    %eax, -20(%rbp)
#	i = t14 = 
	movl    -20(%rbp), %eax
	movl    %eax, -8(%rbp)
#	33 =  goto 
	jmp     .L10
#	t15 = i * 4
.L8:
	movl    -8(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -24(%rbp)
#	t16 = arr =[] t15
	movl    -24(%rbp), %eax
	cltq    
	leaq    arr(%rip) , %rdx
	movl    (%rax, %rdx), %eax
	movl    %eax, -28(%rbp)
#	t16 =  param 
#	t17 = printInt call 1
	movl    -28(%rbp), %edi
	call    printInt
	movl    %eax, -32(%rbp)
#	t18 = 1 =str 
	movq    $.LC1, -40(%rbp)
#	t18 =  param 
#	t19 = printStr call 1
	movq    -40(%rbp), %rdi
	call    printStr
	movl    %eax, -44(%rbp)
#	35 =  goto 
	jmp     .L11
#	t20 = 2 =str 
.L9:
	movq    $.LC2, -52(%rbp)
#	t20 =  param 
#	t21 = printStr call 1
	movq    -52(%rbp), %rdi
	call    printStr
	movl    %eax, -56(%rbp)
#	printArray =  labelend 
.LFE2:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   printArray, .-printArray
#	bubbleSort =  label 
	.text
	.globl  bubbleSort
	.type   bubbleSort, @function
bubbleSort:
.LFB3:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $112, %rsp
#	1
	movl    %edi, -4(%rbp)
#	t22 = 0 = 
	movl    $0, -16(%rbp)
#	i = t22 = 
	movl    -16(%rbp), %eax
	movl    %eax, -8(%rbp)
#	t23 = 1 = 
.L13:
	movl    $1, -20(%rbp)
#	t24 = n - t23
	movl    -4(%rbp), %eax
	subl    -20(%rbp), %eax
	movl    %eax, -24(%rbp)
#	62 = i < t24
	movl    -24(%rbp), %eax
	cmpl    %eax, -8(%rbp)
	jl      .L12
#	94 =  goto 
	jmp     .LFE3
#	t25 = 1 = 
.L15:
	movl    $1, -28(%rbp)
#	t26 = i + t25
	movl    -8(%rbp), %eax
	addl    -28(%rbp), %eax
	movl    %eax, -32(%rbp)
#	i = t26 = 
	movl    -32(%rbp), %eax
	movl    %eax, -8(%rbp)
#	54 =  goto 
	jmp     .L13
#	t27 = 0 = 
.L12:
	movl    $0, -36(%rbp)
#	j = t27 = 
	movl    -36(%rbp), %eax
	movl    %eax, -12(%rbp)
#	t28 = n - i
.L16:
	movl    -4(%rbp), %eax
	subl    -8(%rbp), %eax
	movl    %eax, -40(%rbp)
#	t29 = 1 = 
	movl    $1, -44(%rbp)
#	t30 = t28 - t29
	movl    -40(%rbp), %eax
	subl    -44(%rbp), %eax
	movl    %eax, -48(%rbp)
#	73 = j < t30
	movl    -48(%rbp), %eax
	cmpl    %eax, -12(%rbp)
	jl      .L14
#	58 =  goto 
	jmp     .L15
#	t31 = 1 = 
.L18:
	movl    $1, -52(%rbp)
#	t32 = j + t31
	movl    -12(%rbp), %eax
	addl    -52(%rbp), %eax
	movl    %eax, -56(%rbp)
#	j = t32 = 
	movl    -56(%rbp), %eax
	movl    %eax, -12(%rbp)
#	64 =  goto 
	jmp     .L16
#	t33 = j * 4
.L14:
	movl    -12(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -60(%rbp)
#	t34 = arr =[] t33
	movl    -60(%rbp), %eax
	cltq    
	leaq    arr(%rip) , %rdx
	movl    (%rax, %rdx), %eax
	movl    %eax, -64(%rbp)
#	t35 = 1 = 
	movl    $1, -68(%rbp)
#	t36 = j + t35
	movl    -12(%rbp), %eax
	addl    -68(%rbp), %eax
	movl    %eax, -72(%rbp)
#	t37 = t36 * 4
	movl    -72(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -76(%rbp)
#	t38 = arr =[] t37
	movl    -76(%rbp), %eax
	cltq    
	leaq    arr(%rip) , %rdx
	movl    (%rax, %rdx), %eax
	movl    %eax, -80(%rbp)
#	82 = t34 > t38
	movl    -80(%rbp), %eax
	cmpl    %eax, -64(%rbp)
	jg      .L17
#	69 =  goto 
	jmp     .L18
#	92 =  goto 
	jmp     .L19
#	t39 = j * 4
.L17:
	movl    -12(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -84(%rbp)
#	t40 = arr =& 
	leaq    arr(%rip) , %rdx
	leaq    (%rax,%rdx), %rax
	movq    %rax, -92(%rbp)
#	t40 =  param 
#	t41 = 1 = 
	movl    $1, -96(%rbp)
#	t42 = j + t41
	movl    -12(%rbp), %eax
	addl    -96(%rbp), %eax
	movl    %eax, -100(%rbp)
#	t43 = t42 * 4
	movl    -100(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -104(%rbp)
#	t44 = arr =& 
	leaq    arr(%rip) , %rdx
	leaq    (%rax,%rdx), %rax
	movq    %rax, -112(%rbp)
#	t44 =  param 
#	t45 = swap call 2
	movq    -112(%rbp), %rsi
	movq    -92(%rbp), %rdi
	call    swap
#	69 =  goto 
	jmp     .L18
#	69 =  goto 
.L19:
	jmp     .L18
#	58 =  goto 
	jmp     .L15
#	bubbleSort =  labelend 
.LFE3:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   bubbleSort, .-bubbleSort
#	main =  label 
	.text
	.globl  main
	.type   main, @function
main:
.LFB4:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $68, %rsp
#	0
#	t46 = 3 =str 
	movq    $.LC3, -12(%rbp)
#	t46 =  param 
#	t47 = printStr call 1
	movq    -12(%rbp), %rdi
	call    printStr
	movl    %eax, -16(%rbp)
#	t48 = n =& 
	leaq    -4(%rbp), %rax
	movq    %rax, -24(%rbp)
#	t48 =  param 
#	t49 = readInt call 1
	movq    -24(%rbp), %rdi
	call    readInt
	movl    %eax, -28(%rbp)
#	t50 = 4 =str 
	movq    $.LC4, -36(%rbp)
#	t50 =  param 
#	t51 = printStr call 1
	movq    -36(%rbp), %rdi
	call    printStr
	movl    %eax, -40(%rbp)
#	n =  param 
#	t52 = readArray call 1
	movl    -4(%rbp), %edi
	call    readArray
#	t53 = 5 =str 
	movq    $.LC5, -48(%rbp)
#	t53 =  param 
#	t54 = printStr call 1
	movq    -48(%rbp), %rdi
	call    printStr
	movl    %eax, -52(%rbp)
#	n =  param 
#	t55 = printArray call 1
	movl    -4(%rbp), %edi
	call    printArray
#	n =  param 
#	t56 = bubbleSort call 1
	movl    -4(%rbp), %edi
	call    bubbleSort
#	t57 = 6 =str 
	movq    $.LC6, -60(%rbp)
#	t57 =  param 
#	t58 = printStr call 1
	movq    -60(%rbp), %rdi
	call    printStr
	movl    %eax, -64(%rbp)
#	n =  param 
#	t59 = printArray call 1
	movl    -4(%rbp), %edi
	call    printArray
#	t60 = 0 = 
	movl    $0, -68(%rbp)
#	t60 =  return 
	movl    -68(%rbp), %eax
#	main =  labelend 
.LFE4:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
