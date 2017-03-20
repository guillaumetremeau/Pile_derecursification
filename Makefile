#!/bin/makefile

OFLAG = 
CFLAG =-Wall -pedantic -ansi -Wextra
DEBUG = -g
PROG =truc
OFILE = main.o truc.o pile.o

$(PROG):$(OFILE)
	gcc $(OFILE) -o $@ $(OFLAG) $(DEBUG)

.o:.c
	gcc -c $< $(CFLAG)

clean:
	rm *.o *~
clear:
	clean
