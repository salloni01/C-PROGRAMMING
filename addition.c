#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1, num2, sum;
    printf("Enter 1st Number");
    scanf("%d",&num1);
    printf("Enter 2nd Number");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("Sum = %d", sum);
    return 0;
}