#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

char inNumHolder[30];                                            // Variable that will hold the int that is inputted

int main()
{
    // Main loop
    while(1)
    {

        printf("Input an integer above 1 to check if it is prime.\n");                  // Prompts the user to input an integer
        scanf("%d",&inNumHolder);                                                       // Stores the value of the integer to inNumHolder variable
        printf("The number you pressed is %d.\nChecking that number.\n",inNumHolder);   // Outputs what number is pressed.

        // if/else statement uses primeChecker() function to check if the number is prime and outputs whether it is prime.
        if (primeChecker(inNumHolder) == 0) printf("%d is not a prime number.\n",inNumHolder);
        else printf("%d is a prime number.\n", inNumHolder);
    }

    return 0;
}

/*
primeChecker() uses a for loop to check each number below the number inputted into the function.
If the remainder of the number being checked divided by a number less than it is 0 than it is not
prime. The function returns 0 if it is not prime, and 1 if it is prime. This function only uses unsigned
variable because it does not need to check negative numbers.
*/
int primeChecker(unsigned long prime) {
    unsigned long i;
    for( i=2; i < prime;i ++)
    {
        if (prime % i == 0) return 0;       // If the remainder of var prime and var i is 0 than not prime
    }
        return 1;                           // Otherwise it is prime.
}
