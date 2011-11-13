 

PROGNAME=complines

all: start

start: complines.o
	gcc -g complines.o -Wall -o $(PROGNAME)

complines.o: complines.c
	gcc -g -Wall -c complines.c -o complines.o

.PHONY : clean

clean : 
	rm $(PROGNAME) complines.o

memcheck:
	valgrind --leak-check=yes --track-origins=yes ./$(PROGNAME)
