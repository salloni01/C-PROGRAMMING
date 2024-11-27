#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int rowsize,colsize,sum=0;
      printf("Enter the row and column size of 2D Array");
      scanf("%d%d" ,& rowsize,&colsize);
      int arr[rowsize][colsize];
      printf("Enter 2D Array Elements");
      for(int i=0;i<rowsize;i++) //here i represents row index 
     { 
        for(int j=0;j<colsize;j++){  //j maintain the index of column 
           scanf("%d",&arr[i][j]) ;
        }    
     }  

     // logic to perform sum of each column of matrix(2D)    
     for(int i=0;i<rowsize;i++) //here i represents row index 
    { 
        int sum =0;
        for(int j=0;j<colsize;j++){  //j maintain the index of column 
         sum+=arr[i][j] ;
        }
        printf("Sum of %d row =%d\n",i+1,sum);   
      }  

        // logic to perform sum of each column of matrix(2D)    
     for(int i=0;i<colsize;i++) //here i represents row index 
    { 
        int sum =0;
        for(int j=0;j<rowsize;j++){  //j maintain the index of column 
         sum+=arr[j][i] ;
        }
        printf("Sum of %d column =%d\n",i+1,sum);   
      }
        return 0;
}