#include<stdio.h>
int main(){          // function calling / invoking
  
  system("cls");
  int n;
  printf("Enter number");
  scanf("%d",&n);
  int cub = cube(n); // actual argument
  printf("cube=%d",cub);
  return 0;
    }
// function with argument and return type
int cube(int n){ // formal arguments
    return n*n*n;
}