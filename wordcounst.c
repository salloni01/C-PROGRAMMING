#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char ch[100];
     printf("Entercharacter");
    gets(ch);
    int lindex,len=strlen(ch);
    for(int i =len-1; i>=0; i--){
       if(ch[i]!=' '){
        lindex=i;
        break;
        }
       } 
       int count=0;
     for(int i=0;i<lindex;i++){
      if(ch[i]==' ' && ch[i-1]!=' ')
        count++ ;
    }
    printf("Total number of words are %d",count);
    return 0;
}