//This is task 12 of ProjectEuler , find first traignular number to have more than 500 factors

#include<stdio.h>
#include<math.h>

int main()
{

  int x;
  int y;                //Number to check
  int i;
  int j;
  int wanted_divisors;
  int test_divisors;
  int highest_divisors;

  printf("Minimum Divisors ");
  scanf("%d", &wanted_divisors);

  y = 0;
  j = 100000000;
  test_divisors = 0;

  for (x =1; x < j; x++){
    if (x == j - 1){
      printf("Maximum x reached ");
    }
    y = y + x;
    for (i = 2; i < sqrt(y) + 1; i++) {
      if ( !(y % i)){
        if ( i == sqrt(y)) {
          test_divisors = test_divisors - 1;
        }
        test_divisors = test_divisors + 2;
      }
    }
    if (test_divisors > highest_divisors){
      highest_divisors = test_divisors;
      printf ("Highest amount of dividers %d \n", highest_divisors);
    }
    if (test_divisors > wanted_divisors){
      printf ("Number %d \n", y);
      printf ("Amount of dividers is %d \n", test_divisors);
      return 0;
      getchar();
    }
    else{
    //  printf ("current number is %d \n", y);
    //  printf ("divisor number is %d \n", test_divisors);
      test_divisors = 0;
    }

  }

}

// DanGorringe
// Finished July
// Answer = 76576500
// Does not seem to work for Triangular number of factors above 4
