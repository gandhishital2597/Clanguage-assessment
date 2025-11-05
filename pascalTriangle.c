#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to calculate combination nCr
long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int N, i, j;

    // Input number of rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &N);

    // Generate Pascal's Triangle
    for (i = 0; i < N; i++) {
        // Print leading spaces
        for (j = 0; j < N - i - 1; j++)
            printf("  ");

        // Print numbers in the row
        for (j = 0; j <= i; j++)
            printf("%4lld", combination(i, j));

        printf("\n");
    }

    return 0;
}
