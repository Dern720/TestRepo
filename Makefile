all: file remove

file: main.o newFunk.o
	gcc main.o newFunk.o -o File

main.o:
	gcc main.c -c

newFunk.o:
	gcc newFunk.c -c

remove:
	rm newFunk.o main.o