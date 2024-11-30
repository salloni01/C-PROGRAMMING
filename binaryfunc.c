#include<stdio.h>
void convertTobinary(int);
int main(){          // function calling / invoking
  int num;
  printf("Enter Number");
  scanf("%d",&num);
   convertTobinary(num);
return 0;
}

 //function with argument but no returntype
void convertTobinary(int n){
 int place=1,binary=0;
 while(n!=0){
 int rem=n%2;
 binary+=rem*place;
 n=n/2;
 place=place*10;
 }
 printf("Binary = %d" ,binary);
 }



   

