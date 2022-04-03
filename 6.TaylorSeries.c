 /*
Experiment No. : 7 
Compute sin(x)/cos(x) using Taylor series approximation. Compare your result with the built-in library function. Print both the results with appropriate inferences.
Name : Harshita Kumari
Roll No. : 67
Date : 01/02/2022
*/
#include<stdio.h>
#include<math.h>
#define PI 22/7
int main()
{
  float denom=1, sum=0, term, i=1, x;
  printf("Enter the value of x in degrees:\n");
  scanf("%f", &x);
  x=x*PI/180;//calculating the value of x in radians
  printf("The value of sin x is= %f.\n", sin(x));
  float numer=x;
  do
  {
    term= numer/denom;
    sum+=term;
    numer*=(-x*x); 
    denom*=i*(i-1);
    i+=2;
    printf("%f %f %f %f %f\n", i, numer, denom, term, sum);
  }while(fabs(term)>=0.00001);
  printf("The value of sin x using Taylor Series is= %f.\n", sum);
  return 0;
}
