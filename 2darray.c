#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int arr[4][3]={{17,34,23},{55,80,72},{308,678,76},{97,76,45}};
      printf("Elements of 2d aarray are \n");
      for(int i=0;i<4;i++) //here i represents row index 
    { 
        for(int j=0;j<3;j++){  //j maintain the index of column 
            printf("%d ",arr[i][j]);
             } 
             printf("\n");
    }
    return 0;
}