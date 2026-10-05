	.globl donor_set

donor_set:
	# pointer p to donor in rdi
	# string type in rsi
	# age in edx
	mov $0, %rcx
	mov (%rsi,%rcx,1), %al  # base = rsi, index = rcx, width = 1
	mov %al, (%rdi,%rcx,1)
	inc %rcx
	mov (%rsi,%rcx,1), %al
	mov %al, (%rdi,%rcx,1)
	inc %rcx
        mov (%rsi,%rcx,1), %al
        mov %al, (%rdi,%rcx,1)
	inc %rcx
        mov (%rsi,%rcx,1), %al
        mov %al, (%rdi,%rcx,1)
	mov %edx, 4(%rdi)
	ret
