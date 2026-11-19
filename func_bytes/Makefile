CC = gcc
CFLAGS = -std=c18 -Wall -ggdb -O0

test : arith
	./arith $$(cat payload.txt)

payload.txt : temp.o
	objcopy -O binary --only-section=.text temp.o payload.txt

temp.o : temp.s
	as temp.s -o temp.o

clean :
	-rm arith
