#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char str[30],temp[30];
     
     printf("Enter string : ");
   gets(str); 
    strcpy(temp,str);
      strrev(str);
      if(strcmp(temp,str)==0)
      printf("string is pallindrome");
     
     else
     printf("string is not pallindrome");
  
 return 0;
    
} 
