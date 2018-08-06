//This is task 22 of ProjectEuler, Sort names and then sum the position*digitvalue
#include<stdio.h>
#include<math.h>
#include <string.h>


int main()
{

  // Load Array ///

  char name[5164][16];

  FILE * ifp = fopen("p022_names.txt", "r"); //open file
/*
  fscanf (ifp, "%d", &wordCount); //read number of words in dictionary
  printf ("words read = %d\n", wordCount); //verified number is being read
*/
  int wordCount = 5163;
  int i;
  for (i = 0; i < wordCount; i++) //load wordbank array with words
     {

     fscanf (ifp, "%s", name[i]);
     printf ("%s \n", name[i]);

     }

  printf ("Load finsihed\n\n");
  if(AlphabeticalCheck(name[1],name[2]) == 1){
    printf("Wehay");
  }

  return 0;
}

int AlphabeticalCheck(char name1, char name2){
  int i;
  for (i = 0; i < strlen(char name1); i++){
    if (name1[i] < name2[i]){
      return 1;
    }
  return 0;
  }
}
// Dan Gorringe July 2016
// in Progress
// Answer =


//  printf ("Lowest %s, j is %d, i is %d\n", name[0], j, i);
