#include <stdio.h>

int mergearray(int a[], int b[], int arr1size, int arr2size) {
    int arr_resultsize = arr1size + arr2size;
    int c[arr_resultsize];

    // Copy elements from the first array
    for (int i = 0; i < arr1size; i++) {
        c[i] = a[i];
    }

    // Add elements from the second array to 3rd array
    for (int i = 0, j = arr1size; j < arr_resultsize && i < arr2size; i++, j++) {
        c[j] = b[i];
    }

    // Print the 3rd array
    for (int k = 0; k < arr_resultsize; k++) {
        printf("%d ", c[k]);
    }
}

int main() {
    int arr1size = 5, arr2size = 5;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};

    mergearray(a, b, arr1size, arr2size);
    return 0;
}

