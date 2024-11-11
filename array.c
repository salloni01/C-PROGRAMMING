#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
   //Declare an arraay to store 5 integers
    int numbers[5];
    //Input elements into the array from the user
     printf("Enter 5 Numbers:\n");
    for(int i=0;i<5;i++){
       printf("Enter number for index %d ",i);
   scanf("%d",&numbers[i]);  
   }
    
    //Print the elements of the array
    printf("\nThe elements of the array are :\n");
    for(int i=0;i<5;i++){
        printf("numbers[%d]=%d\n",i,numbers[i]);
     }
      return 0;
    
} 