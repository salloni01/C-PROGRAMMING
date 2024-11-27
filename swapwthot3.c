#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("values of a = %d",a);
    printf("value of b = %d",b);
    return 0;
    }