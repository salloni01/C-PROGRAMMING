#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int b,h,area;
    printf("Enter b");
    scanf("%d",&b);
    printf("Enter h");
    scanf("%d",&h);
    area = 0.5 * b *h;
    printf("Area = %d",area);
    return 0;
}