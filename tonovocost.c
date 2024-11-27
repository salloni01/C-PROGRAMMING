#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char ch[30];
    int vowel=0,consonant=0;
    printf("Entercharacter");
    gets(ch);
    for(int i=0;i<strlen(ch);i++){
         if (ch[i] == 'A' || ch[i] == 'a' || ch[i]== 'E' ||ch[i]== 'e' ||
        ch[i] == 'I' || ch[i] == 'i' || ch[i]== 'O' || ch[i] == 'o' ||
        ch[i] == 'U' || ch[i]== 'u') {
        vowel++;
    } 
    else {
       consonant++;
    }
    }
    printf("Total Number of vowels are %d\n",vowel);
    printf("Total Number of consonant are %d",consonant);
     return 0;
}