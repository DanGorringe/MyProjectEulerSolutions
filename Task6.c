// This is task 6 of Project Euler, to difference between the sum of x^2 and the sum of xs squared.

#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int squaretotal;
    int totalsquare;
    int answer;

    totalsquare = 0;
    squaretotal = 0;

    // The loop goes while x < 10, and x increases by one every loop
    for ( x = 0; x < 102; x++ ) {
      if ( x == 101 ){
        answer = - squaretotal + pow (totalsquare, 2);  // sigma(x^2) - sigma(x)^2
        printf ("%d \n", answer);                     // Then print the answer
      }
      else {
        totalsquare = totalsquare + x;          // sigma(x)
        squaretotal = squaretotal + pow (x, 2); // sigma(x^2)
      }

    }


    getchar();
}

// Dan Gorringe March 2016
// Completed
// Answer = 25164150
