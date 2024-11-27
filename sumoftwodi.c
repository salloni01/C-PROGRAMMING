#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
   int n,m,sum=0;
   printf("Enter number of rows and columnd");
   scanf("%d%d",&n,&m);
   int marks [n][m];
   printf("Enter 2D Array elements");
    for(int i=0;i<n;i++) //here i represents row index 
    { 
        for(int j=0;j<m;j++){  //j maintain the index of column 
           scanf("%d",&marks[i][j]) ;
        sum = sum+marks[i][j];
         }
         }
          printf("Sum of %d",sum);
  
    return 0;
}