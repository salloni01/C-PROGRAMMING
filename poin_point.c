// example of pointer to pointer
#include<stdio.h>
//#include<stdlib.h>
 int main(){
      //system("cls");
      int x=100;
      int *p1 = &x;
      int **p2 = &p1;
      int ***p3 = &p2;     // this is used when we have to make a chain of pointers.
      printf("Value is %d",***p3);
       return 0;
    }