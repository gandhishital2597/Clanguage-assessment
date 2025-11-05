#include <stdio.h>
#include <ctype.h>  // For isspace()

int main() {
    char sentence[200];
    int i = 0, wordCount = 0;
    int inWord = 0;  // Flag to track if inside a word

    // Input sentence from user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Loop through each character
    while (sentence[i] != '\0') {
        if (!isspace(sentence[i]) && sentence[i] != '\n') {
            // We are inside a word
            if (!inWord) {
                wordCount++;  // New word found
                inWord = 1;
            }
        } else {
            // Encountered space or newline, so we are outside a word
            inWord = 0;
        }
        i++;
    }

    // Display result
    printf("Number of words: %d\n", wordCount);

    return 0;
}
