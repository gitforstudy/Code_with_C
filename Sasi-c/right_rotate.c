#include <stdio.h>

void rightRotateByOne(int arr[], int n) {
    int temp = arr[n - 1];
    int i;
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void rightRotate(int arr[], int n, int d) {
    int i;
    for (i = 0; i < d; i++) {
        rightRotateByOne(arr, n);
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int d = 3;

    rightRotate(arr, 10, d);

    printf("Array after right rotation: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

