#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
   
    int n ;
    printf("Enter array size ");
   scanf("%d",&n);  
    int marks[n];
    
    printf("Enter The elements of the array :", n);
    for(int i=0;i<n;i++){
       scanf("%d",& marks[i]);
     }
     printf("Array elements are ");
     for(int i=n-1;i>=0;i--)
     {
       printf("%d ", marks[i]);
     }
     return 0;
    

    
} 