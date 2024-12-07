#include<stdio.h>
#include<stdlib.h>
int Sum(int N){
    static int sum=0;
    
    if(N!=0) 
    {
    
    return (N%10)+Sum(N/10);

    }
        return sum;
 } int main()
{
    system("cls");
    int N;
     printf("Enter Number");
    scanf("%d",&N);
    
     printf("Sum is %d",Sum(N));
    return 0;
    
} 