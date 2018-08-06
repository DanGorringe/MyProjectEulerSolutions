// This is task 1 of Project Euler, to find the sum of numbers under 1000 which are either divisible by 3 or 5

#include <stdio.h>

int main()
{
    int x;
    int total;
    total = 0;
    // The loop goes while x < 10, and x increases by one every loop
    for ( x = 0; x < 1000; x++ ) {
      if ( !(x % 5) || !(x % 3) ) { // this will be executed if a is divisible by 
        total += x;
      }
    }
    printf("Answer is: %d\n",total);
    return 0;
}

// Dan Gorringe March 2016
// Completed
// Answer = 233168
