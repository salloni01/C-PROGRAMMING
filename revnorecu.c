#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int printSeries(int n){
   static rev=0;
    if (n!=0){
        rev=rev*10 + n%10;
        n=n/10;
    printSeries(n);
    }
    return rev;
}
 int  main()
   {
    system("cls");
    int n;
    
    printf("Enter n");
    scanf("%d",&n);
    printf("%d",printSeries(n));
   }
