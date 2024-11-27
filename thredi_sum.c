#include<stdio.h>
#include<stdlib.h>
int main()
{
  system("cls");
  int n,sum=0;
  printf("Enter 3 digit number");
  scanf("%d",&n);
  sum = sum + n%10;
  n = n/10;
  sum = sum + n%10;
  n = n/10;
  sum = sum + n%10;
  n = n/10;
  printf("Sum of digits = %d",sum);
  return 0; 
}