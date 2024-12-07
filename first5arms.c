#include<stdio.h>
#include<math.h>
   int main(){
    system("cls");
     int sum=0,digits,first,i ;
     
     scanf("%d",&i);
    
     for( i=1;i<=4;i++){ 
        while(i!=0)
    {
         int rem=i%10;
        i=i/10;
        int p=1;
        for(int i=1; i<=digits; i++)
        {
            p=p*rem;
        }
         sum = sum+p;
         }
   printf("%d",sum);
      }
       return 0;
    }  
