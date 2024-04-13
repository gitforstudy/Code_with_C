// reverse character array

#include <stdio.h>

int main(void)
{
	char arr[10] = {'a','b','c','d','e','f','g','h','i','j'};
	char barr[10];
	int size = sizeof(arr)/sizeof(arr[0]);
	int j = 0;
	for (int i = size - 1; i >= 0; i--) {// from last element storing the elements into another element
		barr[j] = arr[i];
		j++;	
	}
	for (int i = 0; i < 10; i++) {
		printf("arr[%d] : %c\n",i,barr[i]);
	}
	return 0;
}
