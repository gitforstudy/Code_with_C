//C program to print second largest element in an array
#include <stdio.h>
void second_largest(int n, int a[]);
int main(void) {
	int n, a[10], i;
   	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter array elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
   	second_largest(n, a);
	return 0;
}

void second_largest(int n, int a[])
{
	int largest, second, j;

 	if(a[0] > a[1]) {
      		largest = a[0];
      		second  = a[1];
   	} else {
      		largest = a[1];
      		second  = a[0];
   	}

   	for(j = 2; j < n; j++) {
      		if( largest < a[j] ) {
         		second = largest;
         		largest = a[j];
      		} else if( second < a[j] ) {
         		second =  a[j];
      		}
   	}

   	printf("Second Largest Array element is: %d \n", second);
}
