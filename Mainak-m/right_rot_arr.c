#include <stdio.h>

// Function to right shift the array by 'shifts' times
void rightShiftArray(int arr[], int size, int shifts) {
    // Perform right shift 'shifts' number of times
    for (int i = 0; i < shifts; i++) {
        int temp = arr[size - 1];
        for (int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
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

    printf("Enter the number of right shifts: ");
    scanf("%d", &shifts);

    // Right shifting the array
    rightShiftArray(arr, size, shifts);

    // Displaying the shifted array
    printf("Array after %d right shifts: ", shifts);
    displayArray(arr, size);
    for(int i=0;i<5;i++)
    {
	    printf("%d",arr[i]);
	}
}

