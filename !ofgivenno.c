#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
 int i,fact=1,ch;
 printf("Enter ch");
 scanf("%d",&ch);
 for(i=1;i<=ch;i++){
    fact=fact*i;
    printf("Fact = %d\n",fact );
 }
 return 0;
 }