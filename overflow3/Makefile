CC = gcc
CFLAGS = -std=c18 -Wall -ggdb -O0

test : arith
	setarch linux64 -R ./arith 7 3 <payload.txt
clean :
	-rm arith
