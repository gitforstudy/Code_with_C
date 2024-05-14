#include <stdio.h>
int main(void)
{
	int a[10], n, sum = 0;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter array elements: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++) {
		sum = sum + a[i];
	}
	printf("The sum of array elements is: %d\n", sum);
	return 0;
}
