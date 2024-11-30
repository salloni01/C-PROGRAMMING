#include<stdio.h>
void message(void);          // declaration of function / prototype / globally ( declare only one time)
 int getSimpleInterest(void);
 int main(){          // function calling / invoking
  int si=getSimpleInterest();
 printf("Simple Interest = %d\n",si);
  message();  
return 0;
}
// function with no argument but return type
    int getSimpleInterest(void){
    int P,R,T;
    printf("Enter P,R,T");
    scanf("%d%d%d",&P,&R,&T);
    return (P*R*T)/100;
}
// function with no argument and no return type
void message(void){          // function definition / called function
    printf("Welcome in C Programming !!!!");
}
