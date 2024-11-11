#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
 int i,fact=1,ch,sum=0;
 printf("Enter ch");
 scanf("%d",&ch);
 for(i=1;i<=ch;i++){
    fact=fact*i;
   sum=sum+fact;
    printf("Fact = %d\n",sum );
 }
 
     return 0;
 }