#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N,sum=0,digits,first;
     printf("Enter Number");
    scanf("%d",&N);
    digits=(int)log10(N);
    first=N/pow(10,digits);
    
     sum=first+N%10;
    
    printf("Sum= %d",sum);
    return 0;
    
} 