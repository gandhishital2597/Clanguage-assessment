#include <stdio.h>

int main() {
    int N, i;
    float numbers[100], sum = 0;  // assuming a maximum of 100 numbers

    // Input number of elements
    printf("Enter how many numbers you want to input (max 100): ");
    scanf("%d", &N);

    // Check valid input
    if (N <= 0 || N > 100) {
        printf("Invalid number of elements!\n");
        return 1;
    }

    // Input N numbers
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];  // add to sum as numbers are entered
    }

    // Display the sum
    printf("\nSum of all numbers = %.2f\n", sum);

    return 0;
}
