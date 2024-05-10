//program to find all possible combinations to reach a given sum

#include <stdio.h>
#define MAX_SIZE 100

void findCombinations(int arr[], int size, int target) {
    int temp[MAX_SIZE]; // Temporary array to store combinations
    int index = 0; // Index to keep track of the current position in the temporary array
    int sum = 0; // Variable to keep track of the current sum

    // Initialize stack to simulate recursion
    int arr1[MAX_SIZE]; // store current positions in the array
    int top = -1; // Top of the stack

    int i = 0; // Start index to traverse the array
    while (i < size || top != -1) {
        if (i < size && sum + arr[i] <= target) {
            // Include current element in the combination
            temp[index++] = arr[i];
            sum += arr[i];
            arr1[++top] = i; // Push current index onto the arr1
            i++;
        } else {
            if (sum == target) {
                // Print the combination
                for (int j = 0; j < index; j++) {
                    if (j > 0) { 
			    printf(" ");
		    }
                    printf("%d", temp[j]);
                }
                printf("\n");
            }
            // Backtrack
            if (top == -1) break; // No more elements to backtrack
            sum -= temp[--index]; // Remove last element from the combination
            i = arr1[top--] + 1; // Pop index from stack and move to next position
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);

    findCombinations(arr, size, target);

    return 0;
}
