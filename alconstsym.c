#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char ch,A,Z,a,z;
    printf("Enter ch");
    scanf("%d",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("ch is a alphabet");
    }
     else if (ch>=0 && ch<=9) {
      printf("digit");
      }
      else{
        printf("symbol");
      }
      return 0;
      }