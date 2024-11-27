#include<stdio.h.>
#include<stdlib.h>
int main()
{
   system("cls");
    int num,cube;
    printf("Enter Number");
    scanf("%d",&num);
    if(num>0)
    {
        cube = num*num*num;
        printf("Cube of %d is %d",num,cube);
    }
    return 0;
}