/*
Experiment No. : 10

Name : Harshita Kumari
Roll No. : 67
Date : 15/03/2022
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("Enter the number of elements to łbe computed:\n");
	scanf("%d", &n);
	float ele[n], sum=0, mean, varience=0, StdDeviation;
	printf("Enter the %d elements to be computed;\n",n);
	float *p=&ele[0];
	for(int i=0; i<n; i++)
	{
		scanf("%f",p); 
		p=p+1;
	}
	p=&ele[0];
	for(int i=0; i<n; i++)
	{
		sum+=(*p);
		p++;
	}
	mean=sum/n;
	p=&ele[0];
	for(int i=0; i<n; i++)
	{
		varience+=pow(mean-(*p),2);
		p=p+1;
	}
	varience/=n;
	StdDeviation=sqrt(varience);
	printf("For the given elements:\nMean=%f\nVarience=%f\nStandard Varience=%f\n", mean, varience, StdDeviation);
	return 0;
}
