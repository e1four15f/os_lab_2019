CC=gcc
CFLAGS=-I.

zombie_process : 
	$(CC) -o zombie_process zombie_process.c $(CFLAGS)

process_memory : 
	$(CC) -o process_memory process_memory.c $(CFLAGS)

utils.o : utils.h
	$(CC) -o utils.o -c ../../lab3/src/utils.c $(CFLAGS)

parallel_sum : sum.h sum.o utils.h utils.o
	$(CC) -o parallel_sum sum.o utils.o parallel_sum.c -pthread  $(CFLAGS)

sum.o : 
	$(CC) -o sum.o -c sum.c $(CFLAGS)
	
all : process_memory zombie_process parallel_sum

clean :
	rm process_memory zombie_process utils.o parallel_sum sum.o





