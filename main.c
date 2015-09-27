#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int current = 2;                                    // This variable defines what number you are deleting
int inNumHolder = 0;

void primeCheck(int prime);

int main()
{
    int numOfPrs;                                   // Holds the number of Prime numbers
    printf("Input an integer above 1 to check if it is prime.\n");
    scanf("%d",&inNumHolder);
    printf("The number you pressed is %d.\nChecking that number.",inNumHolder);



    return 0;
}

