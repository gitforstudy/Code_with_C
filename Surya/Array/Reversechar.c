/* This program performs reverse of character given */
#include <stdio.h>
#include <string.h>

int main() {
    char strings[10];
    int lengths[10]; // Array to store lengths of each string
    int start_index[10]; // Array to store starting index of each string
    int i, j, k;

    // Prompting the user to enter the strings
    printf("Enter 10 strings:\n");
    int total_length = 0;
    for (i = 0; i < 10; i++) {
        scanf("%s", strings + total_length);
        lengths[i] = strlen(strings + total_length);
        total_length += lengths[i] + 1; // +1 for the '\0' separator
        start_index[i] = total_length - lengths[i] - 1; // Start index of the current string
        strings[total_length - 1] = '\0'; // Adding '\0' as separator
    }

    // Reversing the strings in the array
    char temp;
    for (i = 0; i < 5; i++) {
        j = 10 - 1 - i; // Index of the string to swap with
        if (i >= j) break; // Break the loop if we've reached the middle
        // Swap the strings
        for (k = 0; k < lengths[i]; k++) {
            temp = strings[start_index[i] + k];
            strings[start_index[i] + k] = strings[start_index[j] + k];
            strings[start_index[j] + k] = temp;
        }
    }

    // Printing the reversed array of strings
    printf("Reversed array of strings is:\n");
    int index = 0;
    for (i = 0; i < 10; i++) {
        printf("%s\n", strings + index);
        index += lengths[i] + 1; // Move to the next string
    }

    return 0;
}

