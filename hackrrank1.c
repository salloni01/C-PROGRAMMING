#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int main() {
    int a,b,sum,difference;
    float c,d,sum2,subt;
   printf("Enter a,b,c,d");
    scanf("%d%d%f%f",&a,&b,&c,&d);
    sum=a+b;
    printf("%d",sum);
    printf(" ");
    difference=a-b;
    printf("%d",difference);
    sum2 = c+d;
    printf("\n%f",sum2);
    printf(" ");
    subt=c-d;
    printf("%f",subt);
    return 0;
}
