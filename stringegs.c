#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   system("cls");
   // example of strlen.
    char p[20];
    printf("Enter p");
    gets(p);
    int len = strlen(p);
    printf("Number of character in p string is %d\n",len);
   
   // example of strupr.
     char str[30];
     printf("Enter string");
     gets(str);
     strupr(str);
     printf("%s\n",str);
      // example of strlwr.
     char str1[30];
     printf("Enter string");
     gets(str);
     strlwr(str);
     printf("%s\n",str);
    // example of strrev.
     char str2[30];
     printf("Enter string");
     gets(str);
     strrev(str);
     printf("%s\n",str);
     
       // example of strcmp.
     char str3[30],str4[30];
     printf("Enter string3");
     gets(str3);
     printf("Enter string4");
     gets(str4);
     int x=strcmp(str3,str4);
     if (x==0)                       // will check ascii value & will check only first
     printf("Both are same\n");
     else if( x==-1)
     printf("string3 is less than string4\n");
      else
      printf("string3 is larger than string4\n");
      // example of atoi.
     char str5[30];
     printf("Enter string");
     gets(str);
    int num= atoi(str);
     printf("%d\n",num);
     return 0; 
}