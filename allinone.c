#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num1,num2,sum,subt,multp,rem;
    printf("Enter num1");
    scanf("%d",&num1);
    printf("Enter num2");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("Sum = %d\n",sum);
    subt = num1 - num2;
    printf("Subt = %d\n",subt);
    multp = num1 * num2;
    printf("Multp = %d\n",multp);
    rem = num1 % num2;
    printf("Rem = %d\n",rem);
    return 0;
}