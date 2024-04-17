#include <stdio.h>

// Function to left shift the array by 'shifts' times
void leftShiftArray(int arr[], int size, int shifts) {
    // Perform left shift 'shifts' number of times
    for (int i = 0; i < shifts; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

// Function to display the array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int shifts;

    printf("Enter the number of left shifts: ");
    scanf("%d", &shifts);

    // Left shifting the array
    leftShiftArray(arr, size, shifts);

    // Displaying the shifted array
    printf("Array after %d left shifts: ", shifts);
    displayArray(arr, size);

    return 0;
}

