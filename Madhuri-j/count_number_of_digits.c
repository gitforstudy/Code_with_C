#include <stdio.h>
int main(void)
{
	int num, rem, sum = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	while(num != 0) {
		rem = rem % 10;
		sum++;
		num = num / 10;
	}
	printf("The number of digits are: %d\n", sum);
	return 0;
}
