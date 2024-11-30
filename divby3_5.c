#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("Enter n");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("divisible by 3 and 5");
    }
    else if ( n%3!=0 && n%5==0){
        printf("divisible by 5");
    }
    else if ( n%3==0 && n%5!=0){
        printf("divisible by 3");
    }
    else{
        printf("not divisible");
    }
    return 0;
}