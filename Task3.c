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
    for ( x = 2; x < number; x++ ) {
      if ( x == total) {                               // If current heighest factor is the same as the total remaining we have found highest prime factor
        printf ("%ld \n", x);                          // print factor
        printf ("All solutions have been found.\n");
        printf ("Highest prime factor is %ld \n", x);  // print final factor with a lovely sentance
      }
      else if ( !(total % x)){                         // if Total divisible by current value
        printf ("%ld \n", x);                          // print factor
//        printf ("current total is%ld \n", total);    // print total
        total = total / x;                             // divide total by the prime factor x

      }
    }
    getchar();
}

// Dan Gorringe March 2016
// Finsihed
// Answer = 6857

// Cant show have more than one of each factor
