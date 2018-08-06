//This is task 15 of ProjectEuler, Find the number fo ways to travel across a grid if only moving right and down

#include<stdio.h>
#include<math.h>

long double factorial (int a);
int main()
{
  int grid_size = 20;
  //printf("Grid Size ");
  //scanf("%d", &grid_size);

  long ways;
  long n;
  long r;
  long double h;
  long double f;

  r = grid_size;
  n = grid_size*2;

  h = factorial(n);
  f = factorial(r)*factorial(n-r);

  //printf("h: %ld\n", h);
  //printf("f: %ld\n", f);

  ways = h / f;

  //printf("h = %Lf\n", h);
  //printf("f = %Lf\n", f);
  printf("Answer is: %ld\n", ways);

}

long double factorial(int a){
  long b;
  long double c;
  c = 1;
  for (b = 1; b < a + 1; b++){
    c = c * b;
  //  printf("c: %ld\n", c);
  }
  return c;
}

// Dan Gorringe July 2016
// Finished
// Answer = 137846528820
