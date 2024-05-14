// C program to reverse an array elements
#include <stdio.h>

int main(void) {
    int a[10];
    int n, i, temp, len;
    printf("Enter the size of array elements: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array after reverse: \n");
    len = n;
    for(int i = 0; i < len/2; i++) {
        temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
