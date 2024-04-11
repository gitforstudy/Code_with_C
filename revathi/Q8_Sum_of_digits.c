/*WAP sum of digits of a given integer.*/

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num<=0)// Check if the number is negative
	{
		num=-num;
		printf("%d",num);
	}

    while (num != 0)// Calculate the sum of digits
    {
        digit = num % 10; // Take  the last digit
        sum += digit;     // Add the last digit to the sum
        num /= 10;        // Remove the last digit from the number
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

