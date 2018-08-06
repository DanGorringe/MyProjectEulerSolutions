//This is task 20 of ProjectEuler, Factorial digit sum
#include<stdio.h>
#include<math.h>


int main()
{
  int i;
  int x;
  int a;
  int b;
  int digits[200];
  int total;
  digits[000] = 1;
  i = 100;

  for (x = 1; x < 201; x++){
    digits[x] = 0;
  }

  for (x = 2; x < i +1; x++){
    for (a = 0; a < 200; a++){
      //printf("digit[%d] = %d \n", a, digits[a]);
      digits[a]= digits[a] * x;
    }
    for (a = 0; a < 200; a++){
      while (digits[a] > 9){
        digits[a] = digits[a] - 10;
        digits[a+1] = digits[a+1] + 1;
      }
    }

  }
  for (b = 0; b < 200; b++){
    total = total + digits[b];
    //printf("digit[%d] = %d \n", b, digits[b]);
  }


  printf("Answer is: %d \n", total);
  return 0;
}

// Dan Gorringe July 2016
// in Progress
// Answer = 648
