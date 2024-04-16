/* This program performs Inserting new element in the Array at given position */
#include <stdio.h>

int main() {
    int n, pos, newValue;
    
    // Enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int a[n + 1]; // Increase the size of the array by 1 to accommodate the new element
    
    // Enter the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Enter the position and value of the new element
    printf("Enter the position to insert the new element: ");
    scanf("%d", &pos);
    printf("Enter the value of the new element: ");
    scanf("%d", &newValue);
    
    // Shifting elements to the right to make space for the new element
    for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    
    // Inserting the new element at the desired position
    a[pos - 1] = newValue;
    
    // Incrementing the size of the array
    n++;
    
    // Printing the updated array
    printf("Array after inserting the new element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
