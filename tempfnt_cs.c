#include<stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    float F,c;
    printf("Enter F");
    scanf("%f",&F);
    c = (F-32)*5/9;
    printf("Temp in celsius = %f\n",c);
    return 0;
}