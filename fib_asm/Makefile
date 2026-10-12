CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : tryFib
	./tryFib

tryFib : tryFib.c fib_asm.s
	${CC} tryFib.c fib_asm.s -o tryFib ${CFLAGS} -z noexecstack

clean :
	-rm tryFib
