PROGNAME=canalyze

all: canalyze

canalyze: canalyze.o namelist.o fgetname.o


canalyze.o: canalyze.c namelist.h fgetname.h
namelist.o: namelist.c namelist.h
fgetname.o: fgetname.c fgetname.h

.PHONY : clean

clean : 
	rm $(PROGNAME) canalyze.o

memcheck:
	valgrind --leak-check=yes --track-origins=yes ./$(PROGNAME)
