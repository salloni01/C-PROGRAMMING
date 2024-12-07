#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void printSeries(int n){
    if (n!=0){
        printf("%d ",n);
         printSeries(n-1);
       
    }
}
int main()
{
    system("cls");
    int n;
    printf("Enter value of n");
    scanf("%d",&n);
   
       printSeries(n);
    
     return 0;
    
} 