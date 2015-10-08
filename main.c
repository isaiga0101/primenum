#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int inNumHolder = 0;                                            // Variable that will hold the int that is inputted

int main()
{
    while(1)
    {
        printf("Input an integer above 1 to check if it is prime.\n");
        scanf("%d",&inNumHolder);
        printf("The number you pressed is %d.\nChecking that number.\n",inNumHolder);

        if (primeChecker(inNumHolder) == 0) printf("%d is not a prime number.\n",inNumHolder);
        else printf("%d is a prime number.\n", inNumHolder);
    }

    return 0;
}

int primeChecker(unsigned int prime) {
    unsigned int i;
    for( i=2; i < prime;i ++)
    {
        if (prime % i == 0) return 0;
    }
        return 1;
}
