#include<stdio.h>
#include<stdlib.h>
int main(){
   system("cls");
    int a[5],i,key,freq=0;
   for(i=0;i<5;i++){
     printf("Enter number");
    scanf("%d",&a[i]);
}
printf("Enter number to find frequency");
    scanf("%d",&key);
     for(i=0;i<5;i++){
        if(a[i]==key)
        freq++;
     }
     printf(" frequency of %d is %d",key,freq);
     return 0;
}
