#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int N;
    printf("Enter N");
    scanf("%d",&N);
    if( N %  2 == 0)
        printf("N is even");
    else{
         printf("N is odd");
        }
        return 0;
} 