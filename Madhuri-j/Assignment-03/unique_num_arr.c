#include <stdio.h>
void isunique(int a[], int size);
int main(void)
{
	int size;
	int a[10], i;
	printf("Enter size of array: ");
	scanf("%d", &size);
	printf("Enter array elements: ");
	for(i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
	isunique(a, size);
	printf("\n");
	return 0;
}

void isunique(int a[], int size) {
	for(int i = 0; i < size; i++) {
		int unique = 1;
		for(int j = 0; j < size; j++) {
			if(i != j && a[i] == a[j]) {
				unique = 0; break;
			}
		}
		if(unique) {
			printf("%d ", a[i]);
		}
	}
}
