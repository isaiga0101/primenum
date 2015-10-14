#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/*
primeChecker() uses a for loop to check each number below the number inputted into the function.
If the remainder of the number being checked divided by a number less than it is 0 than it is not
prime. The function returns 0 if it is not prime, and 1 if it is prime. This function only uses unsigned
variable because it does not need to check negative numbers.
*/
int primeChecker(unsigned long prime);

#endif // MAIN_H_INCLUDED
