//C program to find the functional calculator
#include <stdio.h>
int main(void)
{
	int num1, num2, operation;
	float result;
	printf("Enter two positive integers: ");//asking the user to give inputs
	scanf("%d %d", &num1, &num2);//reading the inputs from the user
	printf("Enter the operation to perform:\n 1.Addition(+)\n 2.Subtraction(-)\n 3.Multiplication(*)\n 4.Division(/)\n");//asking the user which operation to be performed
	scanf("%d", &operation);//reading the operation from the user
	switch(operation) {
		case 1: result = num1 + num2;//case for addition
			printf("The result of %d + %d is: %f\n", num1, num2, result);
		       	break;
		case 2: result = num1 - num2;//case for subtraction
                        printf("The result of %d - %d is: %f\n", num1, num2, result);
                        break;
		case 3: result = num1 * num2;//case for multiplication
                        printf("The result of %d * %d is: %f\n", num1, num2, result);
                        break;
		case 4: result = num1 / num2;//case for dovision
                        printf("The result of %d / %d is: %f\n", num1, num2, result);
                        break;
		default:printf("Invalid Choice\n");//if none case satisfies dafault is executed
                        break;
	}
	return 0;
}
