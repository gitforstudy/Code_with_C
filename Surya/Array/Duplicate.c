/* This program performs deleting duplicate elements in the Array */
#include <stdio.h>

int main() {
    int n;
    
    // Enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int a[n], unique[n], count = 0;
    
    // Enter the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Finding unique elements
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        // Check if the current element is a duplicate
        for (int j = 0; j < count; j++) {
            if (a[i] == unique[j]) {
                is_duplicate = 1;
                break;
            }
        }
        // If not a duplicate, add it to the unique array
        if (!is_duplicate) {
            unique[count++] = a[i];
        }
    }
    
    // Printing the array with duplicates removed
    printf("Array with duplicates removed:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    
    return 0;
}
