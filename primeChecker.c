#include "mainlib.h"
int primeChecker(unsigned long prime) {
    unsigned long i;
    for( i=2; i <= sqrtl(prime);i ++)
    {
        if (prime % i == 0) return 0;       // If the remainder of var prime and var i is 0 than not prime
    }
        return 1;                           // Otherwise it is prime.
}
