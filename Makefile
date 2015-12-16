#Compiler
CC=gcc

#Options passed to compiler.
CFLAGS=-std=c99 -c -Wall
LFLAGS=-std=c99 -Wall

all: primecheck

primecheck: inputCheck.o main.o primeChecker.o StrConversion.o
	$(CC) $(LFLAGS) inputCheck.o main.o primeChecker.o StrConversion.o -o primecheck -lm

inputCheck.o: inputCheck.c mainlib.h
	$(CC) $(CFLAGS) inputCheck.c -lm

main.o: main.c mainlib.h
	$(CC) $(CFLAGS) main.c -lm

primeChecker.o: primeChecker.c mainlib.h
	$(CC) $(CFLAGS) primeChecker.c -lm

StrConversion.o: StrConversion.c mainlib.h
	$(CC) $(CFLAGS) StrConversion.c -lm

mainlib.h: mainlib.h

clean:
	\rm *o *~ primecheck
	
