#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,c;
     printf("Enter Number");
    scanf("%d",&n); //123
    while(n!=0)
    {
     c= n%10; //3
     n=n/10; //12
     printf("%d",c);
    }
    
     return 0;
    
} 
