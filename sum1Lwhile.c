#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    system("cls");
    int N,count=0;
    printf("Enter N");
    scanf("%d",&N);
    int temp=N;
    while (N!=0)
    {
        N=N/10;
        count++;
    }
    
       N=temp;
       int lastdigit=N%10;
       int firstdigit=N/pow(10,count-1);
       int sum = lastdigit+firstdigit;
       printf("Sum of 1st and last digit = %d",sum);
    return 0;
 }
