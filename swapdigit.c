#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int N,count;
     printf("Enter Number");
    scanf("%d",&N);
   int lastdigit=N%10;
    N=N/10;
    count=(int)log10(N);
    int firstdigit=N/pow(10,count);
    int rm=N%((int)pow(10,count)+1);
     N=lastdigit*pow(10,count+1)+rm*10+firstdigit;
    printf("After swaping number is=%d",N );
    return 0;
    
} 