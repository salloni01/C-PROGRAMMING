#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    system("cls");
     int amount, notes[] ={500, 100, 50, 20,10,5,2,1};
    int noteCount[]  = {0, 0, 0, 0, 0, 0, 0, 0};
    printf("Enter amount");
    scanf("%d",&amount);
     int i = 0;
     while (amount > 0){
           noteCount[i] = amount / notes[i];
           amount %= notes[i];
           i++;
          
     }
      printf("Minimum number of notes required:\n");
      for(i = 0; i < 8; i++){
        printf("Rs. %d : %d\n",notes[i], noteCount[i]);
      }
       return 0;
    } 