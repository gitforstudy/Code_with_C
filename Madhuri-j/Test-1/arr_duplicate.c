//C program to remove duplicates in an array

#include <stdio.h>

/*void remove_duplicates(int a[], int n) {
        for(int i = 0; i < n; i++) {
                for(int j = i + 1; j < n - 1; j++) {
                        if(a[i] == a[j]){
                                for(int k = j; k < n - 1; k++) {
                                        a[k] = a[k + 1];
                                }
                                n--;
                                j--;
                        }
                }
        }
        printf("Array After del duplicates: ");
        for(int i = 0; i < n; i++) {
                printf("%d", a[i]);
        }
}*/

void remove_duplicates(int a[], int n)
{
	int i, j;
	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			if(a[i] == a[j]) {
				n = n-2;
				a[i] = a[j-1];
				a[j-1] = a[j+1];
			}
		}
	}
	printf("Array: ");
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]); 
	}
	printf("\n");
}

int main(void)
{
	int a[10], n, i;
	printf("Enter array size: ");
	scanf("%d", &n);
	printf("Enter array elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	remove_duplicates(a, n);
	return 0;
}
