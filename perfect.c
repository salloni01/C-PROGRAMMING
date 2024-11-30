#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, sum=0;
    system("cls");
    printf("Enter number");
    scanf("%d",&n);
   int n1=n;
   int i=1;
    while(i<=n/2){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
   if(sum==n1)
     printf("1");
     else
     printf("0");
    
    return 0;
     }