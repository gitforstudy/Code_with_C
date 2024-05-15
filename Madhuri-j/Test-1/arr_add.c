//C program to merge two arrays


#include <stdio.h>

int main(void)
{
	int a[5], b[5], n, m, i, j, size;
	printf("Enter size of first array: ");
	scanf("%d", &n);
	printf("Enter the size of second array: ");
	scanf("%d", &m);
	printf("Enter first array elements: ");
       	for(i = 0; i < n; i++)	{
		scanf("%d", &a[i]);
	}
	printf("Enter second array: ");
	for(j = 0; j < m; j++) {
		scanf("%d", &b[j]);
	}
	size = m + n;
	printf("%d\n",size);
	int res[size];
	j = 0;
	for(int i = 0; i < size; i++) {
		res[j++] = a[i];
		res[j++] = b[i];
	}
	for(j = 0; j < size; j++) {
		printf("%d ", res[j]);
	}
	return 0;
}
