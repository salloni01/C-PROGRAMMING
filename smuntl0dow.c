#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,sum=0;
    do{
         printf("Enter Number");
    scanf("%d",&n); 
   sum +=n;
     } while(n!=0);
     printf("Sum=%d",sum);
    return 0;
    
} 
