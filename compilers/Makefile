CC=gcc

all: test test.i test.s test.o test.obj test.obj2

test: test.c
	$(CC) -o test test.c

test.i: test.c
	$(CC) -E test.c > test.i

test.s: test.c
	$(CC) -S test.c

test.o: test.c
	$(CC) -c test.c

test.obj: test.o
	objdump -s -r test.o > test.obj

test.obj2: test.o
	objdump -d -r test.o > test.obj2

clean:
	rm test test.i test.s test.o test.obj test.obj2
