#include <stdio.h>

void reverseArray(char arr[], int size) {
    int start = 0;
    int end = size - 1;
    char temp;
    
    while (start < end) {
        // Swap characters at start and end indices
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move towards the center of the array
        start++;
        end--;
    }
}

int main() {
    char arr[10];
    int size = 10;

    printf("Enter 10 characters: ");
    for (int i = 0; i < size; i++) {
        scanf(" %c", &arr[i]); // Note the space before %c to consume whitespace characters
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    
    // Reverse the array
    reverseArray(arr, size);
    
    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    
    return 0;
}
