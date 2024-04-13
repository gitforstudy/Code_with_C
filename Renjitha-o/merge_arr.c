// program to merge 2 array  in 3rd array

#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3},barr[] = {4,5,6,7};
	int size1 = sizeof(arr)/sizeof(arr[0]);
	int size2 = sizeof(barr)/sizeof(barr[0]);
	int size = size1 + size2;
	int carr[size];
	for(int i = 0; i < size1; i++) {
		carr[i] = arr[i];
	}
	int j = 0;
	for (int i = size1; i < size; i++) {
		carr[i] = barr[j];
		j++;
	}
	for (int i = 0; i < size; i++) {
		printf ("carr[%d] : %d\n",i,carr[i]);
	}
	return 0;
}
