#include<stdio.h>
#include<stdlib.h>
int main(){
   system("cls");
   int x=67;
    int *y=&x;
  *y=12;
   printf("%d\n",x);
   return 0;
}