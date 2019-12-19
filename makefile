CC=gcc
FLAGS= -Wall

all:  isort txtfind

isort.o: isort.c 
	$(CC) $(FLAGS)  -c isort.c

txtfind.o: txtfind.c 
	$(CC) $(FLAGS)  -c txtfind.c
	
.PHONY: clean all

clean:
	rm -f *.o txtfind isort

