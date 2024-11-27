#include<stdio.h>
#include<stdlib.h>
int main()
{
   system("cls");
    int n,multp = 1;
    printf("Enter 3 digit number");
    scanf("%d",&n); //153
    multp = multp * (n%10); //1*3
    n = n/10;
    multp = multp * (n%10); //3*5
    n = n/10;
    multp = multp * (n%10); //15*1
    n = n/10;
    printf("Multplication of digits = %d",multp);
    return 0;
}