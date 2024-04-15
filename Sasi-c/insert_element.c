#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int new_element = 100, position = 5;
    int i, n = 10;

    
    for (i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[position] = new_element;
    n++;

   
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

