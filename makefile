CC=gcc
AR=ar
fPIC=-fPIC
FLAGS=-Wall


all: isort txtfind

		


isort: isort.c 
		$(CC) $(FLAGS) isort.c -g -o isort

txtfind: txtfind.c 
		$(CC) $(FLAGS) txtfind.c -g -o txtfind	
		



.PHONY:  isort txtfind clean all

clean:
		rm -f *.o *.a *.so isort txtfind