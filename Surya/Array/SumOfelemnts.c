/* This program gives output for sum of elements in the Array */
#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int a[n];
    
    // Enter the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Calculating the sum of array elements
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    // Printing the sum
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}
