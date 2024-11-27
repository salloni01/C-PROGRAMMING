#include<stdio.h>   // WAP TO FIND NO. OF ALPHABET DIGIT AND SPECIAL CHARACTERS IN A STRING.
#include<string.h>
#include<stdlib.h>
int main()
{
   
     char str[30];
  int alpha=0,digit=0,symbol=0;
   printf("Enter string");
    gets(str); 
  for(int i=0;i<strlen(str);i++){
   if((str[i]>=65 && str[i]<=90 || (str[i]>=97) && str[i]<122))
      alpha++;
      else if(str[i]>=48 && str[i]<=57)    
     digit++;
     else
     symbol++;
     }
     printf("Totle alphabets are  %d\n",alpha);
     printf("Totle digits are  %d\n",digit);
     printf("Totle symbols are  %d\n",symbol);
     return 0;
    }
