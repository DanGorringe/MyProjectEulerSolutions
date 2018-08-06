//This is task 21 of ProjectEuler, Σ ambicale numbers under 10000
#include<stdio.h>
#include<math.h>


int main()
{
  int x;
  int i;
  int a[10000];
  int b[10000];
  int sumtotal;
  int total;

  i = 2;

  sumtotal = 0;
  total = 0;

  for (x = 1; x < 10000; x++){
    a[1] = b[1] = 0;
    a[0] = b[0] = 0;

    // Sum A //

    a[0] = x;                           //a[0] reserved for number testing
    //printf("a[0] is %d \n", a[0]);
    //printf("x is %d \n", a[0]);
    for (i = 2; i < (a[0] /2) + 1; i++){
      //printf("i is %d \n",i);
      if (!(a[0] % i)){
        a[i] = a[0] / i;
      //  printf("for x = %d, a[%d] is %d \n",x, i, a[i]);
      }
      else {
        a[i] = 0;
      }
    }
    for (i = 1; i < (a[0] /2) + 1; i++){
      a[1] =  a[1] + a[i];              //a[1] reserved for d(a)

    }
    //printf("a[1] is %d \n", a[1] + 1);
    // Sum b //

    a[1] = a[1] + 1;
    b[0] = a[1] ;                        //b[0] becomes tester

    for (i = 2; i < (b[0] /2) + 1; i++){
      if (!(b[0] % i)){
        b[i] = b[0] / i;
      }
      else{
        b[i] = 0;
      }
    }
    for (i = 1; i < (b[0] /2) + 1; i++){
      b[1] =  b[1] + b[i];              //b[1] reserved for d(a)
    }
    //printf("b[1] is %d \n", b[1]);
    b[1] = b[1] + 1;
    if (a[0] == b[1] && a[1] != b[1]){
      //printf ("%d is Amicable \n",a[0]);
      total = total + 1;
      sumtotal = sumtotal + a[0];
    }

 }

  //printf("Number of Amicable numbers = %d \n", total);
  printf("Answer is: %d \n", sumtotal);

  return 0;
}
// Dan Gorringe July 2016
// Finished
// Answer = 31626
