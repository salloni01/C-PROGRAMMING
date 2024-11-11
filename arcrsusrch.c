#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int area,r,l,b,a;
    printf("Enter r,l,b,a");
    scanf("%d%d%d%d",&r,&l,&b,&a);
    printf("Area of circle = %d\n",area = 3.14*r*r);
    printf("Area of rectangle = %d\n",area = l*b);
    printf("Area of square = %d\n",area = a*a);
    return 0;
}