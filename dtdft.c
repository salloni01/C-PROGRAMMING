
    #include <stdio.h>

int main() {
    int w;           // Amount to withdraw
    double ib, bb;   // Initial balance and resulting balance

    // Prompt user for input
    printf("Enter the amount to withdraw and the initial balance: ");
    if (scanf("%d %lf", &w, &ib) != 2) {
        printf("Invalid input. Please enter an integer and a floating-point number.\n");
        return 1; // Exit the program on invalid input
    }

    // Check conditions for withdrawal
    if (w % 5 == 0 && w + 0.50 <= ib) {
        bb = ib - w - 0.50; // Deduct withdrawal amount and fee
        printf("Remaining balance: %.2lf\n", bb);
    } else {
        printf("Transaction failed. Balance remains: %.2lf\n", ib);
    }

    return 0;
}

    
