#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
   
    int n ,even=0,odd=0;
    printf("Enter array size ");
   scanf("%d",&n);  
    int arr[n];
    //logic to read elements of an array from the user.
    printf("Enter %d elements",n);
     for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
     if(arr[i]%2==0)
          even++;
          else
          odd++;
          }
    
       printf("Number of even elements are : %d\n",even);
      printf("Number of odd elements are : %d\n",odd);
      return 0;
    } 