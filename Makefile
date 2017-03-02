#!/bin/makefile

OFLAG = -Wall -pedantic -ansi -Wextra
CFLAG =
DEBUG = -g
PROG =truc
OFILE = main.o truc.o pile.o

$(PROG):$(OFILE)
	gcc $? -o $@ $(OFLAG) $(DEBUG)

.o:.c
	gcc -c $< $(CFLAG)

clean:
	rm *.o *~
clear:
	clean
