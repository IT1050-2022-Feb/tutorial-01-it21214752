/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main()
{
  //variable declaration and initialization
  int distance = 0;
  int amount = 0;

  printf( "Enter distance : " );  //prompt user to enter distance
  scanf( "%d", &distance );  //read distance

  //check whether the distance is less than 30 or not.
  if ( distance <= 30 )
    amount = distance * 50; //calculate the amount if distance is less than 30
  else if ( distance >= 30 )
          amount = 30 * 50 + ( distance - 30 ) * 40;  //calculate the amount if distance is greater than 30

  printf( "Amount : %d ", amount);  //display the total amount

  return 0;
}
