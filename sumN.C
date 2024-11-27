#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N,sum=0;
     printf("Enter Number");
    scanf("%d",&N);
  for(int i=1;i<=N;i++){
    sum=sum+i;
  }
    printf("Sum=%d",sum);
    return 0;
    
}