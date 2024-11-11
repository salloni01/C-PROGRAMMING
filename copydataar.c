#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
   
    int n ;
    printf("Enter array size ");
   scanf("%d",&n);  
    int arr1[n],arr2[n];
    //logic to read elements of an array from the user.
    printf("Enter %d elements",n);
     for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
     //logic to copy data from one array to another
     for (int i=0;i<n;i++)
    {
       arr2[i] = arr1[i];
     }
     
     printf("Elements of array- 1 are : \n");
     for(int i=0;i<n;i++)
     {
       printf("%d ",arr1[i]);
     }
     printf("\n Elements of array- 2 are : \n");
     for(int i=0;i<n;i++)
     {
       printf("%d ",arr2[i]);
     }
      return 0;
    } 