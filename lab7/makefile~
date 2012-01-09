 CC     = gcc
    CFLAGS = -g

all: runprog

runprog: runprog.o
	$(CC) $(LDFLAGS) -o $@ $^


runprog.o: runprog.c 
	$(CC) $(CFLAGS) -c -o $@ $<


clean:
	rm -f runprog runprog.o

    # This is GNU makefile extension to notify that roughly means: 'clean' does
    # not depend on any files in order to call it.
.PHONY: clean