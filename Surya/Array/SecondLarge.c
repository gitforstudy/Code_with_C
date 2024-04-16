/* This program gives output as second largest element in the Array */
#include <stdio.h>

int main() {
    int n;
    
    // Enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int a[n];
    
    // Enter the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int largest = a[0];
    int second_largest = a[0]; // Initialize second largest to the first element
    
    // Finding the largest and second largest elements
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            second_largest = largest; // Update second largest
            largest = a[i]; // Update largest
        } else if (a[i] > second_largest && a[i] != largest) {
            second_largest = a[i]; // Update second largest
        }
    }
    
    // Printing the second largest element
    printf("Second largest element: %d\n", second_largest);
    
    return 0;
}
