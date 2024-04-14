#include <stdio.h>

// Function to reverse the character array
void reverse(char arr[], int n) {
    int i, temp;
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    char arr[50];
    int i, size;

    printf("Enter the size of the character array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
        scanf(" %c", &arr[i]); //the space before %c to ignore newline characters

    reverse(arr, size);

    printf("After reversing the array: ");
    for (i = 0; i < size; i++)
        printf("%c ", arr[i]);

    return 0;
}

