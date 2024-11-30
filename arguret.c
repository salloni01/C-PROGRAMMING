#include<stdio.h>
int addition(int a,int b,int c); 
    int main(){          // function calling / invoking
  
 
  int x,y,z;
  printf("Enter the values of x,y,z");
  scanf("%d%d%d",&x,&y,&z);
  int sum = addition(x,y,z); // actual argument
  printf("Addition=%d",sum);
  return 0;
    }
// function with argument and return type
int addition(int a, int b,int c){ // formal arguments
    return a+b+c;
}
