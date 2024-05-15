#include <stdio.h>

int main() {
    int arr[10] = {1, 8, 3, 10, 5, 6, 7, 2, 9, 4};
    int first_max = arr[0], second_max = arr[0], i;

    for (i = 1; i < 10; i++) {
        if (arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        } else if (arr[i] > second_max && arr[i] != first_max) {
            second_max = arr[i];
        }
    }

    printf("Second largest element: %d\n", second_max);

    return 0;
}

