#include <stdio.h>

void findCombinations(int a[], int i, int n, int target, int temp[], int index) {
	if (target == 0) {
        	for (int j = 0; j < index; j++) {
            		if (j > 0) printf(" ");
            			printf("%d", temp[j]);
        	}
		printf("\n");
        	return;
    	}

    	for (int j = i; j < n; j++) {
        	if (target - a[j] >= 0) {
            		temp[index] = a[j];
            		findCombinations(a, j + 1, n, target - a[j], temp, index + 1);
        	}
    	}
}

int main(void) {
	int a[10], temp[10];
    	int n, target;

    	printf("Enter the size of the array: ");
    	scanf("%d", &n);
    	printf("Enter the array elements: ");
    	for (int i = 0; i < n; i++) {
        	scanf("%d", &a[i]);
    	}
    	printf("Enter the target sum: ");
    	scanf("%d", &target);

    	findCombinations(a, 0, n, target, temp, 0);

    	return 0;
}

