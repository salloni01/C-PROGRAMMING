#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N;
     printf("Enter Number");
    scanf("%d",&N);
    for(int i =1; i<=N; i++)
    {
       printf("%d ",i*i );
    }
    return 0;
    
}