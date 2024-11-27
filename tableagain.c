#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N,i;
    printf("Enter input from the user");
    scanf("%d",&N);
    for(i=1;i<=20;i++){
        
        printf("%d * %d = %d\n",N,i,N*i);
    }
    return 0;
    }