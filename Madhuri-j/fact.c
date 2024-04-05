#include <stdio.h>
int main(void)
{
	int fact = 1, i, num;
	printf("Enter the number: ");
	scanf("%d", &num);
	for(i = 1; i <= num ; i++) {
		fact = fact * i;
	}
	printf("The factorial of %d is %d\n", num, fact);
	return 0;
}
