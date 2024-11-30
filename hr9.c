#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,p1=0,p2=0;
    int max=0,winner=0;
    scanf("%i",&n);
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%i %i",&a,&b);
        p1=p1+a;
        p2=p2+b;
        int l;
        if(p1>p2){ 
          l=p1-p2;
          if(l>max){
             max=l;
             winner = 1;
        }
        }
        else{
           l=p2-p1;
            if(l>max){
                max=l;
                winner=2;
        }
    }
    }
   printf("%i %i",winner,max);
        return 0;
}
