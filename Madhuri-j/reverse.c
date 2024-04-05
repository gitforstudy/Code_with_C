#include <stdio.h>
int main(void)
{
	int num, temp, rev = 0, rem;
	printf("Enter the number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0) {
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	printf("The reverse number of %d is %d\n", temp, rev);
	return 0;
}
