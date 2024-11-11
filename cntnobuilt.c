#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N;
     printf("Enter Number");
    scanf("%d",&N);
    int digits = (int)log10(N)+1;
    printf("Number of digits in %d is %d",N,digits);
    return 0;
    
} 
