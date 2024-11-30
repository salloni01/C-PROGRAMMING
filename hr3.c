#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 

   unsigned int customer_id ; 
    int units_consumed;
    float total;
    scanf("%u",&customer_id);
    scanf("%d",&units_consumed);
    if(units_consumed<=199) 
    {
        total = units_consumed * 1.20;

    }
    else if (units_consumed>=200 && units_consumed<=399)
    {
        total = (199 * 1.20) + ((units_consumed - 199)* 1.50);
    }
    else if (units_consumed>=400 && units_consumed<=599)
    {
        total = (199 * 1.20) + (200 * 1.50) + ((units_consumed - 399)* 1.80);
    }
    else if (units_consumed>=600)
    {
        total = (199 * 1.20) + (200 * 1.50) + (200 * 1.80) + ((units_consumed - 599)* 2.00);
    }
    if(total >400)
    {
        total =  total+(total*0.15);
    }
    else if( total<100)
    {
        total = 100;
    }
    printf("%u %.2f", customer_id, total);


    return 0;
}
