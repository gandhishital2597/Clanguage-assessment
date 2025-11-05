#include <stdio.h>

// Recursive function to find Fibonacci number at position n
int fibonacci(int n) {
    if (n == 0) 
        return 0;
    else if (n == 1) 
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N, i;

    // Input number of terms
    printf("Enter the number of terms in Fibonacci sequence: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print Fibonacci sequence
    printf("Fibonacci sequence up to %d terms:\n", N);
    for (i = 0; i < N; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
