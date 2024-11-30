#include<stdio.h>
#include<stdlib.h>
int main(){
   system("cls");
   int x=67;
    int *y=&x;
   printf("%d\n",y);
   printf("%d\n",&y);
   printf("%d\n",*y);
   printf("%d\n",*&y);
   printf("%d\n",&*y);
   printf("%d\n",*&x);
    return 0;
}