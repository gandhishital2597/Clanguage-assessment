#include <stdio.h>
#include <ctype.h>  // For tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;
    char ch;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels and consonants
    while (str[i] != '\0') {
        ch = tolower(str[i]);  // Convert to lowercase for simplicity

        if ((ch >= 'a' && ch <= 'z')) {  // Check only letters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    // Display results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
