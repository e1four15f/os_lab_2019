CC=gcc
CFLAGS=-I.
CURRENT_DIR=$(notdir $(patsubst %/,%,$(dir $(mkfile_path))))


libFact.so : libFact.h 
	$(CC) -c -fPIC libFact.c -o libFact.o
	$(CC) -o libFact.so -shared libFact.o

server: libFact.so
	$(CC) -c server.c -o server.o
	$(CC) -o server server.o -L$(shell pwd) -lFact -pthread -Wl,-rpath=$(shell pwd) $(CFLAGS)

client: libFact.so
	$(CC) -c client.c -o client.o
	$(CC) -o client client.o -L$(shell pwd) -lFact -pthread -Wl,-rpath=$(shell pwd) $(CFLAGS)

all: libFact.so client server

clean:
	rm client client.o server server.o libFact.o libFact.so
