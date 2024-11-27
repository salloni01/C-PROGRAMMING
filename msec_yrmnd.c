#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int M,y,m,dy;
    printf("Enter M");
    scanf("%d",&M);
    y = M / 31536000000;
    M =M % 31536000000;
    m = M / 2592000000;
    dy = M % 2592000000;
    printf("Value of y = %d\nValue of m = %d\nValue of dy = %d",y,m,dy);
    return 0;
}