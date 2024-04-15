/*insert a new element in array in a given positio*/

#include<stdio.h>

// Function to insert an element into an array at a specified position
int insertarray(int a[], int n, int p, int e);

int main() {
    int n;
    printf("Enter the array size:\n");
    scanf("%d", &n);
    int a[n], p, e, i;
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the position to replace:\n");
    scanf("%d", &p);
    printf("Enter the replacing element:\n");
    scanf("%d", &e);
    
    // Call the function to replace the element at the specified position
    insertarray(a, n, p, e);

    // Print the modified array
    printf("Array after replacement:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

// Function to replace an element in an array at a specified position
int insertarray(int a[], int n, int p, int e) {
    // Check if the position is valid
    if(p < 0 || p >= n) {
        printf("Invalid position.\n");
        return -1; // Return -1 to indicate failure
    }

    // Replace the element at the specified position
    a[p] = e;

    // Return 0 to indicate success
    return 0;
}

