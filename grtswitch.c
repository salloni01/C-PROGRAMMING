#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a1,a2;
    printf("Enter number 1 and number 2");
    scanf("%d%d",&a1,&a2);
    while(a2!=0)
    {
       a1++;
       a2--;
     }
      
    printf("%d",a1);
    return 0;
}
