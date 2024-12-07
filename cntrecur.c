// tail recursion
#include<stdio.h>
#include<stdlib.h>
 int Count(int N){
 static int count=0;
 if(N!=0){
   count++;
   Count(N/10);
   
 }
 return count;
 }
int main()
{
    system("cls");
    int  N;
    
     printf("Enter Number");
    scanf("%d",&N);
   
    printf("%d",Count(N));
    return 0;
    
} 
