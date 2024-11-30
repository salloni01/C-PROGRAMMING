 #include<stdio.h>
 #include<stdlib.h>
  void cube_1(void);
     int main() {   // function calling / invoking
  cube_1();
}

 //function with no argument and no returntype
void cube_1(void){
  int num1,cube;
   printf("Enter Number");
  scanf("%d",&num1);
  cube =num1*num1*num1;
      printf("%d",cube);
     
    }
  
  