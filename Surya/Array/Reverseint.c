 /* This program performs reversing elements in the Array */
#include <stdio.h>

// Function to reverse the elements in the array
void reverseArray(int arr[], int n) {
    int start = 0; // Start index of the array
    int end = n - 1; // End index of the array
    
    // Loop until start index is less than end index
    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move start index forward and end index backward
        start++;
        end--;
    }
}

int main() {
    int n;
    
    // Enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Enter the array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Reverse the elements in the array
    reverseArray(arr, n);
    
    // Print the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

