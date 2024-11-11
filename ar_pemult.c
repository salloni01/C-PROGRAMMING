#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float radius, area,per;
    printf("Enter radius");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    per = 2 * 3.141 * radius;
    printf("Area of circle = %f\nPerimeter of circle = %f\n",area,per);
    int side,square,per1;
    printf("Enter side");
    scanf("%d",&side);
    square = side * side;
    per1 = 4 * side;
    printf("Square =%d\nPerimeter of square =%d\n",square,per1);
    int l,b,area1,per2;
    printf("Enter l and b");
    scanf("%d%d",&l,&b);
    area1 = l * b;
    per2 = 2*( l+b);
    printf("Area of rectangle =%d\nPerimeter of rectangle = %d\n",area1,per2);
    return 0;
}
