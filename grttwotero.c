#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a,b,largest;
    printf("Enter a,b");
    scanf("%d%d",&a,&b);
    largest = (a>b)? a : b;
    printf("Largest value is %d",largest);
    return 0;
}