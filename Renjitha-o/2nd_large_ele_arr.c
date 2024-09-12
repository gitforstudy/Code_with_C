//program to find 2nd largest element in an array

#include <stdio.h>

int main (void)
{
	int arr[6] = {6,8,2,3,9,1},temp = 0;
	int size = sizeof(arr)/sizeof(arr[0]);// finding size of array
	for (int i = 0; i < size - 1; i++) {
		for (int j = 1; j < size - 1; j++) {
			if (arr[i] < arr[j]) {// checking the array is sorted or not,if not swapping array elements using temp variable
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf ("2nd largest element in this array is :%d",arr[size - 2]);// printing 2nd largest element
	return 0;
}
