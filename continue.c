#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
     printf("Enter Number");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++){
        if(i%5==0 && i%7==0)
        continue;
        printf("%d ",i);
    }
     return 0;
    } 