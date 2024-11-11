#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num1,num2,division;
    printf("Enter 1st Number");
    scanf("%d",&num1);
    printf("Enter 2nd Number");
    scanf("%d",&num2);
    division = num1 / num2;
    printf("Division =%d", division);
    return 0;
}

