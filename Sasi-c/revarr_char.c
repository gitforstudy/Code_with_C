#include <stdio.h>

int main() {
    char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char temp;
    int i, j;

    for (i = 0, j = 9; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < 10; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}

