/*
Experitment 3 :
An electricity board charges the following rates for the use of elecritcity :
for the first 200 units - 80 paise per unit;
for the next 100 units - 90 paise per unit;
beyond 300 units - Rs.1 per unit.
All the users are charged a minimun of Rs.100 as meter charge.
If the total amount is more than Rs.400, then the additional surcharge of 15% of the total is charged.
Write a program to read the name of the user, the number of units consumed, and print ou the charges.
Name : Harshita Kumari
Roll no. : 67
Date : 18/01/2022
*/

#include<stdio.h>
int main()
{
  float charge, units;
  char name[100];
  printf("Please enter your name and the number of units you have used this month respectively:\n");
  fgets(name,100,stdin);
  scanf("%f", &units);
  if (units<0)
  {
    printf("Invalid Input. Please run the program again.\n");
    return 0;
  }
  if(units<=200)
  {
    charge=units*0.8;
  }
  else if(units>200 && units<=300)
  {
    charge=((units-200)*0.9) + 160;
  }
  else
  {
    charge=((units-300)*1) + 250;
  }
  charge+=100;
  if(charge>400)
  {
    charge=charge*1.15;
  }
  printf("Name: %s\nTotal charge for the usage of %f units is Rs.%f.", name, units, charge);
  return 0;
}
