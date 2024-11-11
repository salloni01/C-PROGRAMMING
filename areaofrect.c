#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int l,b,area;
    printf("Enter length");
    scanf("%d",&l);
    printf("Enter breadth");
    scanf("%d",&b);
    area = l * b;
    printf("Area = %d",area);
    return 0;
}