// This is task 7 of Project Euler, the 10001th prime number

#include <stdio.h>
#include <math.h>

int main()
{
    long x;
    long z;
    int primeno;  // Number of prime numbers
    int wanted;   // The amouont of prime numbers wanted
    int dividetest;

    x = 2;
    z = 2;
    primeno = 0;
    wanted = 10002; // one to many
    dividetest = 0;

    // The loop goes while x < 10, and x increases by one every loop
    for ( x = 1; x < 9000000000; x++ ) if (primeno != wanted) {
      dividetest = 0;
      for ( z = 2; z < x; z++ ) {
        if ( !(x % z) ) {
          dividetest = dividetest + 1;      // If can divide by any number below half the value of x
        }
      }
      if ( dividetest == 0){
        primeno = primeno + 1;
        if ( primeno == wanted){
          printf ("The 10001th prime is %ld \n", x);                     // Then print the answer
          return 0;
        }
      }
    }
    getchar();
}

// Dan Gorringe March 2016
// Completed
// Answer = 104743
