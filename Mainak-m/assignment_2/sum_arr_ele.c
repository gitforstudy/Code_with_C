#include<stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int result = sumArray(arr, size);
    printf("%d", result);
    return 0;
}
