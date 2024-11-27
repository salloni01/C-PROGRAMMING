#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int rowsize;
      printf("Enter the row and column size of 2D Array");
      scanf("%d" ,& rowsize);
      int arr[rowsize][rowsize];
      printf("Enter 2D Array Elements");
      int sum =0,j,c,r;
      for(int i=0; j=c-1; i<r && j>=0 , i++,j--){
    sum = sum+ arr[i][j];

}
printf("sum = %d",sum);
return 0;
}