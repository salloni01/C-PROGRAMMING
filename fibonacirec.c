#include<stdio.h>
#include<stdlib.h>
void fibonacci(int n){
    static int a=0, b=1;
    
      if (n != 0) {
        printf("%d ",a); 
    
    int c=a+b;
      a=b;
      b=c;
      fibonacci(n-1);
      }
        
}
      
        
   int main(){
    system("cls");
    int n;                                                 
    printf("Enter n");
    scanf("%d",&n);
     fibonacci(n);
   

   return 0;
    
}