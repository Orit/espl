 

PROGNAME=invert

all: start

start:    invert.o
	gcc -g -Wall invert.o -m32 -o $(PROGNAME)

invert.o:    invert.c
	gcc -g -m32 -Wall -c invert.c -o invert.o

#tell make that "clean" is not a file name!
.PHONY : clean

clean : 
	rm $(PROGNAME) invert.o

memcheck:
	valgrind --leak-check=yes --track-origins=yes ./$(PROGNAME)
