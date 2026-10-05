	.globl swap_asm
swap_asm:
	mov (%rdi), %edx
	mov (%rsi), %eax
	mov %edx, (%rsi)
	mov %eax, (%rdi)
	ret
