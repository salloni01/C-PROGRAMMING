#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N;
     printf("Enter Number");
    scanf("%d",&N);
    for(int i=N; i>=1; i--)
    {
       printf("%d ", i);
    }
    return 0;
    
}