#include<stdio.h>
#include<stdlib.h>
void Table(int N){
    static int i=1;
    if(  i<=10){
     printf("%d * %d = %d\n",N,i,N*i);
     i++;
 Table(N);
    } 
   
}
   int  main()
   {
    system("cls");
    int N,i;
    
    printf("Enter N");
    scanf("%d",&N);
     Table(N);
  
    
    }