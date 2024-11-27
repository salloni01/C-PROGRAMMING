#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int i;
    printf("Enter i");
    scanf("%d",&i);
   if(i%100==0)
   {
    if(i%100==0)
    
        printf("leap year");
    
     else 
      printf("not a leap year");
      }
      else if (i%4==0)
      {
        printf("leap year");
      }
        else {
            printf(" not a leap year");
        }
         return 0;
      }