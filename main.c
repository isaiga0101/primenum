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
        printf("The number you pressed is %s.\nChecking that number.\n",inNumHolder);   // Outputs what number is pressed.

        // if/else statement uses primeChecker() function to check if the number is prime and outputs whether it is prime.
        if (primeChecker(inNumHolder) == 0) printf("%d is not a prime number.\n",inNumHolder);
        else printf("%d is a prime number.\n", inNumHolder);
    }

    return 0;
}


