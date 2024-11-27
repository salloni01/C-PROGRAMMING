#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N,sum=0;
     printf("Enter Number");
    scanf("%d",&N);
     while(N!=0)
    {
       int rem=N%10;
         sum = sum + rem;
         N=N/10;
       }
    printf("Sum= %d",sum);
    return 0;
    
} 