#include<stdio.h>
#include<stdlib.h>
  void cube(int);
int main(){          // function calling / invoking
  int num;
  printf("Enter Number");
  scanf("%d",&num);
  cube(num);
return 0;
}

 //function with argument but no returntype
void cube(int n){
  int cube =n*n*n;
      printf("%d",cube);
     
    }