#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    system("cls");
     int N,max= INT_MIN,num;
     printf("Enter how many  Numbers you want to read");
    scanf("%d",&N);
    printf("Enter %d number ",N);
    for(int i=1;i<=N;i++)
    {
      scanf("%d",&num);
      if(num>max)
      max=num;
    }
   printf("Max=%d",max);
    return 0;
    
} 

