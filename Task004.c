// This is task 4 of Project Euler, to find the largest palindromic product of two 3-digit numbers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// List functions to be used
int Reverse(int);

int main()
{
    // Not needed for this task
    int digitLength = 3;

    // Default values
    int answer = 0;
    int answerX = 0;
    int answerY = 0;

    // Loop
    for (int x = pow(10,digitLength)-1;x>0;x--){
      for (int y = pow(10,digitLength)-1;y>0;y--){
        int product = x*y;
        if (product>answer && product == Reverse(product)){
          answer = product;
          answerX = x;
          answerY = y;
        }
      }
    }
    printf ("Answer is: %d \n", answer);
    //printf ("Is the product of %d x %d \n",answerX,answerY);
    return 0;
}

int Reverse(int input){
  int length = floor(log10(abs(input))) + 1; // Stolen from stack overflow
  int output = 0;
  for(int i = 0; i<length;i++){
    int multiplier = pow(10,(length-i-1));  //
    int digit = floor(input/(pow(10,i)));   // Divide by 10^i
    digit = digit%10;                       // find last digit by applying mod 10
    output += digit*multiplier;
  }
  return output;
}

// Dan Gorringe March 2016
// Finsihed
// Answer = 906609 = 993 x 913


// Very crude and does not give an exact value, not quite sure how to create a way to. !!!!
