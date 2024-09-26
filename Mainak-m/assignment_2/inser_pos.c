#include <stdio.h>

void insertElement(int arr[], int size, int position, int element) {
    // // Check if the position is valid
    // if (position < 0 || position > *size) {
    //     printf("Invalid position.\n");
    //     return;
    // }

    // Shift elements to the right to make space for the new element
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1]; 
    }

    // Insert the new element at the given position
    arr[position] = element;

    // Increment the size of the array
    (size)++;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int position, element;
    printf("Enter the position to insert the new element: ");
    scanf("%d", &position);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertElement(arr, size, position, element);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
