# Makefile with variables
P=teste
OBJECTS=	main.o	fifo.o
CFLAGS	=	-g	-Wall	-O3
LDLIBS=
CC=gcc
# Generate application
$(P):	$(OBJECTS)
	$(CC)	$(CFLAGS)	-o	$(P)	$(OBJECTS)
#generate fifo.o
fifo.o:	fifo.c	fifo.h
	$(CC)	$(CFLAGS)	-c	fifo.c
#generate main.o
main.o:	main.c	fifo.h
	$(CC)	$(CFLAGS)	-c	main.c
clean:
	rm	*.o	$(P)