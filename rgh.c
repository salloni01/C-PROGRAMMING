#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,rev=0;
          printf("Enter Number");
    scanf("%d",&n); 
    while(n!=0)
    {
     int rem = n%10;
     rev= rev*10 + rem; 
     n=n/10; 
     }
      printf("%d",n);
      return 0;
    
} 