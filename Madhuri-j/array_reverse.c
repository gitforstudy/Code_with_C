#include <stdio.h>
int main(void)
{
	int n, i, a[5];
	printf("Enter number of elements: ");
       	scanf("%d", &n);
	printf("Enter array elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Array before reverse: ");
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("Array after reverse: ");
	for(i = n-1; i >=0; i--) {
		printf("%d ", a[i]);
	}
	printf("\n");	
}

