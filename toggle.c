#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[20];
printf("Enter string");
gets(str); //miet
for(int i=0;i<strlen(str);i++){
       if(str[i]>=65 && str[i]<=90)
          str[i] = str[i] + 32;
     else if (str[i]>=97 && str[i]<=122)
     str[i] = str[i]-32;
}
printf("Toggle string is %s\n",str);
  return 0;
    }

