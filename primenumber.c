#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // isPrime will be used as a flag (1 = prime, 0 = not prime)

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for numbers less than or equal to 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisibility using a for loop
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Found a divisor
            break;
        }
    }

    // Display result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
