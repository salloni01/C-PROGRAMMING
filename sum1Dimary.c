#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,sum=0;
      printf("Enter  Array size");
       scanf("%d" ,& n);
       int arr[n];
      printf("Enter %d Array Elements",n);
      for(int i=0;i<n;i++) 
    { 
       
           scanf("%d",& arr[i]) ;
         sum = sum +arr[i]; 
     } 
           
          
         for(int i=0;i<n;i++){  
           }  printf("Sum of array elements are %d",sum); 
          
    
    return 0;
}