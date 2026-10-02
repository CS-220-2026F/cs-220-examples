CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

tryArith : tryArith.o arith.o
	${CC} tryArith.o arith.o -o tryArith ${CFLAGS}

clean :
	-rm *.o tryArith 
