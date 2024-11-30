#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned int w;
    float ib;
   scanf("%u",&w); 
    scanf("%f",&ib);
    if(w%5==0 && w<= ib+0.50 ){
    printf("%.2f", (ib-w)-0.50);
    }
    else {
    printf("%.2f",ib);
    }
    return 0;
}
