#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
   
    int n ;
    printf("Enter array size ");
   scanf("%d",&n);  
    int arr[n];
    //logic to read elements of an array from the user.
    printf("Enter %d elements",n);
     for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // logic to find 2nd largest begin here
    int max1=arr[0];
    int max2=0;
    for(int i =1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
       max1=arr[i];
        }
        else if (arr[i]>max2&&arr[i]<max1){
            max2=arr[i];
        }
    }
    printf("2nd Largest Element in an array is %d",max2);
    return 0;
}