all:
	gcc main.c main.h primeChecker.c StrConversion.c inputCheck.c -o primenum -std=c99 -lm
