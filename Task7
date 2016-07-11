// This is task 7 of Project Euler, the 10001th prime number

#include <stdio.h>
#include <math.h>
//#include <omp.h>

int main()
{
    long x;
    long z;
    int primeno;  // Number of prime numbers
    int wanted;   // The amouont of prime numbers wanted
    int dividetest;
    int finsihed;

    x = 2;
    z = 2;
    primeno = 0;
//    printf("Which prime number ");
//    scanf("%d", &wanted);
    wanted = 10001;
    dividetest = 0;

    // The loop goes while x < 10, and x increases by one every loop

//    #pragma omp parallel for // This should run the for loop in parallel

//    for ( x = 1; primeno < wanted; x++ ) if (primeno != wanted + 1) {

    do{

      x = x + 1;

      dividetest = 0;
//      printf ("Testing %ld \n", x);
//      #pragma omp parallel // This should run the for loop in parallel
//      {
//        #pragma omp for
        for ( z = 2; z < x; z++ ) {
          if ( !(x % z) ) {
            dividetest = dividetest + 1;      // If can divide by any number below half the value of x
          }
        }
//      }
      if ( dividetest == 0){                              //
//        printf ("prime \n");                              //
        primeno = primeno + 1;                            //  Not sure how this bit will like parallisation
        printf ("prime no %d \n", primeno);               //
//        if ( primeno == wanted + 1){                      //
//          printf ("The %d th prime is %ld \n",wanted, x); //
//        }
      }
    } while (primeno < wanted);

    printf ("The %d th prime is %ld \n",wanted, x);

    return 0;
}

// Dan Gorringe March 2016
// Completed
// Answer = 104743
