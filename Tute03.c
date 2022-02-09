/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
{
  //variable declaration and initialization
  int num = 0;  
  int sum = 0;
  int count = 0;

  printf( "Enter number : " );  //prompt user to input number
  scanf( "%d", &num );  //read number

  while ( count <= num )  //repitition condition
  {
     sum = sum + count;  //calculate sum
    ++count;
  }
  
  printf( "sum : %d ", sum ); //print sum

  return 0;
}

