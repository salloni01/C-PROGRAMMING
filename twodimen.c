#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int rowsize,colsize;
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
             printf(" Elements of 2d array are \n");
    
      for(int i=0;i<rowsize;i++)
    { 
        for(int j=0;j<colsize;j++){ 
           printf("%d ",arr[i][j]) ;
        }
             
             printf("\n");
    }
    return 0;
}