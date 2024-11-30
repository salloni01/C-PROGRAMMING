#include<stdio.h>
 #include<stdlib.h>
  void cube_1(void);
   
  
  // function with no argument but return type
   int cube_2(){
   int num,cub;
   printf("Enter number");
   scanf("%d",&num);
   cub=num*num*num;
   return cub;
   }
   int main(){
   system("cls") ;
   int cb=cube_2();
    printf("%d",cb);
    return 0;
    
   }

    