#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int x,y,z;
    printf("Enter x");
    scanf("%d",&x);
    printf("Enter y");
    scanf("%d",&y);
    z = x;
    x = y;
    y = z;
    printf("value of x = %d",x);
    printf("value of y =%d",y);
    return 0;

}