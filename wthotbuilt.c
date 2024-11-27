#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N,count=0;
     printf("Enter Number");
    scanf("%d",&N);
    int temp = N;
    while(N!=0)
    {
        N=N/10;
        count++;
    }
    printf("Number of digits  in %d is %d",temp,count);
    return 0;
    
} 