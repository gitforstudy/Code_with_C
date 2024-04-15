//C program to left rotate an array
#include <stdio.h>
void left_arr_rotate(int n, int a[], int num);
int main(void)
{
	int n, num, a[10], i;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Number of times to rotate an array: ");
	scanf("%d", &num);
	printf("Enter array elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	left_arr_rotate(n, a, num);
	return 0;
}

void left_arr_rotate(int n, int a[], int num)
{
	int i, j, k, temp;
	for(i = 0; i < num; i++) {
		temp = a[0];
		for(k = 0; k < n - 1; k++) {
			a[k] = a[k + 1];
		}
		a[k] = temp;
	}
	printf("Array after left rotation: ");
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

}
