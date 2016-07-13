//This is task 13 of ProjectEuler, Find the first ten digits of the sum of 100 50-digit numbers

#include<stdio.h>
#include<math.h>

int main()
{
  int x;
  long y;
  int chain_length;
  int saved_x;
  int saved_chain_length;

    for (x = 1; x < 1000001; x++){

      y = x;
      chain_length = 0;

      do{
          chain_length = chain_length + 1;
          if ( !(y % 2)){ // if even, y/2
            y = y/2;
          }
          else {
            y = 3*y + 1;
          }

      } while (y != 1);

      if (saved_chain_length < chain_length){
        saved_chain_length = chain_length;
        saved_x = x;
      //  printf("x is %d\n", x);
      }
    }

  printf("chain lenght of %d\n", saved_chain_length);
  printf("x is %d\n", saved_x);
}

// Dan Gorringe July 2016
// Finished
// Answer = 837799
