/*
Experiment No. : 5
Implement Matrix multiplication and validate the rules of multiplication.
Name : Harshita Kumari
Roll no. : 67
Date : /0/2022
*/
#include<stdio.h>
int main()
{
  int m,n,p,q;
  printf("Enter the order of the first matrix :\n");
  scanf("%d%d",&m,&n);
  printf("Enter the order of the secondmatrix :\n");
  scanf("%d%d",&p,&q);
  /* For multiplication of two matrices, the number of columns in the first
  matrix should be equal to the number of rows in the second matrix */
  if(n!=p)
  {
    printf("Number of columns of Matrix A is not equal to number of rows of matrix B\n");
    printf("Multiplication of matrices not possible....\n");
    return 0;
  }
  int Matrix1[m][n], Matrix2[p][q], temp[m][q], inmat=1;
  // Input the elements into Matrix 1 and 2
  for(int i=1; i<3; 1++)
  {
    printf("\nEnter the elements of matrix no.%d as follows :\n",i);
    for(i=0;i<m;i++)
    {
      printf("\nFor column no %d and\n",i);
      for(j=0;j<n;j++)
      {
        printf("Row number %d: ",j);
        if(inmat==1)
          scanf("%d",&Matrix1[j][i]);
        else
          scanf("%d",&Matrix2[j][i]);
      }
    }
    m+=p; p=m-p; m=m-p;
    n+=r; r=n-r; n=n-r;
    inmat++;
  }
  inmat=1;
  m+=p; p=m-p; m=m-p;
  n+=r; r=n-r; n=n-r;
  for(int i=1; i<3; 1++)
  {
    printf("\nMatrix no.%d :\n",i);
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
          if(inmat==1)
            scanf("%d",&Matrix1[j][i]);
          else
            scanf("%d",&Matrix2[j][i]);
        }
      }
    m+=p; p=m-p; m=m-p;
    n+=r; r=n-r; n=n-r;
    inmat++;
  }
  m+=p; p=m-p; m=m-p;
  n+=r; r=n-r; n=n-r;
  printf("\nMatrix 1 and 2 on multiplication gives:\n");
  // Compute (Matrix 1) X (Matrix 2)
  for(i=0;i<m;i++)
  {
    for(j=0;j<q;j++)
    {
      for(k=0;k<n;k++)
      {
        printf("%d ",(Matrix1[i][k] * Matrix2[k][j]));
      }
      printf("\n");
    }
  }
  return 0;
}
