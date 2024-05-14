#include <stdio.h>

int ispower(int num, int power)
{
	int result = 1;
	if(power == 0) {
		return result;
	}
	result = num * ispower(num, power-1);
}

int main(void)
{
	int num, power;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the power: ");
	scanf("%d", &power);
	printf("%d\n", ispower(num, power));
	return 0;
}
