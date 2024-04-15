#include <stdio.h>
int main(void)
{
	char arr[10] = {'a','b','c','d','e','f','g','h','i','j'};
	int n = 10;
	/*printf("Enter the number of characters: ");
	scanf("%d", &n);
	printf("Enter the characters to an array: ");
	for(int i = 0; i < n; i++) {
		scanf("%c", &arr[i]);
	}*/
	printf("Original character array: ");
	for(int i = 0; i < n; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
	printf("Reversed char array: ");
	for(int i = n-1; i >= 0; i--) {
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}
