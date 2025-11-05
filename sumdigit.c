#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    if (num < 0)
        num = -num;

    // Calculate sum of digits using while loop
    while (num > 0) {
        digit = num % 10;   // Get the last digit
        sum += digit;       // Add it to sum
        num /= 10;          // Remove the last digit
    }

    // Display result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
