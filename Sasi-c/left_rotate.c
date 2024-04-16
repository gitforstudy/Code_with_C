#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];
    int i;
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void leftRotate(int arr[], int n, int d) {
    int i;
    for (i = 0; i < d; i++) {
        leftRotateByOne(arr, n);
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int d = 3; 

    leftRotate(arr, 10, d);

    printf("Array after left rotation: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

