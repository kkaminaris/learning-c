CC=gcc
CFLAGS=-Wall -O0
LDFLAGS=-lm

all: pp

pp: pp.c
	$(CC) $(CFLAGS) -o pp pp.c $(LDFLAGS)

clean:
	rm -f pp
