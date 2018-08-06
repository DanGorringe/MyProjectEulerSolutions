// This is task 5 of Project Euler, to find the smallest no divisble by all numbers from 1 - 20

#include <stdio.h>

int main()
{
    int x;
    int answer;
    int counter;

    // The loop goes while x < 10, and x increases by one every loop
    for ( x = 21; x < 300000000; x++ ) {
      counter = 0;
      if ( !(x % 20) && !(x % 19) && !(x % 18) && !(x % 17) && !(x % 16) && !(x % 15) && !(x % 14) && !(x % 13) && !(x % 12) && !(x % 11) && !(x % 10) && !(x % 9) && !(x % 8) && !(x % 7) && !(x % 6) && !(x % 5) && !(x % 4) && !(x % 3) && !(x % 2)){
          break;
      }
    }
    printf ("Answer is: %d \n", x);
    return 0;
}

// Dan Gorringe March 2016
// Completed
// Answer = 232792560

// Must be an easier/ quicker way
