#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int rowsize;
      printf("Enter the row and column size of 2D Array");
      scanf("%d" ,&rowsize);
      int arr[rowsize][rowsize];
      printf("Enter 2D Array Elements");
        for(int i=0;i<rowsize;i++) //here i represents row index 
    { 
        for(int j=0;j<rowsize;j++){  //j maintain the index of column 
           scanf("%d",&arr[i][j]) ;
        }
     }  
         
    int  sum=0;    
      for(int i=0;i<rowsize;i++) //here i represents row index 
    { 
        sum=sum+ arr[i][i];
    }
    printf(" sum= %d\n",sum); 

    int sum1 =0;
      for(int i=0, j=rowsize-1; i<rowsize && j>=0 ; i++,j--){
    sum1 = sum1 + arr[i][j];

}
printf("sum1 = %d",sum1);
    return 0;
}