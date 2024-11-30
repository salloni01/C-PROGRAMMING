#include<stdio.h>
#include<math.h>
     int isarmstrong(int N){
    int sum=0,digits,first, N1;
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
        return 1;
       else
       
         return 0;
       }
       
       int isprime(int n){
        int i=2,flag=0;
     
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
    return 1;
    else
    return 0;
} 
     int isperfect(int n3){
    int  sum=0;
    
   int n1=n3;
   int i=1;
    while(i<=n3/2){
        if(n3%i==0){
            sum=sum+i;
        }
        i++;
    }
   if(sum==n1)
     return 1;
     else
     printf("0");
    
    return 0;
     }

int main(){
         system("cls");
         int n2;
         printf("Enter number");
         scanf("%d",&n2);
         int arm=isarmstrong(n2);
         int prm=isprime(n2);
         int per=isperfect(n2);
         if(arm==1)
        printf("%d Number is armstrong\n",n2);
    else
        printf("%d Number is not armstrong\n",n2);
      if(prm==1)
      printf("%d number is prime\n",n2); 
      else
      printf("number is not prime\n",n2);
       if(per==1)
        printf("%d Number is perfect\n",n2);
    else
        printf("Number is not perfect\n",n2);
        }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     