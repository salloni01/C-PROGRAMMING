#include<stdio.h>
#include<math.h>

int main()
{
    
    int N,sum=0,digits,first, N1;
     printf("Enter Number");
    scanf("%d",&N);
    N1=N;
   digits=(int)log10(N)+1;
    while(N!=0)
    {
         int rem=N%10;
        N=N/10;
        int p=1;
        for(int i=1; i<=digits; i++)
        {
            p=p*rem;
        }
         sum = sum+p;
         
       }
    if(N1==sum)
        printf("Number is armstrong");
    else
        printf("Number is not armstrong");
    return 0;
    
}  
