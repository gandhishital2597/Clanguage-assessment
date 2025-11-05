#include <stdio.h>

int main() {
    int numbers[10];
    int i, max, min;

    // Input 10 integers from user
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize max and min with the first element
    max = min = numbers[0];

    // Find max and min using a loop
    for (i = 1; i < 10; i++) {
        if (numbers[i] > max)
            max = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }

    // Display results
    printf("\nMaximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
