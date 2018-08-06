//This is task 17 of ProjectEuler, Σ length of worded numbers from 1 to 1000 inclusivley
#include<stdio.h>
#include<math.h>


int main()
{

  int num;
  long current_total;
  long total;
  int hundreds;
  int tens;
  int teens;
  int ones;

//   num = 981;

  for (num = 1; num < 1000; num++){
    //printf ("number : %d", num);
    ones = 0;
    tens = 0;
    teens = 0;
    hundreds = 0;
    hundreds = num / 100;
    tens = (num / 10) - (10 * hundreds);
    ones = num - (10 * tens) - (100 * hundreds);
    current_total = 0;


    // Teens logic  //

    if (tens == 1){

      if (ones == 1) {teens = 1;} // 11
      if (ones == 2) {teens = 2;} // 12
      if (ones == 3) {teens = 3;} // 13
      if (ones == 4) {teens = 4;} // 14
      if (ones == 5) {teens = 5;} // 15
      if (ones == 6) {teens = 6;} // 16
      if (ones == 7) {teens = 7;} // 17
      if (ones == 8) {teens = 8;} // 18
      if (ones == 9) {teens = 9;} // 19

      if (ones != 0){
        tens = 0;
        ones = 0;
      }


    }
    //printf (" hundreds:%d", hundreds);
    //printf (" tens: %d",tens );
    //printf (" teens: %d", teens);
    //printf (" ones: %d", ones);

    // And logic //

    current_total = 3; // Assume there is an 'and'

    if ( hundreds == 0 && tens == 0 && teens == 0 && ones != 0) {current_total = 0;}   // Ones on their own
    if ( hundreds == 0 && tens == 0 && teens != 0 && ones == 0) {current_total = 0;}   // Teens on their own
    if ( hundreds == 0 && tens != 0 && teens == 0 && ones == 0) {current_total = 0;}   // Tens on their own
    if ( hundreds != 0 && tens == 0 && teens == 0 && ones == 0) {current_total = 0;}   // Hundreds on their own
    if ( hundreds == 0 && tens != 0 && teens == 0 && ones != 0) {current_total = 0;}   // Just a tens and a one

    // Hundreds //

    if (hundreds == 1) {current_total = current_total + 10;} // one hundred
    if (hundreds == 2) {current_total = current_total + 10;} // two hundred
    if (hundreds == 3) {current_total = current_total + 12;} // three hundred
    if (hundreds == 4) {current_total = current_total + 11;} // four hundred
    if (hundreds == 5) {current_total = current_total + 11;} // five hundred
    if (hundreds == 6) {current_total = current_total + 10;} // six hundred
    if (hundreds == 7) {current_total = current_total + 12;} // seven hundred
    if (hundreds == 8) {current_total = current_total + 12;} // eight hundred
    if (hundreds == 9) {current_total = current_total + 11;} // nine hundred

    // Tens //

    if (tens == 1) {current_total = current_total + 3;} // ten
    if (tens == 2) {current_total = current_total + 6;} // twenty
    if (tens == 3) {current_total = current_total + 6;} // thirty
    if (tens == 4) {current_total = current_total + 5;} // forty
    if (tens == 5) {current_total = current_total + 5;} // fifty
    if (tens == 6) {current_total = current_total + 5;} // sixty
    if (tens == 7) {current_total = current_total + 7;} // seventy
    if (tens == 8) {current_total = current_total + 6;} // eighty
    if (tens == 9) {current_total = current_total + 6;} // nintey

    // Teens //

    if (teens == 1) {current_total = current_total + 6;} // Eleven
    if (teens == 2) {current_total = current_total + 6;} // Twelve
    if (teens == 3) {current_total = current_total + 8;} // Thirteen
    if (teens == 4) {current_total = current_total + 8;} // Fourteen
    if (teens == 5) {current_total = current_total + 7;} // Fifteen
    if (teens == 6) {current_total = current_total + 7;} // Sixteen
    if (teens == 7) {current_total = current_total + 9;} // Seventeen
    if (teens == 8) {current_total = current_total + 8;} // Eighteen
    if (teens == 9) {current_total = current_total + 8;} // Nineteen

    // Ones //

    if (ones == 1) {current_total = current_total + 3;} // One
    if (ones == 2) {current_total = current_total + 3;} // Two
    if (ones == 3) {current_total = current_total + 5;} // Three
    if (ones == 4) {current_total = current_total + 4;} // Four
    if (ones == 5) {current_total = current_total + 4;} // Five
    if (ones == 6) {current_total = current_total + 3;} // Six
    if (ones == 7) {current_total = current_total + 5;} // Seven
    if (ones == 8) {current_total = current_total + 5;} // Eight
    if (ones == 9) {current_total = current_total + 4;} // Nine

    // Sum

    //printf ("current total for %d is %ld \n",num, current_total);
    total = total + current_total;
  }
  total = total + 11 ;                                          // One Thousand
  //printf ("number :1000");                                      //
  //printf (" hundreds:0");                                       //
  //printf (" tens: 0");                                          //
  //printf (" teens: 0");                                         //
  //printf (" ones: 0");                                          //
  //printf ("current total for 1000 is %ld \n", current_total);   //
  printf ("Answer is: %ld \n", total);
  return 0;
}

// Dan Gorringe July 2016
// Finished
// Answer = 21124
