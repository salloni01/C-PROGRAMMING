#include<stdio.h>
#include<math.h>


int main()
{
   
    int i=2,n,flag=0;
     printf("Enter Number");
    scanf("%d",&n); 
    while(i<=n/2)
      { 
        if(n%i==0)
       {
       flag=1;
       break;
        }
        i++;
    }
    if(flag==0)
    printf("Number is prime");
    else
    printf("Number is not prime");
    return 0;
} 