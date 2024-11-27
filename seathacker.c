#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   system("cls");
   int N;
    printf("Enter N");
    scanf("%u",&N);
    if(N%12 == 1)
    {
        printf("WS %d",(N+11));
    }
    else if(N%12 == 2)
    {
        printf("MS %d",(N+9));
    }
    else if(N%12 == 3)
    {
        printf("AS %d",(N+7));
    }
     else if(N%12 == 4)
     {
         printf("WS %d",(N+5));
     } 
    else if(N%12 == 5)
    {
        printf("MS %d",(N+3));
    }
    else if(N%12 == 7)
    {
        printf("AS %d",(N+1));
    }
     else if(N%12 == 0)
    {
        printf("WS %d",(N-11));
    }
    else if(N%12 == 0)
    {
        printf("MS %d",(N-9));
    }
    else if(N%12 == 0)
    {
        printf("AS %d",(N-7));
    }
     else if(N%12 == 0)
     {
         printf("WS %d",(N-5));
     } 
    else if(N%12 == 0)
    {
        printf("MS %d",(N-3));
    }
    else if(N%12 == 0)
    {
        printf("AS %d",(N-1));
    }
           
return 0;
      }