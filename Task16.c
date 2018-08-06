//This is task 16 of ProjectEuler, Σ digits in 2^1000

#include<stdio.h>
#include<math.h>


int main()
{

  int i;
  int x;
  int a;
  int b;
  int digits[10000];
  int total;
  digits[000] = 2;
  i = 1000;

  for (x = 1; x < i ; x++){
    for (a = 0; a < 500; a++){

      //printf("digit[%d] = %d \n", a, digits[a]);
      digits[a]=digits[a]*2;
    }
    for (a = 0; a < 500; a++){
      if (digits[a] > 9){
        //printf ("decreasing");
        digits[a] = digits[a] - 10;
        digits[a+1] = digits[a+1] + 1;
      }
    }
  }

  for (b = 0; b < 500; b++){
    total = total + digits[b];
    //printf("digit[%d] = %d \n", b, digits[b]);
  }

  printf("Answer is: %d \n", total);
  return 0;
}

// Dan Gorringe July 2016
// Finished
// Answer = 1366
