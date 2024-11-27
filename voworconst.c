#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c",&ch);  // Add a space before %c to ignore any whitespace

    if (ch == 'A' || ch == 'a' || ch== 'E' ||ch== 'e' ||
        ch == 'I' || ch == 'i' || ch== 'O' || ch == 'o' ||
        ch == 'U' || ch== 'u') {
        printf("It is a Vowel\n");
    } else {
        printf("It is a Consonant\n");
    }

    return 0;
}
