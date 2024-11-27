#include<stdio.h>

#include<stdlib.h>
int main()
 {
    system("cls");
   
    int n;
    printf("Enter array size ");
   scanf("%d",&n);  
    int arr[n];
    //logic to read elements of an array from the user.
    printf("Enter %d elements",n);
     for( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //logic of insertion sort
    for(int i=1;i<n;i++){
        int val = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
             j--;
         } 
         if(i!= (j+1))
         arr[j+1]=val;
     }
      printf("After sorting element are : \n");
      for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
      }
   return 0;
    }