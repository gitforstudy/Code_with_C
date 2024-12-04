#include <stdio.h>

void removeDuplicates(int arr[], int *size) {
    int index = 0;

    // Traverse the array
    for (int i = 0; i < *size; i++) {
        // Check if the current element is unique
        int isUnique = 1;
        for (int j = 0; j < index; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        // If the element is unique, add it to the new array
        if (isUnique) {
            arr[index++] = arr[i];
        }
    }

    // Update the size of the array
    *size = index;
}

int main() {
    int arr[] = {1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicates(arr, &size);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}





