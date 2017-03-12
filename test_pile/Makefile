#!/bin/makefile

OFLAG = -Wall -pedantic -ansi -Wextra
CFLAG =
DEBUG = -g
PROG =truc
OFILE = main.o ../pile.o

$(PROG):$(OFILE)
	gcc $(PROG) -o $@ $(OFLAG) $(DEBUG)

.o:.c
	gcc -c $< $(CFLAG)

clean:
	rm *.o *~
clear: clean
