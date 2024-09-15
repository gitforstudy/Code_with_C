/*Find the second largest element in array*/
#include <stdio.h>

// Function to find the second largest element in an array
int secondLargest(int arr[], int size) {

	int largest = arr[0]; // Assume the first element is the largest
	int second_Largest = arr[0]; // Assume the first element is also the second largest

	// array to find the largest and second largest elements
	for (int i = 1; i < size; i++) 
	{
		if (arr[i] > largest) 
		{ // If the current element is larger than the largest element
			second_Largest = largest; // Update the second largest element
			largest = arr[i]; // Update the largest element
		} 
		else if (arr[i] > second_Largest && arr[i] != largest) 
		{ // If the current element is larger than the second largest and not equal to the largest
			second_Largest = arr[i]; // Update the second largest element
		}
	}

	// Return the second largest element
	return second_Largest;
}

int main() {
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int arr[size];

	// Enter the elements of the array
	printf("Enter the elements of the array: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]); // Read elements into the array
	}

	// Call the function to find the second largest element
	int secondLargestElement = secondLargest(arr, size);

	// Print the second largest element
	printf("The second largest element in the array is: %d\n", secondLargestElement);

	return 0;
}

