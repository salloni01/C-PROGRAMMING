// WAP to access each character of a given string one by one.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   system("cls");
   // example of strlen.
    char str[30];
    printf("Enter String");
    gets(str); //miet
    for(int i=0;i<strlen(str);i++){
        printf( " %c ",str[i]);
    }
    return 0;
    }