#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num1, num2;
    printf("Enter two Number");
    scanf("%d%d",&num1, &num2);
    printf("Addition = %d\n",num1+num2);
    printf("Subtraction = %d\n",num1-num2);
    printf("Multiplication= %d\n",num1*num2);
    printf("Remainder = %d\n",num1%num2);
    return 0;
}