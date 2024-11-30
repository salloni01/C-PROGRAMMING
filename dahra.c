#include <stdio.h>

int main() {
    float salary, da, hra;
      system("cls");
    // Input salary from the user
    printf("Enter your basic salary: ");
    scanf("%f", &salary);

    // Calculate DA and HRA based on salary conditions
    if (salary <= 2000) {
        da = salary * 0.1;   // 10% of salary
        hra = salary * 0.2;  // 20% of salary
    } 
    else if (salary>2000 && salary<= 5000) {
        da = salary * 0.2;   // 20% of salary
        hra = salary * 0.3; // 30% of salary
        }
        else if (salary>5000 && salary <= 10000) {
        da = salary * 0.3;   // 30% of salary
        hra = salary * 0.4; // 40% of salary
    } else {
        da = salary * 0.4;  // 40% of salary
        hra = salary * 0.5;  // 50% of salary
    }

    // Output the results
    printf("Basic Salary: %.2f\n", salary);
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("House Rent Allowance (HRA): %.2f\n", hra);

    return 0;
}
