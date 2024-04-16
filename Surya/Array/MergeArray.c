/* This program performs merging 2 arrays in 3rd Array */
#include <stdio.h>

int main() {
    int n1, n2;

    // Enter the number of elements in the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    // Enter the elements of the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Enter the number of elements in the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    // Enter the elements of the second array
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merging the two arrays into a third array
    int merged[n1 + n2];
    int k = 0;

    for (int i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[k++] = arr2[i];
    }

    // Printing the merged array
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
