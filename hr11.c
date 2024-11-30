#include<stdio.h>
#include<stdlib.h>
int main() {
    
     system("cls");
    int N1,N , sum=0;
   
    scanf("%d",&N);
        int N2=N;
    while(N!=0){
        N1=N%10;
        N=N/10;  
    int fact=1;
    for(int i=1;i<=N1;i++){
    fact=fact*i;
    }
       sum=sum+fact;
     }
   if(sum==N2)
       printf("1") ;
    else
        printf("0");
    return 0;
}

  