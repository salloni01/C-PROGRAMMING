#include <stdio.h>

// Function to calculate factorial of a given digit
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if the number is a Strong Number
int isStrongNumber(int N) {
    int original = N;       // Store the original number
    int sum = 0;

    // Calculate sum of factorials of digits
    while (N > 0) {
        int digit = N % 10;  // Extract the last digit
        sum += factorial(digit);  // Add factorial of the digit to sum
        N /= 10;             // Remove the last digit
    }

    // Check if the sum of factorials equals the original number
    return (sum == original);
}

int main() {
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);

    // Output result based on isStrongNumber function
    if (isStrongNumber(N)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}


   