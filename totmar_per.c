#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float a,b,c,d,e,t,p;
    printf("Enter a,b,c,d,e");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    t = a+b+c+d+e;
    p = t/5;
    printf("Total marks of student = %f\nPercentage = %f",t,p);
    return 0;
}