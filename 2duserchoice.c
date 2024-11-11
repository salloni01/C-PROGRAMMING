#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int arr[4][3];
      printf("Elements of 2d array are \n");
      for(int i=0;i<4;i++) //here i represents row index 
    { 
        for(int j=0;j<3;j++){  //j maintain the index of column 
           scanf("%d",&arr[i][j]) ;
        }
     } 
             printf(" Elements of 2d array are \n");
    
      for(int i=0;i<4;i++)
    { 
        for(int j=0;j<3;j++){ 
           printf("%d ",arr[i][j]) ;
        }
             
             printf("\n");
    }
    return 0;
}