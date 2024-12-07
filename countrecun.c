#include<stdio.h>
#include<stdlib.h>
 int Count(int N){
 if(N==0)
 return 0;
 else 
 return 1 + Count(N/10);
 }
int main()
{
    system("cls");
    int  N;
    
     printf("Enter Number");
    scanf("%d",&N);
   int count=Count(N);
    printf("Number of digits in %d is %d",N,count);
    return 0;
    
} 
