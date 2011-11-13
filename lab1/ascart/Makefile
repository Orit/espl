PROGRAME= ascart
.PHONY: all clean dist

all: ascart 

OBJS=font.o

ascart: prsym.o $(OBJS)
	gcc -g -prsym.o -Wall -o $(PROGRAME)

prsym.o: prsym.c
	gcc -g -O -c prsym.c -o prsym.o

clean:
	rm -f *.o *~

dist:
	(cd ..; zip ascart/ascart.zip ascart/font.c ascart/font.h ascart/prsym.c)
