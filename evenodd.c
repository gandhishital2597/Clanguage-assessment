#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd using modulus operator
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    // Check positive, negative, or zero using relational operators
    if (num > 0)
        printf("%d is positive.\n", num);
    else if (num < 0)
        printf("%d is negative.\n", num);
    else
        printf("The number is zero.\n");

    // Check if multiple of both 3 and 5 using logical AND operator
    if (num % 3 == 0 && num % 5 == 0)
        printf("%d is a multiple of both 3 and 5.\n", num);
    else
        printf("%d is not a multiple of both 3 and 5.\n", num);

    return 0;
}
