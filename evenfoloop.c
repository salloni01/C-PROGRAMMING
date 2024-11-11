#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N,sum=0;
    printf("Enter Number");
    scanf("%d",&N); 
  for(int i =1; i<=N; i++)
    {
       if(i%2==0)
       sum=sum+i;

         }
   printf("Sum=%d\n ",sum );   
  
return 0;
}