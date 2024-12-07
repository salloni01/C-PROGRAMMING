#include<stdio.h>
#include<stdlib.h>
void swapping(int *a,int *b){
   *a=*a+*b;
   *b=*a-*b;
   *a=*a-*b;
  printf("After Swaping a=%d\nb=%d",*a,*b);
   }
        int main(){
      system("cls");
      int c,d;
      printf("Enter two values");
      scanf("%d%d",&c,&d);
      swapping(&c,&d);
     
      return 0;
 }