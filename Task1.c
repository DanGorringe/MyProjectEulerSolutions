// fizz Buzz

#include <stdio.h>

int main()
{
  int x;
  for (x = 0; x < 100; x++){
    if (!(x % 3)) {printf("fizz ");}
    else if (!(x % 5)) {printf("buzz ");}
    else {printf("%d", x);}
    printf(" \n");
  }
  return 0;
}

// Dan Gorringe July 2017
