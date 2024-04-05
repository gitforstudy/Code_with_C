#include <stdio.h>
int main(void)
{
	int num, temp, sum = 0, rem;
	printf("Enter the number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0) {
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("The total sum of %d is %d\n", temp, sum);
	return 0;
}
