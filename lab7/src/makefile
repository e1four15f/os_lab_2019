CC=gcc
CFLAGS=-I.
	
udpclient:
	$(CC) -o udpclient udpclient.c $(CFLAGS)
	
tcpclient: 
	$(CC) -o tcpclient tcpclient.c $(CFLAGS)
	
udpserver:
	$(CC) -o udpserver udpserver.c $(CFLAGS)
	
tcpserver: 
	$(CC) -o tcpserver tcpserver.c $(CFLAGS)
	
	
all: tcpserver tcpclient udpserver udpclient
	
clean:
	rm tcpserver tcpclient udpserver udpclient
