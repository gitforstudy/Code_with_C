#include <stdio.h>

int checkpower(int num, int power)
{
	//int pow = 1;
	if(num == 0)
		return 0;
	while(num % power == 0)
		num = num / power;
	return num == 1;
}

int main(void)
{
	int num, power;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the power: ");
	scanf("%d", &power);
	//printf("%s", checkpower(num, power)? printf("Can be represented\n") : printf("Cant be represented\n"));
	if(checkpower(num, power)) {
		printf("%d is a power of %d\n", num, power);
	} else {
		printf("%d is not a power of %d\n", num, power);
	}
	return 0;
}
