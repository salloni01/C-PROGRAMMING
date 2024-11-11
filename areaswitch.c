#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int choice,area1,r,l,b,a,area2,area3;
    printf("1. Area of circle\n");
    printf("2. Area of Rectangle\n");
     printf("3. Area of Square\n");
     printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice) 
    {
        case 1:
           printf("Enter r");
           scanf("%d",&r);
           area1 = 3.14*r*r;
           printf("Area of circle = %d\n",area1); 
           break;
        case 2:
           printf("Enter l,b");
           scanf("%d%d",&l,&b);
           area2 = l*b;
           printf("Area of rectangle = %d\n",area2);
           break;
        case 3:
           printf("Enter a");
           scanf("%d",&a);
           area3 = a*a;
           printf("Area of square = %d\n",area3);
           break;
        default:
           printf("Invlalid Choice !!!!");
    }
    return 0;
}