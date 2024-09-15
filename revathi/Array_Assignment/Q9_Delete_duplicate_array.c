/*Delete duplicate element from array*/

#include <stdio.h>

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int size);

int main() {
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of the array (sorted): ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int size = sizeof(arr) / sizeof(arr[0]);

	// Call the function 
	int newSize = removeDuplicates(arr, size);

	// Print the array with duplicates removed
	printf("Array with duplicates removed: ");
	for (int i = 0; i < newSize; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int size) {
	// If the array has 0 or 1 element, there are no duplicates
	if (size == 0 || size == 1) {
		return size;
	}

	int j = 0;

	// Iterate through the array to find unique elements
	for (int i = 0; i < size - 1; i++) {
		// If the current element is different from the next element, it's unique
		if (arr[i] != arr[i + 1]) {
			arr[j++] = arr[i]; // Store the unique element
		}
	}

	// Store the last element of the original array
	arr[j++] = arr[size - 1];

	// Return the new size of the array after removing duplicates
	return j;
}

