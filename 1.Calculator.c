/*
Experiment No. : 1
Simulaton of a simple calculator
Name : Harshita Kumari
Roll no. : 67
Date : 04/01/2022
*/
#include <stdio.h>
#include <math.h>
int main()
{
  int num1, num2;
  double result=0;
  char operator='\n';
 while(operator!='+'&& operator!='-' && operator!= '*' && operator!='/' && operator!='%')
  {
		printf ("Enter the operator: \n" );
  operator=getchar();
		if(operator!='+'&& operator!='-' && operator!= '*' && operator!='/' && operator!='%')
    printf ("Invalid input. Please enter one of the following: +, *, / or %% for their respective functions.\n");
  }
  printf ("Enter the two integers: \n");
  scanf ("%d %d", &num1, &num2);
  switch (operator)
  {
    case '+':
    result=num1+num2;
    break;
    case '-':
    result=num1-num2;
    break;
    case '*':
    result=num1*num2;
    break; 
    case '%':
    if (num2==0)
    {
      printf ("The second number entered is zero hence the result cannot be calculated.");
      break;
    }
    else
    {
      result=num1%num2;
    }
    break;
    case '/':
    if (num2==0)
    { redo2:
      printf ("The second number entered is zero hence the result cannot be calculated.");
      break;
    }
    else
    result=num1/num2 ;
    break;
    default:
    printf ("Invalid input.\n");
		break;
  }
  printf ("%d %c %d = %f \n", num1, operator, num2, result);
  /*  if (operator=="+")
    result=num1+num2;
  else if (operator=='-')
    result=num1-num2;
  else if (operator=='/')
    result=num1/num2;
  else if (operator=='*')
    result=num1*num2 ;
  else if (operator=='%')
    result=num1%num2 ;
  else if (operator!='+' && operator!='-' && operator!='/' && operator!='*' && operator!='%')
  {
    printf ("Invalid input. Please enter one of the following: +, -, *, / or %% for their respective functions. \n");
    return 0;
  }
  printf("Resu1ts: %d %c %d = %f", num1, operator, num2, result);
  */
  return 0;
}
