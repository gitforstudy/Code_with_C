#include <stdio.h>
int main(void)
{
	int i, num, power, temp = 1;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the power number: ");
	scanf("%d", &power);
	for(i = 1; i <= power; i++) {
		temp = num * temp;
	}
	printf("The %d power of %d is: %d\n",num, power, temp);
	return 0;
}
