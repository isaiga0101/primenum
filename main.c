#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "main.h"

char inNumHolder[30];                                            // Variable that will hold the int that is inputted
int prime_intHolder;
int loop = 0;
bool check = true;
bool valid = true;

int main()
{
    // Main loop
    while(1)
    {
        valid = true;
        loop = 0;
        check = true;
        printf("Input an integer above 1 to check if it is prime.\n>> ");                               // Prompts the user to input an integer
        scanf("%s",&inNumHolder);                                                                       // Stores the value of the integer to inNumHolder variable
        printf("The number you pressed is %s.\nChecking that number.\n",inNumHolder);                   // Outputs what number is pressed.
        if (inNumHolder[0] == '0') {
            check = false;
            valid = false;
            printf("Integer 0 cannot be checked for primality.\n");
        }
        while(inNumHolder[loop] != 0 && check == true)                                                  // Loops while there are still characters to check
        {
            if (inputCheck(inNumHolder[loop]) != true) {
                valid = false;
                check = false;
            }

            loop ++;
        }

        if (valid == true) {
            // if/else statement uses primeChecker() function to check if the number is prime and outputs whether it is prime.
            prime_intHolder = StrConversion(inNumHolder);
            if (primeChecker(prime_intHolder) == 0) printf("%d is not a prime number.\n",prime_intHolder);
            else printf("%d is a prime number.\n", prime_intHolder);
        }
        else
        {
            printf("Fatal error: Not a valid integer.\n");
        }
    }

    return 0;
}
