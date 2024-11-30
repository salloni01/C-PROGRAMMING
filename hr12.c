#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      
    int N,N2;
    scanf("%d",&N); 
  int last=N%10;
    N=N/10;
   int sum=0;
    while(N!=0)
   {
      N2=N%10;
        sum=sum+N2;
       N=N/10;
    }
   if( sum==last)
       printf("Yes");
    else
        printf("No");
     return 0;
}
