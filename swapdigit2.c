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
    int p=1;
    for(int i=1;i<=count;i++)
    {
        p=p*10;
    }
    int firstdigit=N/p;
    int rm=N%p;
     N=lastdigit*p*10+rm*10+firstdigit;
    printf("After swaping number is=%d",N );
    return 0;
    
} 