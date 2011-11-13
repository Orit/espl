 

PROGNAME=invert

all: start

start:    invert.o
	gcc -g invert.o -ansi -m32 -Wall -o $(PROGNAME)

invert.o:    invert.c
	gcc -g -ansi -m32 -Wall -c -nostdlib -fno-stack-protector invert.c -o invert.o

#tell make that "clean" is not a file name!
.PHONY : clean

clean : 
	rm $(PROGNAME) invert.o

memcheck:
	valgrind --leak-check=yes --track-origins=yes ./$(PROGNAME)
