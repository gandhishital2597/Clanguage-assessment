#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0, remainder;

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if original and reversed numbers are equal
    return (original == reversed);
}

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for negative numbers
    if (number < 0) {
        printf("Negative numbers are not considered palindromes.\n");
        return 0;
    }

    // Call the function and display result
    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}
