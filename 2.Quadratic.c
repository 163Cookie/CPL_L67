/*
Experiment No. : 2 
Compute the roots of a quadratic equation by accepting it's coefficients. Print the appropriate messages.
Name : Harshita Kumari
Roll No. : 67
Date : 11/01/2022
*/
#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, discriminant, root1, root2;
  int choice;
  RE:
  printf("Enter the coefficients (a, b, c)of the quadratic equation in it's general form(ax^2 + bx + c = 0): \n");
  scanf("%f %f %f", &a, &b, &c); 
  discriminant = (b*b)-(4*a*c);
  if(a==0)
  {
    printf("According to the values of the co-efficients entered(i.e %f, %f, %f), the given equation is linear.\n", a, b, c);
  }
  else
  {
    if(discriminant==0)
    {
      printf("According to the values of the co-efficients entered(i.e %f, %f, %f), the given equation has real and equal roots.\n", a, b, c);
      root1= -b/(2*a);
      root2= root1;
      printf("The roots are: \n%f, \n%f\n", root1, root2);
    }
    else if(discriminant>0) //strictly >
    {
      printf("According to the values of the co-efficients entered(i.e %f, %f, %f), the given equation has real and unequal roots.\n", a, b, c);
      root1=(-b +sqrt(discriminant))/(2*a);
      root2=(-b -sqrt(discriminant))/(2*a);
      printf("The roots are: \n%f, \n%f\n", root1, root2);
     }
    else
    {
      printf("According to the values of  the co-efficients entered(i.e %f, %f, %f), the given equation has imaginary roots.\n", a, b, c);
      root1=(-b)/(2*a);
      root2=sqrt(-discriminant)/(2*a);
      printf("The roots are: \n%f + i%f, \n%f - i%f.\n", root1, root2, root1, root2);
    }
  }
  printf("Would you like to continue? If yes enter 1 else enter any other whole number to exit.\n");
  scanf("%d", &choice);
  if(choice==1)
    goto RE;
  else
  {
    printf("Exiting Program.\n");
    return 0;
  }
}
