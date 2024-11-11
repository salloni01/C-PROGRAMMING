#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int d,y,m,D;
    printf("Enter D");
    scanf("%d",&D);
    y = D/365;
    D = D%365;
    m = D/30;
    d = D%30;
    printf("value of y = %d\nValue of m =%d\nValue of d = %d",y,m,D);
    return 0;
}