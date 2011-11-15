 

PROGNAME=bcmp

all: start

start:    bcmp.o
	gcc -g bcmp.o -Wall -o $(PROGNAME)

bcmp.o:    bcmp.c
	gcc -g -Wall -c bcmp.c -o bcmp.o

#tell make that "clean" is not a file name!
.PHONY : clean

clean : 
	rm $(PROGNAME) bcmp.o

memcheck:
	valgrind --leak-check=yes --track-origins=yes ./$(PROGNAME)
