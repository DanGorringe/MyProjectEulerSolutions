// This is task 9 of Project Euler, find product abc for which a^2 + b^2 = c^2 && a^2+b^2+c^2 = 1000

#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int i;

    float a;
    float b;
    float c;
    float product;

    x = 0;
    i = 0;

    for (x = 1; x < 10000 ; x++){
      a = x;
        for (i = 1; i < 10000 ; i++){
          b = i;
          c = sqrt(b*b + a*a);
          product = a*b*c;
          if ( a + b + c == 1000 && b != c && a != c) {
            printf ("a is %f \n", a);
            printf ("b is %f \n", b);
            printf ("c is %f \n", c);
            printf ("product is %f \n", product);


          }
      }
    }
return 0;


}

// Dan Gorringe April 2016
// Finsihed
// Answer = 31875000
