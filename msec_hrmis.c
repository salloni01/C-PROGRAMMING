#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int h,m,s,M;
    printf("Enter M");
    scanf("%d",&M);
    h = M/3600000;
    M = M%3600000;
    m = M/60000;
    M = M%60000;
    s = M/1000;
    printf("Value of h = %d\nValue of m = %d\nValue of s = %d\n",h,m,s);
    return 0;
}
