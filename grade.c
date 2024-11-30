#include <stdio.h>

int main() {
    int marks;
      system("cls");
    
    printf("Enter marks ");
    scanf("%d", &marks);

    // Calculate DA and HRA based on salary conditions
    if (marks>=90) {
        printf("A+");
    } 
    else if (marks>=80 && marks< 90) {
        printf("A");
        }
        else if (marks>=70 &&marks < 80) {
        printf("B+");
    }
     else if (marks>=60 &&marks<70)
    {
        printf("B");
    }
      else if (marks>=50 &&marks<60)
    {
        printf("C");
    }
        else
    {
        printf("fail");
    }
    return 0;
}
