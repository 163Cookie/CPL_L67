/*
Experiment No. : 12
Implement Recursive functions for binary to decimal conversion.
Name : Harshita Kumari
Roll No. : 67
Date : 15/03/2022
*/
#include <stdio.h>
int BinConvToDec(int bin);
int main()
{
	int Binary;
	printf("Enter the binary number to be converted:\n");
	scanf("%d", &Binary);
	int temp=Binary;
	while(temp>0)
	{
		if(temp%10!=1 && temp%10!=0)	
		{
			printf("Invalid input, a binary number consits of only 0's and 1's.\n");
			return 0;
		}
		temp/=10;
	}
	int result=BinConvToDec(Binary);
	printf("Binary number= %d\nBinary number in decimal= %d\n", Binary, result);
	return 0;
}

// function to convert the given binary number to its decimal value
int BinConvToDec(int bin)
{
	if(bin==0)
		return 0;
	else
		return BinConvToDec(bin/10)*2 + bin%10;
}
