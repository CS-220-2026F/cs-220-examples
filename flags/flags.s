	.global _start
	
_start:
        mov $0x81, %al
        add $0x7F, %al
        nop
        mov $0x81, %al
        mov $0x7F, %dl
        cmp %dl, %al
        nop
        mov $0xF0, %al
        mov $0xAC, %dl
        test %dl, %al
        nop
        ret
