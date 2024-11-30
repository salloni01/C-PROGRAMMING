#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int s;
    float otax=0,ntax=0;
    scanf("%d",&s);
    if( s<=500000){
        otax=0;
    
    }
   else if ( s <= 500000){
      otax = (((s-250000)* 0.05) + 0);
    
   } 
    
     else if ( s<=1000000){
        otax = 12500+(s-500000)*0.2;
     }
    else if (s>1000000){
        otax=112500+(s-1000000)*0.3;
    }
   if( s<=700000){
        ntax=0;
       }
     else if ( s <= 500000){
      ntax = (((s-250000)* 0.05) + 0);
     }
    else if (s>500000&&s<=750000){
        ntax=12500+((s-500000)*0.1) ;
    }
    else if(s>750000&&s<=1000000){
        ntax=37500+(s-750000)*0.15;
    }
     else if (s>1000000&&s<=1250000){
         ntax=75000+(s-1000000)*0.20;
     }
    else if (s>1250000&&s<=1500000){
        ntax=125000+(s-1250000)*0.25;
    }
    else if(s>1500000){
        ntax=187500+(s-1500000)*0.30;
    }   
     printf("%.2f %.2f",otax,ntax);
    return 0;
}
