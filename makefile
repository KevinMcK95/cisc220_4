#RULE 1
mystring.o: mystring.c mystring.h
	gcc -Wall -c mystring.c -o mystring.o

#RULE 2
main.o: main.c
	gcc -Wall -c main.c -o main.o

#RULE 3
main: main.o mystring.o
	gcc -Wall -o main main.o mystring.o -lm

