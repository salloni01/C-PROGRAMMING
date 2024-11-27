#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
   
    int n ,max,indx=0;
    printf("Enter array size ");
   scanf("%d",&n);  
    int arr1[n];
    //logic to read elements of an array from the user.
    printf("Enter %d elements",n);
     for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    //logic to find max or largest element in an array.
    max=arr1[0];
     for(int i=1;i<n;i++)
    {
        if(arr1[i]>max)
         indx=i;
          max=arr1[i];
    }
    printf("Max element is %d at index %d ",max,indx);
       return 0;
    } 