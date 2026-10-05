	.global add_asm
	.global sub_asm
add_asm:
	# first arg in edi
	# second arg in esi
	# return val goes in eax
	mov %edi, %eax
	add %esi, %eax
	ret
	
sub_asm:
	mov %edi, %eax
	sub %esi, %eax
	ret
