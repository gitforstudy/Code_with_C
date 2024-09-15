/*merge two array in 3rd array*/

#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]);

int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Size of the result array
    int size3 = size1 + size2;

    // Result array to store the merged arrays
    int result[size3];

    // Merge arrays
    mergeArrays(arr1, size1, arr2, size2, result);

    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Copy the remaining elements of arr1, if any
    while (i < size1) {
        result[k++] = arr1[i++];
    }

    // Copy the remaining elements of arr2, if any
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

