/*Reverse the array of 10 char data.*/

#include <stdio.h>

void reverseArray(char arr[], int size);

int main() {

    char arr[10];

    // Enter 10 characters
    printf("Enter 10 characters: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &arr[i]); // space before %c to consume whitespace characters
    }

    // Call the function 
    reverseArray(arr, 10);

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function to reverse an array of characters
void reverseArray(char arr[], int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        // Swap arr[i] and arr[j]
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

