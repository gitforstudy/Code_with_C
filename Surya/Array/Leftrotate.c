/* This program performs left rotation of elements in the Array */
#include <stdio.h>

void leftRotate(int arr[], int n, int k)
 {
    // Normalize the rotation count if it's greater than the array size
    k = k % n;

    // Print the rotated array
    printf("Array after left rotation:\n");
    for (int i = k; i < n + k; i++) {
        printf("%d ", arr[i % n]);
    }
    printf("\n");
}

int main() {
    int n, k;

    // Enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Enter the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Enter the number of positions to rotate left
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &k);

    leftRotate(arr, n, k);

    return 0;
}
