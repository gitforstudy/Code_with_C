#include <stdio.h>
void insert_arr(int m, int a[], int pos, int ele);
int main(void)
{
	int a[10], n, pos, ele;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter the index to insert an element: ");
	scanf("%d", &pos);
	printf("Enter the element to insert: ");
	scanf("%d", &ele);
	printf("Enter array elements: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	insert_arr(n, a, pos, ele);
	return 0;
}

void insert_arr(int n, int a[], int pos, int ele) {
	for(int i = n-1; i >= pos; i--) {
		a[i+1] = a[i];
	}
	a[pos] = ele;
	printf("Array after insertion: ");
	for(int i = 0; i < n + 1;  i++){
		printf("%d", a[i]);
	}
}
