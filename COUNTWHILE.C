#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int  N;
    printf("Enter Number");
    scanf("%d",&N);
    int count=0;
    while(N!=0){
        count++;
        N=N/10;
    }
     printf("%d",count);
    return 0;
    
} 
