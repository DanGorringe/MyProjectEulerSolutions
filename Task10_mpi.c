// This is task 10 of Project Euler, the sum of prime numbers under 2,000,000

#include <stdio.h>
#include <mpi.h>
#include <math.h>

int main(int nargs, char** args)
{
    int size, my_rank;

    MPI_Init (&nargs, &args);
    MPI_Comm_size (MPI_COMM_WORLD, &size);
    MPI_Comm_rank (MPI_COMM_WORLD, &my_rank);

    long x;
    long z;
    long y;
    long total;  // total of prime numbers
    int primetest;
    int dividetest;
    long totaltotal;

    x = 0;
    z = 0;
    y = 0;
    total = 0;

    if (my_rank == 0){
      total = 2;
    }

    // The loop goes while x < 2,000,000 and x increases by one every loop
    for ( x = ((my_rank*2) + 3); x < 2000001; x = x + 2*size ) {
      dividetest = 0;
      y = sqrt(x);

        for ( z = 2; z < y + 1 ; z++ ) {
          if ( !(x % z) ) {
            dividetest = dividetest + 1;      // If can divide by any number below half the value of x
            //x = x + 1;
            //printf ("The current x is %ld and is divisble by ", x);
            //printf (" %ld \n", z);
          }
        }

      if ( dividetest == 0){
        total = total + x;
//        printf ("The current prime x is %ld \n", x);
      }

    }

    MPI_Reduce (&total, &totaltotal, 1, MPI_LONG, MPI_SUM, 0, MPI_COMM_WORLD);
    printf("\nRank: %d, sum: %ld, Total: %ld\n", my_rank, total+2, totaltotal);
    MPI_Finalize();


/*
      printf ("I'm no. %d \n", my_rank);
      MPI_Barrier (MPI_COMM_WORLD);
      MPI_Finalize ();
      printf ("The prime total is %ld \n", total);                     // Then print the answer
      printf ("size is %d \n", size);
*/

      return 0;
}

// Dan Gorringe April 2016
// Finished
// Answer = 142913828922
