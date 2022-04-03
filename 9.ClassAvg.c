/*
Experiment No. : 10
Implement structtures to read, write and compute the marks, student name and roll number of the students scoring below and above the average marks of the class of N students. 
Name : Harshita Kumari
Roll No. : 67
Date : 07/02/2022
*/
#include <stdio.h>
struct Student
{
	int RollNo;
	char Name[50];
	float MathsMarks;
	float EnglishMarks;
	float ScienceMarks;
	float ArtsMarks;
	float Language2Marks;
	float StudentAvg;
};
int main()
{
	int n, any=0;
	printf("Enter the number of students in the class:\n");
	scanf("%d", &n);	
	struct Student Class[n];
	printf("Enter the details of each student as instructed:\n\n");
	for(int i=0; i<n; i++)
	{
		printf("\t----------------\n\tFor Student No.%d\n\t----------------\nName of the student: ",i+1);
		//fgets(Class[i].Name, 50, stdin);
		scanf(" %s", Class[i].Name);
		printf("\nRoll number of the student: ");
		scanf("%d", &Class[i].RollNo);
		printf("\nMarks in English: ");
		scanf("%f", &Class[i].EnglishMarks);
		printf("\nMarks in Maths: ");
		scanf("%f", &Class[i].MathsMarks);
		printf("\nMarks in Science: ");
		scanf("%f", &Class[i].ScienceMarks);
		printf("\nMarks in their Second Language: ");
		scanf("%f", &Class[i].Language2Marks);
		printf("\nMarks in Arts: ");
		scanf("%f", &Class[i].ArtsMarks);
		printf("\n\n");
		Class[i].StudentAvg=(Class[i].EnglishMarks + Class[i].MathsMarks + Class[i].ScienceMarks + Class[i].Language2Marks + Class[i].ArtsMarks)/5;
	}
	float Avg;
	printf("Enter the average marks of the class:\n");
	scanf("%f", &Avg);
	printf("List of students scoring above average:\n");
	printf("Roll No.\tName\t\tAvg. Marks Scored\n");
	for(int i=0; i<n; i++)
	{
		if(Class[i].StudentAvg>=35)
		{
			printf("%d\t\t%s\t\t%3f",Class[i].RollNo, Class[i].Name, Class[i].StudentAvg);
			any++;
		}
		printf("\n");
	}
	if(any==0)
		printf("\nNo student in the class scored above 35.");
	any=0;
	printf("\n\nList of students scoring below average:\n");
	printf("Roll No.\tName\t\tAvg. Marks Scored\n");
	for(int i=0; i<n; i++)
	{
		if(Class[i].StudentAvg<=35)
		{
			printf("%d\t\t%s\t\t%3f",Class[i].RollNo, Class[i].Name, Class[i].StudentAvg);
			any++;
		}
		printf("\n");
	}
	if(any==0)
		printf("\nNo student in the class scored below 35.");
	return 0;
}
