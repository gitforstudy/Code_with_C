#include <stdio.h>
int main(void)
{
	int num, num1, arm, sum = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	num1 = num;
	while(num != 0) {
		arm = num % 10;
		sum = sum + (arm * arm * arm);
		num = num / 10;
	}
	if(num1 == sum) {
		printf("%d is an armstrong number\n", num1);
	} else {
		printf("%d is not an armstrong number\n", num1);
	}
	return 0;
}
