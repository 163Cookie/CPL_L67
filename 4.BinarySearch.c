/*
Experiment No. : 5 
Implement binary search on integers/names.
Name : Harshita Kumari
Roll No. : 67
Date : 15/02/2022
*/
#include<stdio.h>
#include<math.h>
int main()
{
  int n, r=0, mid, first, last, temp, ch=0;
  float ele[100], elesrh;
  printf("Enter the number of elements to be used:\n");
  scanf("%d", &n);
  printf("Enter the elements : \n");
  for(int i=0; i<n; i++)
  {
    scanf("%f", &ele[i]);
  }
  for(int i=0; i<n-1; i++)
  {
    for(int j=0; j<n-i-1; j++)
    {
      if(ele[j]>ele[j+1])
      {
        temp=ele[j];
        ele[j]=ele[j+1];
        ele[j+1]=temp;
      }
    }
  }
  temp=1;
  printf("The elelments after being sorted are:\n");
  for(int i=0; i<n; i++)
		{
			printf("%f\n", ele[i]);
		}
  while(ch==0)
  {
    printf("\nEnter the element you wanna search for:\n");
    scanf("%f", &elesrh);
    for(int i=0; i<n; i++)
      if(ele[i]==elesrh)
        r+=1;
    first=0; 
    last=n-1;
    while(first<=last && temp!=0)
    {
      mid=(first+last)/n;
      //printf("wth it works\n");
      if(ele[mid]==elesrh)
      {
        temp=0;mid+=1;
        printf("Element found.\nNo of repititions of the element=%d.\nPosition(s) it is found at(after sorting)=\n%d", mid, r);
				for(int i=1; i<r;i++)
					printf("\n%d", mid++);
				printf(".\n");
      }
      else if(ele[mid]>elesrh)
        first=mid+1;
      else if(ele[mid]<elesrh)
        last=mid-1;
    }
    if(temp==1)
    printf("Element not found.\n");
    printf("Would you like to search for another element? Enter 0 for yes and any other number for no:\n");
    scanf("%d", &ch);
  }
  printf("Ending program.\n");
  return 0;
}
