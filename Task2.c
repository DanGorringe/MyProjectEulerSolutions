// This is task 2 of Project Euler, to find the sum of numbers under 4,000,000 which are even and part of the Fibonacci series

#include <stdio.h>

int main()
{
    int x;
    int total;
    int previous;
    int current;

    x = 0;
    total = 0;
    previous = 0;
    current = 1;

    // The loop goes while x < 4,000,000, and x increases by one every loop
    for ( x = 0; x < 4000000; x++ ) {
      if (x == current + previous){  // if Fibonachi
        previous = current;
        current = x;
        if ( !(x % 2)){     // If Also Even
          total += current; // Then add to total
        }
      }
    }
    printf ("Answer is: %d \n", total);     // Print the Answer
    return 0;
}

// Dan Gorringe March 2016
// Completed
// Answer = 4613732
