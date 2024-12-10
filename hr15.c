#include<stdio.h>
int main() {
  int n;
   printf("Enter array size ");
   scanf("%d",&n); 
   
    int I[n];
    
    
   for(int i=0; i<n;i++){
      printf("Enter %d elements",n);
        scanf("%d",&I[i]);
   }
   int O[n];
    for(int i=0; i<n;i++){
       printf("Enter %d elements",n);
         scanf("%d",&O[i]);
    }
    int total=0, max=0;
    for(int i=0;i<n;i++){
       total = total + (I[i]-O[i]);
        if(total>max)
            max=total;
    }
    printf("%d",max);
    return 0;
}