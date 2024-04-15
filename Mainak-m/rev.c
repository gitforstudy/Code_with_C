#include <stdio.h>
#define N 1000

void reverseArray(int arr[], int size) {
    printf("Reversed array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[N];

    int n;
    // Take the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // take the array elements from the user
    printf("Enter an array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to reverse the array
    reverseArray(arr, n);

    return 0;
}

