#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n){
     int a=0, b=1;
    
     if(n==0 || n==1)
     return n;
     else 
     return fibonacci(n-1) + fibonacci(n-2);
        
}
      
        
   int main(){
    system("cls");
    int n;                                                 
    printf("Enter n");
    scanf("%d",&n);
     for(int i=0;i<n;i++){
   printf(" %d",fibonacci(i));
     }
   return 0;
    
}