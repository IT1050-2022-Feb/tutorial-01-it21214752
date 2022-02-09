/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  
  //variable declaration and initialization
  int mark1 = 0;
  int mark2 = 0;
  int sum = 0;
  float average = 0;

  printf( "Enter mark 1 : " );  //prompt user to enter number 1
  scanf( "%d", &mark1 );  //read mark 1

  printf( "Enter mark 2 : " );  //prompt user to enter number 2
  scanf( "%d", &mark2 );  //read mark 2

  sum = mark1 + mark2;
  average = sum / 2.0;  //calculate average

  printf( "The average is : %.2f ", average );  //print average

  return 0;
}//end of the main function

