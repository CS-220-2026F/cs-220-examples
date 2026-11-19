	xor %rax,%rax
	xor %rdi,%rdi
	xor %rdx,%rdx
	mov $1, %al # 1 is the system call number for write
	mov $1, %dil # 1 is the file descriptor for stdout
	mov $0x6868686f6c6c6568, %rbx # ascii values for hello
	push %rbx
	mov %rsp, %rsi # rsp points to buffer we want to print
	mov $6, %dl
	syscall
	pop %rbx
	ret
	nop
	nop
	nop
	nop
	nop
	nop
