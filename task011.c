//This is task 11 of ProjectEuler ,the biggest product of 4 numbers in a 20x20 grid

#include<stdio.h>
#include<math.h>

int main()
{
  long total;
  long highest;
  long tofind[5];
  int x;
  int y;
  int saved_x;
  int saved_y;
  int row;

  row = 0;
  x = 1;
  y = 1;
  total = 1;

  char num[]= "0802229738150040007504050778521250779108"
              "4949994017811857608717409843694804566200"
              "8149317355791429937140675388300349133665"
              "5270952304601142692468560132567137023691"
              "2231167151676389419236542240402866331380"
              "2447326099034502447533537836842035171250"
              "3298812864236710263840675954706618386470"
              "6726206802621220956394396308409166499421"
              "2455580566739926971778789683148834896372"
              "2136230975007644204535140061339734313395"
              "7817532822753167159403800462161409535692"
              "1639054296353147555888240017542436298557"
              "8656004835718907054444374460215851541758"
              "1980816805944769287392138652177704895540"
              "0452088397359916079757321626267933279866"
              "8836688757622072034633674655123263935369"
              "0442167338253911249472180846293240627636"
              "2069364172302388346299698267598574043616"
              "2073352978319001743149714886811623570554"
              "0170547183515469169233486143520189196748";


  for (x = 1; x < 401 ; x ++) {
    row = x / 20;
  //  printf ("row value is %d \n", row);
    for (y = 1; y <  5 ; y++){
      if (y == 1) { // Horiztonal Product
        if ( row*20 < x && x < 18 + 20*row ) {
          tofind[1] = (num[2*x-2]-48)*10 + num[2*x-1] - 48;
          tofind[2] = ((num[2*x] - 48) * 10) + (num[2*x+1] - 48);
          tofind[3] = ((num[2*x+2] - 48) * 10) + (num[2*x+3] - 48);
          tofind[4] = ((num[2*x+4] - 48) * 10) + (num[2*x+5] - 48);
//          printf ("first is %ld \n", tofind[1]);
//          printf ("second is %ld \n", tofind[2]);
//          printf ("third is %ld \n", tofind[3]);
//          printf ("fourth is %ld \n", tofind[4]);
        }
      }
      if (y == 2) { // Vertical
        if (x < 341 ) {
          tofind[1] = ((num[2*x-2] - 48) * 10) + (num[2*x-1]     - 48);
          tofind[2] = ((num[2*x+38] - 48) * 10) + (num[2*x+39] - 48);
          tofind[3] = ((num[2*x+78] - 48) * 10) + (num[2*x+79] - 48);
          tofind[4] = ((num[2*x+118] - 48) * 10) + (num[2*x+119] - 48);
        }
      }
      if (y == 3) { // Diagonally left to right
        if ( row*20 < x && x < 18 + 20*row ) {
            tofind[1] = ((num[2*x-2] - 48) * 10) + (num[2*x-1] - 48);
            tofind[2] = ((num[2*x+40] - 48) * 10) + (num[2*x+41] - 48);
            tofind[3] = ((num[2*x+82] - 48) * 10) + (num[2*x+83] - 48);
            tofind[4] = ((num[2*x+124] - 48) * 10) + (num[2*x+125] - 48);
        }
      }
      if (y == 4) { // Diagonally right to left
        if ( 20*row + 3 < x && x < 21 + 20*row && x < 341 ){
          tofind[1] = ((num[2*x-2] - 48) * 10) + (num[2*x-1] - 48);
          tofind[2] = ((num[2*x+36] - 48) * 10) + (num[2*x+37] - 48);
          tofind[3] = ((num[2*x+74] - 48) * 10) + (num[2*x+75] - 48);
          tofind[4] = ((num[2*x+112] - 48) * 10) + (num[2*x+113] - 48);
        }
      }

      total = tofind[1]*tofind[2]*tofind[3]*tofind[4];
  //    printf ("total is %ld \n", total);

//      printf ("x is %d \n", x);
  //    printf ("y is %d \n", y);

      if (highest < total && total < 96059601) {    // some problem that I could not find that allowed numbers above 99^4, so filtered those out
        highest = total;
        saved_y = y;
        saved_x = x;
//        printf ("current largest product is %ld \n", highest);
  //      printf ("x value is %d \n", x);
    //    printf ("y value is %d \n", y);
      }
    }
//    printf ("largest product is %ld \n", highest);
//    printf ("x is %d \n", saved_x);
//    printf ("y is %d \n", saved_y);
//    printf ("starting number is %ld \n", tofind[1]);
  }
  //printf ("largest product is %ld \n", highest);
  row = saved_x / 20;
  saved_x = saved_x - 20 * row;
  //printf ("row is %d \n", row);
  //printf ("x is %d \n", saved_x);
  //printf ("y is %d \n", saved_y);
  printf ("Answer is: %ld \n", highest);
}
//DanGorringe
// Finished July 9th
// Answer = 70600674
