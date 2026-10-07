	.global sum_asm

sum_asm:
	# $rdi = ary
	# $rsi = length of array
	mov $0, %rdx
	mov $0, %eax # eax = sum
	jmp .L0
.L1:
	add (%rdi, %rdx, 4), %eax
	inc %rdx
.L0:
	cmp %rsi, %rdx
	jl .L1 # rdx < rsi
	ret
