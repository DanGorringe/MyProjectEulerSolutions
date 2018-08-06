// This is task 3 of Project Euler, to find the prime factor of 600851475143
#include <stdio.h>

int main()
{
    long x;
    long number;
    long total;

    x = 2;
    number = 600851475143; // The number to find the prime factors of
    total = number;

    // The loop goes while x is smaller than the number given, and x increases by one every loop
    for ( x = 2; x < number && x!= total; x++ ) {
      if ( !(total % x)){   // if Total divisible by current value
        total = total / x;  // divide total by the prime factor x

      }
    }
    printf ("Answer is: %ld \n", x);
    return 0;
}

// Dan Gorringe March 2016
// Finsihed
// Answer = 6857

// Cant show have more than one of each factor
