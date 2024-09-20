#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    char str[20];
    sprintf(str, "%d", num); // Convert number to string

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    int max_palindrome = 0;

    // Iterate through all pairs of 3-digit numbers
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) { // Start j from i to avoid duplicate pairs
            int product = i * j;
            if (is_palindrome(product) && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }

    // Save the result to the file 102-result
    FILE *file = fopen("102-result", "w");
    if (file == NULL) {
        fprintf(stderr, "Error: Could not open file.\n");
        return 1;
    }
    fprintf(file, "%d", max_palindrome);
    fclose(file);

    return 0;
}

