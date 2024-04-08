#include <stdio.h>
int main(void)
{
	int num1, num2, operation;
	float result;
	printf("Enter two positive integers: ");
	scanf("%d %d", &num1, &num2);
	printf("Enter the operation to perform:\n 1.Addition(+)\n 2.Subtraction(-)\n 3.Multiplication(*)\n 4.Division(/)\n");
	scanf("%d", &operation);
	switch(operation) {
		case 1: result = num1 + num2;
			printf("The result of %d + %d is: %f\n", num1, num2, result);
		       	break;
		case 2: result = num1 - num2;
                        printf("The result of %d - %d is: %f\n", num1, num2, result);
                        break;
		case 3: result = num1 * num2;
                        printf("The result of %d * %d is: %f\n", num1, num2, result);
                        break;
		case 4: result = num1 / num2;
                        printf("The result of %d / %d is: %f\n", num1, num2, result);
                        break;
		default:printf("Invalid Choice\n");
                        break;
	}
	return 0;
}
