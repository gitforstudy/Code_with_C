//C program to merge two array in 3rd array
#include <stdio.h>
void merge_arr(int m, int n, int a[], int b[]);
int main(void)
{
	int n, m, a[10], b[10];
	printf("Enter the size of two arrays: ");
	scanf("%d %d", &m, &n);
	printf("Enter first array elements: ");
	for(int i = 0; i < m; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter second array elements: ");
	for(int j = 0; j < n; j++){
		scanf("%d", &b[j]);
	}
	merge_arr(m, n, a, b);
	return 0;
}

void merge_arr(int m, int n, int a[], int b[]) {
	int c[10], i, k;
	k = m + n;
	for(i = 0; i < m; i++) {
		c[i] = a[i];
	}
	for(i = 0; i < n; i++) {
		c[i + m] = b[i];	
	}
	printf("Array After merge: ");
	for(i = 0; i < k; i++) {
		printf("%d", c[i]);
	}
}
