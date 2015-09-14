#Make file for Algorithms

VPATH = src inc
CFLAGS = -I inc


algorithm: main.o stack.o queue.o list.o
	gcc $^ -o $@

main.o: main.c
	gcc -c $<

stack.o: stack.c
	gcc -c $<

queue.o: queue.c
	gcc -c $<

list.o: list.c
	gcc -c $<

.PHONY: all

all: clean algorithm

clean:
	rm -f *.o algorithm


