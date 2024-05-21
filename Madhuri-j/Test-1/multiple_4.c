//C program to return the multiple of 4
#include <stdio.h>

int main(void)
{
	unsigned int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	num = num << 2;
	printf("%d\n", num);
	return 0;
}
