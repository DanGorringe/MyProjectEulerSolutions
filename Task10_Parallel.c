// This is task 10 of Project Euler, the sum of prime numbers under 2,000,000

#include <stdio.h>
#include <math.h>
#include <omp.h>

int main()
{
    long x;
    long z;
    long y;
    long total;  // total of prime numbers
    int primetest;
    int dividetest;

    x = 0;
    z = 0;
    y = 0;
    total = 0;

    // The loop goes while x < 2,000,000 and x increases by one every loop
    for ( x = 2; x < 2000001; x++ ) {
      dividetest = 0;
      y = sqrt(x);
      #pragma omp parallel // This should run the for loop in parallel
      {
        #pragma omp for
        for ( z = 2; z < y + 1 ; z++ ) {
          if ( !(x % z) ) {
            dividetest = dividetest + 1;      // If can divide by any number below half the value of x
            //x = x + 1;
            //printf ("The current x is %ld and is divisble by ", x);
            //printf (" %ld \n", z);
          }
        }
      }
      if ( dividetest == 0){
        total = total + x;
      //  printf ("The current prime x is %ld \n", x);
      }
    }
      printf ("The prime total is %ld \n", total);                     // Then print the answer
      return 0;
}

// Dan Gorringe April 2016
// Finished
// Answer = 142913828922
