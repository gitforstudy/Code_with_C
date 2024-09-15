/*Sum of all the array elements*/

#include <stdio.h>

// Function prototype
int sumOfArrayElements(int a[], int n);

int main() {
    int n, i;

    // Enter the size of the array
    printf("Enter the array size:\n");
    scanf("%d", &n);

    // Declare an array of size n
    int a[n];

    //Enter the elements of the array
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Calculate the total sum of array elements using the function
    int totalSum = sumOfArrayElements(a, n);

    // Print the total sum of array elements
    printf("Total sum of array elements: %d\n", totalSum);

    return 0;
}

// Function to calculate the sum of array elements
int sumOfArrayElements(int a[], int n) {
    int i, sum = 0;

    // Loop through each element of the array and add it to the sum
    for(i = 0; i < n; i++) {
        sum += a[i]; // Add each element of the array to the sum
    }

    // Return the total sum
    return sum;
}

