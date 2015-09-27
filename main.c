#include <stdio.h>
#include <stdlib.h>
int num[39] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
int current = 2;                                    // This variable defines what number you are deleting
int delval;                                         // This variable defines which values to delete.
int numOfPrs;                                       // Holds the number of Prime numbers


int main()
{
    printf("Looking for prime numbers under 40\n");
    for (int counter=1;counter>=39;counter ++;)     // Stop looping when we have reached the maximum number.
    {
        delval = num[counter];                      // Make delval equal to the number that shows what value we want to delete.
        current = num[counter];                     // Change the current variable to show what number we are currently on
        while(current <= 40) {                      // Loop only while we are still on a number we can delete
            num[delval + current] = 0;              // Delete the value that we know are not prime.
            current += delval;                      // Change the variable to what number we are on.

        }
    }


    return 0;
}
