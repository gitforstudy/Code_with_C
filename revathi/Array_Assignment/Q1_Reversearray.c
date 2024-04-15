/*Reverse the array of 10 integer data.*/
#include<stdio.h>

int main()
{
	int n, i, j;
	
	printf("Enter n value-Array Size:\n"); // enter the size of the array

	
	scanf("%d", &n); // Read the size of the array 
	
	int arr[n]; // Declare an array of size n

	
	printf("Enter %d array values\n", n); // enter the values for the array

	for(i = 0; i < n; i++) // Loop to read array values from the user

	{
		scanf("%d", &arr[i]); // Read array element
		printf("array value arr[%d] : %d\n", i, arr[i]); // Print the entered array element
	}
	
	// Reversing the array
	for(i = n - 1, j = 0; i > j; i--, j++)
	{
		arr[j] = arr[j] + arr[i];  // Swap elements using arithmetic operations
		arr[i] = arr[j] - arr[i];
		arr[j] = arr[j] - arr[i];
	}

	// Print the reversed array
	printf("\nBelow is the reversed array:\n");

	for(i = 0; i < n; i++)
	{
		printf("array value arr[%d] : %d\n", i, arr[i]); 
	}

}

