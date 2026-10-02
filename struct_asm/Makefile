CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : donor
	./donor AB- 20

donor : donor.c donor_asm.s
	${CC} donor.c donor_asm.s -o donor ${CFLAGS} -z noexecstack 

clean :
	-rm donor
