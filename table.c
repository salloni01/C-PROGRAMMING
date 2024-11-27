#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N,i;
    printf("Enter N");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
        
        printf("%d * %d = %d\n",N,i,N*i);
    }
    return 0;
    }