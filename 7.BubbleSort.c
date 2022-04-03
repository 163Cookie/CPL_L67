/*
Experiment No. : 8
Sort the given set 
Name : Harshita Kumari
Roll No. : 67
Date : 08/02/2022
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float e[50], temp;
	int i;6
	printf("Enter the number of elements you want to sort :\n");
	scanf("%d", &i);
	printf("Enter the %d elements :\n", i);
	for(int j=0; j<i; j++)
		scanf("%f",&e[j]);
	for(int j=0; j<i-1; j++)
	{
		for(int k=0;k<i-1-j; k++)
		{
			if(e[k]>e[k+1])
			{
				temp=e[k];
				e[k]=e[k+1];
				e[k+1]=temp;
			}
		}     
		for(int j=1; j<i+1; j++)
		printf("%f\t",e[j]);     
		printf("\n");                                            
	}
	printf("The numbers after sorting are: \n");
	for(int j=0; j<i; j++)
		printf("%f\n",e[j]);
	return 0;
}
