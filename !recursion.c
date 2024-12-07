#include <stdio.h>
#include <stdlib.h>
 int factorial(int n ){
  if(n==0 || n==1)
  return 1;
  else
  return n*factorial(n-1);

}
int main() {

     system("cls");
    int n;
   
   printf("Enter n") ;
   scanf("%d",&n);
  
   int fact=factorial(n);
   printf("factorial %d is %d",n,fact);

    return 0;
}
