#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements: ");
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                break;
            }
        }
        if (j == n) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}


