#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
   printf("Enter n");
   scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
      for(int j=1;j<=i;j++){
        printf(" ");
      }  
    for(int k=1;k<=n-i;k++){
        printf("*");
    }
   printf("\n");
   }
   return 0;
}