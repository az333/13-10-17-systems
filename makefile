all: linkedlist.o main.o
	gcc -o tests linkedlist.o main.o

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

main.o: main.c linkedlist.h
	gcc -c main.c

run: all
	./tests

clean:
	rm *.o
