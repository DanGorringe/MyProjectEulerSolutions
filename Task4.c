// This is task 4 of Project Euler, to find the largest palindromic product of two 3-digit numbers
#include <stdio.h>

int main()
{
    long x;
    int one;
    int two;
    int result;
    int reverse;
    int reverse_worker;

    x = 0;
    one = 100;
    two = 100;
    reverse = 0;

    // The loop goes while x is smaller than the number given, and x increases by one every loop
    for ( x = 0; x < 100000000; x++ ) {
      if (one == two && one < 1000) {              // If one is above 900 decrease
        one = one + 1;
        two = 100;
      }
      else if ( one < 1000){
        two = two + 1;
      }



      result = one * two;
      reverse_worker = result;
//      printf ("%d \n", result);

      while (reverse_worker != 0)
      {
        reverse = reverse * 10;
        reverse = reverse + reverse_worker%10;
        reverse_worker       = reverse_worker/10;
      }

//      printf ("%d \n", result);
//      printf ("%d \n", reverse);
      if ( result == reverse && one > 0 && two > 0){
          printf ("%d \n", reverse);
          printf ("A is %d \n", one);
          printf ("B is %d \n", two);

      }

      reverse = 0;
      reverse_worker = 0;
      result =0;

    }
    return 0;
}

// Dan Gorringe March 2016
// Finsihed
// Answer = 906609 = 993 x 913


// Very crude and does not give an exact value, not quite sure how to create a way to. !!!!
